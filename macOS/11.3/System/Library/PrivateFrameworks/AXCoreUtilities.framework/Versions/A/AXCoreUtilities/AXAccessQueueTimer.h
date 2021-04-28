/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/Versions/A/AXCoreUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXCoreUtilities/AXAccessQueueTimer.h>

@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isPending,nonatomic,readonly) char pending; 
@required
-(char)isActive;
-(void)cancel;
-(char)isPending;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_source;
@class NSString, AXAccessQueue, NSObject;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer> {

	char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	char _active;
	char _accessQueueIsExternal;
	int _state;
	NSString* _label;
	AXAccessQueue* _accessQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (assign,getter=isActive,nonatomic) char active;                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AXAccessQueue * accessQueue;                                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) char accessQueueIsExternal;                                              //@synthesize accessQueueIsExternal=_accessQueueIsExternal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (copy) NSString * label;                                                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (getter=isPending,nonatomic,readonly) char pending; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)timerTargettingMainAccessQueue;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(int)state;
-(char)isActive;
-(void)setState:(int)arg1 ;
-(AXAccessQueue *)accessQueue;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)cancel;
-(void)setActive:(char)arg1 ;
-(char)isPending;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(void)_reallyCancel;
-(char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg1 ;
-(id)initWithTargetAccessQueue:(id)arg1 ;
-(void)setAccessQueueIsExternal:(char)arg1 ;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)_afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 shouldTreatAsWritingBlock:(char)arg3 ;
-(void)_didFinishProcessingBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)accessQueueIsExternal;
-(void)_warnAboutAsynchronousScheduling;
-(void)_performEnqueuedWritingBlock:(/*^block*/id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2 ;
-(void)_warnAboutAsynchronousCancelling;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
@end

