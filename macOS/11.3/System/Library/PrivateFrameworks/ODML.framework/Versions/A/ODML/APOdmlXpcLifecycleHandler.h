/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/Versions/A/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString, NSDate, NSOperationQueue;

@interface APOdmlXpcLifecycleHandler : NSObject {

	char _performDeferralCheck;
	NSObject*<OS_xpc_object> _xpc_activity;
	NSString* _requestIdentifier;
	NSDate* _startDate;
	NSOperationQueue* _workQueue;

}

@property (assign,nonatomic) char performDeferralCheck;                          //@synthesize performDeferralCheck=_performDeferralCheck - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpc_activity;              //@synthesize xpc_activity=_xpc_activity - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;                //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) char shouldDefer; 
-(NSObject*<OS_xpc_object>)xpc_activity;
-(void)setXpc_activity:(NSObject*<OS_xpc_object>)arg1 ;
-(char)shouldDefer;
-(NSDate *)startDate;
-(NSOperationQueue *)workQueue;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)requestIdentifier;
-(id)initWithActivity:(id)arg1 ;
-(void)setWorkQueue:(NSOperationQueue *)arg1 ;
-(char)taskIsDeferred;
-(char)continueTask;
-(char)finishTask;
-(void)endBackgroundDeferralCheck;
-(char)deferTask;
-(void)_backgroundDeferralCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)taskIsContinuing;
-(void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)taskCanContinueForTime:(id)arg1 ;
-(char)performDeferralCheck;
-(void)setPerformDeferralCheck:(char)arg1 ;
@end
