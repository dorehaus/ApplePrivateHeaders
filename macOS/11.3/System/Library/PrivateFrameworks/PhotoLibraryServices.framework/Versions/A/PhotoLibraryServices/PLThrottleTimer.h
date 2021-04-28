/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLThrottleTimer : NSObject {

	id _target;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _invocationQueue;
	unsigned long long _timeoutId;
	unsigned long long _maxTimeoutId;
	char _isPingedSinceLastFire;
	char _isPaused;
	char _isInvalid;
	SEL _action;
	double _timeout;
	double _maxTimeout;

}

@property (nonatomic,__weak,readonly) id target; 
@property (nonatomic,readonly) SEL action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) double timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) double maxTimeout;              //@synthesize maxTimeout=_maxTimeout - In the implementation block
-(void)invalidate;
-(id)target;
-(SEL)action;
-(double)timeout;
-(void)ping;
-(void)setPaused:(char)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 invocationQueue:(id)arg3 timeout:(double)arg4 maxTimeout:(double)arg5 ;
-(double)maxTimeout;
-(void)_inqFireWithTimeout:(char)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(char)arg3 maxTimeoutId:(unsigned long long)arg4 ;
-(void)_inqScheduleTimeout:(char)arg1 maxTimeout:(char)arg2 ;
@end

