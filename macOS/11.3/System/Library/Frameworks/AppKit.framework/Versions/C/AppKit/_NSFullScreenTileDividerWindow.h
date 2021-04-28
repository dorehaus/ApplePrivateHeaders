/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class _NSFullScreenSpace, CALayer;

@interface _NSFullScreenTileDividerWindow : NSPanel {

	_NSFullScreenSpace* _space;
	unsigned long long _tileSpace;
	unsigned long long _direction;
	unsigned long long _verticalIndex;
	unsigned long long _horizontalIndex;
	char _overrideDrivingLiveResize;
	char _drivingLiveResize;
	char _liveResizeMoved;
	char _shouldAbortLiveResize;
	CGSize _spacing;
	CALayer* _grabBarLayer;

}

@property (assign) char overrideDrivingLiveResize;              //@synthesize overrideDrivingLiveResize=_overrideDrivingLiveResize - In the implementation block
+(id)tileGrabBarWithSize:(CGSize)arg1 ;
-(void)close;
-(void)disableAutomaticTermination;
-(void)enableAutomaticTermination;
-(id)space;
-(unsigned long long)direction;
-(void)_startLiveResizeWithOverlay:(char)arg1 ;
-(void)_forceOverlayPresentation;
-(void)_liveResizeToDividerLocation:(double)arg1 ;
-(void)_endLiveResizeAtDividerLocation:(double)arg1 ;
-(CGSize)spacing;
-(unsigned long long)parentSpaceID;
-(unsigned long long)tileSpaceID;
-(void)_setWindowTag;
-(CGRect)constrainFrameRect:(CGRect)arg1 toScreen:(id)arg2 ;
-(void)_updateManagedDisplay;
-(void)reshape;
-(id)_hitTestWithHysteresisCheck:(CGPoint)arg1 forEvent:(id)arg2 allowWindowDragging:(char*)arg3 ;
-(void)_setupOverlayWindowImmediately:(char)arg1 ;
-(void)_beginOverlayPresentationIfNeeded;
-(void)_updateOverlayWindow;
-(void)_removeOverlayWindow;
-(void)cancelOverlayAnimations;
-(void)setAsActiveTileDividerWindow;
-(void)abortLiveResize;
-(id)resizeCursor;
-(unsigned long long)verticalIndex;
-(unsigned long long)horizontalIndex;
-(id)initWithTileSpace:(unsigned long long)arg1 direction:(unsigned long long)arg2 space:(id)arg3 ;
-(char)performDividerDragWithEvent:(id)arg1 ;
-(char)shouldAbortLiveResize;
-(void)resizeToFiftyFifty;
-(char)drivingLiveResize;
-(char)overrideDrivingLiveResize;
-(void)setOverrideDrivingLiveResize:(char)arg1 ;
-(id)_grabber;
-(void)showRolloverState:(char)arg1 ;
-(void)showGrabBar;
-(void)hideGrabBar;
@end

