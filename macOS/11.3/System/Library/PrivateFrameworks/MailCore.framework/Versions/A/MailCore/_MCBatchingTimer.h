/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, _MCBatchingTimerDelegate, OS_dispatch_queue;
@class NSLock, NSObject, NSDate;

@interface _MCBatchingTimer : NSObject {

	NSLock* _timerLock;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _targetDate;
	double _minimumTimeout;
	id<_MCBatchingTimerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSDate * targetDate;                                       //@synthesize targetDate=_targetDate - In the implementation block
@property (nonatomic,readonly) double minimumTimeout;                                     //@synthesize minimumTimeout=_minimumTimeout - In the implementation block
@property (nonatomic,__weak,readonly) id<_MCBatchingTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id<_MCBatchingTimerDelegate>)delegate;
-(char)update;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDate *)targetDate;
-(void)_scheduleTimerForTimeInterval:(double)arg1 ;
-(double)minimumTimeout;
-(id)initWithTimeInterval:(double)arg1 delegate:(id)arg2 queue:(id)arg3 ;
@end

