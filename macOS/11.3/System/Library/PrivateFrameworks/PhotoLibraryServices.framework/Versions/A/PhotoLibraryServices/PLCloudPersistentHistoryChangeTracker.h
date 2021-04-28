/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLCloudChangeTracker.h>

@protocol OS_dispatch_queue, PLCloudChangeTrackerDelegate;
@class NSString, NSPersistentHistoryToken, NSManagedObjectContext, PLChangeHandlingNotificationObserver, NSObject;

@interface PLCloudPersistentHistoryChangeTracker : NSObject <PLCloudChangeTracker> {

	NSPersistentHistoryToken* _lastKnownToken;
	NSPersistentHistoryToken* _lastKnownDeletionToken;
	NSManagedObjectContext* _context;
	PLChangeHandlingNotificationObserver* _notificationObserver;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	id<PLCloudChangeTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLCloudChangeTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * lastKnownTokenDescription; 
@property (readonly) char hasChangeTrackerToken; 
@property (copy,readonly) NSString * lastKnownDeletionTokenDescription; 
@property (copy,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedDataWithToken:(id)arg1 ;
+(id)unarchiveTokentWithData:(id)arg1 ;
-(NSString *)name;
-(id<PLCloudChangeTrackerDelegate>)delegate;
-(void)setDelegate:(id<PLCloudChangeTrackerDelegate>)arg1 ;
-(void)disconnect;
-(char)isConnected;
-(char)connect;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(id)currentToken;
-(void)changeTrackerDidReceiveChangesWithTransaction:(id)arg1 ;
-(void)saveLastKnownChangeTrackerTokenToDisk;
-(NSString *)lastKnownTokenDescription;
-(void)updateLastKnownTokenToResult:(id)arg1 ;
-(id)fetchAllEvents;
-(void)clearToken;
-(char)hasChangeTrackerToken;
-(void)forceTokenToCurrent;
-(NSString *)lastKnownDeletionTokenDescription;
-(id)fetchDeletionEvents;
-(void)updateLastKnownDeletionTokenToResult:(id)arg1 ;
-(id)lastKnownTokenFromDisk;
-(void)_registerForChangeHandlingNotifications;
-(void)_unregisterForChangeHandlingNotifications;
-(id)eventsResultFromPersistentHistoryToken:(id)arg1 ;
-(void)_updateLastKnownTokensToToken:(id)arg1 ;
-(void)_updateLastKnownDeletionTokenToToken:(id)arg1 ;
@end
