/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>
#import <libobjc.A.dylib/NSOpenAndSavePanelRemoteViewExportedToServiceProtocol.h>

@protocol NSOpenSavePanelDelegate;
@class NSTextField, NSButton, NSArray, NSCFRunLoopSemaphore, NSURL, NSView, NSString;

@interface NSSavePanel : NSPanel <NSOpenAndSavePanelRemoteViewExportedToServiceProtocol> {

	NSTextField* _nameField;
	NSButton* _newFolderButton;
	NSButton* _okButton;
	NSButton* _cancelButton;
	unsigned _spFlags;
	NSArray* _allowedContentTypes;
	char _iCloudOpenPanel;
	char observingBridge;
	char attachSandboxExtensionsToFinalURLDone;
	char attachSandboxExtensionsToFinalURLsDone;
	char runningAsASheet;
	char hostWindow_runningAsASheet;
	char panelCompleted;
	char retained;
	char panelIsNowUseless;
	char nsAppObservers;
	char didPrepareToRun;
	char becameAppModalWindow;
	char runningAppModalExplicitly;
	NSCFRunLoopSemaphore* advanceToRunPhaseIfNeededSemaphore;
	/*^block*/id completionHandler;
	id<NSOpenSavePanelDelegate> openSaveDelegate;
	NSURL* finalURL;
	NSArray* finalURLs;
	NSArray* customActions;
	CGSize lastReportedAccessorySize;

}

