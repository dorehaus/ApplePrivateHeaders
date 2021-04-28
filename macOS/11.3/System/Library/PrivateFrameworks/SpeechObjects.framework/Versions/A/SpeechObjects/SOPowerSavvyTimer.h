/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSTimer.h>

@class NSTimer;

@interface SOPowerSavvyTimer : NSTimer {

	NSTimer* _timer;
	char _repeats;
	id _target;
	SEL _selector;

}

@property (nonatomic,retain) NSTimer * timer;              //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) char repeats;                 //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,retain) id target;                    //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                 //@synthesize selector=_selector - In the implementation block
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 ;
+(void)requestTarget:(id)arg1 performSelector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4 ;
-(void)dealloc;
-(SEL)selector;
-(id)userInfo;
-(void)invalidate;
-(char)isValid;
-(id)fireDate;
-(double)timeInterval;
-(void)setFireDate:(id)arg1 ;
-(void)fire;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(char)repeats;
-(void)setRepeats:(char)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)_target:(id)arg1 ;
@end
