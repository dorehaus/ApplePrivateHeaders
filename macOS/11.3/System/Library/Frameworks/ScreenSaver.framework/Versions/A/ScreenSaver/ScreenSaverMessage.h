/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPanel, NSTextField, NSTimer, NSDate, NSScreen, NSString;

@interface ScreenSaverMessage : NSObject {

	NSPanel* _panel;
	NSTextField* _textField;
	NSTimer* _fadeTimer;
	NSDate* _fadeStartTime;
	NSDate* _startTime;
	NSScreen* _screen;
	NSString* _placement;
	double _duration;
	double _finalAlpha;

}
+(void)clearMessages;
+(id)currentMessage;
+(void)displayMessage:(id)arg1 onScreen:(id)arg2 duration:(double)arg3 ;
+(void)displayMessage:(id)arg1 onScreen:(id)arg2 duration:(double)arg3 alpha:(double)arg4 placement:(id)arg5 ;
+(void)displayMessage:(id)arg1 inLayer:(id)arg2 fontSize:(double)arg3 ;
-(void)dealloc;
-(id)_panel;
-(id)initWithScreen:(id)arg1 ;
-(void)_setDuration:(double)arg1 ;
-(void)_setFinalAlpha:(double)arg1 ;
-(void)_setPlacement:(id)arg1 ;
-(void)_displayMessage:(id)arg1 ;
-(void)_updateWindowLayout;
-(void)_fadeIn;
-(double)finalAlpha;
-(void)_fadeOut;
-(void)_animateFadeWindowIn;
-(void)_animateFadeWindowOut;
@end