@property (getter=isAccessoryViewDisclosed) char accessoryViewDisclosed; 
@property (setter=_setShouldShowOptionsButton:) char _shouldShowOptionsButton; 
@property (retain) NSCFRunLoopSemaphore * advanceToRunPhaseIfNeededSemaphore; 
@property (assign) CGSize lastReportedAccessorySize; 
@property (copy) id completionHandler; 
@property (__weak) id<NSOpenSavePanelDelegate> openSaveDelegate; 
@property (retain) NSURL * finalURL; 
@property (retain) NSArray * finalURLs; 
@property (assign) char _iCloudOpenPanel;                                                   //@synthesize iCloudOpenPanel=_iCloudOpenPanel - In the implementation block
@property (assign) char observingBridge; 
@property (assign) char attachSandboxExtensionsToFinalURLDone; 
@property (assign) char attachSandboxExtensionsToFinalURLsDone; 
@property (assign) char runningAsASheet; 
@property (assign) char hostWindow_runningAsASheet; 
@property (assign) char panelCompleted; 
@property (assign) char retained; 
@property (assign) char panelIsNowUseless; 
@property (assign) char nsAppObservers; 
@property (assign) char didPrepareToRun; 
@property (assign) char becameAppModalWindow; 
@property (assign) char runningAppModalExplicitly; 
@property (copy) NSArray * customActions; 
@property (copy,readonly) NSURL * URL; 
@property (copy) NSURL * directoryURL; 
@property (copy) NSArray * allowedContentTypes; 
@property (assign) char allowsOtherFileTypes; 
@property (retain) NSView * accessoryView; 
@property (__weak) id<NSOpenSavePanelDelegate> delegate; 
@property (getter=isExpanded,readonly) char expanded; 
@property (assign) char canCreateDirectories; 
@property (assign) char canSelectHiddenExtension; 
@property (getter=isExtensionHidden) char extensionHidden; 
@property (assign) char treatsFilePackagesAsDirectories; 
@property (copy) NSString * prompt; 
@property (copy) NSString * title; 
@property (copy) NSString * nameFieldLabel; 
@property (copy) NSString * nameFieldStringValue; 
@property (copy) NSString * message; 
@property (assign) char showsHiddenFiles; 
@property (assign) char showsTagField; 
@property (copy) NSArray * tagNames; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)savePanel;
+(void)_warmUp;
+(void)_setShouldCreateAppCentricOpenPanel:(char)arg1 ;
+(char)_isFauxFilePackageURL:(id)arg1 fauxFilePackageTypes:(id)arg2 enabledFileTypes:(id)arg3 ;
+(char)_isDirectoryURL:(id)arg1 treatFilePackagesAsDirectories:(char)arg2 fauxFilePackageTypes:(id)arg3 enabledFileTypes:(id)arg4 ;
+(id)_nameWithLooseRequiredExtensionCheck:(id)arg1 andPreferredFileExtension:(id)arg2 ;
+(id)_nameWithStrictRequiredExtensionCheck:(id)arg1 andPreferredFileExtension:(id)arg2 ;
+(char)_filenameHasNonEmptyAcceptableFileType:(id)arg1 allowedFileTypes:(id)arg2 allowsOtherFileTypes:(char)arg3 ;
+(char)_shouldCreateiCloudOpenPanel;
+(id)_crunchyRawUnbonedPanel;
+(char)_defaultSettingForUbiquitousBehaviors;
+(void)_translateAllowedFileTypes:(id*)arg1 toOrFromUTTypes:(id*)arg2 ;
+(char)_actuallyValidateURLs:(id)arg1 fromPanel:(id)arg2 onDelegate:(id)arg3 outError:(id*)arg4 ;
+(id)_containerURLsForRemoteProcessWithAuditToken:(SCD_Struct_NS85*)arg1 ;
+(SCD_Struct_NS85)_cachedAuditTokenForMovePanel;
+(void)_showExistingOpenPanel:(id)arg1 ;
+(id)_lastSavedRootDirectoryForSaveMode:(char)arg1 ;
+(void)_storeRootDirectoryURL:(id)arg1 forSaveMode:(char)arg2 ;
-(void)dealloc;
-(id)init;
-(id<NSOpenSavePanelDelegate>)delegate;
-(void)setDelegate:(id<NSOpenSavePanelDelegate>)arg1 ;
-(NSURL *)URL;
-(id)directory;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)message;
-(id)URLs;
-(void)validateVisibleColumns;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAllowedFileTypes:(id)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(void)setAccessoryViewDisclosed:(char)arg1 ;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)runModal;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)_tags;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(NSString *)title;
-(id)filename;
-(id)exportedInterface;
-(id)accessibilityAttributeNames;
-(NSArray *)tagNames;
-(NSURL *)directoryURL;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(id)accessibilityDescriptionAttribute;
-(char)accessibilityIsDescriptionAttributeSettable;
-(void)_setAlertWindow:(char)arg1 ;
-(id)_dontSaveButtonTitle;
-(NSView *)accessoryView;
-(id)accessibilityIdentifier;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)_reallyDoOrderWindow:(long long)arg1 relativeTo:(long long)arg2 findKey:(char)arg3 forCounter:(char)arg4 force:(char)arg5 isModal:(char)arg6 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancel:(id)arg1 ;
-(void)ok:(id)arg1 ;
-(NSString *)prompt;
-(void)setCanChooseFiles:(char)arg1 ;
-(void)setCanChooseDirectories:(char)arg1 ;
-(void)setCanCreateDirectories:(char)arg1 ;
-(id)_securityScopedURL;
-(id)panel;
-(void)setExtensionHidden:(char)arg1 ;
-(long long)runModalForDirectory:(id)arg1 file:(id)arg2 ;
-(void)setTreatsFilePackagesAsDirectories:(char)arg1 ;
-(void)setCanResolveUbiquitousConflicts:(char)arg1 ;
-(void)setDirectory:(id)arg1 ;
-(id)_securityScopedURLs;
-(void)_setEnabledFileTypes:(id)arg1 ;
-(char)canCreateDirectories;
-(void)_setShowNewDocumentButton:(char)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)runModalForTypes:(id)arg1 ;
-(id)filenames;
-(void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)setTagNames:(NSArray *)arg1 ;
-(char)isExtensionHidden;
-(char)resolvesAliases;
-(void)setResolvesAliases:(char)arg1 ;
-(char)canChooseDirectories;
-(char)canChooseFiles;
-(char)canResolveUbiquitousConflicts;
-(char)canDownloadUbiquitousContents;
-(void)setCanDownloadUbiquitousContents:(char)arg1 ;
-(char)_accessoryViewDisclosed;
-(void)_setAccessoryViewDisclosed:(char)arg1 ;
-(char)isAccessoryViewDisclosed;
-(char)_useAlertStyle;
-(char)_showNewDocumentButton;
-(char)_iCloudOpenPanel;
-(id)_overwritingAlertSuppressionURL;
-(id)_formatsPopupDictionary;
-(id)_saveFormatType;
-(double)_startRectForSheetHeightOffset;
-(char)isExpanded;
-(void)setSpi_customActions:(id)arg1 ;
-(void)setAllowsOtherFileTypes:(char)arg1 ;
-(void)setCanSelectHiddenExtension:(char)arg1 ;
-(void)setShowsHiddenFiles:(char)arg1 ;
-(void)setNameFieldLabel:(NSString *)arg1 ;
-(void)_setShowsTagField:(char)arg1 ;
-(char)_shouldShowOptionsButton;
-(char)_showsRevertOriginalDocumentButton;
-(char)_shouldRevertOriginalDocument;
-(NSString *)nameFieldStringValue;
-(void)setNameFieldStringValue:(NSString *)arg1 ;
-(id)allowedFileTypes;
-(char)allowsOtherFileTypes;
-(char)showsHiddenFiles;
-(char)_accessoryViewDisclosureIsSupported;
-(void)_setIsExpanded:(char)arg1 andStoreState:(char)arg2 ;
-(void)_setIsExpanded:(char)arg1 ;
-(char)treatsFilePackagesAsDirectories;
-(void)_configureForFilename:(id)arg1 ;
-(void)setHidesSharedSection:(char)arg1 ;
-(char)hidesSharedSection;
-(void)_removeExtraRetainIfNeeded;
-(long long)runModalForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 ;
-(void)beginSheetForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modalForWindow:(id)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void*)arg7 ;
-(void)_didPresentErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(void)_setTags:(id)arg1 ;
-(void)_setShouldRevertOriginalDocument:(char)arg1 ;
-(char)_showsTagField;
-(void)_setSaveFormatType:(id)arg1 ;
-(char)_shouldSetTagsForClient;
-(char)_fauxToolbarShouldDragWindow;
-(void)_orderRemoteWindow:(long long)arg1 sender:(id)arg2 ;
-(id)requiredFileType;
-(void)setRequiredFileType:(id)arg1 ;
-(NSArray *)allowedContentTypes;
-(void)setAllowedContentTypes:(NSArray *)arg1 ;
-(void)_hideWindowForTimeMachineMode:(char)arg1 ;
-(char)_accessoryViewDisclosedVBKVO;
-(void)_setAccessoryViewDisclosedVBKVO:(char)arg1 ;
-(void)_setShouldShowOptionsButton:(char)arg1 ;
-(char)canSelectHiddenExtension;
-(NSString *)nameFieldLabel;
-(void)beginSheetForDirectory:(id)arg1 file:(id)arg2 modalForWindow:(id)arg3 modalDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void*)arg6 ;
-(void)_setUseAlertStyle:(char)arg1 ;
-(void)_setOkButtonDisabled:(char)arg1 ;
-(char)_okButtonDisabled;
-(id)_alertMessage;
-(void)_setAlertMessage:(id)arg1 ;
-(id)_alertInformativeMessage;
-(void)_setAlertInformativeMessage:(id)arg1 ;
-(void)_setDontSaveButtonTitle:(id)arg1 ;
-(void)_setOverwritingAlertSuppressionURL:(id)arg1 ;
-(void)_setShowsRevertOriginalDocumentButton:(char)arg1 ;
-(void)setShowsTagField:(char)arg1 ;
-(char)showsTagField;
-(void)_setFormatsPopupDictionary:(id)arg1 ;
-(void)_setShowsFormats:(char)arg1 ;
-(char)_showsFormats;
-(NSArray *)customActions;
-(void)setCustomActions:(NSArray *)arg1 ;
-(void)_customActionChanged:(id)arg1 ;
-(NSURL *)finalURL;
-(id)bridge;
-(void)_setBool:(char)arg1 forKey:(id)arg2 ;
-(char)_boolForKey:(id)arg1 ;
-(double)_floatForKey:(id)arg1 ;
-(void)_setArray:(id)arg1 forKey:(id)arg2 ;
-(id)_arrayForKey:(id)arg1 ;
-(void)_setDict:(id)arg1 forKey:(id)arg2 ;
-(id)_dictForKey:(id)arg1 ;
-(void)_setSet:(id)arg1 forKey:(id)arg2 ;
-(id)_setForKey:(id)arg1 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 ;
-(id)_stringForKey:(id)arg1 ;
-(id)urlForKey:(id)arg1 ;
-(char)iCloudOpenPanel;
-(void)_documentWindowFrameForPanelRunningAsASheetInService:(/*^block*/id)arg1 ;
-(void)requestAppEnabledStateForItems:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)delegateRequestNewDocumentNameWithReply:(/*^block*/id)arg1 ;
-(void)delegateShouldCreateNewDocumentAtURL:(id)arg1 ;
-(void)delegateCustomActionInvoked:(id)arg1 forURLs:(id)arg2 ;
-(void)delegateValidateURLs:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(char)nsAppObservers;
-(void)setNsAppObservers:(char)arg1 ;
-(void)configureContentView:(id)arg1 ;
-(id)_createVBSemaphore;
-(void)setPanelIsNowUseless:(char)arg1 ;
-(void)_maintainObservers:(char)arg1 onBridge:(id)arg2 ;
-(void)_maintainAppObservers:(char)arg1 ;
-(void)_setDefaultBridgeValues;
-(unsigned long long)styleMaskForHostWindow;
-(id)_initBridgeAndStuff;
-(id)remoteView;
-(void)_invalidateRemoteView;
-(void)setFinalURL:(NSURL *)arg1 ;
-(void)setFinalURLs:(NSArray *)arg1 ;
-(char)observingBridge;
-(void)setObservingBridge:(char)arg1 ;
-(char)didPrepareToRun;
-(char)panelCompleted;
-(void)_attachSandboxExtension:(id)arg1 toURL:(id)arg2 ;
-(char)attachSandboxExtensionsToFinalURLsDone;
-(id)_URLsWithSecurityScoped:(char)arg1 ;
-(char)attachSandboxExtensionsToFinalURLDone;
-(NSArray *)finalURLs;
-(id)_URLWithSecurityScoped:(char)arg1 ;
-(char)_attachSandboxExtensions:(id)arg1 toURL:(id)arg2 orURLs:(id)arg3 ;
-(void)setAttachSandboxExtensionsToFinalURLDone:(char)arg1 ;
-(void)_sendAccessoryView:(id)arg1 ;
-(void)accessoryDidChangeConstraints:(CGSize)arg1 ;
-(CGSize)lastReportedAccessorySize;
-(void)setLastReportedAccessorySize:(CGSize)arg1 ;
-(id<NSOpenSavePanelDelegate>)openSaveDelegate;
-(void)setOpenSaveDelegate:(id<NSOpenSavePanelDelegate>)arg1 ;
-(void)refreshDelegateOptions;
-(void)_attachSandboxExtensionsAndStartAccessing;
-(void)completeWithReturnCode:(long long)arg1 url:(id)arg2 urls:(id)arg3 ;
-(void)induceEventLoopIterationSoon;
-(char)retained;
-(void)setRetained:(char)arg1 ;
-(void)didEndPanelWithReturnCode:(long long)arg1 ;
-(char)panelIsNowUseless;
-(char)becameAppModalWindow;
-(void)completeModal:(long long)arg1 ;
-(void)setDidPrepareToRun:(char)arg1 ;
-(void)setPanelCompleted:(char)arg1 ;
-(char)hostWindow_runningAsASheet;
-(void)completeSheet:(long long)arg1 ;
-(void)completeModeless:(long long)arg1 ;
-(void)setBecameAppModalWindow:(char)arg1 ;
-(void)_updateSidebarDividerPosition:(double)arg1 ;
-(char)commonPrep:(/*^block*/id)arg1 runningAsASheet:(char)arg2 hostWindow_runningAsASheet:(char)arg3 ;
-(char)beginServicePanel;
-(char)runningAppModalExplicitly;
-(void)setRunningAppModalExplicitly:(char)arg1 ;
-(void)observeMostRecentCompletion:(id)arg1 ;
-(void)observeAsynchronousDelegateMethodCallKeyPath:(id)arg1 paramDict:(id)arg2 ;
-(void)observeAsynchronousIBActionKeyPath:(id)arg1 paramDict:(id)arg2 ;
-(void)observeAsynchronousRemoteMethodCallKeyPath:(id)arg1 paramDict:(id)arg2 ;
-(void)_becameAppModalWindow;
-(NSCFRunLoopSemaphore *)advanceToRunPhaseIfNeededSemaphore;
-(void)setAdvanceToRunPhaseIfNeededSemaphore:(NSCFRunLoopSemaphore *)arg1 ;
-(void)setAttachSandboxExtensionsToFinalURLsDone:(char)arg1 ;
-(void)_resetPrivateState;
-(void)setRunningAsASheet:(char)arg1 ;
-(void)setHostWindow_runningAsASheet:(char)arg1 ;
-(char)runningAsASheet;
-(char)_startServiceFailedAlert;
-(void)MondoSetFilenameWithProperSelection:(id)arg1 ;
-(char)appCentric;
-(char)shouldRetainExportedObject;
-(id)serviceViewControllerInterface;
-(id)kvoKeys;
-(id)valueforUndefinedKey:(id)arg1 ;
-(void)viewWillInvalidate:(id)arg1 ;
-(void)viewDidInvalidate:(id)arg1 ;
-(void)accessoryWindowOfViewWillUpdateConstraintsIfNeeded:(id)arg1 ;
-(id)_supportedDelegateMethods;
-(void)_setSupportedDelegateMethods:(id)arg1 ;
-(void)_sendAccessoryViewLayoutInfoForView:(id)arg1 ;
-(void)viewDidAdvanceToRunPhase:(id)arg1 ;
-(void)set_iCloudOpenPanel:(char)arg1 ;
-(id)_serviceProxy;
-(void)_sendCustomActionsToOSP;
@end

