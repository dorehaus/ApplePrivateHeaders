/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSMapTable, NSPointerArray, NSVisualEffectView;

@interface NSSheetEffectDimmingView : NSView {

	NSMapTable* _percentShownMapping;
	NSPointerArray* _observedViews;
	CGRect _reservedRect;
	double _maskBackingScaleFactor;
	NSVisualEffectView* _topView;
	NSVisualEffectView* _mlView;
	NSVisualEffectView* _mcView;
	NSVisualEffectView* _mrView;
	NSVisualEffectView* _bottomView;

}
-(void)dealloc;
-(void)updateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)accessibilityIsIgnored;
-(void)_updateMask;
-(void)_rebuildMask;
-(double)_effectivePercentShown;
-(id)_viewsToPunchOutForWindow:(id)arg1 ;
-(CGRect)_observedViewsReservedRect;
-(void)_adjustMaterialFrames;
-(void)setPercentShown:(double)arg1 forMoveHelper:(id)arg2 ;
-(char)isShown;
-(id)contributingMoveHelpers;
@end
