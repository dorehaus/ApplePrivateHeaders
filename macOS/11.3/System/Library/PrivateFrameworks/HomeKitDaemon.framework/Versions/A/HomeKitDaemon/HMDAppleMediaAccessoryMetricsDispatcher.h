/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventDailyProvider.h>

@protocol HMFLocking, HMDAppleMediaAccessoryMetricsDispatcherDataSource;
@class NSString, HMDLogEventDispatcher, HMDLogEventDailyScheduler, NSArray;

@interface HMDAppleMediaAccessoryMetricsDispatcher : HMFObject <HMDLogEventDailyProvider> {

	id<HMFLocking> _lock;
	NSString* _previousRoomName;
	HMDLogEventDispatcher* _logEventDispatcher;
	HMDLogEventDailyScheduler* _logEventDailyScheduler;
	id<HMDAppleMediaAccessoryMetricsDispatcherDataSource> _dataSource;

}

@property (readonly) HMDLogEventDispatcher * logEventDispatcher;                                           //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) HMDLogEventDailyScheduler * logEventDailyScheduler;                                   //@synthesize logEventDailyScheduler=_logEventDailyScheduler - In the implementation block
@property (__weak,readonly) id<HMDAppleMediaAccessoryMetricsDispatcherDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (copy) NSString * previousRoomName;                                                              //@synthesize previousRoomName=_previousRoomName - In the implementation block
@property (nonatomic,readonly) NSArray * logEventProviderDailySubmissionBlocks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMDAppleMediaAccessoryMetricsDispatcherDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(HMDLogEventDailyScheduler *)logEventDailyScheduler;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(NSArray *)logEventProviderDailySubmissionBlocks;
-(void)triggerLogEventProviderDailySubmissionBlocks;
-(id)initWithDataSource:(id)arg1 logEventDispatcher:(id)arg2 logEventDailyScheduler:(id)arg3 ;
-(void)setPreviousRoomName:(NSString *)arg1 ;
-(NSString *)previousRoomName;
-(void)submitDailySetRoomEvent;
-(void)registerForDailySetRoomLogEvents;
-(void)submitRoomChangeEvent:(id)arg1 previousRoom:(id)arg2 ;
@end
