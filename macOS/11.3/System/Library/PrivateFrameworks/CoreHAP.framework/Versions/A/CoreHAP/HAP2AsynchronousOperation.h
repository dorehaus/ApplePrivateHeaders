/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, HMFActivity, HAP2PropertyLock;

@interface HAP2AsynchronousOperation : NSOperation {

	char _executing;
	char _finished;
	char _cancelled;
	NSError* _error;
	HMFActivity* _activity;
	HAP2PropertyLock* _propertyLock;

}

@property (getter=isExecuting,nonatomic,readonly) char executing;              //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished,nonatomic,readonly) char finished;                //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                         //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(id)initWithName:(id)arg1 ;
-(void)start;
-(void)finish;
-(void)cancel;
-(char)isCancelled;
-(void)main;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(HMFActivity *)activity;
-(void)finishWithError:(id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(id)initWithName:(id)arg1 optionalActivity:(id)arg2 ;
-(id)initWithName:(id)arg1 activity:(id)arg2 ;
@end

