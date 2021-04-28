/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSViewToolTipOwner.h>

@class NSTableHeaderData, NSTableView, NSImage, NSString;

@interface NSTableHeaderView : NSView <NSViewToolTipOwner> {

	NSTableHeaderData* _viewData;
	long long _pressedColumn;
	unsigned _drawsBackground : 1;
	unsigned _isColumnResizing : 1;
	unsigned _alignTitleWithDataCell : 1;
	unsigned _nextColumnAfterDrawnOneIsSelected : 1;
	unsigned _wantsTranslucency : 1;
	unsigned _addedBlurToClipView : 1;
	unsigned _usedNewHeight : 1;
	long long _resizedColumn;
	NSTableView* _tableView;
	long long _draggedColumn;
	NSImage* _headerDragImage;
	double _draggedDistance;
	unsigned _showHandCursorFired : 1;
	unsigned _toolTipRectsDirty : 1;
	char _skipDrawingSeparator;

}

@property (__weak) NSTableView * tableView; 
@property (readonly) long long draggedColumn; 
@property (readonly) double draggedDistance; 
@property (readonly) long long resizedColumn; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)resetCursorRects;
-(char)isFlipped;
-(char)allowsVibrancy;
-(char)isOpaque;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(id)accessibilityParentAttribute;
-(void)setDrawsBackground:(char)arg1 ;
-(id)_preferredAppearance;
-(void)mouseDown:(id)arg1 ;
-(id)_backgroundView;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(NSTableView *)tableView;
-(id)accessibilityHelpStringForChild:(id)arg1 ;
-(char)accessibilityIsChildFocusable:(id)arg1 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(void)setLayer:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(void)drawRect:(CGRect)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)_removeBackgroundView;
-(void)_setBackgroundView:(id)arg1 ;
-(long long)draggedColumn;
-(void)_windowChangedKeyState;
-(id)_lastDraggedEventFollowing:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)_resizeColumn:(long long)arg1 withEvent:(id)arg2 ;
-(char)drawsBackground;
-(void)viewDidMoveToSuperview;
-(void)_finishedMakingConnections;
-(int)_vibrancyBlendMode;
-(void)drawBackgroundOverhangInRect:(CGRect)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(char)_wantsClipViewToDoOverhangViews;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)setTableView:(NSTableView *)arg1 ;
-(void)_switchToViewBasedIfNeeded;
-(long long)columnAtPoint:(CGPoint)arg1 ;
-(unsigned long long)_vibrantBlendingStyleForSubtree;
-(void)_invalidateToolTipRects;
-(void)_invalidateOrComputeNewCursorRectsIfNecessary;
-(char)_canUseReorderResizeImageCache;
-(id)accessibilityChildForColumn:(id)arg1 ;
-(CGRect)headerRectOfColumn:(long long)arg1 ;
-(char)_canSupportTallerHeight;
-(char)_drawingEndSeparator;
-(char)_hasTranslucency;
-(char)_nextColumnAfterOneBeingDrawnIsSelected;
-(char)_alignTitleWithDataCell;
-(double)_defaultHeight;
-(void)_setOverflowHeaderCellPrototype:(id)arg1 ;
-(id)_overflowHeaderCellPrototype;
-(id)_preparedHeaderFillerCell;
-(void)_drawHeaderCell:(id)arg1 withFrame:(CGRect)arg2 withStateFromColumn:(long long)arg3 ;
-(void)_drawHeaderFillerInRect:(CGRect)arg1 ;
-(id)_preparedHeaderCellAtColumn:(long long)arg1 ;
-(char)_nextColumnDrawsLeftSeparatorFromColumn:(long long)arg1 ;
-(id)_overflowRectsForBounds:(CGRect)arg1 ;
-(void)_updateBackgroundViewFrame;
-(void)_invalidateRightMostLineIfNeeded;
-(void)_drawHeaderOfColumn:(long long)arg1 ;
-(void)_showOpenHandCursor:(id)arg1 ;
-(void)_cancelDelayedShowOpenHandCursor;
-(CGRect)_headerRectForInvalidation:(long long)arg1 ;
-(void)_scheduleDelayedShowOpenHandCursorIfNecessary;
-(void)_unshowOpenHandCursor:(id)arg1 ;
-(void)_doModifySelectionWithEvent:(id)arg1 onColumn:(long long)arg2 ;
-(void)_drawHeaderDragImageForColumn:(long long)arg1 ;
-(void)_beginDraggingColumn:(long long)arg1 ;
-(void)_endDraggingColumn:(long long)arg1 ;
-(void)_dropTableViewOverdrawIfNecessary;
-(void)_setNeedsDisplayForDraggedDelta:(double)arg1 ;
-(id)_lastDraggedOrUpEventFollowing:(id)arg1 canceled:(char*)arg2 ;
-(id)_resizeCursorForTableColumn:(id)arg1 ;
-(void)_windowKeyChanged:(id)arg1 ;
-(void)_stopObservingKeyWindow;
-(void)_old_encodeWithCoder_NSTableHeaderView:(id)arg1 ;
-(long long)resizedColumn;
-(char)_supportsViewsForAnimations;
-(void)_addOrRemoveBlurViewAsNecessary;
-(void)_updateClipViewBackgroundColors;
-(char)_wantsTranslucency;
-(char)_viewOverridesDrawing;
-(id)_makeBlurBackgroundViewWithFrame:(CGRect)arg1 ;
-(void)_resetToolTipRects;
-(void)_viewBasedRawRect:(CGRect)arg1 ;
-(void)_drawOverflowHeaderInRect:(CGRect)arg1 ;
-(void)_drawColumnHeaderWithIndexes:(id)arg1 ;
-(long long)_resizeableColumnAtPoint:(CGPoint)arg1 ;
-(char)_trackAndModifySelectionWithEvent:(id)arg1 onColumn:(long long)arg2 stopOnReorderGesture:(char*)arg3 ;
-(void)_reorderColumn:(long long)arg1 withEvent:(id)arg2 ;
-(CGRect)_unobstructedVisibleHeaderRectOfColumn:(long long)arg1 ;
-(CGRect)_cursorRectForColumn:(long long)arg1 ;
-(long long)_previousNonHiddenColumnStartingAtColumn:(long long)arg1 ;
-(void)_startObservingKeyWindow:(id)arg1 ;
-(void)_tableView:(id)arg1 willAddTableColumn:(id)arg2 ;
-(void)_tableView:(id)arg1 didAddTableColumn:(id)arg2 ;
-(void)_tableView:(id)arg1 willRemoveTableColumn:(id)arg2 ;
-(void)_tableView:(id)arg1 didRemoveTableColumnAtIndex:(long long)arg2 ;
-(char)_layoutIsSameAsCachedLayoutWithFrame:(CGRect)arg1 ;
-(char)_isColumnResizing;
-(char)_isColumnReordering;
-(void)_switchToNonViewBasedIfNeeded;
-(void)_setWantsTranslucency:(char)arg1 ;
-(double)draggedDistance;
-(void)_setAlignTitleWithDataCell:(char)arg1 ;
-(void)_didMoveFromColumn:(long long)arg1 toColumn:(long long)arg2 animated:(char)arg3 ;
-(void)_endDraggingColumn:(long long)arg1 animated:(char)arg2 ;
-(void)_updateColumnViewWidthsAnimated:(char)arg1 ;
-(unsigned long long)accessibilityColumnForChild:(id)arg1 ;
@end

