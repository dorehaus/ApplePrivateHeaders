/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPReachabilityObserver.h>
#import <libobjc.A.dylib/FPCollectionDataSourceDelegate.h>

@protocol FPCollectionDataSource, OS_dispatch_queue, OS_dispatch_source, FPItemCollectionItemIDBasedDelegate, FPItemCollectionIndexPathBasedDelegate, FPItemCollectionMinimalDelegate;
@class NSArray, _FPItemList, NSObject, NSDate, NSMutableDictionary, NSMutableSet, NSPredicate, FPAppRegistry, FPItemID, FPPacer, NSString;

@interface FPItemCollection : NSObject <FPReachabilityObserver, FPCollectionDataSourceDelegate> {

	NSArray* _sortDescriptors;
	id<FPCollectionDataSource> _dataSource;
	_FPItemList* _currentItems;
	NSObject*<OS_dispatch_queue> _workingQueue;
	NSObject*<OS_dispatch_queue> _itemAccessQueue;
	NSObject*<OS_dispatch_source> _restartTimer;
	NSDate* _lastInvalidationOnError;
	unsigned long long _invalidationOnErrorCount;
	NSMutableDictionary* _updatedItemsByIdentifiers;
	NSMutableSet* _deletedItemsIdentifiers;
	NSMutableDictionary* _formerItemsIdentifiers;
	char _shouldResort;
	char _regathering;
	char _shouldRetryOnceAfterCrash;
	NSPredicate* _itemFilteringPredicate;
	FPAppRegistry* _appRegistry;
	id<FPItemCollectionItemIDBasedDelegate> _itemIDBasedDelegate;
	id<FPItemCollectionIndexPathBasedDelegate> _indexPathBasedDelegate;
	char _gathering;
	char _immutable;
	char _hasMoreUpdates;
	char _showHiddenFiles;
	BOOL _observing;
	unsigned long long _lastForcedUpdate;
	id<FPItemCollectionMinimalDelegate> _delegate;
	FPItemID* _enumeratedItemID;
	NSPredicate* _additionalItemFilteringPredicate;
	NSObject*<OS_dispatch_queue> _updateQueue;
	FPPacer* _updatePacer;

}

