/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRemoteNotifierDelegate;
@class NSString, NSDistributedNotificationCenter;

@interface VSRemoteNotifier : NSObject {

	NSString* _remoteNotificationName;
	id<VSRemoteNotifierDelegate> _delegate;
	NSString* _notificationObject;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (nonatomic,copy) NSString * notificationObject;                                                  //@synthesize notificationObject=_notificationObject - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteNotificationName;                                     //@synthesize remoteNotificationName=_remoteNotificationName - In the implementation block
@property (assign,nonatomic,__weak) id<VSRemoteNotifierDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
+(id)_currentProcessIdentifier;
-(void)dealloc;
-(id)init;
-(id<VSRemoteNotifierDelegate>)delegate;
-(void)setDelegate:(id<VSRemoteNotifierDelegate>)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(void)postNotification;
-(NSString *)notificationObject;
-(id)initWithNotificationName:(id)arg1 ;
-(void)_didReceiveDistributedNotification:(id)arg1 ;
-(void)postNotificationWithUserInfo:(id)arg1 ;
-(NSString *)remoteNotificationName;
-(void)setNotificationObject:(NSString *)arg1 ;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
@end

