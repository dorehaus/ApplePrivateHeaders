/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLPreviewTextOverlayController.h>

@interface QLPreviewPathOverlayController : QLPreviewTextOverlayController {

	id _eventMonitor;
	CGRect _visibleFrame;
	CGRect _hiddenFrame;

}

@property (retain) id eventMonitor;                  //@synthesize eventMonitor=_eventMonitor - In the implementation block
@property (assign) CGRect visibleFrame;              //@synthesize visibleFrame=_visibleFrame - In the implementation block
@property (assign) CGRect hiddenFrame;               //@synthesize hiddenFrame=_hiddenFrame - In the implementation block
-(void)createOverlay;
-(void)setShowOverlay:(char)arg1 ;
-(void)setPathString:(id)arg1 ;
-(void)_activateEventMonitor;
-(void)setVisibleFrame:(CGRect)arg1 ;
-(void)setHiddenFrame:(CGRect)arg1 ;
-(CGRect)hiddenFrame;
-(char)_hasPathString;
-(void)updateVisibleFrame;
-(void)dealloc;
-(id)init;
-(CGRect)visibleFrame;
-(id)eventMonitor;
-(void)setEventMonitor:(id)arg1 ;
@end

