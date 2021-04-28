/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString, NSDate;

@interface ADBackgroundTaskRequest : NSObject {

	char _performDeferralCheck;
	NSObject*<OS_xpc_object> _activity;
	NSString* _requestIdentifier;
	NSObject*<OS_xpc_object> _criteria;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (assign,nonatomic) char performDeferralCheck;                        //@synthesize performDeferralCheck=_performDeferralCheck - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long delay; 
@property (assign,nonatomic) char requiresNetworkConnectivity; 
@property (assign,nonatomic) char requireBuddyComplete; 
@property (assign,nonatomic) char requireClassCData; 
@property (assign,nonatomic) char allowBattery; 
@property (assign,nonatomic) char requireSleep; 
@property (assign,nonatomic) char isRepeating; 
@property (assign,nonatomic) long long backgroundTaskRetryCount; 
@property (assign,nonatomic) long long gracePeriod; 
@property (nonatomic,retain) NSString * priority; 
@property (assign,nonatomic) char isCPUIntensive; 
@property (nonatomic,readonly) char shouldDefer; 
-(id)description;
-(id)dictionaryRepresentation;
-(long long)delay;
-(void)setDelay:(long long)arg1 ;
-(char)shouldDefer;
-(NSDate *)startDate;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)priority;
-(NSObject*<OS_xpc_object>)activity;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithID:(id)arg1 ;
-(NSString *)requestIdentifier;
-(long long)gracePeriod;
-(char)allowBattery;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(char)isRepeating;
-(char)taskIsDeferred;
-(void)setPropertyAsInteger:(id)arg1 value:(long long)arg2 ;
-(void)setRequireClassCData:(char)arg1 ;
-(void)setRequireBuddyComplete:(char)arg1 ;
-(char)continueTask;
-(char)finishTask;
-(id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3 ;
-(id)copyBackgroundTaskAgentCriteria;
-(void)setRequiresNetworkConnectivity:(char)arg1 ;
-(void)endBackgroundDeferralCheck;
-(char)deferTask;
-(void)_backgroundDeferralCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)taskIsContinuing;
-(long long)backgroundTaskRetryCount;
-(char)requiresNetworkConnectivity;
-(char)requireSleep;
-(void)setPropertyAsDouble:(id)arg1 value:(double)arg2 ;
-(double)getPropertyAsDouble:(id)arg1 ;
-(void)setAllowBattery:(char)arg1 ;
-(void)setRequireSleep:(char)arg1 ;
-(void)setIsRepeating:(char)arg1 ;
-(void)setIsCPUIntensive:(char)arg1 ;
-(char)isCPUIntensive;
-(char)requireBuddyComplete;
-(char)requireClassCData;
-(void)setBackgroundTaskRetryCount:(long long)arg1 ;
-(void)setGracePeriod:(long long)arg1 ;
-(void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)taskCanContinueForTime:(id)arg1 ;
-(void)setPropertyAsString:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsString:(id)arg1 ;
-(long long)getPropertyAsInteger:(id)arg1 ;
-(void)setPropertyAsDate:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsDate:(id)arg1 ;
-(char)performDeferralCheck;
-(void)setPerformDeferralCheck:(char)arg1 ;
@end

