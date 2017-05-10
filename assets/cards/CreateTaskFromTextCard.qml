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
                id: createTaskAction
                enabled: true
                
                title: qsTr("OK") + Retranslate.onLocaleOrLanguageChanged
                
                onTriggered: {
                    if (!spinner.running) {
                        var files = [];
                        var deadline = deadLineToggleButton.checked ? new Date(deadLineContainer.result).getTime() / 1000 : 0;
                        var important = importantToggleButton.checked ? 1 : 0;
                        var createInRemember = rememberToggleButton.checked ? 1 : 0;
                        var createInCalendar = deadLineToggleButton.checked && calendarToggleButton.checked ? 1 : 0;
                        
                        var folderId = 1;
                        var accountId = 1;
                        if (createInCalendar === 1) {
                            folderId = calendarAccounts.selectedValue.folderId;
                            accountId = calendarAccounts.selectedValue.accountId;
                        }
                    
                        taskName.validate();
                        if (taskName.isValid()) {
                            spinner.start();
                            _tasksService.createTask(taskName.result.trim(), description.result.trim(), "TASK", deadline, important, createInRemember, files, createInCalendar, folderId, accountId);
                        }
                    }
                }
            }
        }
        
        actionBarAutoHideBehavior: ActionBarAutoHideBehavior.HideOnScroll
        actionBarVisibility: ChromeVisibility.Overlay
        
        Container {
            horizontalAlignment: HorizontalAlignment.Fill
            verticalAlignment: VerticalAlignment.Fill
            
            layout: DockLayout {
                
            }
            
            ScrollView {
                scrollRole: ScrollRole.Main
                
                Container {
                    horizontalAlignment: HorizontalAlignment.Fill
                    
                    TaskNameContainer { 
                        id: taskName 
                    }
                    
                    TaskDescriptionContainer { 
                        id: description 
                        value: _data 
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
                        id: calendarToggleButton
                        title: qsTr("Add to Calendar") + Retranslate.onLocaleOrLanguageChanged
                        visible: deadLineToggleButton.checked
                    }
                    
                    Container {
                        leftPadding: ui.du(2.5)
                        topPadding: ui.du(2.5)
                        rightPadding: ui.du(2.5)
                        visible: calendarToggleButton.checked
                        DropDown {
                            id: calendarAccounts
                            title: qsTr("Account") + Retranslate.onLocaleOrLanguageChanged
                        }
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
                        preferredHeight: ui.du(12)
                    }
                }
            }
            
            ActivityIndicator {
                id: spinner
                running: false
                horizontalAlignment: HorizontalAlignment.Center
                verticalAlignment: VerticalAlignment.Center
                minWidth: ui.du(10)
            }
        }
        
        function currDatePlus2Hourse() {
            return new Date(new Date().getTime() + 7200000);
        }
        
        onCreationCompleted: {
            _tasksService.taskCreated.connect(toast.show);
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
        
        actions: [
            ActionItem {
                id: okAction
                title: qsTr("OK") + Retranslate.onLocaleOrLanguageChanged
                ActionBar.placement: ActionBarPlacement.Signature
                imageSource: "asset:///images/ic_done.png"
                enabled: createTaskAction.enabled
                
                onTriggered: {
                    createTaskAction.triggered();
                }
            }
        ]
    }
    
    onCreationCompleted: {
        _calendar.initFolders(calendarAccounts);
    }
}
