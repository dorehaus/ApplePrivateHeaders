/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKTimerPrimitives, CRKOperationQueue, CRKCancelable;
@class CATOperation, NSString;

@interface CRKTimeoutHarnessOperation : CATOperation {

	id<CRKTimerPrimitives> _timerPrimitives;
	id<CRKOperationQueue> _operationQueue;
	CATOperation* _operation;
	NSString* _timerIdentifier;
	double _timeout;
	id<CRKCancelable> _timeoutTimer;

}

@property (nonatomic,readonly) id<CRKTimerPrimitives> timerPrimitives;              //@synthesize timerPrimitives=_timerPrimitives - In the implementation block
@property (nonatomic,readonly) id<CRKOperationQueue> operationQueue;                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) CATOperation * operation;                            //@synthesize operation=_operation - In the implementation block
@property (nonatomic,copy,readonly) NSString * timerIdentifier;                     //@synthesize timerIdentifier=_timerIdentifier - In the implementation block
@property (nonatomic,readonly) double timeout;                                      //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) id<CRKCancelable> timeoutTimer;                        //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
+(id)timeoutTimerIdentifier;
-(void)run;
-(double)timeout;
-(CATOperation *)operation;
-(void)cancel;
-(void)main;
-(id<CRKOperationQueue>)operationQueue;
-(char)isAsynchronous;
-(id<CRKCancelable>)timeoutTimer;
-(void)setTimeoutTimer:(id<CRKCancelable>)arg1 ;
-(id)initWithTimerPrimitives:(id)arg1 operationQueue:(id)arg2 operation:(id)arg3 timerIdentifier:(id)arg4 timeout:(double)arg5 ;
-(void)dependentOperationDidFinish:(id)arg1 ;
-(id<CRKTimerPrimitives>)timerPrimitives;
-(NSString *)timerIdentifier;
-(void)timeoutDidFire;
-(id)initWithOperationQueue:(id)arg1 operation:(id)arg2 timout:(double)arg3 ;
@end

