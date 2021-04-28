/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXETimer.h>

@protocol AXEMockTimerDelegate;
@class NSString;

@interface AXEMockTimer : NSObject <AXETimer> {

	char _valid;
	char __repeats;
	id<AXEMockTimerDelegate> _delegate;
	id _userInfo;
	double _timeInterval;
	double _nextFireTime;
	id __target;
	SEL __selector;
	double __startTime;

}

@property (assign,nonatomic,__weak) id<AXEMockTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id userInfo;                                           //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) double timeInterval;                                   //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) double nextFireTime;                                   //@synthesize nextFireTime=_nextFireTime - In the implementation block
@property (assign,getter=isValid,nonatomic) char valid;                             //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) id _target;                                            //@synthesize _target=__target - In the implementation block
@property (assign,nonatomic) SEL _selector;                                         //@synthesize _selector=__selector - In the implementation block
@property (assign,nonatomic) char _repeats;                                         //@synthesize _repeats=__repeats - In the implementation block
@property (assign,nonatomic) double _startTime;                                     //@synthesize _startTime=__startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(void)invalidate;
-(char)isValid;
-(long long)compare:(id)arg1 ;
-(double)timeInterval;
-(id<AXEMockTimerDelegate>)delegate;
-(void)fire;
-(void)setDelegate:(id<AXEMockTimerDelegate>)arg1 ;
-(id)_target;
-(void)setUserInfo:(id)arg1 ;
-(double)_startTime;
-(SEL)_selector;
-(char)_repeats;
-(void)setTimeInterval:(double)arg1 ;
-(void)setValid:(char)arg1 ;
-(double)nextFireTime;
-(void)setNextFireTime:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 startTime:(double)arg6 ;
-(void)set_target:(id)arg1 ;
-(void)set_selector:(SEL)arg1 ;
-(void)set_repeats:(char)arg1 ;
-(void)set_startTime:(double)arg1 ;
@end
