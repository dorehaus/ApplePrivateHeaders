/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCLifeCycle.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@protocol OS_dispatch_workloop, OS_dispatch_source;
@class NSObject, BRCMinHeap, NSString, BRCFairSource, BRCFairScheduler;

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle, BRCSuspendable> {

	NSObject*<OS_dispatch_workloop> _workloop;
	BRCMinHeap* _minHeap;
	NSString* _name;
	BRCFairSource* _source;
	NSObject*<OS_dispatch_source> _delay;
	long long _leeway;
	long long _lastSchedule;
	char _isResumed;
	BRCFairScheduler* _fairScheduler;
	char _isCancelled;
	/*^block*/id _computeNextAdmissibleDateForScheduling;

}

@property (nonatomic,readonly) BRCFairScheduler * fairScheduler;                      //@synthesize fairScheduler=_fairScheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_workloop> workloop; 
@property (assign,nonatomic) long long coalescingLeeway;                              //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id computeNextAdmissibleDateForScheduling;                 //@synthesize computeNextAdmissibleDateForScheduling=_computeNextAdmissibleDateForScheduling - In the implementation block
@property (nonatomic,readonly) char isCancelled;                                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)resume;
-(void)cancel;
-(void)suspend;
-(char)isCancelled;
-(void)signal;
-(void)_close;
-(void)_schedule;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(id)initWithName:(id)arg1 fairScheduler:(id)arg2 ;
-(void)setCoalescingLeeway:(long long)arg1 ;
-(void)setComputeNextAdmissibleDateForScheduling:(id)arg1 ;
-(BRCFairScheduler *)fairScheduler;
-(void)addSource:(id)arg1 deadline:(long long)arg2 ;
-(char)_setupTimerRequiredForDeadline:(long long)arg1 now:(long long)arg2 ;
-(void)runDeadlineSource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)coalescingLeeway;
-(id)computeNextAdmissibleDateForScheduling;
@end
