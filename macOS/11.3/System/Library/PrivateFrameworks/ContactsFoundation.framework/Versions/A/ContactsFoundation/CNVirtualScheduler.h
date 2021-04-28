/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler> {

	unsigned long long _clock;
	unsigned long long _nextSchedulableTick;
	unsigned long long _stopTime;
	CNQueue* _queue;
	char _isStarted;
	char _isPerforming;

}

@property (nonatomic,readonly) unsigned long long nextSchedulableTick;              //@synthesize nextSchedulableTick=_nextSchedulableTick - In the implementation block
@property (nonatomic,readonly) unsigned long long stopTime;                         //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,readonly) CNQueue * queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) char isStarted;                                      //@synthesize isStarted=_isStarted - In the implementation block
@property (nonatomic,readonly) char isPerforming;                                   //@synthesize isPerforming=_isPerforming - In the implementation block
@property (readonly) unsigned long long clock;                                      //@synthesize clock=_clock - In the implementation block
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2 ;
+(id)providerWithScheduler:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)start;
-(CNQueue *)queue;
-(char)isStarted;
-(void)stop;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(unsigned long long)clock;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(unsigned long long)_nextSchedulableTick;
-(id)_scheduleBlock:(/*^block*/id)arg1 atTime:(unsigned long long)arg2 ;
-(char)_performJobs;
-(void)advanceTo:(unsigned long long)arg1 ;
-(unsigned long long)stopTime;
-(void)advanceBy:(unsigned long long)arg1 ;
-(char)hasJobsScheduled;
-(unsigned long long)nextSchedulableTick;
-(char)isPerforming;
@end

