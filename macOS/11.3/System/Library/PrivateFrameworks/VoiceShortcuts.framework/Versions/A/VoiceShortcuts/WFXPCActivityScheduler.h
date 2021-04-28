/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
@class NSString;

@interface WFXPCActivityScheduler : NSObject {

	NSString* _activityIdentifier;
	xpc_activity_eligibility_changed_handler_sRef _eligibilityChangedHandler;

}

@property (assign,nonatomic) xpc_activity_eligibility_changed_handler_sRef eligibilityChangedHandler;              //@synthesize eligibilityChangedHandler=_eligibilityChangedHandler - In the implementation block
@property (nonatomic,readonly) NSString * activityIdentifier;                                                      //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 checkInHandler:(/*^block*/id)arg2 runHandler:(/*^block*/id)arg3 ;
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 runHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(NSString *)activityIdentifier;
-(id)initWithActivityIdentifier:(id)arg1 ;
-(void)scheduleWithCheckInHandler:(/*^block*/id)arg1 runHandler:(/*^block*/id)arg2 ;
-(void)scheduleWithRunHandler:(/*^block*/id)arg1 ;
-(xpc_activity_eligibility_changed_handler_sRef)eligibilityChangedHandler;
-(void)setEligibilityChangedHandler:(xpc_activity_eligibility_changed_handler_sRef)arg1 ;
@end

