/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSPersonalization.framework/Versions/A/OSPersonalization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class OSPRequest, NSMutableArray, NSObject, NSError;

@interface OSPOperationController : NSObject {

	OSPRequest* _request;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_queue> _operationQueue;
	NSError* _error;

}

@property (retain) OSPRequest * request;                                     //@synthesize request=_request - In the implementation block
@property (retain) NSMutableArray * operations;                              //@synthesize operations=_operations - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSError * error;                                          //@synthesize error=_error - In the implementation block
-(void)personalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_runOperations;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(OSPRequest *)request;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(void)setOperationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)operations;
-(void)setRequest:(OSPRequest *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(void)_cleanUp;
-(void)_addOperation:(id)arg1 ;
-(id)personalize;
@end
