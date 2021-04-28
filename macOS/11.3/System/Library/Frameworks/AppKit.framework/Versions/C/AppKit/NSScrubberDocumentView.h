/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NSScrubberItemLayout, NSScrubberSelectionLayout;
@class NSScrubber, NSView, NSScrubberLayout, NSMutableDictionary, NSSet, NSMutableSet, NSArray, NSScrubberSelectionStyle, NSIndexSet, NSDictionary;

@interface NSScrubberDocumentView : NSView {

	NSScrubber* _scrubber;
	NSView* _contentView;
	NSScrubberLayout* _scrubberLayout;
	id<NSScrubberItemLayout> _itemLayout;
	id<NSScrubberSelectionLayout> _selectionLayout;
	NSMutableDictionary* _registeredViewClasses;
	NSMutableDictionary* _registeredViewNibs;
	NSMutableDictionary* _itemViewMap;
	NSMutableDictionary* _reuseQueue;
	NSSet* _currentItemLayoutAttributes;
	NSMutableDictionary* _selectionPairMap;
	NSMutableSet* _selectionPairsAnimatingOut;
	NSSet* _currentSelectionLayoutAttributes;
	NSArray* _pendingItemTransitions;
	NSArray* _pendingSelectionTransitions;
	SCD_Struct_NS67 _pendingScrollPin;
	NSSet* _pendingItemLayoutAttributes;
	NSSet* _pendingSelectionLayoutAttributes;
	NSScrubberSelectionStyle* _selectionBackground;
	NSScrubberSelectionStyle* _selectionOverlay;
	NSIndexSet* _forcedItemIndexes;
	SCD_Struct_NS66 _modelState;
	SCD_Struct_NS66 _proxyState;
	long long _numberOfItems;
	long long _pinnedItemAlignment;
	long long _pinnedItemIndex;
	NSRange _lastKnownVisibleRange;
	double _endcapCornerRadius;
	unsigned _observingScrollBounds : 1;
	unsigned _needsItemLayout : 1;
	unsigned _animatingLayout : 1;
	unsigned _adjustingScroll : 1;
	unsigned _isRTL : 1;
	unsigned _floatsSelection : 1;
	unsigned _animatingSelections : 1;

}

