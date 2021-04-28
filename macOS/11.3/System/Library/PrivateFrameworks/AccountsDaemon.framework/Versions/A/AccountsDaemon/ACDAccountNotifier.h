/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface ACDAccountNotifier : NSObject {

	NSObject*<OS_dispatch_queue> _notificationEntryQueue;
	NSArray* _notificationEntries;

}

@property (nonatomic,copy,readonly) NSArray * notificationEntries;              //@synthesize notificationEntries=_notificationEntries - In the implementation block
+(id)allNotificationEntries;
-(id)init;
-(char)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(char)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
-(void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
-(char)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(id)initWithNotificationEntries:(id)arg1 ;
-(id)_pluginsRegisteredForAccount:(id)arg1 ;
-(id)_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 ;
-(id)_unsafe_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2 changeType:(id)arg3 ;
-(id)_provisionedDataclassesForNewAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)addNotificationEntry:(id)arg1 ;
-(void)removeAllNotificationEntries;
-(NSArray *)notificationEntries;
@end

