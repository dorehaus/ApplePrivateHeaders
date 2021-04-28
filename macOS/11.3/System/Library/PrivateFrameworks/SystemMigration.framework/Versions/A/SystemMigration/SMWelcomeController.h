/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SystemMigration-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/SMSystemScannerClient.h>

@protocol MBSecondPartyHost, OS_dispatch_queue;
@class NSMutableArray, NSArray, NSDictionary, NSMutableString, SMUPaneIdentifiersTransformer, OBTemplateView, NSButton, NSStackView, NSTextField, NSAlert, SMSourceSelectionController, SMCustomizeDataController, SMProgressController, SMDoneController, MigrationToAnotherMacController, SMUpdateController, SMRestartController, SMSummaryViewController, SMCreateIAUser, SMProgress_Client, NSObject, NSString;

@interface SMWelcomeController : NSViewController <SMSystemScannerClient> {

	char _isOriginatingAppMacBuddy;
	char _daemonCrashed;
	char _isUpdating;
	char _doneUpdating;
	char _wasCanceled;
	char _shouldShowHWWarranty;
	char _wasPerformedThroughANetworkingMode;
	char _shouldWarnForFDE;
	char _systemIsUnlocked;
	char _displayedUnlockTimedOutError;
	char _bypassWarningAboutACPower;
	char _licenceAgreementShown;
	unsigned long long _currentPaneID;
	unsigned long long _finalModeSelected;
	unsigned long long _originatingApp;
	unsigned long long _requestedClientScannerState;
	NSMutableArray* _errors;
	NSMutableArray* _warnings;
	NSArray* _incompatibleAppInfo;
	NSDictionary* _maCredentials;
	unsigned long long _paneID;
	NSMutableString* _paneStory;
	SMUPaneIdentifiersTransformer* _transformer;
	OBTemplateView* _templateView;
	id<MBSecondPartyHost> _host;
	NSButton* _finalOptionSelected;
	NSStackView* _contentStackView;
	NSTextField* _intentionLabel;
	NSButton* _migrateFromMacSourcesRadioButton;
	NSButton* _migrateFromWindowsRadioButton;
	NSButton* _migrateToAnotherMacOptionalRadioButton;
	NSAlert* _acPowerAlert;
	CFRunLoopSourceRef _powerRunLoopSource;
	SMSourceSelectionController* _sourceSelectionController;
	SMCustomizeDataController* _customizeDataController;
	SMProgressController* _progressController;
	SMDoneController* _doneController;
	MigrationToAnotherMacController* _sourceAwaitingSelectionController;
	SMUpdateController* _updateController;
	SMRestartController* _restartController;
	SMSummaryViewController* _summaryController;
	SMCreateIAUser* _iaUserCreationController;
	SMProgress_Client* _progressClient;
	NSObject*<OS_dispatch_queue> _migrationCrashReporterQueue;
	unsigned long long _cannotStartMigrationError;

}

