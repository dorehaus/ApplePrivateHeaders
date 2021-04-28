/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSWindow.h>

@class NSView;

@interface IGPopupWindow : NSWindow {

	NSView* _controlView;
	char _hasCloseBox;

}
+(id)popupWindowWithView:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)orderOut:(id)arg1 ;
-(char)canBecomeKeyWindow;
-(char)hasShadow;
-(id)initWithView:(id)arg1 ;
-(double)animationResizeTime:(CGRect)arg1 ;
-(char)hasCloseBox;
-(void)showControlView;
-(void)hideControlView;
-(void)setHasCloseBox:(char)arg1 ;
@end

