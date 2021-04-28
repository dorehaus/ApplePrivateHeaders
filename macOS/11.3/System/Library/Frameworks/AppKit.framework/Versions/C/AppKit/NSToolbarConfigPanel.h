/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>
#import <libobjc.A.dylib/NSCollectionViewDataSource.h>
#import <libobjc.A.dylib/NSTouchBarCustomizationPaletteLayoutDelegate.h>
#import <libobjc.A.dylib/NSCollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/NSCollectionViewDelegate.h>

@class NSToolbar, NSTextField, NSCollectionView, NSScrollView, _NSToolbarImageRepView, NSPopUpButton, NSButton, NSSegmentedControl, NSToolbarSnapshotWindow, NSBox, NSString;

@interface NSToolbarConfigPanel : NSPanel <NSCollectionViewDataSource, NSTouchBarCustomizationPaletteLayoutDelegate, NSCollectionViewDelegateFlowLayout, NSCollectionViewDelegate> {

	NSToolbar* _editedToolbar;
	double _widthOfWidgets;
	double _individualItemsMaxHeight;
	NSToolbar* _individualItemsToolbar;
	NSTextField* _individualItemsText;
	NSCollectionView* _individualItemsCollectionView;
	NSScrollView* _individualItemsScrollView;
	NSTextField* _defaultItemsText;
	_NSToolbarImageRepView* _defaultToolbarImageRep;
	NSTextField* _displayModeLabel;
	NSPopUpButton* _displayModePopUp;
	long long _desiredSheetWidth;
	NSButton* _useSmallIconsCheckBox;
	NSSegmentedControl* _displayModeSegmentedControl;
	NSToolbarSnapshotWindow* _snapshotWindow;
	NSBox* _defaultItemsContainer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_nibName;
+(id)toolbarConfigPanelForToolbar:(id)arg1 withWidth:(long long)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_loadData;
-(void)cancel:(id)arg1 ;
-(id)makeTouchBar;
-(void)ok:(id)arg1 ;
-(char)_addCursorRect:(CGRect)arg1 cursor:(id)arg2 forView:(id)arg3 ;
-(void)_finishInitialization;
-(char)preventsApplicationTerminationWhenModal;
-(unsigned long long)sheetBehavior;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3 ;
-(char)collectionView:(id)arg1 writeItemsAtIndexPaths:(id)arg2 toPasteboard:(id)arg3 ;
-(id)collectionView:(id)arg1 draggingImageForItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 dragOperation:(unsigned long long)arg4 ;
-(void)_setDefaultToolbarItemSetFromMenuItem:(id)arg1 ;
-(id)editedToolbar;
-(id)_createOffscreenDefaultImageRepSetWindow;
-(int)_setBackingStoreResolution:(double)arg1 ;
-(void)_loadDefaultSetImageRep;
-(void)_setUpTextField:(id)arg1 ;
-(void)_loadIndividualItemsCollectionView;
-(double)_spaceNeededForPaletteLabelsOfItem:(id)arg1 preferredWidth:(double)arg2 ;
-(void)_touchBarDisplayModeChanged:(id)arg1 ;
-(void)_updateTouchBarWithToolbarDisplayMode:(unsigned long long)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 minSizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 maxSizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

