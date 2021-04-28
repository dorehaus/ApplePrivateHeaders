/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RTXPCActivityCriteria : NSObject {

	char _requireNetworkConnectivity;
	char _requireInexpensiveNetworkConnectivity;
	char _allowBattery;
	char _powerNap;
	char _cpuIntensive;
	char _userRequestedBackgroundTask;
	char _postInstall;
	char _requiresBuddyComplete;
	double _interval;
	double _delay;
	double _gracePeriod;
	unsigned long long _priority;
	unsigned long long _networkTransferDirection;
	double _expectedDuration;
	NSMutableDictionary* _additionalCriteria;

}

@property (nonatomic,retain) NSMutableDictionary * additionalCriteria;                   //@synthesize additionalCriteria=_additionalCriteria - In the implementation block
@property (nonatomic,readonly) double interval;                                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double gracePeriod;                                       //@synthesize gracePeriod=_gracePeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) char requireNetworkConnectivity;                          //@synthesize requireNetworkConnectivity=_requireNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) char requireInexpensiveNetworkConnectivity;               //@synthesize requireInexpensiveNetworkConnectivity=_requireInexpensiveNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) unsigned long long networkTransferDirection;              //@synthesize networkTransferDirection=_networkTransferDirection - In the implementation block
@property (nonatomic,readonly) char allowBattery;                                        //@synthesize allowBattery=_allowBattery - In the implementation block
@property (nonatomic,readonly) char powerNap;                                            //@synthesize powerNap=_powerNap - In the implementation block
@property (assign,nonatomic) double expectedDuration;                                    //@synthesize expectedDuration=_expectedDuration - In the implementation block
@property (assign,nonatomic) char cpuIntensive;                                          //@synthesize cpuIntensive=_cpuIntensive - In the implementation block
@property (assign,nonatomic) char userRequestedBackgroundTask;                           //@synthesize userRequestedBackgroundTask=_userRequestedBackgroundTask - In the implementation block
@property (assign,nonatomic) char postInstall;                                           //@synthesize postInstall=_postInstall - In the implementation block
@property (assign,nonatomic) char requiresBuddyComplete;                                 //@synthesize requiresBuddyComplete=_requiresBuddyComplete - In the implementation block
+(const char*)convertPriority:(unsigned long long)arg1 ;
+(const char*)convertNetworkTransferDirection:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(double)interval;
-(double)delay;
-(unsigned long long)priority;
-(void)setCpuIntensive:(char)arg1 ;
-(id)initWithInterval:(double)arg1 gracePeriod:(double)arg2 priority:(unsigned long long)arg3 requireNetworkConnectivity:(char)arg4 requireInexpensiveNetworkConnectivity:(char)arg5 networkTransferDirection:(unsigned long long)arg6 allowBattery:(char)arg7 powerNap:(char)arg8 ;
-(void)setExpectedDuration:(double)arg1 ;
-(void)setUserRequestedBackgroundTask:(char)arg1 ;
-(void)setPostInstall:(char)arg1 ;
-(void)setRequiresBuddyComplete:(char)arg1 ;
-(double)gracePeriod;
-(char)requireNetworkConnectivity;
-(char)requireInexpensiveNetworkConnectivity;
-(unsigned long long)networkTransferDirection;
-(char)allowBattery;
-(char)powerNap;
-(double)expectedDuration;
-(char)cpuIntensive;
-(char)userRequestedBackgroundTask;
-(char)postInstall;
-(char)requiresBuddyComplete;
-(NSMutableDictionary *)additionalCriteria;
-(void)setAdditionalCriteria:(NSMutableDictionary *)arg1 ;
@end

