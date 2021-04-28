/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface WBSDispatchSourceTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	char _repeats;
	double _interval;
	double _startDelay;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) double interval;                        //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double startDelay;                      //@synthesize startDelay=_startDelay - In the implementation block
@property (nonatomic,readonly) char repeats;                           //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy,readonly) id handler;                        //@synthesize handler=_handler - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
+(id)scheduledTimerWithInterval:(double)arg1 repeats:(char)arg2 handler:(/*^block*/id)arg3 ;
+(id)scheduledRepeatingTimerWithStartDelay:(double)arg1 interval:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(id)handler;
-(double)interval;
-(char)repeats;
-(void)_scheduleTimer;
-(void)schedule;
-(id)_initWithStartDelay:(double)arg1 interval:(double)arg2 repeats:(char)arg3 handler:(/*^block*/id)arg4 ;
-(void)resetFireDate;
-(double)startDelay;
@end

