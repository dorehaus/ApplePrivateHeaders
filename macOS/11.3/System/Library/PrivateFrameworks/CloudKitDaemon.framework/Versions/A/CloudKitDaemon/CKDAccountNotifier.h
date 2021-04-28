/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject {

	int _accountChangedToken;
	NSMapTable* _notificationHandlers;
	NSOperationQueue* _accountChangeHandlerQueue;

}

@property (assign,nonatomic) int accountChangedToken;                                   //@synthesize accountChangedToken=_accountChangedToken - In the implementation block
@property (nonatomic,retain) NSMapTable * notificationHandlers;                         //@synthesize notificationHandlers=_notificationHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accountChangeHandlerQueue;              //@synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue - In the implementation block
+(id)sharedNotifier;
-(void)dealloc;
-(id)init;
-(void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2 ;
-(void)registerObserver:(id)arg1 forAccountChangeNotification:(/*^block*/id)arg2 ;
-(void)unregisterObserverForAccountChangeNotification:(id)arg1 ;
-(NSMapTable *)notificationHandlers;
-(NSOperationQueue *)accountChangeHandlerQueue;
-(void)postAccountChangedNotificationToClients;
-(int)accountChangedToken;
-(void)setAccountChangedToken:(int)arg1 ;
-(void)setNotificationHandlers:(NSMapTable *)arg1 ;
-(void)setAccountChangeHandlerQueue:(NSOperationQueue *)arg1 ;
@end

