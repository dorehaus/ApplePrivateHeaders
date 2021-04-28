/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, OS_dispatch_queue, AMSMetricsFlushStrategy;
@class NSString, NSObject, AMSMetricsDatabaseDataSource, NSDate;

@interface AMSMetrics : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	char _flushTimerEnabled;
	char _flushingDisabled;
	char _monitorsLifecycleEvents;
	char _flushOnForeground;
	id<AMSBagProtocol> _bag;
	NSString* _containerId;
	long long _maxBatchSize;
	long long _maxRequestCount;
	NSObject*<OS_dispatch_queue> _completionQueue;
	id<AMSMetricsFlushStrategy> _currentFlushStrategy;
	AMSMetricsDatabaseDataSource* _databaseSource;
	long long _destination;
	NSObject*<OS_dispatch_queue> _engagementQueue;
	/*^block*/id _flushIntervalBlock;
	NSDate* _flushIntervalStartTime;
	NSObject*<OS_dispatch_queue> _flushQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> completionQueue;                  //@synthesize completionQueue=_completionQueue - In the implementation block
@property (retain) id<AMSMetricsFlushStrategy> currentFlushStrategy;              //@synthesize currentFlushStrategy=_currentFlushStrategy - In the implementation block
@property (retain) AMSMetricsDatabaseDataSource * databaseSource;                 //@synthesize databaseSource=_databaseSource - In the implementation block
@property (assign) long long destination;                                         //@synthesize destination=_destination - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> engagementQueue;                  //@synthesize engagementQueue=_engagementQueue - In the implementation block
@property (assign) char flushingDisabled;                                         //@synthesize flushingDisabled=_flushingDisabled - In the implementation block
@property (assign) char flushOnForeground;                                        //@synthesize flushOnForeground=_flushOnForeground - In the implementation block
@property (copy) id flushIntervalBlock;                                           //@synthesize flushIntervalBlock=_flushIntervalBlock - In the implementation block
@property (retain) NSDate * flushIntervalStartTime;                               //@synthesize flushIntervalStartTime=_flushIntervalStartTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> flushQueue;                       //@synthesize flushQueue=_flushQueue - In the implementation block
@property (retain) id<AMSMetricsBagContract> bagContract; 
@property (retain) id<AMSBagProtocol> bag;                                        //@synthesize bag=_bag - In the implementation block
@property (readonly) NSString * containerId;                                      //@synthesize containerId=_containerId - In the implementation block
@property (readonly) long long eventCount; 
@property (assign) char flushTimerEnabled;                                        //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
@property (assign) long long maxBatchSize;                                        //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (assign) long long maxRequestCount;                                     //@synthesize maxRequestCount=_maxRequestCount - In the implementation block
@property (assign) char monitorsLifecycleEvents;                                  //@synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)internalInstanceUsingBag:(id)arg1 ;
+(id)sharedTimerQueue;
+(id)serverTimeFromTimeInterval:(double)arg1 ;
+(char)diagnosticsSubmissionAllowed;
+(char)recordAppAnalyticsForEvent:(id)arg1 bugType:(id)arg2 ;
+(char)flushTimerEnabled;
+(char)appAnalyticsAllowed;
+(char)disableBackgroundMetrics;
+(char)flushDelayEnabled;
+(void)setDisableBackgroundMetrics:(char)arg1 ;
+(void)setFlushDelayEnabled:(char)arg1 ;
+(void)setFlushTimerEnabled:(char)arg1 ;
+(id)serverTimeFromDate:(id)arg1 ;
+(double)timeIntervalFromServerTime:(id)arg1 ;
-(void)dealloc;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)cancel;
-(id)flush;
-(long long)destination;
-(void)setDestination:(long long)arg1 ;
-(long long)eventCount;
-(NSString *)containerId;
-(id)flushEvents:(id)arg1 ;
-(long long)maxBatchSize;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id<AMSMetricsBagContract>)bagContract;
-(void)setBagContract:(id<AMSMetricsBagContract>)arg1 ;
-(void)enqueueEvent:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)_beginFlushIntervalWithStyle:(long long)arg1 events:(id)arg2 ;
-(id)initWithContainerID:(id)arg1 bag:(id)arg2 ;
-(char)flushingDisabled;
-(NSObject*<OS_dispatch_queue>)flushQueue;
-(AMSMetricsDatabaseDataSource *)databaseSource;
-(char)_scheduledFlushAllowedForStyle:(long long)arg1 ;
-(void)setFlushingDisabled:(char)arg1 ;
-(id<AMSMetricsFlushStrategy>)currentFlushStrategy;
-(void)enqueueEvents:(id)arg1 ;
-(id)enqueueAsyncEvents:(id)arg1 ;
-(id)_enqueueFigaroEvents:(id)arg1 ;
-(id)_flushDataSource:(id)arg1 topic:(id)arg2 ;
-(char)flushOnForeground;
-(void)setFlushOnForeground:(char)arg1 ;
-(void)setMaxBatchSize:(long long)arg1 ;
-(long long)maxRequestCount;
-(void)setMaxRequestCount:(long long)arg1 ;
-(void)_flushIntervalInvalidate;
-(id)_determineFlushStrategyWithDataSource:(id)arg1 topic:(id)arg2 ;
-(void)setCurrentFlushStrategy:(id<AMSMetricsFlushStrategy>)arg1 ;
-(char)flushTimerEnabled;
-(double)_flushIntervalForEvents:(id)arg1 ;
-(void)_handleFlushIntervalWithStyle:(long long)arg1 ;
-(id)flushIntervalBlock;
-(void)setFlushIntervalBlock:(id)arg1 ;
-(void)setFlushTimerEnabled:(char)arg1 ;
-(void)dropEvents;
-(id)flushTopic:(id)arg1 ;
-(id)initWithContainerId:(id)arg1 bagContract:(id)arg2 ;
-(char)monitorsLifecycleEvents;
-(void)setMonitorsLifecycleEvents:(char)arg1 ;
-(void)setDatabaseSource:(AMSMetricsDatabaseDataSource *)arg1 ;
-(NSObject*<OS_dispatch_queue>)engagementQueue;
-(void)setEngagementQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)flushIntervalStartTime;
-(void)setFlushIntervalStartTime:(NSDate *)arg1 ;
-(void)setFlushQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
