/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <Email/EMRepositoryObject.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFSignpostable.h>

@protocol EFCancelable, EFScheduler;
@class NSMutableOrderedSet, NSMutableSet, NSOrderedSet, EFPromise, EFQuery, NSHashTable, EFFuture, NSString;

@interface EMCollection : EMRepositoryObject <EFLoggable, EFSignpostable> {

	NSMutableOrderedSet* _itemIDs;
	NSMutableSet* _itemIDsAnticipatingDelete;
	NSOrderedSet* _recoveringItemIDs;
	EFPromise* _allItemIDsPromise;
	os_unfair_lock_s _itemIDsLock;
	char _foundAllItemIDs;
	char _foundFirstBatch;
	os_unfair_lock_s _changeObserversLock;
	EFQuery* _query;
	id<EFCancelable> _cancelationToken;
	NSHashTable* _changeObservers;
	id<EFScheduler> _observerScheduler;

}

@property (nonatomic,retain) id<EFCancelable> cancelationToken;                //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain) NSHashTable * changeObservers;                    //@synthesize changeObservers=_changeObservers - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> queryScheduler; 
@property (nonatomic,readonly) id<EFScheduler> observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (nonatomic,readonly) EFQuery * query;                                //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) EFFuture * allItemIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long signpostID; 
+(char)supportsSecureCoding;
+(id)log;
+(id)signpostLog;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(EFQuery *)query;
-(unsigned long long)signpostID;
-(id<EFScheduler>)observerScheduler;
-(void)stopObserving:(id)arg1 ;
-(id<EFCancelable>)cancelationToken;
-(void)setCancelationToken:(id<EFCancelable>)arg1 ;
-(EFFuture *)allItemIDs;
-(id)initWithObjectID:(id)arg1 query:(id)arg2 ;
-(void)_commonInitWithQuery:(id)arg1 ;
-(id)_firstExistingItemIDForItemID:(id)arg1 inReverse:(char)arg2 ;
-(id)_iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(char)arg2 includeStartingItem:(char)arg3 withBlock:(/*^block*/id)arg4 ;
-(id)firstExistingItemIDAfterItemID:(id)arg1 ;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(id)firstExistingItemIDBeforeItemID:(id)arg1 ;
-(void)_performQueryIfNeeded;
-(id<EFScheduler>)queryScheduler;
-(NSHashTable *)changeObservers;
-(void)_cancelQuery;
-(void)_performQuery;
-(void)notifyChangeObserverAboutStockedItemIDs:(id)arg1 ;
-(char)isRecovering;
-(void)insertItemIDs:(id)arg1 before:(id)arg2 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)_filterAndTransformObjectIDs:(id)arg1 before:(char)arg2 existingObjectID:(id)arg3 batchBlock:(/*^block*/id)arg4 ;
-(void)insertItemIDs:(id)arg1 after:(id)arg2 ;
-(void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(id)_itemIDsForObjectIDs:(id)arg1 ;
-(id)itemIDForObjectID:(id)arg1 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1 ;
-(id)removeItemIDs:(id)arg1 ;
-(void)finishRecovery;
-(void)_cancelQueryIfNeeded;
-(char)objectIDBelongsToCollection:(id)arg1 ;
-(char)containsItemID:(id)arg1 includeRecovery:(char)arg2 ;
-(void)notifyChangeObserver:(id)arg1 stockedItemIDs:(id)arg2 ;
-(id)initWithQuery:(id)arg1 repository:(id)arg2 ;
-(id)objectIDForItemID:(id)arg1 ;
-(id)iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(char)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)beginObserving:(id)arg1 ;
-(void)queryDidStartRecovery;
-(void)queryMatchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)queryMatchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2 ;
-(void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2 ;
-(void)queryMatchedChangesByObjectIDs:(id)arg1 ;
-(void)queryAnticipatesDeletedObjectIDs:(id)arg1 ;
-(void)queryMatchedDeletedObjectIDs:(id)arg1 ;
-(void)queryDidFinishInitialLoad;
-(void)queryDidFinishRemoteSearch;
-(char)observerContainsObjectID:(id)arg1 ;
-(void)queryReplacedObjectID:(id)arg1 withNewObjectID:(id)arg2 ;
-(void)setChangeObservers:(NSHashTable *)arg1 ;
@end

