/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRSyncedRootURLCache.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache> {

	int _syncedLocationsChangedNotificationToken;
	NSArray* _syncedRootURLs;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (nonatomic,readonly) NSArray * syncedRootURLs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSArray *)syncedRootURLs;
-(void)_accountWillChange;
-(void)registerForSyncedLocationsChangesNotifications;
-(void)_fetchSyncedRootURLs;
@end
