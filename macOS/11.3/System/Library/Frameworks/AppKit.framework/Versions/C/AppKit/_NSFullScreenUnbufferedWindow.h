/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSBorderlessLayerTreeProjectionWindow.h>

@class NSColor;

@interface _NSFullScreenUnbufferedWindow : _NSBorderlessLayerTreeProjectionWindow {

	char _useBlurredBackground;

}

@property (copy) NSColor * customColor; 
-(char)canEnterFullScreenMode;
-(char)_ignoreForFullScreenTransition;
-(void)_setWindowTag;
-(void)invalidateRestorableState;
-(id)_createContentViewWithFrame:(CGRect)arg1 customColor:(id)arg2 ;
-(id)initWithContentRect:(CGRect)arg1 screen:(id)arg2 customColor:(id)arg3 useBlurredBackground:(char)arg4 ;
-(void)setCustomColor:(NSColor *)arg1 ;
-(NSColor *)customColor;
@end

