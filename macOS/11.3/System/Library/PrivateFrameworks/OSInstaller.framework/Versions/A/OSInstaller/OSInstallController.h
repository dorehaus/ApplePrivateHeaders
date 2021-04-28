/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSInstaller/OSIPowerControllerDelegate.h>
#import <OSInstaller/OSIPowerButtonMonitorDelegate.h>
#import <libobjc.A.dylib/SKManagerListener.h>

@protocol OSInstallControllerDelegate, OS_dispatch_queue;
@class NSError, OSInstallLegacyOptions, NSObject, NSString, NSDate, NSTimer, NSNumber, SMPaths, IASUnifiedProgressClient, OSIPowerController, OSIPowerButtonMonitor, NSMutableArray, OSIPersonalizedManifests, OSIDebuggerTool, NSMutableSet, PKDistributionController;

@interface OSInstallController : NSObject <OSIPowerControllerDelegate, OSIPowerButtonMonitorDelegate, SKManagerListener> {

	char _isCurrentlyInstalling;
	char _hasEvaluatedInstallability;
	char _didReblessSuccessfully;
	char _installationCompletedSuccessfully;
	char _needAPFSConvert;
	char _showingStuckUI;
	char _shouldProcessTimeRemaining;
	char _shouldShowPowerButtonWarningText;
	char _targetEvaluationStarted;
	char _hasPickedATarget;
	int _numOfCPIOExtractionRetries;
	NSError* _installCheckFailureReason;
	OSInstallLegacyOptions* _options;
	NSObject*<OSInstallControllerDelegate> _delegate;
	NSString* _distPath;
	NSString* _currentStatus;
	double _progressCompleted;
	double _lastProgress;
	double _initialTimeRemaining;
	double _totalNonRunningTimeRemaining;
	NSDate* _lastUpdateDate;
	NSTimer* _progressUpdateCheckTimer;
	NSTimer* _stuckElementTimer;
	double _lastIncommingTime;
	NSNumber* _lastTimeRemaining;
	SMPaths* _pather;
	NSTimer* _powerButtonWarningTextTimer;
	IASUnifiedProgressClient* _progressClient;
	OSIPowerController* _powerManager;
	OSIPowerButtonMonitor* _powerButtonMonitor;
	NSMutableArray* _installOperations;
	NSMutableArray* _validTargets;
	NSMutableArray* _products;
	NSMutableArray* _osSUUpdates;
	NSMutableArray* _invalidTargetsWithErrors;
	OSIPersonalizedManifests* _personalizedManifests;
	OSIDebuggerTool* _osiDebuggerTool;
	NSMutableArray* _distControllers;
	NSMutableArray* _distContainers;
	NSMutableArray* _productTypesToInstallInOrder;
	NSMutableSet* _disabledDistributionControllers;
	NSMutableArray* _thirdPartyProductsToInstall;
	PKDistributionController* _firmwareDistributionController;
	NSMutableArray* _customizationOptions;
	NSObject*<OS_dispatch_queue> _targetEvaluationQueue;

}

