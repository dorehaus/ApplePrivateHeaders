/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCollectionViewDelegate <NSObject>
@optional
-(char)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3;
-(char)collectionView:(id)arg1 canDragItemsAtIndexes:(id)arg2 withEvent:(id)arg3;
-(char)collectionView:(id)arg1 writeItemsAtIndexPaths:(id)arg2 toPasteboard:(id)arg3;
-(char)collectionView:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
-(id)collectionView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItemsAtIndexPaths:(id)arg3;
-(id)collectionView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItemsAtIndexes:(id)arg3;
-(id)collectionView:(id)arg1 draggingImageForItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3 offset:(CGPoint*)arg4;
-(id)collectionView:(id)arg1 draggingImageForItemsAtIndexes:(id)arg2 withEvent:(id)arg3 offset:(CGPoint*)arg4;
-(unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id*)arg3 dropOperation:(long long*)arg4;
-(unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndex:(long long*)arg3 dropOperation:(long long*)arg4;
-(char)collectionView:(id)arg1 acceptDrop:(id)arg2 indexPath:(id)arg3 dropOperation:(long long)arg4;
-(char)collectionView:(id)arg1 acceptDrop:(id)arg2 index:(long long)arg3 dropOperation:(long long)arg4;
-(id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 pasteboardWriterForItemAtIndex:(unsigned long long)arg2;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 forItemsAtIndexes:(id)arg4;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 dragOperation:(unsigned long long)arg4;
-(void)collectionView:(id)arg1 updateDraggingItemsForDrag:(id)arg2;
-(id)collectionView:(id)arg1 shouldChangeItemsAtIndexPaths:(id)arg2 toHighlightState:(long long)arg3;
-(void)collectionView:(id)arg1 didChangeItemsAtIndexPaths:(id)arg2 toHighlightState:(long long)arg3;
-(id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2;
-(id)collectionView:(id)arg1 shouldDeselectItemsAtIndexPaths:(id)arg2;
-(void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
-(void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2;
-(void)collectionView:(id)arg1 willDisplayItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
-(void)collectionView:(id)arg1 didEndDisplayingItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;

@end

