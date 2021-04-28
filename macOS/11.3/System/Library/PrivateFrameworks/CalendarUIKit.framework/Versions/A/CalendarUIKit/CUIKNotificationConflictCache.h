/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CUIKNotificationConflictCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _fetchQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)conflictsForNotification:(id)arg1 ;
-(char)_updateNotification:(id)arg1 withCacheObject:(id)arg2 ;
-(void)updateConflictsForNotification:(id)arg1 synchronously:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

