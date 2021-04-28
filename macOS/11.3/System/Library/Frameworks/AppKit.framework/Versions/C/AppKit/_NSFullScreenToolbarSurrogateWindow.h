/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSWindow.h>

@class NSWindow;

@interface _NSFullScreenToolbarSurrogateWindow : NSWindow {

	NSWindow* _realWindow;

}
-(void)dealloc;
-(char)canEnterFullScreenMode;
-(void)performClose:(id)arg1 ;
-(void)becomeKeyWindow;
-(void)toggleFullScreen:(id)arg1 ;
-(void)becomeMainWindow;
-(id)initSurrogateForWindow:(id)arg1 ;
-(void)addChildWindow:(id)arg1 ordered:(long long)arg2 ;
-(void)removeChildWindow:(id)arg1 ;
-(void)_close:(id)arg1 ;
-(void)_startWindowDragWithEvent:(id)arg1 options:(unsigned long long)arg2 animate:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)realWindowExitedFullScreenNotification:(id)arg1 ;
-(void)realWindowKeyChangedNotification:(id)arg1 ;
-(char)hasKeyAppearanceIncludingSheets:(char)arg1 ;
@end
