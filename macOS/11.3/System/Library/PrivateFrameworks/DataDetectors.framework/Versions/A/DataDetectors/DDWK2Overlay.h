/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDHighlightsDelegate, DDHighlightsDataSource;
#import <DataDetectors/DataDetectors-Structs.h>
@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, DDBasicHighlightsView;

@interface DDWK2Overlay : NSObject {

	OpaqueWKBundlePageOverlayRef _overlay;
	OpaqueWKBundlePageRef _clientPage;
	id<DDHighlightsDelegate> _delegate;
	id<DDHighlightsDataSource> _dataSource;
	NSArray* _highlightedObjects;
	NSMapTable* _objectsToArrowlessViewMapping;
	NSMutableArray* _highlightQueue;
	NSMutableArray* _subviews;
	NSMutableSet* _trackingAreas;
	NSMutableSet* _enteredTrackingAreas;
	DDBasicHighlightsView* _clickedView;
	CGAffineTransform _transform;
	CGRect _visibleRect;
	char _alwaysShowHighlights;
	char _relayoutInProgress;
	char _needsLayout;

}

@property (__weak) id<DDHighlightsDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<DDHighlightsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) NSMutableArray * subviews;                          //@synthesize subviews=_subviews - In the implementation block
@property (retain) NSMutableSet * trackingAreas;                       //@synthesize trackingAreas=_trackingAreas - In the implementation block
@property (retain) NSMutableSet * enteredTrackingAreas;                //@synthesize enteredTrackingAreas=_enteredTrackingAreas - In the implementation block
@property (retain) DDBasicHighlightsView * clickedView;                //@synthesize clickedView=_clickedView - In the implementation block
-(void)dealloc;
-(id)init;
-(id<DDHighlightsDelegate>)delegate;
-(void)setDelegate:(id<DDHighlightsDelegate>)arg1 ;
-(void)addSubview:(id)arg1 ;
-(id<DDHighlightsDataSource>)dataSource;
-(void)setDataSource:(id<DDHighlightsDataSource>)arg1 ;
-(NSMutableArray *)subviews;
-(void)removeTrackingArea:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)deactivate;
-(void)setSubviews:(NSMutableArray *)arg1 ;
-(NSMutableSet *)trackingAreas;
-(void)reloadHighlights;
-(void)switchOffHighlights;
-(void)setNeedsRelayout;
-(void)setAlwaysShowHighlights:(char)arg1 ;
-(void)installInPage:(OpaqueWKBundlePageRef)arg1 ;
-(void)setState:(int)arg1 forHighlightView:(id)arg2 disableAnimation:(char)arg3 ;
-(void)recomputeLayout;
-(void)setAllState:(int)arg1 disableAnimations:(char)arg2 ;
-(void)setHighlightedObjects:(id)arg1 ;
-(void)removeAllTrackingAreas;
-(void)_addMultiViewForObject:(id)arg1 withArrow:(char)arg2 availableViews:(id)arg3 ;
-(void)updateHighlightStatesForMousePosition;
-(void)addTrackingArea:(id)arg1 alreadyInside:(char)arg2 ;
-(void)_setTrackingAreaForBasicHighlight:(id)arg1 entering:(char)arg2 ignoreCleanup:(char)arg3 ;
-(void)setClickedView:(DDBasicHighlightsView *)arg1 ;
-(NSMutableSet *)enteredTrackingAreas;
-(void)handleMouseClick:(char)arg1 onTriangle:(char)arg2 onView:(id)arg3 ;
-(DDBasicHighlightsView *)clickedView;
-(void)_mouseEnteredBasicHLView:(id)arg1 withRelatedObjects:(id)arg2 ;
-(void)_mouseExitedBasicHLView:(id)arg1 withInfos:(id)arg2 ;
-(void)mouseExited:(id)arg1 location:(CGPoint)arg2 ;
-(BOOL)mouseMovedTo:(WKPoint)arg1 ;
-(void)setTrackingAreas:(NSMutableSet *)arg1 ;
-(void)setEnteredTrackingAreas:(NSMutableSet *)arg1 ;
-(void)removeHighlights;
-(void)hideHighlights;
-(void)willMoveToPage:(OpaqueWKBundlePageRef)arg1 ;
-(void)didMoveToPage:(OpaqueWKBundlePageRef)arg1 ;
-(void)drawDirtyRect:(WKRect)arg1 inContext:(void*)arg2 ;
-(id)hitView;
-(id)actionContextForResultAtPoint:(WKPoint)arg1 rangeHandle:(const OpaqueWKBundleRangeHandle*)arg2 ;
-(BOOL)mouseDownAt:(WKPoint)arg1 button:(int)arg2 ;
-(BOOL)mouseUpAt:(WKPoint)arg1 button:(int)arg2 ;
-(BOOL)mouseDraggedTo:(WKPoint)arg1 button:(int)arg2 ;
-(char)accessibilityDataDetectorExistsAtPoint:(CGPoint)arg1 ;
-(id)accessibilityDataDetectorTypeAtPoint:(CGPoint)arg1 ;
-(char)accessibilityShowDataDetectorMenuAtPoint:(CGPoint)arg1 ;
@end
