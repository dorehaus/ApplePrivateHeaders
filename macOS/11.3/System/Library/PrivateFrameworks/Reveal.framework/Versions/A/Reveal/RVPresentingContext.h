/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Reveal.framework/Versions/A/Reveal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RVPresenterHighlightDelegate;
#import <Reveal/Reveal-Structs.h>
@class NSView, NSFindIndicator, NSArray;

@interface RVPresentingContext : NSObject {

	NSView* _view;
	id<RVPresenterHighlightDelegate> _highlightDelegate;
	CGRect _itemRectInView;
	NSFindIndicator* _highlight;
	NSArray* _itemRectsInView;
	CGPoint _pointerLocationInView;

}

@property (readonly) CGRect itemRectInView; 
@property (__weak,readonly) id<RVPresenterHighlightDelegate> highlightDelegate;              //@synthesize highlightDelegate=_highlightDelegate - In the implementation block
@property (__weak,readonly) NSView * view;                                                   //@synthesize view=_view - In the implementation block
@property (readonly) NSArray * itemRectsInView;                                              //@synthesize itemRectsInView=_itemRectsInView - In the implementation block
@property (readonly) CGPoint pointerLocationInView;                                          //@synthesize pointerLocationInView=_pointerLocationInView - In the implementation block
-(id)init;
-(NSView *)view;
-(unsigned long long)preferredEdge;
-(id)initWithPointerLocationInView:(CGPoint)arg1 inView:(id)arg2 highlightDelegate:(id)arg3 ;
-(void)startHighlightingItem:(id)arg1 ;
-(void)highlightItem:(id)arg1 withProgress:(double)arg2 ;
-(void)completeHighlightingItem:(id)arg1 ;
-(void)stopHighlightingItem:(id)arg1 ;
-(void)highlightRangeChangedForItem:(id)arg1 ;
-(NSArray *)itemRectsInView;
-(id)initEmpty;
-(void)updateRectsWithItem:(id)arg1 ;
-(CGRect)itemRectInView;
-(void)makeIndicatorWithDelegate:(id)arg1 item:(id)arg2 ;
-(void)removeIndicator;
-(id)transferIndicator;
-(void)restoreIndicator:(id)arg1 ;
-(void)drawAttributedStringItem:(id)arg1 forRect:(CGRect)arg2 ;
-(CGRect)highlightRectForAttributedStringItem:(id)arg1 atLocation:(CGPoint)arg2 options:(id)arg3 ;
-(id<RVPresenterHighlightDelegate>)highlightDelegate;
-(CGPoint)pointerLocationInView;
@end

