/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NAPromise, HMFActivity, HMBProcessingOptions, CKOperationGroup, NSDate, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper : HMFObject <HMFLogging> {

	NAPromise* _promise;
	char _finished;
	HMFActivity* _activity;
	HMBProcessingOptions* _options;
	CKOperationGroup* _operationGroup;
	double _retryIntervalSeconds;
	unsigned long long _retryCount;
	NSDate* _operationStartTime;

}

@property (nonatomic,readonly) HMFActivity * activity;                         //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) HMBProcessingOptions * options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
@property (assign,nonatomic) char shouldRetry; 
@property (assign,nonatomic) double retryIntervalSeconds;                      //@synthesize retryIntervalSeconds=_retryIntervalSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                    //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSDate * operationStartTime;                      //@synthesize operationStartTime=_operationStartTime - In the implementation block
@property (nonatomic,readonly) char finished;                                  //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxRetryCount;
+(id)logCategory;
+(unsigned long long)__integerForPreferenceKey:(id)arg1 defaultValue:(unsigned long long)arg2 ;
+(unsigned long long)maxOperationDurationSeconds;
-(void)dealloc;
-(HMBProcessingOptions *)options;
-(char)finished;
-(unsigned long long)retryCount;
-(HMFActivity *)activity;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)finishWithResult:(id)arg1 ;
-(CKOperationGroup *)operationGroup;
-(void)setShouldRetry:(char)arg1 ;
-(char)shouldRetry;
-(NSDate *)operationStartTime;
-(id)initWithActivity:(id)arg1 options:(id)arg2 container:(id)arg3 useAnonymousRequests:(char)arg4 promise:(id)arg5 ;
-(void)setRetryIntervalSeconds:(double)arg1 ;
-(double)retryIntervalSeconds;
-(void)setOperationStartTime:(NSDate *)arg1 ;
@end

