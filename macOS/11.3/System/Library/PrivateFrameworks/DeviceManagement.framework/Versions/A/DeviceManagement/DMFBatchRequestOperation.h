/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATRemoteTaskOperation, NSArray;

@interface DMFBatchRequestOperation : CATOperation {

	CATOperationQueue* _queue;
	CATRemoteTaskOperation* _activityTransactionOperation;
	NSArray* _subOperations;

}

@property (nonatomic,retain) CATOperationQueue * queue;                                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CATRemoteTaskOperation * activityTransactionOperation;              //@synthesize activityTransactionOperation=_activityTransactionOperation - In the implementation block
@property (nonatomic,copy) NSArray * subOperations;                                              //@synthesize subOperations=_subOperations - In the implementation block
-(void)setName:(id)arg1 ;
-(CATOperationQueue *)queue;
-(void)main;
-(char)isAsynchronous;
-(void)setQueue:(CATOperationQueue *)arg1 ;
-(CATRemoteTaskOperation *)activityTransactionOperation;
-(NSArray *)subOperations;
-(void)activityTransactionOperationDidStart:(id)arg1 ;
-(void)activityTransactionOperationDidFinish:(id)arg1 ;
-(id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2 ;
-(void)setActivityTransactionOperation:(CATRemoteTaskOperation *)arg1 ;
-(void)setSubOperations:(NSArray *)arg1 ;
@end