@property (readonly) NSString * providerIdentifier; 
@property (readonly) NSString * domainIdentifier; 
@property (readonly) FPItemID * enumeratedItemID;                                              //@synthesize enumeratedItemID=_enumeratedItemID - In the implementation block
@property (nonatomic,readonly) id<FPCollectionDataSource> dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isGathering,nonatomic) char gathering;                                //@synthesize gathering=_gathering - In the implementation block
@property (nonatomic,retain) NSPredicate * additionalItemFilteringPredicate;                   //@synthesize additionalItemFilteringPredicate=_additionalItemFilteringPredicate - In the implementation block
@property (assign,nonatomic) BOOL observing;                                                   //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> updateQueue;                       //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,readonly) FPPacer * updatePacer;                                          //@synthesize updatePacer=_updatePacer - In the implementation block
@property (nonatomic,retain) NSPredicate * itemFilteringPredicate; 
@property (assign,nonatomic,__weak) id<FPItemCollectionMinimalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isImmutable,nonatomic,readonly) char immutable;                              //@synthesize immutable=_immutable - In the implementation block
@property (nonatomic,readonly) char hasMoreUpdates;                                            //@synthesize hasMoreUpdates=_hasMoreUpdates - In the implementation block
@property (assign,nonatomic) char showHiddenFiles;                                             //@synthesize showHiddenFiles=_showHiddenFiles - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors;                                      //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workingQueue;                        //@synthesize workingQueue=_workingQueue - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long lastForcedUpdate;                                      //@synthesize lastForcedUpdate=_lastForcedUpdate - In the implementation block
+(void)initialize;
+(void)refreshActiveCollectionsForDecorationChange;
+(void)addActiveCollection:(id)arg1 ;
+(void)removeActiveCollection:(id)arg1 ;
+(id)_bouncedItem:(id)arg1 withinItems:(id)arg2 ;
+(id)activeCollections;
+(void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3 ;
+(void)consumeUpdates:(id)arg1 deletes:(id)arg2 ;
+(char)isEnumerationSuspended;
+(void)suspendVendorEnumeration;
+(void)resumeVendorEnumeration;
-(void)dealloc;
-(id)init;
-(id<FPItemCollectionMinimalDelegate>)delegate;
-(void)setDelegate:(id<FPItemCollectionMinimalDelegate>)arg1 ;
-(NSString *)domainIdentifier;
-(long long)numberOfItems;
-(NSString *)providerIdentifier;
-(NSArray *)sortDescriptors;
-(char)isGathering;
-(id<FPCollectionDataSource>)dataSource;
-(id)itemAtIndexPath:(id)arg1 ;
-(NSArray *)items;
-(long long)_numberOfItems;
-(void)startObserving;
-(void)stopObserving;
-(void)setWorkingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workingQueue;
-(void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(char)arg2 ;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(FPItemID *)enumeratedItemID;
-(char)recoverFromError:(id)arg1 ;
-(char)shouldRetryError:(id)arg1 ;
-(char)isRootItem:(id)arg1 ;
-(void)updateRootItem:(id)arg1 ;
-(char)isCollectionValidForItem:(id)arg1 ;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
-(id)initWithPacing:(char)arg1 ;
-(void)setAdditionalItemFilteringPredicate:(NSPredicate *)arg1 ;
-(void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(char)arg3 ;
-(void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(char)arg4 ;
-(void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2 ;
-(char)dataSourceShouldAlwaysReplaceContents:(id)arg1 ;
-(unsigned long long)lastForcedUpdate;
-(void)setGathering:(char)arg1 ;
-(BOOL)observing;
-(char)hasMoreUpdates;
-(void)_flushPendingUpdates;
-(char)isRegatheringAfterSignal;
-(void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 ;
-(void)_startObserving;
-(void)_cancelStartTime;
-(char)__isUsingDataSource:(id)arg1 ;
-(void)_startRegathering;
-(void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 ;
-(void)_restartObservationWithReason:(id)arg1 ;
-(void)_restartObservation;
-(unsigned long long)_indexOfItem:(id)arg1 ;
-(void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 dropForReplacedPlaceholders:(char)arg3 ;
-(void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 forceFlush:(char)arg3 dropForReplacedPlaceholders:(char)arg4 ;
-(void)_updateObservedItem:(id)arg1 ;
-(char)isHiddenItem:(id)arg1 ;
-(id)indexPathFromIndex:(long long)arg1 ;
-(id)_itemsMutableCopy;
-(id)_reorderWithPlaceholdersLast:(id)arg1 ;
-(id)computeIndexPathsBasedDiffsWithOldItems:(id)arg1 futureItems:(id)arg2 ;
-(id)computeItemIDBasedDiffs;
-(void)sendIndexPathBasedDiffs:(id)arg1 ;
-(void)sendItemIDBasedDiffs:(id)arg1 ;
-(unsigned long long)_indexOfItemID:(id)arg1 ;
-(id)indexPathsFromIndexSet:(id)arg1 ;
-(void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3 ;
-(void)suspendUpdates;
-(void)resumeUpdates;
-(void)reorderItemsWithSortDescriptors:(id)arg1 ;
-(id)_t_items;
-(char)_isUsingDataSource:(id)arg1 ;
-(void)_didEncounterError:(id)arg1 forObservationID:(unsigned long long)arg2 ;
-(void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 hasMoreChanges:(char)arg3 ;
-(NSPredicate *)itemFilteringPredicate;
-(void)setItemFilteringPredicate:(NSPredicate *)arg1 ;
-(void)_replaceContentsWithVendorItems:(id)arg1 ;
-(void)_setObserving:(char)arg1 ;
-(char)isImmutable;
-(char)showHiddenFiles;
-(void)setShowHiddenFiles:(char)arg1 ;
-(NSPredicate *)additionalItemFilteringPredicate;
-(void)setObserving:(BOOL)arg1 ;
-(FPPacer *)updatePacer;
-(void)startObservingWithEnumerationProperties:(id)arg1 ;
@end