@property (retain) NSString * distPath;                                                    //@synthesize distPath=_distPath - In the implementation block
@property (assign) char needAPFSConvert;                                                   //@synthesize needAPFSConvert=_needAPFSConvert - In the implementation block
@property (assign) char isCurrentlyInstalling;                                             //@synthesize isCurrentlyInstalling=_isCurrentlyInstalling - In the implementation block
@property (assign) char hasEvaluatedInstallability;                                        //@synthesize hasEvaluatedInstallability=_hasEvaluatedInstallability - In the implementation block
@property (retain) NSError * installCheckFailureReason;                                    //@synthesize installCheckFailureReason=_installCheckFailureReason - In the implementation block
@property (retain) NSString * currentStatus;                                               //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign) char showingStuckUI;                                                    //@synthesize showingStuckUI=_showingStuckUI - In the implementation block
@property (assign) double progressCompleted;                                               //@synthesize progressCompleted=_progressCompleted - In the implementation block
@property (assign) double lastProgress;                                                    //@synthesize lastProgress=_lastProgress - In the implementation block
@property (assign) char shouldProcessTimeRemaining;                                        //@synthesize shouldProcessTimeRemaining=_shouldProcessTimeRemaining - In the implementation block
@property (assign) double initialTimeRemaining;                                            //@synthesize initialTimeRemaining=_initialTimeRemaining - In the implementation block
@property (assign) double totalNonRunningTimeRemaining;                                    //@synthesize totalNonRunningTimeRemaining=_totalNonRunningTimeRemaining - In the implementation block
@property (retain) NSDate * lastUpdateDate;                                                //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (retain) NSTimer * progressUpdateCheckTimer;                                     //@synthesize progressUpdateCheckTimer=_progressUpdateCheckTimer - In the implementation block
@property (retain) NSTimer * stuckElementTimer;                                            //@synthesize stuckElementTimer=_stuckElementTimer - In the implementation block
@property (assign) double lastIncommingTime;                                               //@synthesize lastIncommingTime=_lastIncommingTime - In the implementation block
@property (retain) NSNumber * lastTimeRemaining;                                           //@synthesize lastTimeRemaining=_lastTimeRemaining - In the implementation block
@property (retain) SMPaths * pather;                                                       //@synthesize pather=_pather - In the implementation block
@property (assign) char shouldShowPowerButtonWarningText;                                  //@synthesize shouldShowPowerButtonWarningText=_shouldShowPowerButtonWarningText - In the implementation block
@property (retain) NSTimer * powerButtonWarningTextTimer;                                  //@synthesize powerButtonWarningTextTimer=_powerButtonWarningTextTimer - In the implementation block
@property (retain) IASUnifiedProgressClient * progressClient;                              //@synthesize progressClient=_progressClient - In the implementation block
@property (retain) OSIPowerController * powerManager;                                      //@synthesize powerManager=_powerManager - In the implementation block
@property (retain) OSIPowerButtonMonitor * powerButtonMonitor;                             //@synthesize powerButtonMonitor=_powerButtonMonitor - In the implementation block
@property (retain) OSInstallLegacyOptions * options;                                       //@synthesize options=_options - In the implementation block
@property (retain) NSMutableArray * installOperations;                                     //@synthesize installOperations=_installOperations - In the implementation block
@property (retain) NSMutableArray * validTargets;                                          //@synthesize validTargets=_validTargets - In the implementation block
@property (retain) NSMutableArray * products;                                              //@synthesize products=_products - In the implementation block
@property (retain) NSMutableArray * osSUUpdates;                                           //@synthesize osSUUpdates=_osSUUpdates - In the implementation block
@property (retain) NSMutableArray * invalidTargetsWithErrors;                              //@synthesize invalidTargetsWithErrors=_invalidTargetsWithErrors - In the implementation block
@property (retain) OSIPersonalizedManifests * personalizedManifests;                       //@synthesize personalizedManifests=_personalizedManifests - In the implementation block
@property (retain) OSIDebuggerTool * osiDebuggerTool;                                      //@synthesize osiDebuggerTool=_osiDebuggerTool - In the implementation block
@property (retain) NSMutableArray * distControllers;                                       //@synthesize distControllers=_distControllers - In the implementation block
@property (retain) NSMutableArray * distContainers;                                        //@synthesize distContainers=_distContainers - In the implementation block
@property (retain) NSMutableArray * productTypesToInstallInOrder;                          //@synthesize productTypesToInstallInOrder=_productTypesToInstallInOrder - In the implementation block
@property (retain) NSMutableSet * disabledDistributionControllers;                         //@synthesize disabledDistributionControllers=_disabledDistributionControllers - In the implementation block
@property (retain) NSMutableArray * thirdPartyProductsToInstall;                           //@synthesize thirdPartyProductsToInstall=_thirdPartyProductsToInstall - In the implementation block
@property (retain) PKDistributionController * firmwareDistributionController;              //@synthesize firmwareDistributionController=_firmwareDistributionController - In the implementation block
@property (assign) int numOfCPIOExtractionRetries;                                         //@synthesize numOfCPIOExtractionRetries=_numOfCPIOExtractionRetries - In the implementation block
@property (nonatomic,retain) NSMutableArray * customizationOptions;                        //@synthesize customizationOptions=_customizationOptions - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> targetEvaluationQueue;                     //@synthesize targetEvaluationQueue=_targetEvaluationQueue - In the implementation block
@property (assign) char targetEvaluationStarted;                                           //@synthesize targetEvaluationStarted=_targetEvaluationStarted - In the implementation block
@property (assign) char hasPickedATarget;                                                  //@synthesize hasPickedATarget=_hasPickedATarget - In the implementation block
@property (assign) char didReblessSuccessfully;                                            //@synthesize didReblessSuccessfully=_didReblessSuccessfully - In the implementation block
@property (assign) char installationCompletedSuccessfully;                                 //@synthesize installationCompletedSuccessfully=_installationCompletedSuccessfully - In the implementation block
@property (__weak) NSObject*<OSInstallControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char hasCustomizationOptions; 
@property (readonly) NSNumber * bytesRequiredToInstall; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getPriorOSBuildOnSystemTarget:(id)arg1 withRecoveredItems:(id)arg2 ;
+(id)failureReasonForError:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OSInstallControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<OSInstallControllerDelegate>)arg1 ;
-(id)target;
-(void)setOptions:(OSInstallLegacyOptions *)arg1 ;
-(OSInstallLegacyOptions *)options;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)currentStatus;
-(id)localizedProductName;
-(void)setCurrentStatus:(NSString *)arg1 ;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)setProgressClient:(IASUnifiedProgressClient *)arg1 ;
-(IASUnifiedProgressClient *)progressClient;
-(id)licenseAgreement;
-(void)initialPopulateComplete;
-(void)disksAppeared:(id)arg1 ;
-(void)disksChanged:(id)arg1 ;
-(void)disksDisappeared:(id)arg1 ;
-(id)visibleDiskRoles;
-(OSIPowerController *)powerManager;
-(void)setPowerManager:(OSIPowerController *)arg1 ;
-(NSMutableArray *)products;
-(double)lastProgress;
-(void)setLastProgress:(double)arg1 ;
-(void)_thermalStateDidChange:(id)arg1 ;
-(double)smoothTimeRemaining:(double)arg1 ;
-(SMPaths *)pather;
-(void)setPather:(SMPaths *)arg1 ;
-(char)startInstall;
-(OSIPersonalizedManifests *)personalizedManifests;
-(void)setPersonalizedManifests:(OSIPersonalizedManifests *)arg1 ;
-(id)initWithDistributionPath:(id)arg1 requireAutomation:(char)arg2 error:(id*)arg3 ;
-(void)setLastIncommingTime:(double)arg1 ;
-(void)setHasPickedATarget:(char)arg1 ;
-(void)setTargetEvaluationStarted:(char)arg1 ;
-(void)_logSystemInfo;
-(void)setPowerButtonMonitor:(OSIPowerButtonMonitor *)arg1 ;
-(void)setTargetEvaluationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)getPreviousShutdownCause;
-(void)reportMutableProductFailedWithError:(id)arg1 ;
-(void)setDistPath:(NSString *)arg1 ;
-(void)setDisabledDistributionControllers:(NSMutableSet *)arg1 ;
-(char)_loadInstallerDocuments:(id*)arg1 ;
-(void)setNeedAPFSConvert:(char)arg1 ;
-(void)setNumOfCPIOExtractionRetries:(int)arg1 ;
-(void)reportCPIOExtractionRetry:(id)arg1 ;
-(NSString *)distPath;
-(void)determineROSVAndEnableROSVPathsIfNecessary;
-(void)setProducts:(NSMutableArray *)arg1 ;
-(void)setDistControllers:(NSMutableArray *)arg1 ;
-(void)setDistContainers:(NSMutableArray *)arg1 ;
-(void)setThirdPartyProductsToInstall:(NSMutableArray *)arg1 ;
-(void)setProductTypesToInstallInOrder:(NSMutableArray *)arg1 ;
-(id)_createDistributionControllerFromProduct:(id)arg1 ;
-(NSMutableArray *)distControllers;
-(NSMutableArray *)distContainers;
-(NSMutableArray *)productTypesToInstallInOrder;
-(void)_setAppleInternalPermittedByDistribution:(id)arg1 ;
-(PKDistributionController *)firmwareDistributionController;
-(id)_createFirmwareDistributionControllerFromProduct:(id)arg1 ;
-(void)setFirmwareDistributionController:(PKDistributionController *)arg1 ;
-(NSMutableArray *)thirdPartyProductsToInstall;
-(void)setOsSUUpdates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)osSUUpdates;
-(void)_invalidateCustomization;
-(void)setCustomizationOptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)customizationOptions;
-(long long)_recursivelyUpdateStateForItem:(id)arg1 ;
-(NSMutableArray *)installOperations;
-(void)setOsiDebuggerTool:(OSIDebuggerTool *)arg1 ;
-(void)setInstallOperations:(NSMutableArray *)arg1 ;
-(void)installFinishedWithFatalError:(id)arg1 withFailedQueueElement:(id)arg2 ;
-(char)_isRecoverySupportedForTarget:(id)arg1 ;
-(NSNumber *)bytesRequiredToInstall;
-(char)_setupLegacyConversionInstallWithError:(id*)arg1 ;
-(char)_setupInstallWithError:(id*)arg1 ;
-(NSMutableSet *)disabledDistributionControllers;
-(char)_isOSInstallFromXML:(id)arg1 ;
-(void)setTotalNonRunningTimeRemaining:(double)arg1 ;
-(void)_queueProgressWatchdog:(id)arg1 ;
-(void)setProgressUpdateCheckTimer:(NSTimer *)arg1 ;
-(double)initialTimeRemaining;
-(void)setInitialTimeRemaining:(double)arg1 ;
-(void)setShouldProcessTimeRemaining:(char)arg1 ;
-(double)timeRemainingAfter:(id)arg1 ;
-(OSIDebuggerTool *)osiDebuggerTool;
-(double)progressCompleted;
-(void)setProgressCompleted:(double)arg1 ;
-(char)_flushDMLogToTarget;
-(void)setDidReblessSuccessfully:(char)arg1 ;
-(void)setInstallCheckFailureReason:(NSError *)arg1 ;
-(void)_setSUAppleUpgradeCookie;
-(void)setInstallationCompletedSuccessfully:(char)arg1 ;
-(void)stopProgressTimer;
-(void)_cleanupVirtualMemoryFolder;
-(char)needAPFSConvert;
-(char)installationCompletedSuccessfully;
-(char)isRestartRequiredByBootTimeInstallPackagesOnTarget:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetEvaluationQueue;
-(void)setValidTargets:(NSMutableArray *)arg1 ;
-(void)setInvalidTargetsWithErrors:(NSMutableArray *)arg1 ;
-(void)setHasEvaluatedInstallability:(char)arg1 ;
-(void)_evaluateDisks:(id)arg1 ;
-(char)targetEvaluationStarted;
-(void)_startTargetEvaulationQueue;
-(char)hasPickedATarget;
-(void)_removeDisksFromHandledTargets:(id)arg1 ;
-(NSMutableArray *)validTargets;
-(NSMutableArray *)invalidTargetsWithErrors;
-(id)_createDistributionControllerFromProduct:(id)arg1 interfaceType:(id)arg2 ;
-(int)numOfCPIOExtractionRetries;
-(NSTimer *)progressUpdateCheckTimer;
-(void)operation:(id)arg1 timeRemaining:(double)arg2 ;
-(char)shouldProcessTimeRemaining;
-(double)lastIncommingTime;
-(NSTimer *)stuckElementTimer;
-(void)_queueProgressStuck:(id)arg1 ;
-(void)setStuckElementTimer:(NSTimer *)arg1 ;
-(char)showingStuckUI;
-(void)setShowingStuckUI:(char)arg1 ;
-(NSNumber *)lastTimeRemaining;
-(void)setLastTimeRemaining:(NSNumber *)arg1 ;
-(char)shouldShowPowerButtonWarningText;
-(NSError *)installCheckFailureReason;
-(void)powerButtonPressed;
-(void)setShouldShowPowerButtonWarningText:(char)arg1 ;
-(NSTimer *)powerButtonWarningTextTimer;
-(void)setPowerButtonWarningTextTimer:(NSTimer *)arg1 ;
-(void)lowBatteryStatusChanged:(char)arg1 ;
-(id)initWithDistributionPath:(id)arg1 requireAutomation:(char)arg2 ;
-(char)hasCustomizationOptions;
-(void)updateCustomizationState;
-(char)prepareForReboot;
-(char)setDataTarget:(id)arg1 withSystemTarget:(id)arg2 error:(id*)arg3 ;
-(id)_baseSystemMountPathFromXML:(id)arg1 ;
-(id)_mountDiskImageWithPath:(id)arg1 ;
-(char)_isValidCompatibilityUpdatePackage:(id)arg1 ;
-(void)reportInstallFailed:(id)arg1 ;
-(char)isCurrentlyInstalling;
-(void)setIsCurrentlyInstalling:(char)arg1 ;
-(char)hasEvaluatedInstallability;
-(char)didReblessSuccessfully;
-(double)totalNonRunningTimeRemaining;
-(OSIPowerButtonMonitor *)powerButtonMonitor;
@end

