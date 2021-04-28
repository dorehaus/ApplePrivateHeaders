/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class IFSession;

@interface IFDInstallController : NSObject {

	char _userConsentedInstall;
	IFDInstallController_Private* _privateController;
	IFSession* _session;

}

@property (assign) IFDInstallController_Private* privateController;              //@synthesize privateController=_privateController - In the implementation block
@property (retain) IFSession * session;                                          //@synthesize session=_session - In the implementation block
@property (assign) char userConsentedInstall;                                    //@synthesize userConsentedInstall=_userConsentedInstall - In the implementation block
+(void)initialize;
+(id)timeRemainingStringWithEstimate:(double)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(int)installState;
-(void)setInstallState:(int)arg1 ;
-(void)cancel;
-(id)targetController;
-(IFSession *)session;
-(id)distribution;
-(void)setSession:(IFSession *)arg1 ;
-(AuthorizationOpaqueRefRef)authorizationRef;
-(void)_install;
-(char)_cancelRequested;
-(char)ejectMedia:(id)arg1 ;
-(char)userConsentedInstall;
-(void)setUserConsentedInstall:(char)arg1 ;
-(id)customization;
-(id)postinstallActions;
-(id)preinstallActions;
-(void)setPrivateController:(IFDInstallController_Private*)arg1 ;
-(IFDInstallController_Private*)privateController;
-(id)customizationControllerForTarget:(id)arg1 ignoringContents:(char)arg2 ;
-(id)customizationControllerForTarget:(id)arg1 ;
-(void)setCustomization:(id)arg1 ;
-(void)handleProgressMessage:(id)arg1 ;
-(void)handleStatusMessage:(id)arg1 ;
-(void)handlePhaseMessage:(id)arg1 ;
-(void)handlePackageStartedMessage:(id)arg1 ;
-(void)packageInstallDidSucceed:(id)arg1 ;
-(void)installJobDidStart:(id)arg1 ;
-(void)installJobDidSucceed:(id)arg1 ;
-(void)installDidSucceed:(id)arg1 ;
-(void)installDidFail:(id)arg1 ;
-(void)endJobsWillBegin:(id)arg1 ;
-(void)endJobsDidEnd:(id)arg1 ;
-(void)usePreinstallActions:(id)arg1 ;
-(void)messageDelegateInstallStarted;
-(void)messageDelegateInstallPhase:(id)arg1 ;
-(id)initWithDistribution:(id)arg1 ;
-(void)usePostinstallActions:(id)arg1 ;
-(char)startInstall;
-(void)skipCurrentPhase;
-(char)hasSuccessfullyAuthorized:(int)arg1 ;
-(char)hasSuccessfullyAuthorized:(int)arg1 withCompletion:(/*^block*/id)arg2 onNotifyThread:(id)arg3 ;
-(id)_addInstallOptionsForActions:(id)arg1 ;
-(void)installPackages:(id)arg1 withOptions:(id)arg2 ;
-(void)messageDelegateInstallStatus:(id)arg1 ;
-(id)_estimateTimeRemainingWithProgress:(double)arg1 ;
-(void)messageDelegateInstallProgress:(id)arg1 ;
-(void)messageDelegateInstallTimeRemaining:(id)arg1 ;
-(void)messageDelegatePackageStarted:(id)arg1 ;
-(void)messageDelegateJobStarted:(id)arg1 ;
-(void)_installNextPackage;
-(void)messageDelegateInstallFinished;
-(void)messageDelegateInstallError:(id)arg1 ;
-(void)installDidWarn:(id)arg1 shouldFail:(char*)arg2 ;
-(void)_registerForSleepNotifications;
-(void)_deregisterForSleepNotifications;
-(id)_buildInstallPlanReturningError:(id*)arg1 ;
-(void)_locateSoftwareWithLocator;
-(void)_finishUpCurrentMedia;
-(id)_buildPackageListAndRequestMedia:(id)arg1 ;
-(id)resolvePackageRequestingMedia:(id)arg1 ;
-(id)_createFinalPackageUsingLocalURL:(id)arg1 returningError:(id*)arg2 ;
-(void)_resolveAllComponentsForPackages:(id)arg1 setResultInPackage:(char)arg2 ;
-(char)hasCachedCustomizationControllerForTarget:(id)arg1 ;
-(double)_calculateTotalInstalledSize;
-(void)setForceNoAuthInstall:(char)arg1 ;
-(char)requestMedia:(id)arg1 ;
-(id)findMediaNamed:(id)arg1 ;
-(void)messageDelegateRequestMedia:(id)arg1 ;
-(char)ejectAllEjectableMedia;
-(void)_mediaAppeared:(id)arg1 ;
-(void)_diskEjected:(id)arg1 ;
-(void)messageDelegateRequestedMediaAccepted:(id)arg1 ;
-(void)messageDelegateRequestLocatorDecision:(id)arg1 ;
-(char)canPerformOSInstallOperations;
-(id)downloadProgressController;
@end
