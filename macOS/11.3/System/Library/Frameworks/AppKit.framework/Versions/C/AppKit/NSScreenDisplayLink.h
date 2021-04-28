/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSDisplayLink1.h>

@interface NSScreenDisplayLink : NSDisplayLink1 {

	long long _screenNumber;
	/*^block*/id _handler;
	CFRunLoopTimerRef _timer;
	os_unfair_lock_s _lock;
	unsigned long long _scheduleCount;
	unsigned long long _targetTime;
	unsigned _paused : 1;
	unsigned _firing : 1;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)isValid;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)timestamp;
-(double)duration;
-(char)isPaused;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setPaused:(char)arg1 ;
-(void)_fire;
-(void)_schedule;
-(id)initWithScreen:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

