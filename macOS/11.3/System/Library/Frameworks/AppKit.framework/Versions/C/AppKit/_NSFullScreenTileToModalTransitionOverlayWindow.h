/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSFullScreenTileResizeCrossfadeOverlayWindow.h>

@class CALayer;

@interface _NSFullScreenTileToModalTransitionOverlayWindow : _NSFullScreenTileResizeCrossfadeOverlayWindow {

	CALayer* _tabHeaderLayer;
	CALayer* _tabHeaderBackgroundLayer;
	CALayer* _afterTabBarBackgroundLayer;
	CALayer* _afterTabBarDividerLayer;
	CGRect _remainingTileStartingFrame;
	CGRect _tabBarScreenRect;
	CGRect _tileToolbarStartingFrame;
	CGRect _tabWindowScreenRect;

}
-(void)dealloc;
-(id)windowIDsForCaptureOnSpace:(unsigned long long)arg1 ;
-(CGRect)closingTileTargetFrame;
-(void)configureAnimationToFinalStateWithDuration:(double)arg1 ;
-(void)captureBeforeWindowsUsingTileFrame:(CGRect)arg1 ;
-(void)captureAfterWindowsUsingTileFrame:(CGRect)arg1 collapsedTabWindow:(id)arg2 ;
@end
