/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>

@class HMDEventCountersManager;

@interface HMDLogEventAccessoryFirmwareUpdateEventAnalyzer : HMDLogEventAnalyzer {

	HMDEventCountersManager* _eventCountersManager;

}

@property (nonatomic,readonly) HMDEventCountersManager * eventCountersManager;              //@synthesize eventCountersManager=_eventCountersManager - In the implementation block
-(HMDEventCountersManager *)eventCountersManager;
-(id)initWithSupportedEventClasses:(id)arg1 context:(id)arg2 ;
-(void)processLogEvent:(id)arg1 ;
-(id)initWithSupportedEventClasses:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3 ;
@end
