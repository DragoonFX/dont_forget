import bb.cascades 1.4
import "../components"

Page {
    id: root
    
    actionBarAutoHideBehavior: ActionBarAutoHideBehavior.HideOnScroll
    actionBarVisibility: ChromeVisibility.Overlay
    
    ScrollView {
        
        scrollRole: ScrollRole.Main
        horizontalAlignment: HorizontalAlignment.Fill
        verticalAlignment: VerticalAlignment.Fill
        
        Container {
            horizontalAlignment: HorizontalAlignment.Fill
            
            Container {
                horizontalAlignment: HorizontalAlignment.Fill
                Container {
                    horizontalAlignment: HorizontalAlignment.Fill
                    leftPadding: ui.du(2.5)
                    rightPadding: ui.du(2.5)
                    Label {
                        text: {
                            return _tasksService.activeTask !== null ? _tasksService.activeTask.name : ""
                        }
                        multiline: true
                        textStyle.base: SystemDefaults.TextStyles.BigText
                    }
                }
                
                Divider {}
                
                Container {
                    visible: _tasksService.activeTask !== null && _tasksService.activeTask.description.trim() !== ""
                    horizontalAlignment: HorizontalAlignment.Fill
                    topPadding: ui.du(2.5)
                    bottomPadding: ui.du(2.5)
                    leftPadding: ui.du(2.5)
                    rightPadding: ui.du(2.5)
                    Label {
                        multiline: true
                        text: {
                            return _tasksService.activeTask !== null ? _tasksService.activeTask.description : ""
                        }
                        textStyle.base: SystemDefaults.TextStyles.BodyText
                    }
                }
                
                Container {
                    horizontalAlignment: HorizontalAlignment.Fill
                    topPadding: ui.du(2.5)
                    bottomPadding: ui.du(2.5)
                    margin.leftOffset: ui.du(2.5)
                    margin.rightOffset: ui.du(2.5)
                    background: ui.palette.plain
                    visible: _tasksService.activeTask !== null && _tasksService.activeTask.deadline !== 0
                    
                    Container {
                        layout: StackLayout {
                            orientation: LayoutOrientation.LeftToRight
                        }
                        horizontalAlignment: HorizontalAlignment.Center
                        ImageView {
                            imageSource: "asset:///images/ic_history.png"
                            filterColor: Color.create("#FF3333")
                        }
                        
                        Label {
                            id: deadline
                            
                            verticalAlignment: VerticalAlignment.Center
                            text: {
                                return _tasksService.activeTask !== null ? _date.str(_tasksService.activeTask.deadline) : "";
                            }
                            textStyle.base: SystemDefaults.TextStyles.TitleText
                            textStyle.color: Color.create("#779933")
                        }
                    }
                }
                
                Container {
                    id: childrenContainer
                    visible: false
                    topMargin: ui.du(2.5)
                    horizontalAlignment: HorizontalAlignment.Fill
                    
                    Header {
                        title: qsTr("Child tasks") + Retranslate.onLocaleOrLanguageChanged
                    }
                    
                    Container {
                        id: children
                        
                        horizontalAlignment: HorizontalAlignment.Fill
                        topPadding: ui.du(2.5)
                        
                        attachedObjects: [
                            ComponentDefinition {
                                id: childTask
                                Container {
                                    id: rootChildTask
                                    
                                    property string name: ""
                                    
                                    horizontalAlignment: HorizontalAlignment.Fill
                                    layout: StackLayout {
                                        orientation: LayoutOrientation.LeftToRight
                                    }
                                    
                                    ImageView {
                                        imageSource: "asset:///images/grey_pellet.png"
                                    }
                                    
                                    Label {
                                        layoutProperties: StackLayoutProperties {
                                            spaceQuota: 1
                                        }
                                        text: rootChildTask.name
                                        multiline: true
                                        textFormat: TextFormat.Html
                                    }
                                }
                            }
                        ]    
                    }
                }            
            }
            
            Container {
                id: attachmentsContainer
                horizontalAlignment: HorizontalAlignment.Fill
                
                Header {
                    title: qsTr("Attachments") + Retranslate.onLocaleOrLanguageChanged
                }
                
                ListView {
                    id: attachmentsListView
                    
                    dataModel: ArrayDataModel {
                        id: attachmentsDataModel
                        
                        onItemAdded: {
                            adjustListViewHeight();
                        }
                    }
                    
                    layout: GridListLayout  {}
                    
                    listItemComponents: [
                        ListItemComponent {
                            CustomListItem {
                                Container {
                                    horizontalAlignment: HorizontalAlignment.Fill
                                    verticalAlignment: VerticalAlignment.Fill
                                    layout: DockLayout {}
                                    ImageView {
                                        verticalAlignment: VerticalAlignment.Center
                                        horizontalAlignment: HorizontalAlignment.Center
                                        imageSource: {
                                            if (ListItemData.mime_type.indexOf("image/") === -1) {
                                                var ext = _attachmentsService.getExtension(ListItemData.path);
                                                return "asset:///images/" + _attachmentsService.getIconBig(ext, ListItemData.mime_type);
                                            }
                                            return ListItemData.path;
                                        }
                                        scalingMethod: ScalingMethod.AspectFill
                                    }
                                    
                                    Container {
                                        visible: ListItemData.mime_type.indexOf("image/") === -1
                                        verticalAlignment: VerticalAlignment.Center
                                        horizontalAlignment: HorizontalAlignment.Center
                                        leftPadding: ui.du(1)
                                        rightPadding: ui.du(1)
                                        Label {
                                            text: ListItemData.name
                                            multiline: true
                                            textStyle {
                                                color: ui.palette.textOnPrimary
                                                base: SystemDefaults.TextStyles.SubtitleText
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    ]
                    
                    onTriggered: {
                        var item = attachmentsDataModel.data(indexPath);
                        _attachmentsService.showAttachment(item.path, item.mime_type);
                    }
                }
            }
            
            Container {
                horizontalAlignment: HorizontalAlignment.Fill
                minHeight: ui.du(20)
            }
        }
    }
        
    function adjustListViewHeight() {
        if (attachmentsDataModel.size() === 1) {
            attachmentsContainer.maxHeight = 500;
        } else {
            var rows = Math.floor(attachmentsDataModel.size() / 3);
            var maxHeight = (rows === 0 ? 1 : rows) * 1000;
            attachmentsContainer.maxHeight = maxHeight;
        }
    }
    
    function getTaskName(task) {
        var name = "<html>";
        var n = task.name
            .replace(/&/g, "&amp;")
            .replace(/</g, "&lt;")
            .replace(/>/g, "&gt;")
            .replace(/\"/g, "&quot;");
        if (task.closed) {
            name += "<span style=\"text-decoration: line-through;\">" + n +"</span>";
        } else {
            name += n;
        }
        
        if (task.important) {
            name += "<span style=\"color: #FF3333; font-size: 1em;\"> !</span>";
        }
        name += "</html>";
        return name;
    }
    
    function handleSettingsChanged() {
        if (_tasksService.activeTask.deadline !== 0) {
            deadline.text = _date.str(_tasksService.activeTask.deadline);
        }
    }
    
    function clear() {
        _appConfig.settingsChanged.disconnect(root.handleSettingsChanged);
    }
    
    onCreationCompleted: {
        var attachments = _attachmentsService.findByTaskId(_tasksService.activeTask.id);
        
        var siblings = _tasksService.findSiblings(_tasksService.activeTask.id);
        childrenContainer.visible = siblings.length !== 0;
        siblings.forEach(function(sibling) {
            var siblingContainer = childTask.createObject(this);
            siblingContainer.name = getTaskName(sibling);
            siblingContainer.opacity = sibling.closed ? 0.7 : 1.0;
            children.add(siblingContainer);
            attachments = attachments.concat(_attachmentsService.findByTaskId(sibling.id));
        });
        
        attachmentsDataModel.append(attachments);
        adjustListViewHeight();
        
        _appConfig.settingsChanged.connect(root.handleSettingsChanged);
    }
}
