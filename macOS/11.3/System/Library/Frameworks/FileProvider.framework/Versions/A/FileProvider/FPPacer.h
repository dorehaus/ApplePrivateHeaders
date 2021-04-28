/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FPPacer : NSObject {

	double _lastFireTime;
	double _minFireInterval;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _timer;
	Ai _sourceSuspendCount;
	/*^block*/id _eventBlock;

}

@property (nonatomic,copy) id eventBlock;              //@synthesize eventBlock=_eventBlock - In the implementation block
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)signal;
-(void)_fire;
-(id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3 ;
-(void)setEventBlock:(id)arg1 ;
-(void)_scheduleNextFire;
-(double)_computeNextTime;
-(id)eventBlock;
@end
