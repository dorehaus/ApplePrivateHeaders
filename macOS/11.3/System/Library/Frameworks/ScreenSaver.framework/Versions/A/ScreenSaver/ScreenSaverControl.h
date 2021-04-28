/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ScreenSaverControl
@property (readonly) char screenSaverIsRunning; 
@property (assign) char screenSaverCanRun; 
@property (readonly) double screenSaverTimeRemaining; 
@property (readonly) char screenSaverIsRunningInBackground; 
@required
-(char)screenSaverIsRunning;
-(void)screenSaverStartNow;
-(void)screenSaverStopNow;
-(void)screenSaverStopNowWithOptions:(id)arg1;
-(void)restartForUser:(id)arg1;
-(void)screenSaverDidFadeInBackground:(char)arg1 psnHi:(unsigned)arg2 psnLow:(unsigned)arg3;
-(char)screenSaverCanRun;
-(void)setScreenSaverCanRun:(char)arg1;
-(double)screenSaverTimeRemaining;
-(char)screenSaverIsRunningInBackground;

@end

