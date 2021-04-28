/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalDeviceLockObservable.h>

@protocol OS_dispatch_queue;
@class NSObject, CalDarwinNotificationListener, NSString;

@interface CalDeviceLockObserver : NSObject <CalDeviceLockObservable> {

	char _internalHasBeenUnlockedSinceBoot;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CalDarwinNotificationListener* _notificationListener;
	/*^block*/id _stateChangedCallback;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) CalDarwinNotificationListener * notificationListener;              //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                             //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (assign,nonatomic) char internalHasBeenUnlockedSinceBoot;                             //@synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) char hasBeenUnlockedSinceBoot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)hasBeenUnlockedSinceBoot;
+(id)stateChangedNotificationName;
-(id)init;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CalDarwinNotificationListener *)notificationListener;
-(void)setNotificationListener:(CalDarwinNotificationListener *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithStateChangedCallback:(/*^block*/id)arg1 ;
-(void)setStateChangedCallback:(id)arg1 ;
-(char)hasBeenUnlockedSinceBoot;
-(void)setInternalHasBeenUnlockedSinceBoot:(char)arg1 ;
-(id)stateChangedCallback;
-(char)internalHasBeenUnlockedSinceBoot;
-(void)_notificationReceived;
@end
