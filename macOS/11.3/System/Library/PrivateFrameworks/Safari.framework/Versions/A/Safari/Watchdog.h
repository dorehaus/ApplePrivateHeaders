/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSString, NSCondition, NSLock;

@interface Watchdog : NSObject {

	char shouldStop;
	double watchdogInterval;
	NSTimer* watchdogTimer;
	NSTimer* unresponsiveWebProcessTimer;
	NSString* unresponsiveProcess;
	NSTimer* profilerTimer;
	NSCondition* watchdogCondition;
	NSLock* samplingLock;

}
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
-(void)checkIn;
-(void)webProcessDidBecomeUnresponsive;
-(void)setWatchdogInterval:(double)arg1 ;
-(void)finishProfiling;
-(void)terminateUnresponsiveProcess;
-(void)clearProfilerTimer;
-(void)handleWebProcessHang;
-(void)clearUnresponsiveWebProcessTimer;
-(char)handleHang;
-(void)handleSafariHang;
-(void)runWatchdog;
-(id)sampleOutput;
-(double)watchdogInterval;
@end
