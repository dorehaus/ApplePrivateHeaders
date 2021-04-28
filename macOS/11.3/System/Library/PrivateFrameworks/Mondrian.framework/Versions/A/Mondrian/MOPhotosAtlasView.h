/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Mondrian/Mondrian-Structs.h>
#import <Mondrian/MOMediaView.h>
#import <libobjc.A.dylib/MOAccessibilityChildrenDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, MOLRUCache, NSMapTable, PFDiskCache, NSObject, NSEvent, NSIndexPath, NSOperationQueue, CALayer, NSMutableDictionary;

@interface MOPhotosAtlasView : MOMediaView <MOAccessibilityChildrenDelegate> {

	NSString* _identifier;
	MOLRUCache* _segmentsMemoryCache;
	unsigned long long _segmentsMinimumMemoryCacheSlots;
	unsigned long long _segmentsMaximumMemoryCacheSlots;
	unsigned long long _diskCacheStride;
	NSMapTable* _segmentsOperations;
	NSMapTable* _segmentsPrefetchOperations;
	NSMapTable* _mainQueueOperations;
	PFDiskCache* _segmentsDiskCache;
	NSObject*<OS_dispatch_queue> _segmentsDiskCacheWriteQueue;
	unsigned long long _thumbnailResolution;
	NSEvent* _itemWasClickedEvent;
	NSIndexPath* _lastClickedIndexPath;
	char _prepareIfNeeded;
	char _isPreparing;
	long long _prepareSectionIndex;
	NSOperationQueue* _prepareOperationQueue;
	NSMapTable* _prepareOperations;
	char _isShowingLoupe;
	NSEvent* _startLoupeEvent;
	CALayer* _loupeLayer;
	NSIndexPath* _currentLoupeIndexPath;
	char _loupeIsReversed;
	NSOperationQueue* _loupeQueue;
	char _canStartLoupe;
	struct {
		unsigned delegateItemWasClickedAtIndexPathWithEvent : 1;
		unsigned delegateItemWasRightClickedAtIndexPathWithEvent : 1;
	}  _photosAtlasViewFlags;
	NSMutableDictionary* _accessibilityChildrenForRows;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableDictionary * accessibilityChildrenForRows;              //@synthesize accessibilityChildrenForRows=_accessibilityChildrenForRows - In the implementation block
@property (nonatomic,readonly) char isShowingLoupe;                                           //@synthesize isShowingLoupe=_isShowingLoupe - In the implementation block
@property (nonatomic,retain,readonly) CALayer * loupeLayer;                                   //@synthesize loupeLayer=_loupeLayer - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)cancelAllOperations;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(void)setDataSource:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)viewWillStartLiveResize;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)reloadData:(char)arg1 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetOnResizeForProposedContentOffset:(CGPoint)arg2 ;
-(void)_viewCleanup;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(char)arg3 userInteractivelyScrolling:(char)arg4 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidBeginFloatingAtIndexPath:(id)arg3 kind:(id)arg4 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 supplementaryViewDidEndFloatingAtIndexPath:(id)arg3 kind:(id)arg4 ;
-(void)updateMemoryCaches;
-(void)updateAllContent;
-(void)updateAllVisibleContent;
-(void)updateMediaContentToBest;
-(void)prefetchLowVisibleMediaContent;
-(void)prefetchBestVisibleMediaContent;
-(void)prefetchAdjacentMediaContent;
-(void)invalidateAllMemoryCaches;
-(char)isVisibleContentPrepared:(char)arg1 ;
-(void)_viewWillPrepare;
-(void)_viewDidPrepare:(char)arg1 ;
-(void)_viewDidChangeBackingProperties;
-(void)refreshItemAtIndexPath:(id)arg1 ;
-(void)updateItemAtIndexPath:(id)arg1 ;
-(CGRect)visibleFrameForItemAtIndexPath:(id)arg1 ;
-(id)mediaVisiblePivotIndexPath;
-(void)_collectionViewWillBeginScrolling;
-(void)_collectionViewDidEndScrolling;
-(void)_collectionViewDidEndDecelerating;
-(id)visibleMediaItems;
-(id)orderedVisibleMediaItems;
-(id)orderedOverdrawMediaItems;
-(void)_updateCell:(id)arg1 withMediaItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_updateCellToBest:(id)arg1 withMediaItem:(id)arg2 atIndexPath:(id)arg3 withDependencyOperation:(id)arg4 ;
-(void)updateContentSupplementaryViews;
-(void)updateVisibleSupplementaryViews;
-(void)cancelAllOperations:(/*^block*/id)arg1 ;
-(void)_rescheduleOperations;
-(void)mediaView:(id)arg1 didUpdateSupplementaryView:(id)arg2 ofKind:(id)arg3 withMediaSection:(id)arg4 atIndexPath:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 numberOfItemsPerRow:(unsigned long long)arg2 diskCacheStride:(unsigned long long)arg3 identifier:(id)arg4 ;
-(void)_updateThumbnailResolution;
-(void)updateThumbnailResolution:(id)arg1 ;
-(long long)_segmentsDiskCacheTotalSize;
-(double)_segmentsDiskCachePercentageOfDiskToUse;
-(id)segmentsDiskCache;
-(id)atlasLayout;
-(void)setSegmentsMinimumMemoryCacheSlots:(unsigned long long)arg1 ;
-(void)setSegmentsMaximumMemoryCacheSlots:(unsigned long long)arg1 ;
-(id)lastClickedIndexPath;
-(id)_convertRowIndexPathToSegmentIndexPath:(id)arg1 ;
-(id)_segmentRowAtIndexPath:(id)arg1 ;
-(id)_mediaItemIndexPathsForSegmentAtIndexPath:(id)arg1 ;
-(id)_mediaItemsForSegmentAtIndexPath:(id)arg1 ;
-(id)_mediaItemsForSegmentRowAtIndexPath:(id)arg1 ;
-(id)mediaItemsForSegmentRowAtIndexPath:(id)arg1 ;
-(id)_cachedSegmentAtIndexPath:(id)arg1 ;
-(id)_segmentAtIndexPath:(id)arg1 ;
-(id)_segmentAtIndexPath:(id)arg1 cache:(char)arg2 ;
-(id)_segmentsDiskCacheImageKeyWithSegmentIdentifier:(id)arg1 ;
-(id)_segmentsDiskCacheVersionsKeyWithSegmentIdentifier:(id)arg1 ;
-(void)_saveSegmentToDisk:(id)arg1 ;
-(void)_saveSegmentVersionsToDisk:(id)arg1 ;
-(void)saveSegmentImageToDisk:(id)arg1 ;
-(id)segmentImageFromDiskWithMediaItems:(id)arg1 colorSpace:(id)arg2 ;
-(id)segmentVersionsFromDiskWithMediaItems:(id)arg1 ;
-(void)_collectionViewDidScroll;
-(void)_collectionViewWillBeginDecelerating;
-(double)_loupeResolution;
-(void)_startLoupeEffect:(id)arg1 ;
-(void)_updateLoupeEffect:(id)arg1 ;
-(void)_stopLoupeEffect:(id)arg1 ;
-(void)_handleItemWasSingleClicked:(id)arg1 ;
-(void)_handleItemWasRightClicked:(id)arg1 ;
-(void)accessibilityItemWasClickedAtIndexPath:(id)arg1 ;
-(void)accessibilityItemWasDoubleClickedAtIndexPath:(id)arg1 ;
-(id)_operationForSupplementaryViewWithUUID:(id)arg1 atIndexPath:(id)arg2 withSegmentRow:(id)arg3 ;
-(void)_updateSupplementaryRowView:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)operationQueuePriorityForType:(unsigned long long)arg1 withSupplementaryView:(id)arg2 ;
-(id)orderedContentSupplementaryRowViews;
-(void)updateContentSupplementaryRowViews;
-(void)updateVisibleSupplementaryRowViews;
-(void)prefetchVisibleSegments;
-(void)prefetchSegmentsAtIndexPaths:(id)arg1 ;
-(void)prefetchSegments:(unsigned long long)arg1 pageDirection:(unsigned long long)arg2 ;
-(void)prefetchAdjacentSegments;
-(void)prefetchSegments:(unsigned long long)arg1 ;
-(void)prefetchSegmentsForScrolling;
-(void)invalidateSegmentsMemoryCaches;
-(unsigned long long)segmentsOperationsCount;
-(void)addSegmentOperation:(id)arg1 ;
-(void)removeSegmentOperation:(id)arg1 ;
-(char)hasSegmentOperationForSupplementaryView:(id)arg1 ;
-(void)cancelSegmentOperationForSupplementaryView:(id)arg1 ;
-(void)cancelAllSegmentsOperations;
-(unsigned long long)mainQueueOperationsCount;
-(void)addMainQueueOperation:(id)arg1 ;
-(void)removeMainQueueOperation:(id)arg1 ;
-(char)hasMainQueueOperationForContext:(id)arg1 ;
-(void)cancelMainQueueOperationForContext:(id)arg1 ;
-(void)cancelAllMainQueueOperations;
-(void)addSegmentPrefetchOperation:(id)arg1 ;
-(void)removeSegmentPrefetchOperation:(id)arg1 ;
-(char)hasSegmentPrefetchOperationForIndexPath:(id)arg1 ;
-(void)cancelSegmentPrefetchOperationForIndexPath:(id)arg1 ;
-(void)cancelAllSegmentPrefetchOperationsButIndexPaths:(id)arg1 ;
-(void)cancelAllSegmentPrefetchOperations;
-(id)_prepareOperationForRowIndexPath:(id)arg1 ;
-(void)prepareDiskCache;
-(void)prepareDiskCacheIfNeeded;
-(void)_prepareDiskCacheSection:(long long)arg1 ;
-(unsigned long long)prepareOperationsCount;
-(void)addPrepareOperation:(id)arg1 ;
-(void)removePrepareOperation:(id)arg1 ;
-(char)hasPrepareOperationForSegmentIndexPath:(id)arg1 ;
-(void)cancelPrepareOperationForSegmentIndexPath:(id)arg1 ;
-(void)cancelAllPrepareOperations;
-(char)isShowingLoupe;
-(CALayer *)loupeLayer;
-(NSMutableDictionary *)accessibilityChildrenForRows;
-(void)setAccessibilityChildrenForRows:(NSMutableDictionary *)arg1 ;
-(id)accessibilityChildrenForRow:(id)arg1 ;
@end

