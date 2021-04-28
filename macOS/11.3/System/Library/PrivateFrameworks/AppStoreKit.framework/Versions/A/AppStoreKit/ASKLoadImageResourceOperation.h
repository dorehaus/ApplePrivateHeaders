/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@protocol ASKResourceDataConsumer, OS_dispatch_queue;
@class NSURLSessionDataTask, NSObject;

@interface ASKLoadImageResourceOperation : ASKLoadResourceOperation {

	NSURLSessionDataTask* _task;
	id<ASKResourceDataConsumer> _dataConsumer;
	NSObject*<OS_dispatch_queue> _dataConsumerQueue;

}

@property (nonatomic,readonly) NSURLSessionDataTask * task;                                 //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) id<ASKResourceDataConsumer> dataConsumer;                    //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dataConsumerQueue;              //@synthesize dataConsumerQueue=_dataConsumerQueue - In the implementation block
+(id)keyPathsForValuesAffectingIsFinished;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)URLSession;
+(id)dataConsumerQueue;
-(void)setQueuePriority:(long long)arg1 ;
-(void)start;
-(void)cancel;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(NSURLSessionDataTask *)task;
-(id<ASKResourceDataConsumer>)dataConsumer;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 ;
-(void)didFinishTaskWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dataConsumerQueue;
-(id)initWithURLRequest:(id)arg1 URLSession:(id)arg2 dataConsumer:(id)arg3 dataConsumerQueue:(id)arg4 ;
@end
