/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICSelectorDelayer : NSObject {

	char _waitToFireUntilRequestsStop;
	char _callOnMainThread;
	id _target;
	SEL _selector;
	double _delay;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _fireBlock;

}

@property (assign,nonatomic,__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                           //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) char waitToFireUntilRequestsStop;                       //@synthesize waitToFireUntilRequestsStop=_waitToFireUntilRequestsStop - In the implementation block
@property (assign,nonatomic) char callOnMainThread;                                  //@synthesize callOnMainThread=_callOnMainThread - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,copy) id fireBlock;                                             //@synthesize fireBlock=_fireBlock - In the implementation block
@property (assign) double delay;                                                     //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) char isScheduledToFire; 
-(void)dealloc;
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(void)setWaitToFireUntilRequestsStop:(char)arg1 ;
-(void)setCallOnMainThread:(char)arg1 ;
-(void)_cancelFireRequests;
-(char)waitToFireUntilRequestsStop;
-(void)callTargetSelector;
-(char)callOnMainThread;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(char)arg4 callOnMainThread:(char)arg5 ;
-(void)requestFire;
-(void)fireImmediately;
-(char)isScheduledToFire;
-(void)cancelPreviousFireRequests;
@end