@property (assign) SCD_Struct_NS65 modelState; 
@property (retain) id<NSScrubberItemLayout> itemLayout;                         //@synthesize itemLayout=_itemLayout - In the implementation block
@property (retain) id<NSScrubberSelectionLayout> selectionLayout;               //@synthesize selectionLayout=_selectionLayout - In the implementation block
@property (retain) NSMutableDictionary * itemViewMap;                           //@synthesize itemViewMap=_itemViewMap - In the implementation block
@property (retain) NSMutableDictionary * selectionPairMap;                      //@synthesize selectionPairMap=_selectionPairMap - In the implementation block
@property (copy) NSSet * currentItemLayoutAttributes;                           //@synthesize currentItemLayoutAttributes=_currentItemLayoutAttributes - In the implementation block
@property (copy) NSSet * currentSelectionLayoutAttributes;                      //@synthesize currentSelectionLayoutAttributes=_currentSelectionLayoutAttributes - In the implementation block
@property (copy) NSArray * pendingItemTransitions;                              //@synthesize pendingItemTransitions=_pendingItemTransitions - In the implementation block
@property (copy) NSArray * pendingSelectionTransitions;                         //@synthesize pendingSelectionTransitions=_pendingSelectionTransitions - In the implementation block
@property (copy) NSSet * pendingItemLayoutAttributes;                           //@synthesize pendingItemLayoutAttributes=_pendingItemLayoutAttributes - In the implementation block
@property (copy) NSSet * pendingSelectionLayoutAttributes;                      //@synthesize pendingSelectionLayoutAttributes=_pendingSelectionLayoutAttributes - In the implementation block
@property (assign) char animatingSelections; 
@property (assign) SCD_Struct_NS67 pendingScrollPin;                            //@synthesize pendingScrollPin=_pendingScrollPin - In the implementation block
@property (__weak) NSScrubber * scrubber;                                       //@synthesize scrubber=_scrubber - In the implementation block
@property (retain) NSScrubberLayout * scrubberLayout; 
@property (retain) NSScrubberSelectionStyle * selectionBackground; 
@property (retain) NSScrubberSelectionStyle * selectionOverlay; 
@property (readonly) NSView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (readonly) CGRect rectInClip; 
@property (assign) long long numberOfItems; 
@property (assign) long long selectedIndex; 
@property (assign) long long highlightedIndex; 
@property (assign) char floatsSelection; 
@property (assign) SCD_Struct_NS65 proxyState;                                  //@synthesize proxyState=_proxyState - In the implementation block
@property (assign) double endcapCornerRadius;                                   //@synthesize endcapCornerRadius=_endcapCornerRadius - In the implementation block
@property (copy) NSIndexSet * requiredPopulatedItemIndexes; 
@property (readonly) NSDictionary * registeredViewClasses;                      //@synthesize registeredViewClasses=_registeredViewClasses - In the implementation block
@property (readonly) NSDictionary * registeredViewNibs;                         //@synthesize registeredViewNibs=_registeredViewNibs - In the implementation block
+(id)keyPathsForValuesInvalidatingLayout;
-(void)dealloc;
-(void)layout;
-(long long)numberOfItems;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSView *)contentView;
-(void)setScrubberLayout:(NSScrubberLayout *)arg1 ;
-(void)registerNib:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)setScrubber:(NSScrubber *)arg1 ;
-(void)setEndcapCornerRadius:(double)arg1 ;
-(void)updateItemLayoutObject;
-(void)updateSelectionLayoutObject;
-(NSScrubberLayout *)scrubberLayout;
-(NSDictionary *)registeredViewNibs;
-(void)viewDidMoveToWindow;
-(void)setNumberOfItems:(long long)arg1 ;
-(NSScrubberSelectionStyle *)selectionOverlay;
-(void)setSelectionOverlay:(NSScrubberSelectionStyle *)arg1 ;
-(NSScrubberSelectionStyle *)selectionBackground;
-(void)setSelectionBackground:(NSScrubberSelectionStyle *)arg1 ;
-(char)floatsSelection;
-(void)setFloatsSelection:(char)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(SCD_Struct_NS65)proxyState;
-(long long)highlightedIndex;
-(void)setHighlightedIndex:(long long)arg1 ;
-(void)scrollItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 ;
-(id)viewForItemAtIndex:(long long)arg1 creatingIfNeeded:(char)arg2 ;
-(double)endcapCornerRadius;
-(void)invalidateEverythingAndReload;
-(id)snapshotForPendingChanges;
-(void)executePendingChanges:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerClass:(Class)arg1 forItemIdentifier:(id)arg2 ;
-(id)makeItemWithIdentifier:(id)arg1 owner:(id)arg2 ;
-(NSEdgeInsets)contentViewInsetsForContentSize:(CGSize)arg1 ;
-(void)adjustForContentSize:(CGSize)arg1 contentInsets:(NSEdgeInsets)arg2 ;
-(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
-(void)clearPinnedItem;
-(char)itemAtPoint:(CGPoint)arg1 index:(long long*)arg2 frame:(CGRect*)arg3 ;
-(void)updateForTrackingPoint:(CGPoint)arg1 isTrackingSelection:(char)arg2 ;
-(void)setSuppressScrollCorrection:(char)arg1 ;
-(char)itemNearestToPoint:(CGPoint)arg1 index:(long long*)arg2 frame:(CGRect*)arg3 ;
-(CGPoint)scrollPointAligningItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 forSelectedIndex:(long long)arg3 approximatedScrollPoint:(CGPoint)arg4 ;
-(CGPoint)scrollPointAligningItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 ;
-(void)pinItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 ;
-(long long)indexForItemView:(id)arg1 ;
-(void)setProxyState:(SCD_Struct_NS65)arg1 ;
-(CGRect)rectInClip;
-(id)populatedItemViews;
-(Class)_animatorClass;
-(void)viewDidMoveToSuperview;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)clipFrameDidChange:(id)arg1 ;
-(void)clipBoundsDidChange:(id)arg1 ;
-(void)visibleContentRectDidChange;
-(void)setNeedsItemLayout;
-(CGRect)calculateVisibleContentRect;
-(SCD_Struct_NS65)modelState;
-(SCD_Struct_NS67)calculatePinningConfigurationForState:(SCD_Struct_NS65)arg1 ;
-(void)applyPinningConfiguration:(SCD_Struct_NS67)arg1 ;
-(void)updateSelectionForContinuousFree;
-(void)setModelState:(SCD_Struct_NS65)arg1 ;
-(NSScrubber *)scrubber;
-(id)attributesNearestToPoint:(CGPoint)arg1 ;
-(id)cachedAttributesForItemAtIndex:(long long)arg1 ;
-(id<NSScrubberSelectionLayout>)selectionLayout;
-(NSSet *)currentItemLayoutAttributes;
-(NSSet *)currentSelectionLayoutAttributes;
-(void)applySelectionAttributes:(id)arg1 startingAttributes:(id)arg2 withState:(SCD_Struct_NS65)arg3 ;
-(void)setCurrentSelectionLayoutAttributes:(NSSet *)arg1 ;
-(CGRect)visibleContentRectForPinningConfiguration:(SCD_Struct_NS67)arg1 ;
-(void)resetSelectionPairs;
-(void)setSelectionPairMap:(NSMutableDictionary *)arg1 ;
-(id<NSScrubberItemLayout>)itemLayout;
-(void)setItemLayout:(id<NSScrubberItemLayout>)arg1 ;
-(void)setSelectionLayout:(id<NSScrubberSelectionLayout>)arg1 ;
-(id)_presentationLayoutAttributesForItemAttributes:(id)arg1 ;
-(id)createItemViewForIndex:(long long)arg1 ;
-(id)makeSelectionPairForItemView:(id)arg1 withIndex:(long long)arg2 ;
-(void)prepareForItemTransitions:(id)arg1 ;
-(void)prepareForSelectionTransitions:(id)arg1 ;
-(void)setPendingItemLayoutAttributes:(NSSet *)arg1 ;
-(void)setPendingSelectionLayoutAttributes:(NSSet *)arg1 ;
-(void)cleanupAfterItemTransitions:(id)arg1 ;
-(void)setPendingItemTransitions:(NSArray *)arg1 ;
-(void)cleanupAfterSelectionTransitions:(id)arg1 ;
-(void)setPendingSelectionTransitions:(NSArray *)arg1 ;
-(void)sortScrubberSubviews;
-(void)performPendingTransitionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAnimatingSelections:(char)arg1 ;
-(void)_setSelectedIndex:(long long)arg1 ;
-(void)_setHighlightedIndex:(long long)arg1 ;
-(void)layoutScrubberContentsAnimated:(char)arg1 ;
-(NSSet *)pendingItemLayoutAttributes;
-(id)itemTransitionsFromAttributes:(id)arg1 toAttributes:(id)arg2 withState:(SCD_Struct_NS65)arg3 ;
-(id)_presentationLayoutAttributesForLayoutAttributes:(id)arg1 ;
-(id)selectionTransitionsFromAttributes:(id)arg1 toAttributes:(id)arg2 presentationItemAttributes:(id)arg3 newItemAttributes:(id)arg4 ;
-(NSArray *)pendingItemTransitions;
-(void)applyItemAttributes:(id)arg1 startingAttributes:(id)arg2 withState:(SCD_Struct_NS65)arg3 ;
-(NSArray *)pendingSelectionTransitions;
-(void)updateCornerMaskingForState:(SCD_Struct_NS65)arg1 ;
-(void)setCurrentItemLayoutAttributes:(NSSet *)arg1 ;
-(id)selectionPairForItemAtIndex:(long long)arg1 creatingIfNeeded:(char)arg2 ;
-(NSSet *)pendingSelectionLayoutAttributes;
-(void)performItemTransitions:(id)arg1 withState:(SCD_Struct_NS65)arg2 ;
-(void)performSelectionTransitions:(id)arg1 withState:(SCD_Struct_NS65)arg2 ;
-(void)retargetSelectionPairsAnimatingOut;
-(id)_preferredSuperviewForTransition:(id)arg1 ;
-(void)addItemView:(id)arg1 toSuperview:(id)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 toItemView:(id)arg2 ;
-(void)setItemViewMap:(NSMutableDictionary *)arg1 ;
-(void)recycleView:(id)arg1 ;
-(id)_preferredSuperviewForAttributes:(id)arg1 ;
-(NSIndexSet *)requiredPopulatedItemIndexes;
-(CGPoint)scrollPointAligningItemAtIndex:(long long)arg1 toAlignment:(long long)arg2 forState:(SCD_Struct_NS65)arg3 ;
-(SCD_Struct_NS67)pendingScrollPin;
-(void)setPendingScrollPin:(SCD_Struct_NS67)arg1 ;
-(char)animatingSelections;
-(void)setRequiredPopulatedItemIndexes:(NSIndexSet *)arg1 ;
-(NSMutableDictionary *)itemViewMap;
-(NSMutableDictionary *)selectionPairMap;
-(NSDictionary *)registeredViewClasses;
@end

