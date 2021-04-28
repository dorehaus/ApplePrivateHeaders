#import <Automator/_AMActionAuxiliary.h>
#import <Automator/AMAction.h>
#import <Automator/AMFFeedEnclosure.h>
#import <Automator/AMRemoteActionHostViewController.h>
#import <Automator/AMAppleScriptAction.h>
#import <Automator/AMBundleAction.h>
#import <Automator/AMActionMetadataStore.h>
#import <Automator/AMConverter.h>
#import <Automator/AMConversion.h>
#import <Automator/AMApplicationRegistry.h>
#import <Automator/AMConvertAliasToString.h>
#import <Automator/AMConvertPublicItemToCocoaPath.h>
#import <Automator/AMConvertPublicItemToSpotlightItem.h>
#import <Automator/AMConvertAppleScriptObjectToAppleScriptDataObject.h>
#import <Automator/NSPrivateAutomatorFrameworkClassForFindingBundle.h>
#import <Automator/AMActionPanelController.h>
#import <Automator/AMActionPanelActionView.h>
#import <Automator/AMShowWhenRunPanel.h>
#import <Automator/AMPathPopUpButton.h>
#import <Automator/AMFFeedParser.h>
#import <Automator/AMFCompletionFeedParserDelegate.h>
#import <Automator/_AMiCalText.h>
#import <Automator/_AMiCalAttachment.h>
#import <Automator/_AMiCalParagraph.h>
#import <Automator/_AMiCalWord.h>
#import <Automator/_AMiCalCharacter.h>
#import <Automator/_AMiCalAttributeRun.h>
#import <Automator/_AMiCalItem.h>
#import <Automator/_AMiCalApplication.h>
#import <Automator/_AMiCalColor.h>
#import <Automator/_AMiCalDocument.h>
#import <Automator/_AMiCalWindow.h>
#import <Automator/_AMiCalCalendar.h>
#import <Automator/_AMiCalDisplayAlarm.h>
#import <Automator/_AMiCalMailAlarm.h>
#import <Automator/_AMiCalSoundAlarm.h>
#import <Automator/_AMiCalOpenFileAlarm.h>
#import <Automator/_AMiCalAttendee.h>
#import <Automator/_AMiCalTodo.h>
#import <Automator/_AMiCalEvent.h>
#import <Automator/AMConvertAliasToPath.h>
#import <Automator/AMConvertPathToAlias.h>
#import <Automator/AMConvertCocoaStringToAppleScriptAliasObject.h>
#import <Automator/AMConvertPathToAppleScriptTextObject.h>
#import <Automator/AMConvertAppleScriptTextObjectToAlias.h>
#import <Automator/AMGroupBox.h>
#import <Automator/AMWorkflowCompletionResults.h>
#import <Automator/AMActiveProc.h>
#import <Automator/AMSendProc.h>
#import <Automator/AMGetItemsAction.h>
#import <Automator/AMGetItemsTableView.h>
#import <Automator/AMGetItemsPanelController.h>
#import <Automator/AMFindItemsAction.h>
#import <Automator/AMRemoteRunnerController.h>
#import <Automator/AMWhoseListView.h>
#import <Automator/AMWhoseViewItem.h>
#import <Automator/_AMiPhoto5Item.h>
#import <Automator/_AMiPhoto5Application.h>
#import <Automator/_AMiPhoto5Color.h>
#import <Automator/_AMiPhoto5Document.h>
#import <Automator/_AMiPhoto5Window.h>
#import <Automator/_AMiPhoto5AttributeRun.h>
#import <Automator/_AMiPhoto5Character.h>
#import <Automator/_AMiPhoto5Paragraph.h>
#import <Automator/_AMiPhoto5Text.h>
#import <Automator/_AMiPhoto5Attachment.h>
#import <Automator/_AMiPhoto5Word.h>
#import <Automator/_AMiPhoto5Album.h>
#import <Automator/_AMiPhoto5Keyword.h>
#import <Automator/_AMiPhoto5Photo.h>
#import <Automator/_AMiPhoto5PrintSettings.h>
#import <Automator/AMFilterItemsAction.h>
#import <Automator/AMConvertAppleScriptURLToURL.h>
#import <Automator/AMConvertAppleScriptObjectToURL.h>
#import <Automator/AMConvertURLToAppleScriptURL.h>
#import <Automator/AMConvertURLToAppleScriptTextObject.h>
#import <Automator/AMConvertURLToPath.h>
#import <Automator/AMConvertURLToAlias.h>
#import <Automator/AMConvertAliasToURL.h>
#import <Automator/AMConvertStringToURL.h>
#import <Automator/AMConvertURLToString.h>
#import <Automator/AMConvertStringToAppleScriptTextObject.h>
#import <Automator/AMConvertAppleScriptObjectToString.h>
#import <Automator/AMConvertAppleScriptObjectToAppleScriptTextObject.h>
#import <Automator/AMConvertAppleScriptTextObjectToAppleScriptURLObject.h>
#import <Automator/AMConvertStringToPath.h>
#import <Automator/AMConvertPathToPublicItem.h>
#import <Automator/AMConvertStringToAttributedString.h>
#import <Automator/AMConvertAttributedStringToString.h>
#import <Automator/AMAutoConversionAction.h>
#import <Automator/AMConvertPathTypeToSubType.h>
#import <Automator/AMConvertAppleScriptObjectToSubtype.h>
#import <Automator/AMConvertAliasToSubType.h>
#import <Automator/_AMSystemEventsApplication.h>
#import <Automator/_AMSystemEventsDocument.h>
#import <Automator/_AMSystemEventsWindow.h>
#import <Automator/_AMSystemEventsUser.h>
#import <Automator/_AMSystemEventsAppearancePreferencesObject.h>
#import <Automator/_AMSystemEventsCDAndDVDPreferencesObject.h>
#import <Automator/_AMSystemEventsInsertionPreference.h>
#import <Automator/_AMSystemEventsDesktop.h>
#import <Automator/_AMSystemEventsDockPreferencesObject.h>
#import <Automator/_AMSystemEventsLoginItem.h>
#import <Automator/_AMSystemEventsConfiguration.h>
#import <Automator/_AMSystemEventsInterface.h>
#import <Automator/_AMSystemEventsLocation.h>
#import <Automator/_AMSystemEventsNetworkPreferencesObject.h>
#import <Automator/_AMSystemEventsService.h>
#import <Automator/_AMSystemEventsScreenSaver.h>
#import <Automator/_AMSystemEventsScreenSaverPreferencesObject.h>
#import <Automator/_AMSystemEventsSecurityPreferencesObject.h>
#import <Automator/_AMSystemEventsDiskItem.h>
#import <Automator/_AMSystemEventsAlias.h>
#import <Automator/_AMSystemEventsDisk.h>
#import <Automator/_AMSystemEventsDomain.h>
#import <Automator/_AMSystemEventsClassicDomainObject.h>
#import <Automator/_AMSystemEventsFile.h>
#import <Automator/_AMSystemEventsFilePackage.h>
#import <Automator/_AMSystemEventsFolder.h>
#import <Automator/_AMSystemEventsLocalDomainObject.h>
#import <Automator/_AMSystemEventsNetworkDomainObject.h>
#import <Automator/_AMSystemEventsSystemDomainObject.h>
#import <Automator/_AMSystemEventsUserDomainObject.h>
#import <Automator/_AMSystemEventsFolderAction.h>
#import <Automator/_AMSystemEventsScript.h>
#import <Automator/_AMSystemEventsAction.h>
#import <Automator/_AMSystemEventsAttribute.h>
#import <Automator/_AMSystemEventsUIElement.h>
#import <Automator/_AMSystemEventsBrowser.h>
#import <Automator/_AMSystemEventsBusyIndicator.h>
#import <Automator/_AMSystemEventsButton.h>
#import <Automator/_AMSystemEventsCheckbox.h>
#import <Automator/_AMSystemEventsColorWell.h>
#import <Automator/_AMSystemEventsColumn.h>
#import <Automator/_AMSystemEventsComboBox.h>
#import <Automator/_AMSystemEventsDrawer.h>
#import <Automator/_AMSystemEventsGroup.h>
#import <Automator/_AMSystemEventsGrowArea.h>
#import <Automator/_AMSystemEventsImage.h>
#import <Automator/_AMSystemEventsIncrementor.h>
#import <Automator/_AMSystemEventsList.h>
#import <Automator/_AMSystemEventsMenu.h>
#import <Automator/_AMSystemEventsMenuBar.h>
#import <Automator/_AMSystemEventsMenuBarItem.h>
#import <Automator/_AMSystemEventsMenuButton.h>
#import <Automator/_AMSystemEventsMenuItem.h>
#import <Automator/_AMSystemEventsOutline.h>
#import <Automator/_AMSystemEventsPopOver.h>
#import <Automator/_AMSystemEventsPopUpButton.h>
#import <Automator/_AMSystemEventsProcess.h>
#import <Automator/_AMSystemEventsApplicationProcess.h>
#import <Automator/_AMSystemEventsDeskAccessoryProcess.h>
#import <Automator/_AMSystemEventsProgressIndicator.h>
#import <Automator/_AMSystemEventsRadioButton.h>
#import <Automator/_AMSystemEventsRadioGroup.h>
#import <Automator/_AMSystemEventsRelevanceIndicator.h>
#import <Automator/_AMSystemEventsRow.h>
#import <Automator/_AMSystemEventsScrollArea.h>
#import <Automator/_AMSystemEventsScrollBar.h>
#import <Automator/_AMSystemEventsSheet.h>
#import <Automator/_AMSystemEventsSlider.h>
#import <Automator/_AMSystemEventsSplitter.h>
#import <Automator/_AMSystemEventsSplitterGroup.h>
#import <Automator/_AMSystemEventsStaticText.h>
#import <Automator/_AMSystemEventsTabGroup.h>
#import <Automator/_AMSystemEventsTable.h>
#import <Automator/_AMSystemEventsTextArea.h>
#import <Automator/_AMSystemEventsTextField.h>
#import <Automator/_AMSystemEventsToolbar.h>
#import <Automator/_AMSystemEventsValueIndicator.h>
#import <Automator/_AMSystemEventsPropertyListFile.h>
#import <Automator/_AMSystemEventsPropertyListItem.h>
#import <Automator/_AMSystemEventsAnnotation.h>
#import <Automator/_AMSystemEventsQuickTimeData.h>
#import <Automator/_AMSystemEventsAudioData.h>
#import <Automator/_AMSystemEventsMovieData.h>
#import <Automator/_AMSystemEventsQuickTimeFile.h>
#import <Automator/_AMSystemEventsAudioFile.h>
#import <Automator/_AMSystemEventsMovieFile.h>
#import <Automator/_AMSystemEventsTrack.h>
#import <Automator/_AMSystemEventsXMLAttribute.h>
#import <Automator/_AMSystemEventsXMLData.h>
#import <Automator/_AMSystemEventsXMLElement.h>
#import <Automator/_AMSystemEventsXMLFile.h>
#import <Automator/_AMSystemEventsPrintSettings.h>
#import <Automator/_AMSystemEventsScriptingClass.h>
#import <Automator/_AMSystemEventsScriptingCommand.h>
#import <Automator/_AMSystemEventsScriptingDefinitionObject.h>
#import <Automator/_AMSystemEventsScriptingElement.h>
#import <Automator/_AMSystemEventsScriptingEnumeration.h>
#import <Automator/_AMSystemEventsScriptingEnumerator.h>
#import <Automator/_AMSystemEventsScriptingParameter.h>
#import <Automator/_AMSystemEventsScriptingProperty.h>
#import <Automator/_AMSystemEventsScriptingResultObject.h>
#import <Automator/_AMSystemEventsScriptingSuite.h>
#import <Automator/AMShellScriptAction.h>
#import <Automator/AMActionLoader.h>
#import <Automator/AMWorkflow.h>
#import <Automator/_AMVariableActionTarget.h>
#import <Automator/AMTemplateChooserItem.h>
#import <Automator/AMServicesController.h>
#import <Automator/AMWorkflowController.h>
#import <Automator/AMWorkflowView.h>
#import <Automator/AMImageTextCell.h>
#import <Automator/AMDescriptionImageTextCell.h>
#import <Automator/AMGroup.h>
#import <Automator/AMActionsUserGroup.h>
#import <Automator/AMVariablesUserGroup.h>
#import <Automator/AMSmartGroup.h>
#import <Automator/AMActionConnector.h>
#import <Automator/AMConnectionPoint.h>
#import <Automator/_AMTextEditItem.h>
#import <Automator/_AMTextEditApplication.h>
#import <Automator/_AMTextEditColor.h>
#import <Automator/_AMTextEditDocument.h>
#import <Automator/_AMTextEditWindow.h>
#import <Automator/_AMTextEditAttributeRun.h>
#import <Automator/_AMTextEditCharacter.h>
#import <Automator/_AMTextEditParagraph.h>
#import <Automator/_AMTextEditText.h>
#import <Automator/_AMTextEditAttachment.h>
#import <Automator/_AMTextEditWord.h>
#import <Automator/_AMTextEditPrintSettings.h>
#import <Automator/AMTextFieldCell.h>
#import <Automator/AMWorkflowRunner.h>
#import <Automator/AMImageRegistry.h>
#import <Automator/AMTokenField.h>
#import <Automator/_AMVariablePopUpButtonTokenField.h>
#import <Automator/AMTokenFieldCell.h>
#import <Automator/AMTokenAttachmentCell.h>
#import <Automator/AMSmartTokenAttachmentCell.h>
#import <Automator/_AMiPhoto6Item.h>
#import <Automator/_AMiPhoto6Application.h>
#import <Automator/_AMiPhoto6Color.h>
#import <Automator/_AMiPhoto6Document.h>
#import <Automator/_AMiPhoto6Window.h>
#import <Automator/_AMiPhoto6AttributeRun.h>
#import <Automator/_AMiPhoto6Character.h>
#import <Automator/_AMiPhoto6Paragraph.h>
#import <Automator/_AMiPhoto6Text.h>
#import <Automator/_AMiPhoto6Attachment.h>
#import <Automator/_AMiPhoto6Word.h>
#import <Automator/_AMiPhoto6Album.h>
#import <Automator/_AMiPhoto6Keyword.h>
#import <Automator/_AMiPhoto6Photo.h>
#import <Automator/_AMiPhoto6PrintSettings.h>
#import <Automator/_AMMailApplication.h>
#import <Automator/_AMMailDocument.h>
#import <Automator/_AMMailWindow.h>
#import <Automator/_AMMailRichText.h>
#import <Automator/_AMMailAttachment.h>
#import <Automator/_AMMailParagraph.h>
#import <Automator/_AMMailWord.h>
#import <Automator/_AMMailCharacter.h>
#import <Automator/_AMMailAttributeRun.h>
#import <Automator/_AMMailOutgoingMessage.h>
#import <Automator/_AMMailLdapServer.h>
#import <Automator/_AMMailOLDMessageEditor.h>
#import <Automator/_AMMailMessageViewer.h>
#import <Automator/_AMMailSignature.h>
#import <Automator/_AMMailMessage.h>
#import <Automator/_AMMailAccount.h>
#import <Automator/_AMMailImapAccount.h>
#import <Automator/_AMMailMobileMeAccount.h>
#import <Automator/_AMMailPopAccount.h>
#import <Automator/_AMMailSmtpServer.h>
#import <Automator/_AMMailMailbox.h>
#import <Automator/_AMMailRule.h>
#import <Automator/_AMMailRuleCondition.h>
#import <Automator/_AMMailRecipient.h>
#import <Automator/_AMMailBccRecipient.h>
#import <Automator/_AMMailCcRecipient.h>
#import <Automator/_AMMailToRecipient.h>
#import <Automator/_AMMailContainer.h>
#import <Automator/_AMMailHeader.h>
#import <Automator/_AMMailMailAttachment.h>
#import <Automator/AMPopUpButton.h>
#import <Automator/AMPlaceholderViewController.h>
#import <Automator/AMVariablesRegistry.h>
#import <Automator/AMLocalRunnerController.h>
#import <Automator/AMVariablesEditorView.h>
#import <Automator/AMVariable.h>
#import <Automator/AMWorkspace.h>
#import <Automator/AMShowWhenRunController.h>
#import <Automator/AMInputOutputWorkflowPersonality.h>
#import <Automator/AMInputOutputWorkflowMetadata.h>
#import <Automator/AMVariablesEditorWindowController.h>
#import <Automator/AMSplitView.h>
#import <Automator/AMApplicationDefinition.h>
#import <Automator/_AMFinderApplication.h>
#import <Automator/_AMFinderItem.h>
#import <Automator/_AMFinderContainer.h>
#import <Automator/_AMFinderComputerObject.h>
#import <Automator/_AMFinderDisk.h>
#import <Automator/_AMFinderFolder.h>
#import <Automator/_AMFinderDesktopObject.h>
#import <Automator/_AMFinderTrashObject.h>
#import <Automator/_AMFinderFile.h>
#import <Automator/_AMFinderAliasFile.h>
#import <Automator/_AMFinderApplicationFile.h>
#import <Automator/_AMFinderDocumentFile.h>
#import <Automator/_AMFinderInternetLocationFile.h>
#import <Automator/_AMFinderClipping.h>
#import <Automator/_AMFinderPackage.h>
#import <Automator/_AMFinderWindow.h>
#import <Automator/_AMFinderFinderWindow.h>
#import <Automator/_AMFinderDesktopWindow.h>
#import <Automator/_AMFinderInformationWindow.h>
#import <Automator/_AMFinderPreferencesWindow.h>
#import <Automator/_AMFinderClippingWindow.h>
#import <Automator/_AMFinderProcess.h>
#import <Automator/_AMFinderApplicationProcess.h>
#import <Automator/_AMFinderDeskAccessoryProcess.h>
#import <Automator/_AMFinderPreferences.h>
#import <Automator/_AMFinderLabel.h>
#import <Automator/_AMFinderIconFamily.h>
#import <Automator/_AMFinderIconViewOptions.h>
#import <Automator/_AMFinderColumnViewOptions.h>
#import <Automator/_AMFinderListViewOptions.h>
#import <Automator/_AMFinderColumn.h>
#import <Automator/_AMFinderAliasList.h>
#import <Automator/AMImageView.h>
#import <Automator/AMActionView.h>
#import <Automator/AMView.h>
#import <Automator/AMNibView.h>
#import <Automator/AMActionTextField.h>
#import <Automator/AMVariablesEditorDateFormatDelegate.h>
#import <Automator/AMFFeedFinder.h>
#import <Automator/AMRemoteActionViewInfo.h>
#import <Automator/AMVariablesEditorEventDelegateWindow.h>
#import <Automator/AMVariablesEditorWindow.h>
#import <Automator/EditorWindowRelocateAnimation.h>
#import <Automator/EditorWindowOpenAnimation.h>
#import <Automator/EditorWindowCloseAnimation.h>
#import <Automator/AMVariablesEditorProxyController.h>
#import <Automator/AMSmartGroupsController.h>
#import <Automator/AMSmartGroupsPredicateViewController.h>
#import <Automator/AMFFeedEntry.h>
#import <Automator/AMApplicationStub.h>
#import <Automator/AMLevelIndicator.h>
#import <Automator/AMLevelIndicatorCell.h>
#import <Automator/_AMiTunes7PrintSettings.h>
#import <Automator/_AMiTunes7Application.h>
#import <Automator/_AMiTunes7Item.h>
#import <Automator/_AMiTunes7Artwork.h>
#import <Automator/_AMiTunes7Encoder.h>
#import <Automator/_AMiTunes7EQPreset.h>
#import <Automator/_AMiTunes7Playlist.h>
#import <Automator/_AMiTunes7AudioCDPlaylist.h>
#import <Automator/_AMiTunes7DevicePlaylist.h>
#import <Automator/_AMiTunes7LibraryPlaylist.h>
#import <Automator/_AMiTunes7RadioTunerPlaylist.h>
#import <Automator/_AMiTunes7Source.h>
#import <Automator/_AMiTunes7Track.h>
#import <Automator/_AMiTunes7AudioCDTrack.h>
#import <Automator/_AMiTunes7DeviceTrack.h>
#import <Automator/_AMiTunes7FileTrack.h>
#import <Automator/_AMiTunes7SharedTrack.h>
#import <Automator/_AMiTunes7URLTrack.h>
#import <Automator/_AMiTunes7UserPlaylist.h>
#import <Automator/_AMiTunes7FolderPlaylist.h>
#import <Automator/_AMiTunes7Visual.h>
#import <Automator/_AMiTunes7Window.h>
#import <Automator/_AMiTunes7BrowserWindow.h>
#import <Automator/_AMiTunes7EQWindow.h>
#import <Automator/_AMiTunes7PlaylistWindow.h>
#import <Automator/AMRemoteAction.h>
#import <Automator/AMApplicationStubController.h>
#import <Automator/AMNewFindItemsAction.h>
#import <Automator/AMRemoteActionDelegate.h>
#import <Automator/AMPlaceholderAction.h>
#import <Automator/AMGradientBackgroundView.h>
#import <Automator/AMLibrary.h>
#import <Automator/AMRemoteActionVariableDelegate.h>
#import <Automator/AMGlossyStatusView.h>
#import <Automator/AMSpecificDateRowTemplate.h>
#import <Automator/_AMSafariItem.h>
#import <Automator/_AMSafariApplication.h>
#import <Automator/_AMSafariColor.h>
#import <Automator/_AMSafariDocument.h>
#import <Automator/_AMSafariWindow.h>
#import <Automator/_AMSafariAttributeRun.h>
#import <Automator/_AMSafariCharacter.h>
#import <Automator/_AMSafariParagraph.h>
#import <Automator/_AMSafariText.h>
#import <Automator/_AMSafariAttachment.h>
#import <Automator/_AMSafariWord.h>
#import <Automator/_AMSafariTab.h>
#import <Automator/_AMSafariPrintSettings.h>
#import <Automator/AMWithinLastDateRowTemplate.h>
#import <Automator/AMFFeed.h>
#import <Automator/AMRelativeDateRowTemplate.h>
#import <Automator/AMMediaPanel.h>
#import <Automator/AMResultsViewController.h>
#import <Automator/AMResultsTableView.h>
#import <Automator/AMGenericAction.h>
#import <Automator/AMFFeedPerson.h>
#import <Automator/AMPluginInstallerController.h>
#import <Automator/AMWorkflowPersonalityInstallerController.h>
#import <Automator/AMActionInstallerController.h>
#import <Automator/AMActionRelevanceRowTemplate.h>
#import <Automator/AMActionDateAddedRelativeRowTemplate.h>
#import <Automator/AMActionDateAddedSpecificRowTemplate.h>
#import <Automator/AMActionDateAddedWithinLastRowTemplate.h>
#import <Automator/AMActionSecAssess.h>
#import <Automator/AutomatorSecurityHelperHostViewController.h>
#import <Automator/AMSecurityHelperWindowController.h>
#import <Automator/AMSecurityHelperWindowControllerRecoveryAttempter.h>
#import <Automator/_AMAddressBookApplication.h>
#import <Automator/_AMAddressBookDocument.h>
#import <Automator/_AMAddressBookWindow.h>
#import <Automator/_AMAddressBookAddress.h>
#import <Automator/_AMAddressBookContactInfo.h>
#import <Automator/_AMAddressBookAIMHandle.h>
#import <Automator/_AMAddressBookCustomDate.h>
#import <Automator/_AMAddressBookEmail.h>
#import <Automator/_AMAddressBookEntry.h>
#import <Automator/_AMAddressBookGroup.h>
#import <Automator/_AMAddressBookICQHandle.h>
#import <Automator/_AMAddressBookJabberHandle.h>
#import <Automator/_AMAddressBookMSNHandle.h>
#import <Automator/_AMAddressBookPerson.h>
#import <Automator/_AMAddressBookPhone.h>
#import <Automator/_AMAddressBookRelatedName.h>
#import <Automator/_AMAddressBookUrl.h>
#import <Automator/_AMAddressBookYahooHandle.h>
#import <Automator/AMActionCompletionResults.h>
#import <Automator/AMActionViewController.h>
#import <Automator/AMActionShowWhenRunOverlayView.h>
#import <Automator/AMActionAnyOfCollectionRowTemplate.h>
#import <Automator/AMResultsViewOverlayView.h>
#import <Automator/AMServicePluginHeaderViewController.h>
#import <Automator/_AMVariablePopUpButton.h>
#import <Automator/_AMVariablePopUpButtonCell.h>
#import <Automator/_AMGetSetVariablePopUpButton.h>
#import <Automator/AMRemoteActionViewController.h>
#import <Automator/AMProxyAction.h>
#import <Automator/AMAppDefinitionProxyAction.h>
#import <Automator/AMDictationCommandWorkflowPersonality.h>
#import <Automator/AMDictationCommandWorkflowMetaData.h>
#import <Automator/AMFFeedMetadata.h>
#import <Automator/AMRunActionOperation.h>
#import <Automator/AMRunActionAsyncOperation.h>
#import <Automator/_AMAddressBookItemsRowTemplateFactory.h>
#import <Automator/_AMAddressBookUtilities.h>
#import <Automator/_AMDateRelativeToCalendarUnitsRowTemplate.h>
#import <Automator/AMFFeedController.h>
#import <Automator/_AMDaysRelativeToCalendarUnitsRowTemplate.h>
#import <Automator/_AMDaysRelativeToSpecificDateRowTemplate.h>
#import <Automator/_AMFileSizeRowTemplate.h>
#import <Automator/_AMiTunesItemsRowTemplateFactory.h>
#import <Automator/_AMMailItemsRowTemplateFactory.h>
#import <Automator/AMActivatingWindowHandler.h>
#import <Automator/_AMPredicateEditorAction.h>
#import <Automator/_AMRatingRowTemplate.h>
#import <Automator/_AMRowTemplateFactory.h>
#import <Automator/_AMSpecificDateRangeRowTemplate.h>
#import <Automator/AMModernApplicationStubApplication.h>
#import <Automator/AMModernApplicationStubDelegate.h>
#import <Automator/_AMSpecificYearRowTemplate.h>
#import <Automator/_AMTimeIntervalRowTemplate.h>
#import <Automator/AMLibraryViewController.h>
#import <Automator/AMLibraryOutlineView.h>
#import <Automator/AMLibraryTableView.h>
#import <Automator/_AMiPhotoItemsRowTemplateFactory.h>
#import <Automator/_AMSuffixLabeledRowTemplate.h>
#import <Automator/_AMPrefixLabeledRowTemplate.h>
#import <Automator/_AMPredicateUtilities.h>
#import <Automator/_AMiCalItemsRowTemplateFactory.h>
#import <Automator/AMFFeedElement.h>
#import <Automator/_AMFinderItemsRowTemplateFactory.h>
#import <Automator/_AMFileLabelRowTemplate.h>
#import <Automator/AMRemoteActionController.h>
#import <Automator/AMRemoteActionStorage.h>
#import <Automator/AMDelayedUpdaterInfo.h>
#import <Automator/AMDelayedUpdateManager.h>
#import <Automator/AMResultsItem.h>
#import <Automator/AMFFeedContent.h>
#import <Automator/AMScriptingBridgeAppRegistry.h>
#import <Automator/AMDescriptionViewItem.h>
#import <Automator/AMDescriptionLineItemView.h>
#import <Automator/AMDescriptionViewController.h>
#import <Automator/_AMMessageTracerUtilities.h>
#import <Automator/_AMiDVDItem.h>
#import <Automator/_AMiDVDApplication.h>
#import <Automator/_AMiDVDColor.h>
#import <Automator/_AMiDVDDocument.h>
#import <Automator/_AMiDVDWindow.h>
#import <Automator/_AMiDVDAttributeRun.h>
#import <Automator/_AMiDVDCharacter.h>
#import <Automator/_AMiDVDParagraph.h>
#import <Automator/_AMiDVDText.h>
#import <Automator/_AMiDVDAttachment.h>
#import <Automator/_AMiDVDWord.h>
#import <Automator/_AMiDVDApplicationTheme.h>
#import <Automator/_AMiDVDButton.h>
#import <Automator/_AMiDVDDropzone.h>
#import <Automator/_AMiDVDImage.h>
#import <Automator/_AMiDVDMenu.h>
#import <Automator/_AMiDVDMovie.h>
#import <Automator/_AMiDVDProject.h>
#import <Automator/_AMiDVDSlideshow.h>
#import <Automator/_AMiDVDTextObject.h>
#import <Automator/_AMiDVDPrintSettings.h>
#import <Automator/AMWorkflowHeaderView.h>
#import <Automator/AMHeaderViewController.h>
#import <Automator/AMWorkflowPersonality.h>
#import <Automator/AMWorkflowUnknownPersonality.h>
#import <Automator/AMGeneralWorkflowPersonality.h>
#import <Automator/AMApplicationWorkflowPersonality.h>
#import <Automator/AMWorkflowMetaData.h>
#import <Automator/AMRemoveQuarantineRecoveryAttempter.h>
#import <Automator/_AMPredicateEditor.h>
#import <Automator/AMApplicationPickerPopUpButton.h>
#import <Automator/_AMBoolRowTemplate.h>
#import <Automator/AMOpenAutomatorRecoveryAttempter.h>
#import <Automator/_AMSBApplicationDelegate.h>
#import <Automator/_AMSBRetainingApplicationDelegate.h>
#import <Automator/AMScriptingBridgeConversionAction.h>
#import <Automator/AMSBObjectToSBObjectConversionAction.h>
#import <Automator/AMAliasToSBObjectConversionAction.h>
#import <Automator/AMSBObjectToAliasConversionAction.h>
#import <Automator/AMType.h>
#import <Automator/AMTypeRegistry.h>
#import <Automator/AMTextDetector.h>
#import <Automator/_AMiCalPredicateEditorAction.h>
#import <Automator/AMICalPluginWorkflowPersonality.h>
#import <Automator/AMScriptMenuWorkflowPersonality.h>
#import <Automator/AMPrintWorkflowPersonality.h>
#import <Automator/AMImageCaptureWorkflowPersonality.h>
#import <Automator/AMRemoteRunnerXPCDelegate.h>
#import <Automator/_AMKeynote5Item.h>
#import <Automator/_AMKeynote5Application.h>
#import <Automator/_AMKeynote5Color.h>
#import <Automator/_AMKeynote5Slideshow.h>
#import <Automator/_AMKeynote5Window.h>
#import <Automator/_AMKeynote5AttributeRun.h>
#import <Automator/_AMKeynote5Character.h>
#import <Automator/_AMKeynote5Paragraph.h>
#import <Automator/_AMKeynote5Text.h>
#import <Automator/_AMKeynote5Attachment.h>
#import <Automator/_AMKeynote5Word.h>
#import <Automator/_AMKeynote5AppTheme.h>
#import <Automator/_AMKeynote5AppTransition.h>
#import <Automator/_AMKeynote5DocTheme.h>
#import <Automator/_AMKeynote5MasterSlide.h>
#import <Automator/_AMKeynote5Slide.h>
#import <Automator/_AMKeynote5SlideTransition.h>
#import <Automator/_AMKeynote5PrintSettings.h>
#import <Automator/AMInputOuptutPluginHeaderViewController.h>
#import <Automator/AMServiceWorkflowPersonality.h>
#import <Automator/AMServiceWorkflowMetaData.h>
#import <Automator/AMPluginHeaderViewController.h>
#import <Automator/AMSimpleStringPluginHeaderViewController.h>
#import <Automator/AMFolderActionWorkflowPersonality.h>
#import <Automator/AMFolderActionWorkflowMetaData.h>
#import <Automator/AMGenericActionLoader.h>
#import <Automator/AMCache.h>
#import <Automator/AMCacheLocationEntry.h>
#import <Automator/AMValidatedCacheLocationEntry.h>
#import <Automator/AMDiskBasedCacheLocationEntry.h>
#import <Automator/AMActionRegistry.h>
#import <Automator/_AMiTunes8PrintSettings.h>
#import <Automator/_AMiTunes8Application.h>
#import <Automator/_AMiTunes8Item.h>
#import <Automator/_AMiTunes8Artwork.h>
#import <Automator/_AMiTunes8Encoder.h>
#import <Automator/_AMiTunes8EQPreset.h>
#import <Automator/_AMiTunes8Playlist.h>
#import <Automator/_AMiTunes8AudioCDPlaylist.h>
#import <Automator/_AMiTunes8DevicePlaylist.h>
#import <Automator/_AMiTunes8LibraryPlaylist.h>
#import <Automator/_AMiTunes8RadioTunerPlaylist.h>
#import <Automator/_AMiTunes8Source.h>
#import <Automator/_AMiTunes8Track.h>
#import <Automator/_AMiTunes8AudioCDTrack.h>
#import <Automator/_AMiTunes8DeviceTrack.h>
#import <Automator/_AMiTunes8FileTrack.h>
#import <Automator/_AMiTunes8SharedTrack.h>
#import <Automator/_AMiTunes8URLTrack.h>
#import <Automator/_AMiTunes8UserPlaylist.h>
#import <Automator/_AMiTunes8FolderPlaylist.h>
#import <Automator/_AMiTunes8Visual.h>
#import <Automator/_AMiTunes8Window.h>
#import <Automator/_AMiTunes8BrowserWindow.h>
#import <Automator/_AMiTunes8EQWindow.h>
#import <Automator/_AMiTunes8PlaylistWindow.h>
#import <Automator/AMXPCToken.h>
#import <Automator/AMUnknownXPCToken.h>
#import <Automator/AMActionInWorkflowXPCToken.h>
#import <Automator/AMActionPropertyListXPCToken.h>
#import <Automator/AMEventKitCalendarItemXPCToken.h>
#import <Automator/AMEventKitCalendarXPCToken.h>
#import <Automator/AMWebArchiveXPCToken.h>
#import <Automator/AMAppleScriptKitSoftLinking.h>
#import <Automator/AMDotMacSyncSoftLinking.h>
#import <Automator/AMEventKitSoftLinking.h>
#import <Automator/AMAddressBookSoftLinking.h>
#import <Automator/AMILMediaBrowserSoftLinking.h>
#import <Automator/AMWebKitSoftLinking.h>
#import <Automator/AMDictationServicesSoftLinking.h>
#import <Automator/AMFolderActionsKitSoftLinking.h>
#import <Automator/AMWorkflowServiceRunner.h>
#import <Automator/AMConvertEventKitObject.h>
#import <Automator/AMConvertiCalItemObjectToEventKitItem.h>
#import <Automator/AMConvertiCalEventObjectToEventKitEvent.h>
#import <Automator/AMConvertiCalToDoObjectToEventKitReminder.h>
#import <Automator/AMConvertiCalCalendarObjectToEventKitCalendar.h>
#import <Automator/AMConvertEventKitObjectToiCalObject.h>
#import <Automator/AMConvertEventKitItemToEventKitCalendar.h>
#import <Automator/AMConvertEventKitItemToEventKitEvent.h>
#import <Automator/AMConvertEventKitItemToiCalItemObject.h>
#import <Automator/AMConvertEventKitEventToiCalEventObject.h>
#import <Automator/AMConvertEventKitReminderToiCalToDoObject.h>
#import <Automator/AMConvertEventKitCalendarToiCalCalendarObject.h>
#import <Automator/AMConvertEventKitCalendarToEventKitEvent.h>
#import <Automator/AMConvertEventKitCalendarToEventKitReminder.h>
#import <Automator/AMVariablesViewController.h>
#import <Automator/AMVariablesTableView.h>
