import bb.cascades 1.4
import bb.system 1.2
import "../components"
import "../pages"

NavigationPane {
    id: navigation
    
    backButtonsVisible: false
    peekEnabled: true
    
    function quit() {
        _app.cardDone("Card done!");
    }
    
    Page {
        id: root
        
        titleBar: CustomTitleBar {
            title: qsTr("Create task") + Retranslate.onLocaleOrLanguageChanged;
            
            cancelAction: ActionItem {
                title: qsTr("Cancel") + Retranslate.onLocaleOrLanguageChanged
                
                onTriggered: {
                    navigation.quit();
                }
            }
            
            submitAction: ActionItem {
                title: qsTr("OK") + Retranslate.onLocaleOrLanguageChanged
                
                onTriggered: {
                    var files = [];
                    for (var i = 0; i < attachmentsContainer.attachments.length; i++) {
                        files.push(attachmentsContainer.attachments[i]);
                    }
                    
                    var deadline = deadLineToggleButton.checked ? new Date(deadLineContainer.result).getTime() / 1000 : 0;
                    var important = importantToggleButton.checked ? 1 : 0;
                    var createInRemember = rememberToggleButton.checked ? 1 : 0;
                    
                    _tasksService.createTask(taskName.result.trim(), description.result.trim(), "TASK", deadline, important, createInRemember, files);
                    toast.show();
                }
            }
        }
        
        actionBarAutoHideBehavior: ActionBarAutoHideBehavior.HideOnScroll
        actionBarVisibility: ChromeVisibility.Overlay
        
        Container {
            horizontalAlignment: HorizontalAlignment.Fill
            verticalAlignment: VerticalAlignment.Fill
            
            layout: DockLayout {}
            
            ScrollView {
                scrollRole: ScrollRole.Main
                
                Container {
                    horizontalAlignment: HorizontalAlignment.Fill
                    
                    TaskNameContainer { 
                        id: taskName 
                    }
                    
                    TaskDescriptionContainer { 
                        id: description 
                    }
                    
                    AttachmentsContainer {
                        id: attachmentsContainer
                    }
                    
                    Container {
                        leftPadding: ui.du(2.5)
                        topPadding: ui.du(2.5)
                        rightPadding: ui.du(2.5)
                        horizontalAlignment: HorizontalAlignment.Fill
                        
                        layout: DockLayout {}
                        
                        Label {
                            horizontalAlignment: HorizontalAlignment.Left
                            text: qsTr("Create in: ") + Retranslate.onLocaleOrLanguageChanged
                        }
                        
                        Label {
                            horizontalAlignment: HorizontalAlignment.Right
                            text: {
                                if (!_tasksService.activeTask) {
                                    return qsTr("Root") + Retranslate.onLocaleOrLanguageChanged
                                }
                                return _tasksService.activeTask.name;
                            }
                        }
                    }
                    
                    Container {
                        leftPadding: ui.du(2.5)
                        topPadding: ui.du(2.5)
                        rightPadding: ui.du(2.5)
                        horizontalAlignment: HorizontalAlignment.Fill
                        
                        Button {
                            horizontalAlignment: HorizontalAlignment.Fill
                            text: qsTr("Change placement") + Retranslate.onLocaleOrLanguageChanged
                            
                            onClicked: {
                                var tlp = tasksListPage.createObject(this);
                                navigation.push(tlp);
                                navigation.backButtonsVisible = true;
                            }
                        }
                    }
                    
                    ToggleBlock {
                        id: deadLineToggleButton
                        title: qsTr("Deadline") + Retranslate.onLocaleOrLanguageChanged
                    }
                    
                    TaskDeadlineContainer {
                        id: deadLineContainer
                        visible: deadLineToggleButton.checked
                        date: root.currDatePlus2Hourse();
                    }
                    
                    ToggleBlock {
                        id: rememberToggleButton
                        title: qsTr("Create in Remember") + Retranslate.onLocaleOrLanguageChanged
                    }
                    
                    ToggleBlock {
                        id: importantToggleButton
                        title: qsTr("Important") + Retranslate.onLocaleOrLanguageChanged
                    }
                    
                    Container {
                        horizontalAlignment: HorizontalAlignment.Fill
                        minHeight: ui.du(12)
                    }
                }
            }
            
            ActivityIndicator {
                id: loading
                running: false
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
                minWidth: ui.du(10)
            }
        }
        
        function setTitle(title) {
            taskName.value = title;
        }
        
        function currDatePlus2Hourse() {
            return new Date(new Date().getTime() + 7200000);
        }
        
        function loadTitle() {
            loading.running = true;
            var xhr = new XMLHttpRequest();
            xhr.open("GET", _data, true);
            xhr.onreadystatechange = function() { 
                if (xhr.readyState == 4) {
                    loading.running = false;
                    var title = (/<title>(.*?)<\/title>/m).exec(xhr.responseText)[1];
                    root.setTitle(title); 
                }
            }
            xhr.send();
        }
        
        function processAttachments() {
            taskName.requestFocus();
            
            var parts = _data.split("/");
            var name = parts[parts.length - 1];
            var file = {name: name, mime_type: _mimeType, path: _data};
//            if (_mimeType === "application/pdf") {
//                file.icon = "asset:///images/pdf_icon.png";
//            } else {
//                file.icon = _data;
//            }
            attachmentsContainer.attachments = [file];
        }
        
        onCreationCompleted: {
            if (!_mimeType || _mimeType.trim() === "") {
                description.value = _data;
                loadTitle();
            } else {
                processAttachments();
            }
        }
        
        attachedObjects: [
            ComponentDefinition {
                id: tasksListPage
                TasksListPage {
                    onTaskChosen: {
                        _tasksService.setActiveTask(chosenTask.id);
                        navigation.pop();
                        navigation.backButtonsVisible = false;
                    }
                }
            },
            
            SystemToast {
                id: toast
                body: qsTr("Task created!") + Retranslate.onLocaleOrLanguageChanged
                
                onFinished: {
                    navigation.quit();
                }
            }
        ]
    }
}
