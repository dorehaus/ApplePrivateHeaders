/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSUUID;

@interface CSMacWakeSleepMonitor : CSEventMonitor {

	char _deviceIsInSleep;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSUUID* _token;

}

@property (nonatomic,retain) NSHashTable * observers;                              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) char deviceIsInSleep;                                 //@synthesize deviceIsInSleep=_deviceIsInSleep - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,retain) NSUUID * token;                                       //@synthesize token=_token - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)type;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)token;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setToken:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)willSleep;
-(void)hasPoweredOn;
-(char)deviceIsInSleep;
-(void)setDeviceIsInSleep:(char)arg1 ;
@end