@property (assign) unsigned long long paneID;                                                        //@synthesize paneID=_paneID - In the implementation block
@property (assign) unsigned long long currentPaneID;                                                 //@synthesize currentPaneID=_currentPaneID - In the implementation block
@property (retain) NSMutableString * paneStory;                                                      //@synthesize paneStory=_paneStory - In the implementation block
@property (retain) SMUPaneIdentifiersTransformer * transformer;                                      //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,retain) OBTemplateView * templateView;                                          //@synthesize templateView=_templateView - In the implementation block
@property (assign,nonatomic,__weak) id<MBSecondPartyHost> host;                                      //@synthesize host=_host - In the implementation block
@property (assign) unsigned long long originatingApp;                                                //@synthesize originatingApp=_originatingApp - In the implementation block
@property (assign) char isOriginatingAppMacBuddy;                                                    //@synthesize isOriginatingAppMacBuddy=_isOriginatingAppMacBuddy - In the implementation block
@property (assign) char shouldShowHWWarranty;                                                        //@synthesize shouldShowHWWarranty=_shouldShowHWWarranty - In the implementation block
@property (retain) NSButton * finalOptionSelected;                                                   //@synthesize finalOptionSelected=_finalOptionSelected - In the implementation block
@property (assign) unsigned long long finalModeSelected;                                             //@synthesize finalModeSelected=_finalModeSelected - In the implementation block
@property (assign) char systemIsUnlocked;                                                            //@synthesize systemIsUnlocked=_systemIsUnlocked - In the implementation block
@property (assign) char displayedUnlockTimedOutError;                                                //@synthesize displayedUnlockTimedOutError=_displayedUnlockTimedOutError - In the implementation block
@property (__weak) NSStackView * contentStackView;                                                   //@synthesize contentStackView=_contentStackView - In the implementation block
@property (__weak) NSTextField * intentionLabel;                                                     //@synthesize intentionLabel=_intentionLabel - In the implementation block
@property (__weak) NSButton * migrateFromMacSourcesRadioButton;                                      //@synthesize migrateFromMacSourcesRadioButton=_migrateFromMacSourcesRadioButton - In the implementation block
@property (__weak) NSButton * migrateFromWindowsRadioButton;                                         //@synthesize migrateFromWindowsRadioButton=_migrateFromWindowsRadioButton - In the implementation block
@property (__weak) NSButton * migrateToAnotherMacOptionalRadioButton;                                //@synthesize migrateToAnotherMacOptionalRadioButton=_migrateToAnotherMacOptionalRadioButton - In the implementation block
@property (retain) NSAlert * acPowerAlert;                                                           //@synthesize acPowerAlert=_acPowerAlert - In the implementation block
@property (assign) CFRunLoopSourceRef powerRunLoopSource;                                            //@synthesize powerRunLoopSource=_powerRunLoopSource - In the implementation block
@property (assign) char bypassWarningAboutACPower;                                                   //@synthesize bypassWarningAboutACPower=_bypassWarningAboutACPower - In the implementation block
@property (retain) SMSourceSelectionController * sourceSelectionController;                          //@synthesize sourceSelectionController=_sourceSelectionController - In the implementation block
@property (retain) SMCustomizeDataController * customizeDataController;                              //@synthesize customizeDataController=_customizeDataController - In the implementation block
@property (retain) SMProgressController * progressController;                                        //@synthesize progressController=_progressController - In the implementation block
@property (retain) SMDoneController * doneController;                                                //@synthesize doneController=_doneController - In the implementation block
@property (retain) MigrationToAnotherMacController * sourceAwaitingSelectionController;              //@synthesize sourceAwaitingSelectionController=_sourceAwaitingSelectionController - In the implementation block
@property (retain) SMUpdateController * updateController;                                            //@synthesize updateController=_updateController - In the implementation block
@property (retain) SMRestartController * restartController;                                          //@synthesize restartController=_restartController - In the implementation block
@property (retain) SMSummaryViewController * summaryController;                                      //@synthesize summaryController=_summaryController - In the implementation block
@property (retain) SMCreateIAUser * iaUserCreationController;                                        //@synthesize iaUserCreationController=_iaUserCreationController - In the implementation block
@property (retain) SMProgress_Client * progressClient;                                               //@synthesize progressClient=_progressClient - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> migrationCrashReporterQueue;                         //@synthesize migrationCrashReporterQueue=_migrationCrashReporterQueue - In the implementation block
@property (assign) char wasCanceled;                                                                 //@synthesize wasCanceled=_wasCanceled - In the implementation block
@property (assign) char licenceAgreementShown;                                                       //@synthesize licenceAgreementShown=_licenceAgreementShown - In the implementation block
@property (assign) unsigned long long cannotStartMigrationError;                                     //@synthesize cannotStartMigrationError=_cannotStartMigrationError - In the implementation block
@property (assign) unsigned long long requestedClientScannerState;                                   //@synthesize requestedClientScannerState=_requestedClientScannerState - In the implementation block
@property (assign) char daemonCrashed;                                                               //@synthesize daemonCrashed=_daemonCrashed - In the implementation block
@property (assign) char isUpdating;                                                                  //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign) char doneUpdating;                                                                //@synthesize doneUpdating=_doneUpdating - In the implementation block
@property (retain) NSMutableArray * errors;                                                          //@synthesize errors=_errors - In the implementation block
@property (retain) NSMutableArray * warnings;                                                        //@synthesize warnings=_warnings - In the implementation block
@property (retain) NSArray * incompatibleAppInfo;                                                    //@synthesize incompatibleAppInfo=_incompatibleAppInfo - In the implementation block
@property (assign) char wasPerformedThroughANetworkingMode;                                          //@synthesize wasPerformedThroughANetworkingMode=_wasPerformedThroughANetworkingMode - In the implementation block
@property (assign) char shouldWarnForFDE;                                                            //@synthesize shouldWarnForFDE=_shouldWarnForFDE - In the implementation block
@property (retain) NSDictionary * maCredentials;                                                     //@synthesize maCredentials=_maCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id<MBSecondPartyHost>)host;
-(void)setHost:(id<MBSecondPartyHost>)arg1 ;
-(void)awakeFromNib;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(NSMutableArray *)warnings;
-(char)isUpdating;
-(OBTemplateView *)templateView;
-(SMUpdateController *)updateController;
-(NSMutableArray *)errors;
-(void)daemonConnectionLost;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(SMUPaneIdentifiersTransformer *)transformer;
-(void)setWarnings:(NSMutableArray *)arg1 ;
-(NSStackView *)contentStackView;
-(void)setContentStackView:(NSStackView *)arg1 ;
-(void)setTemplateView:(OBTemplateView *)arg1 ;
-(void)setTransformer:(SMUPaneIdentifiersTransformer *)arg1 ;
-(void)setProgressClient:(SMProgress_Client *)arg1 ;
-(SMProgress_Client *)progressClient;
-(void)setUpdateController:(SMUpdateController *)arg1 ;
-(void)setIsUpdating:(char)arg1 ;
-(void)setPaneID:(unsigned long long)arg1 ;
-(unsigned long long)paneID;
-(void)setPaneStory:(NSMutableString *)arg1 ;
-(void)writeCookiesBeforeRestarting;
-(char)isOriginatingAppMacBuddy;
-(void)updateWindowIdentifierWithPaneID:(unsigned long long)arg1 ;
-(void)enableRightButton:(char)arg1 ;
-(NSMutableString *)paneStory;
-(void)finallyRestart;
-(id)verifyAndCreateIAUserWithPassword:(id)arg1 ;
-(void)setRequestedClientScannerState:(unsigned long long)arg1 ;
-(unsigned long long)requestedClientScannerState;
-(unsigned long long)finalModeSelected;
-(void)sideTripTo:(unsigned long long)arg1 ;
-(void)cancelMigration;
-(void)updateBodyText:(id)arg1 ;
-(void)setShouldWarnForFDE:(char)arg1 ;
-(void)setWasPerformedThroughANetworkingMode:(char)arg1 ;
-(char)isRestartRequired;
-(void)autoPressedRightButton;
-(void)autoPressedLeftButton;
-(NSDictionary *)maCredentials;
-(void)writeCookiesBeforeUpdating;
-(void)updateSystem;
-(char)doneUpdating;
-(unsigned long long)currentPaneID;
-(void)reportMigrationCrashed:(unsigned long long)arg1 ;
-(void)pressedRightButton;
-(void)pressedLeftButton;
-(unsigned long long)originatingApp;
-(void)proceedToNextPane;
-(char)daemonCrashed;
-(void)setShouldShowHWWarranty:(char)arg1 ;
-(void)setOriginatingApp:(unsigned long long)arg1 ;
-(void)setIsOriginatingAppMacBuddy:(char)arg1 ;
-(void)setMaCredentials:(NSDictionary *)arg1 ;
-(void)setMigrationCrashReporterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentPaneID:(unsigned long long)arg1 ;
-(void)setDoneUpdating:(char)arg1 ;
-(NSButton *)migrateFromMacSourcesRadioButton;
-(void)setFinalOptionSelected:(NSButton *)arg1 ;
-(void)setFinalModeSelected:(unsigned long long)arg1 ;
-(void)proceedToSourceSelectionPane;
-(void)setCannotStartMigrationError:(unsigned long long)arg1 ;
-(void)startAsAFreshMigration;
-(void)proceedToRestartPane;
-(void)proceedToProgressPane;
-(void)setIaUserCreationController:(SMCreateIAUser *)arg1 ;
-(void)setErrorIfMacCannotBeASource;
-(NSTextField *)intentionLabel;
-(NSButton *)finalOptionSelected;
-(id)descriptionOfRadioButton:(id)arg1 ;
-(NSButton *)migrateFromWindowsRadioButton;
-(NSButton *)migrateToAnotherMacOptionalRadioButton;
-(void)setupAllButtons;
-(MigrationToAnotherMacController *)sourceAwaitingSelectionController;
-(SMSourceSelectionController *)sourceSelectionController;
-(SMCustomizeDataController *)customizeDataController;
-(SMProgressController *)progressController;
-(SMSummaryViewController *)summaryController;
-(SMDoneController *)doneController;
-(SMRestartController *)restartController;
-(void)setupAlternateButton;
-(void)setupLeftButton;
-(void)setupRightButton;
-(void)pressedAlternateButton;
-(char)hasAdminUsers;
-(void)setSourceAwaitingSelectionController:(MigrationToAnotherMacController *)arg1 ;
-(void)resetStoryForPaneID:(unsigned long long)arg1 ;
-(void)setCustomizeDataController:(SMCustomizeDataController *)arg1 ;
-(void)setProgressController:(SMProgressController *)arg1 ;
-(void)proceedToSummaryPane;
-(unsigned long long)cannotStartMigrationError;
-(void)displayAlertOwingTo:(unsigned long long)arg1 ;
-(void)proceedFromWelcomePane;
-(void)updateCurrentPaneStoryWith:(id)arg1 ;
-(void)setSourceSelectionController:(SMSourceSelectionController *)arg1 ;
-(char)shouldShowHWWarranty;
-(char)licenceAgreementShown;
-(void)setDoneController:(SMDoneController *)arg1 ;
-(void)setRestartController:(SMRestartController *)arg1 ;
-(void)setIncompatibleAppInfo:(NSArray *)arg1 ;
-(NSArray *)incompatibleAppInfo;
-(char)wasCanceled;
-(char)bypassWarningAboutACPower;
-(void)setAcPowerAlert:(NSAlert *)arg1 ;
-(NSAlert *)acPowerAlert;
-(void)setBypassWarningAboutACPower:(char)arg1 ;
-(void)stopObservingPowerSource;
-(void)startObservingPowerSource;
-(void)setSummaryController:(SMSummaryViewController *)arg1 ;
-(CFRunLoopSourceRef)powerRunLoopSource;
-(void)setPowerRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setWasCanceled:(char)arg1 ;
-(char)copiedUsers;
-(NSObject*<OS_dispatch_queue>)migrationCrashReporterQueue;
-(void)setDaemonCrashed:(char)arg1 ;
-(void)setDisplayedUnlockTimedOutError:(char)arg1 ;
-(char)systemIsUnlocked;
-(char)displayedUnlockTimedOutError;
-(void)setSystemIsUnlocked:(char)arg1 ;
-(void)setLicenceAgreementShown:(char)arg1 ;
-(char)wasPerformedThroughANetworkingMode;
-(id)initWithHost:(id)arg1 forOriginatingApplication:(unsigned long long)arg2 withStartUpMode:(unsigned long long)arg3 shouldShowHWWarranty:(char)arg4 maCredentials:(id)arg5 ;
-(void)pressedSomeRadioButton:(id)arg1 ;
-(void)connectedToACPower;
-(char)isAnUpgradeMigration;
-(void)acknowledgeCompletion;
-(void)unlockSystemAndProceed;
-(void)lockSystem;
-(void)returnFromSideTrip:(unsigned long long)arg1 ;
-(void)consumeMigrationBuddyCookiePostMigration;
-(void)migrationPerformed;
-(void)skippingMigration;
-(void)macBuddyWillTransitionTo:(id)arg1 ;
-(char)shouldWarnForFDE;
-(void)setIntentionLabel:(NSTextField *)arg1 ;
-(void)setMigrateFromMacSourcesRadioButton:(NSButton *)arg1 ;
-(void)setMigrateFromWindowsRadioButton:(NSButton *)arg1 ;
-(void)setMigrateToAnotherMacOptionalRadioButton:(NSButton *)arg1 ;
-(SMCreateIAUser *)iaUserCreationController;
@end

