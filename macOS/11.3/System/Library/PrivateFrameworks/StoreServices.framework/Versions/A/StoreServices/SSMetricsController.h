/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSMetricsConfiguration, NSObject;

@interface SSMetricsController : NSObject {

	SSXPCConnection* _connection;
	SSMetricsConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _flushSerialQueue;
	char _flushTimerEnabled;
	char _flushOnForeground;
	/*^block*/id _flushTimerBlock;
	NSObject*<OS_dispatch_queue> _flushTimerQueue;

}

@property (assign,getter=isFlushTimerEnabled,nonatomic) char flushTimerEnabled;              //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
-(void)dealloc;
-(id)init;
-(id)_connection;
-(id)serialQueue;
-(id)configuration;
-(char)isDisabled;
-(id)pingURLs;
-(void)_applicationWillEnterForeground;
-(void)setFlushTimerEnabled:(char)arg1 ;
-(id)_userType;
-(void)setGlobalConfiguration:(id)arg1 ;
-(void)recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(id)_cookieValuesForConfiguration:(id)arg1 ;
-(void)_flushUnreportedEventsIfEnabled;
-(void)flushUnreportedEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleFlushTimer;
-(void)_setupFlushTimer;
-(void)insertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_enumerateFieldValuesWithMap:(id)arg1 fieldData:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)_valueForField:(id)arg1 withFieldData:(id)arg2 ;
-(void)insertEvent:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3 ;
-(void)setPageConfiguration:(id)arg1 ;
-(char)isFlushTimerEnabled;
@end

