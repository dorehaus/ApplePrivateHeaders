/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTouchBarCustomizationPaletteLayoutDelegate.h>
#import <libobjc.A.dylib/NSCollectionViewDataSource.h>

@protocol NSTouchBarCustomizationPaletteViewControllerDelegate;
@class NSArray, NSCollectionView, NSString;

@interface NSTouchBarCustomizationPaletteViewController : NSViewController <NSTouchBarCustomizationPaletteLayoutDelegate, NSCollectionViewDataSource> {

	NSArray* _touchBars;
	NSArray* _visiblePaletteBarItems;
	NSArray* _barPresets;
	NSCollectionView* _paletteCollectionView;
	char _showNonCustomizableItems;
	CGSize _presetSize;
	double _presetScale;
	Class _presetRepresentedObjectClass;
	id<NSTouchBarCustomizationPaletteViewControllerDelegate> _delegate;
	double _scaleFactor;
	double _visualCenterXOffset;

}

@property (copy) NSArray * touchBars; 
@property (assign) CGSize presetSize;                                                              //@synthesize presetSize=_presetSize - In the implementation block
@property (assign) double presetScale;                                                             //@synthesize presetScale=_presetScale - In the implementation block
@property (assign) Class presetRepresentedObjectClass;                                             //@synthesize presetRepresentedObjectClass=_presetRepresentedObjectClass - In the implementation block
@property (assign) double visualCenterXOffset;                                                     //@synthesize visualCenterXOffset=_visualCenterXOffset - In the implementation block
@property (assign) char showNonCustomizableItems; 
@property (__weak) id<NSTouchBarCustomizationPaletteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double scaleFactor;                                                             //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NSTouchBarCustomizationPaletteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NSTouchBarCustomizationPaletteViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)reloadData;
-(void)loadView;
-(void)setTouchBars:(NSArray *)arg1 ;
-(char)_viewControllerSupports10_10Features;
-(NSArray *)touchBars;
-(id)itemTree;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3 ;
-(char)collectionView:(id)arg1 writeItemsAtIndexPaths:(id)arg2 toPasteboard:(id)arg3 ;
-(id)collectionView:(id)arg1 draggingImageForItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(CGPoint)arg3 forItemsAtIndexPaths:(id)arg4 ;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 dragOperation:(unsigned long long)arg4 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setPresetSize:(CGSize)arg1 ;
-(void)setVisualCenterXOffset:(double)arg1 ;
-(void)setPresetScale:(double)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(void)setPresetRepresentedObjectClass:(Class)arg1 ;
-(double)scaleFactor;
-(id)dragImageForItem:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 minSizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 maxSizeForItemAtIndexPath:(id)arg3 ;
-(double)visualCenterXOffset;
-(void)_discardCachedVisiblePaletteBarItems;
-(Class)presetRepresentedObjectClass;
-(CGSize)presetSize;
-(id)_visiblePaletteBarItems;
-(id)_visibleBarPresets;
-(void)setShowNonCustomizableItems:(char)arg1 ;
-(char)showNonCustomizableItems;
-(double)presetScale;
@end

