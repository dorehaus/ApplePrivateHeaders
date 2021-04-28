/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSCollectionViewDataSource.h>
#import <libobjc.A.dylib/CollectionViewPlusDelegate.h>
#import <libobjc.A.dylib/NSFilePromiseProviderDelegate.h>
#import <libobjc.A.dylib/NSPopoverDelegate.h>

@class NSStackView, NSScrollView, NSCollectionView, NSLayoutConstraint, NSView, CollectionViewPlus, NSArray, NSIndexPath, NSPopover, NSString;

@interface StartPagePopoverViewController : NSViewController <NSCollectionViewDataSource, CollectionViewPlusDelegate, NSFilePromiseProviderDelegate, NSPopoverDelegate> {

	NSStackView* _containerView;
	NSScrollView* _scrollView;
	NSCollectionView* _collectionView;
	NSLayoutConstraint* _heightConstraint;
	NSView* _backgroundView;
	CollectionViewPlus* _togglesView;
	NSArray* _togglesData;
	NSIndexPath* _draggingIndexPath;
	NSIndexPath* _initialDraggingIndexPath;
	NSPopover* _popover;

}

@property (nonatomic,retain) NSPopover * popover;                   //@synthesize popover=_popover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)loadView;
-(void)viewWillAppear;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
-(void)_reloadData;
-(void)popoverDidClose:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3 ;
-(unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndexPath:(id*)arg3 dropOperation:(long long*)arg4 ;
-(char)collectionView:(id)arg1 acceptDrop:(id)arg2 indexPath:(id)arg3 dropOperation:(long long)arg4 ;
-(id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 forItemsAtIndexPaths:(id)arg4 ;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 dragOperation:(unsigned long long)arg4 ;
-(id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2 ;
-(NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)filePromiseProvider:(id)arg1 writePromiseToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)filePromiseProvider:(id)arg1 fileNameForType:(id)arg2 ;
-(void)_updateBackgroundColor;
-(void)collectionViewPlus:(id)arg1 draggingSession:(id)arg2 movedToPoint:(CGPoint)arg3 ;
-(void)collectionViewPlus:(id)arg1 keyDown:(id)arg2 ;
-(void)_loadToggleData;
-(void)_createTogglesCollectionView;
-(void)_createCollectionView;
-(id)_createStackViewWithSubviews:(id)arg1 ;
-(double)_collectionViewHeight;
-(void)_configureFirstItem;
-(void)_updateCollectionViewVisibility;
-(id)makeToggleRow:(id)arg1 rowIndex:(long long)arg2 ;
-(double)_calculatedItemWidth;
-(void)_configureFirstItem:(id)arg1 ;
-(id)makeToggleRow:(id)arg1 ;
-(void)showPopoverWithPositioningView:(id)arg1 backgroundView:(id)arg2 ;
@end
