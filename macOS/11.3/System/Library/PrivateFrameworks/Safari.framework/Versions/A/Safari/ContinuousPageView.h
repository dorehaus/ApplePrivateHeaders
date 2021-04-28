/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@protocol ContinuousPageViewDelegate;
@class NSView;

@interface ContinuousPageView : NSView {

	char _inMiddleOfGesture;
	char _swipingToThePreviousPage;
	CGRect _currentPageViewFrameBeforeSwipe;
	char _didDeferNoteItemsChanged;
	unsigned long long _transitionToNextPageCount;
	char _handlingPageTransition;
	char _loadingPageItem;
	id<ContinuousPageViewDelegate> _delegate;
	id _currentPageItem;
	id _nextPageItem;
	NSView* _currentPageView;
	NSView* _nextPageView;
	NSView* _previousPageView;
	id _previousPageItem;

}

@property (nonatomic,retain) id currentPageItem;                                                         //@synthesize currentPageItem=_currentPageItem - In the implementation block
@property (nonatomic,retain) NSView * currentPageView;                                                   //@synthesize currentPageView=_currentPageView - In the implementation block
@property (nonatomic,retain) id previousPageItem;                                                        //@synthesize previousPageItem=_previousPageItem - In the implementation block
@property (nonatomic,retain) NSView * previousPageView;                                                  //@synthesize previousPageView=_previousPageView - In the implementation block
@property (nonatomic,retain) id nextPageItem;                                                            //@synthesize nextPageItem=_nextPageItem - In the implementation block
@property (nonatomic,retain) NSView * nextPageView;                                                      //@synthesize nextPageView=_nextPageView - In the implementation block
@property (nonatomic,__weak,readonly) id<ContinuousPageViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (getter=isHandlingPageTransition,nonatomic,readonly) char handlingPageTransition;              //@synthesize handlingPageTransition=_handlingPageTransition - In the implementation block
@property (getter=isLoadingPageItem,nonatomic,readonly) char loadingPageItem;                            //@synthesize loadingPageItem=_loadingPageItem - In the implementation block
@property (nonatomic,readonly) char shouldPreloadContinousReadingListWebView; 
+(id)backgroundColor;
-(id<ContinuousPageViewDelegate>)delegate;
-(char)handleScrollEvent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)loadItem:(id)arg1 ;
-(char)shouldPreloadContinousReadingListWebView;
-(id)nextPageItem;
-(void)setCurrentPageItem:(id)arg1 ;
-(void)setPreviousPageItem:(id)arg1 ;
-(void)setNextPageItem:(id)arg1 ;
-(void)setCurrentPageView:(NSView *)arg1 ;
-(void)setPreviousPageView:(NSView *)arg1 ;
-(void)setNextPageView:(NSView *)arg1 ;
-(void)_willTransitionToPageView:(id)arg1 pageItem:(id)arg2 ;
-(void)noteItemsChanged;
-(id)currentPageItem;
-(char)isHandlingPageTransition;
-(void)_updateNextPageItem;
-(void)_updatePreviousPageItem;
-(void)updatePageViewsLayout;
-(id)previousPageItem;
-(void)_startSwipeGestureWithScrollEvent:(id)arg1 ;
-(CGRect)_previousViewFrame;
-(CGRect)_nextViewFrame;
-(NSView *)nextPageView;
-(NSView *)currentPageView;
-(NSView *)previousPageView;
-(void)_layOutViewsAtSwipeProgress:(double)arg1 bannerIsVisibleInBothPages:(char)arg2 ;
-(void)_didTransitionToPreviousPage;
-(void)_didTransitionToNextPage;
-(void)_transitionToPageViewWasCanceled:(id)arg1 pageItem:(id)arg2 ;
-(void)webKitDidNotHandleScrollEvent:(id)arg1 ;
-(char)isLoadingPageItem;
@end

