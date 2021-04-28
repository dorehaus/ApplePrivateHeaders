/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AXVWindowSpace.h>
#import <libobjc.A.dylib/AXFUserSessionObserverDelegate.h>
#import <libobjc.A.dylib/AXFApplicationManagerDelegate.h>

@class AXFApplicationManager, NSString;

@interface AXVMutableWindowSpace : AXVWindowSpace <AXFUserSessionObserverDelegate, AXFApplicationManagerDelegate> {

	char _automaticallyRiseToVoiceOverLevelInLockScreen;
	char _automaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent;
	char _automaticallyRiseToSetupAssistantLevelDuringSetupAssistant;
	char __observingApplications;
	char __levelTemporarilyRaised;
	char __lockScreenActive;
	char __securityAgentActive;
	char __setupAssistantActive;
	AXFApplicationManager* __applicationManager;
	unsigned long long __levelBeforeAutoRaise;

}

@property (nonatomic,retain) AXFApplicationManager * _applicationManager;                                      //@synthesize _applicationManager=__applicationManager - In the implementation block
@property (assign,nonatomic) unsigned long long _levelBeforeAutoRaise;                                         //@synthesize _levelBeforeAutoRaise=__levelBeforeAutoRaise - In the implementation block
@property (assign,nonatomic) char _observingApplications;                                                      //@synthesize _observingApplications=__observingApplications - In the implementation block
@property (assign,nonatomic) char _levelTemporarilyRaised;                                                     //@synthesize _levelTemporarilyRaised=__levelTemporarilyRaised - In the implementation block
@property (assign,nonatomic) char _lockScreenActive;                                                           //@synthesize _lockScreenActive=__lockScreenActive - In the implementation block
@property (assign,nonatomic) char _securityAgentActive;                                                        //@synthesize _securityAgentActive=__securityAgentActive - In the implementation block
@property (assign,nonatomic) char _setupAssistantActive;                                                       //@synthesize _setupAssistantActive=__setupAssistantActive - In the implementation block
@property (assign,nonatomic) unsigned long long level; 
@property (assign,nonatomic) char automaticallyRiseToVoiceOverLevelInLockScreen;                               //@synthesize automaticallyRiseToVoiceOverLevelInLockScreen=_automaticallyRiseToVoiceOverLevelInLockScreen - In the implementation block
@property (assign,nonatomic) char automaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent;              //@synthesize automaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent=_automaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent - In the implementation block
@property (assign,nonatomic) char automaticallyRiseToSetupAssistantLevelDuringSetupAssistant;                  //@synthesize automaticallyRiseToSetupAssistantLevelDuringSetupAssistant=_automaticallyRiseToSetupAssistantLevelDuringSetupAssistant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)spaceWithUUID:(id)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(AXFApplicationManager *)_applicationManager;
-(void)applicationManager:(id)arg1 didUpdateRunningApplications:(id)arg2 ;
-(void)_startOrStopObservingApplicationsIfNeeded;
-(char)_shouldObserveApplications;
-(void)set_securityAgentActive:(char)arg1 ;
-(void)_temporarilyRaiseLevelIfNeeded;
-(void)set_setupAssistantActive:(char)arg1 ;
-(void)_restoreOriginalLevelIfNeeded;
-(void)set_lockScreenActive:(char)arg1 ;
-(char)_shouldStartObservingApplications;
-(void)set_observingApplications:(char)arg1 ;
-(char)_shouldStopObservingApplications;
-(char)_observingApplications;
-(char)automaticallyRiseToSetupAssistantLevelDuringSetupAssistant;
-(char)automaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent;
-(char)_shouldTemporarilyRaiseLevelToVoiceOverLevel;
-(void)_raiseLevelTo:(unsigned long long)arg1 ;
-(char)_shouldTemporarilyRaiseLevelToSetupAssistantLevel;
-(void)set_levelBeforeAutoRaise:(unsigned long long)arg1 ;
-(void)set_levelTemporarilyRaised:(char)arg1 ;
-(char)automaticallyRiseToVoiceOverLevelInLockScreen;
-(char)_lockScreenActive;
-(char)_securityAgentActive;
-(char)_levelTemporarilyRaised;
-(char)_setupAssistantActive;
-(char)_shouldRestoreOriginalLevel;
-(unsigned long long)_levelBeforeAutoRaise;
-(void)userSessionObserverFastUserSwitchBegan:(id)arg1 ;
-(void)userSessionObserverFastUserSwitchEnded:(id)arg1 ;
-(void)userSessionObserverScreenLocked:(id)arg1 ;
-(void)userSessionObserverScreenUnlocked:(id)arg1 ;
-(void)userSessionObserverSessionDidMoveOffConsole:(id)arg1 ;
-(void)setAutomaticallyRiseToVoiceOverLevelInLockScreen:(char)arg1 ;
-(void)setAutomaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent:(char)arg1 ;
-(void)setAutomaticallyRiseToSetupAssistantLevelDuringSetupAssistant:(char)arg1 ;
-(void)set_applicationManager:(AXFApplicationManager *)arg1 ;
@end

