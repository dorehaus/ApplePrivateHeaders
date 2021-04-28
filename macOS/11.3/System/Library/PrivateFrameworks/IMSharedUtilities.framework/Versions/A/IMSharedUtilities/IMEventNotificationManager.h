/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMEventNotificationQueueDelegate.h>

@class IMAutomaticEventNotificationQueue, IMEventListenerList, NSMutableArray, NSString;

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate> {

	IMAutomaticEventNotificationQueue* _notificationQueue;
	double _eventTimeout;
	IMEventListenerList* _eventListeners;
	NSMutableArray* _registeredNotificationQueues;
	long long _busyCount;

}

@property (nonatomic,readonly) IMAutomaticEventNotificationQueue * notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) IMEventListenerList * eventListeners;                               //@synthesize eventListeners=_eventListeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredNotificationQueues;                      //@synthesize registeredNotificationQueues=_registeredNotificationQueues - In the implementation block
@property (assign) long long busyCount;                                                            //@synthesize busyCount=_busyCount - In the implementation block
@property (assign) double eventTimeout;                                                            //@synthesize eventTimeout=_eventTimeout - In the implementation block
@property (getter=isBusy,readonly) char busy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(char)isBusy;
-(IMAutomaticEventNotificationQueue *)notificationQueue;
-(void)registerNotificationQueue:(id)arg1 ;
-(long long)busyCount;
-(void)setBusyCount:(long long)arg1 ;
-(void)eventListenerDidFinish:(id)arg1 ;
-(void)registerEventListener:(id)arg1 ;
-(void)cancelAllEventNotifications;
-(void)eventNotificationQueue:(id)arg1 didChangeBusyState:(char)arg2 ;
-(id)createEventListenerForNotificationName:(id)arg1 object:(id)arg2 ;
-(void)cancelEventNotificationsForEventHandler:(id)arg1 ;
-(void)pauseEventNotifications:(char)arg1 ;
-(void)pushNotificationForEventHandler:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)appendNotificationForEventHandler:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)pushNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)appendNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(double)eventTimeout;
-(void)setEventTimeout:(double)arg1 ;
-(IMEventListenerList *)eventListeners;
-(NSMutableArray *)registeredNotificationQueues;
@end

