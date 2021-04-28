/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSError, NSObject, CalStopwatch, NSDictionary;

@interface CalAgentLinkOperation : NSObject {

	char _isExecuting;
	char _isCancelled;
	char _isFinished;
	/*^block*/id _completionBlock;
	NSError* _error;
	NSObject*<OS_xpc_object> _connection;
	CalStopwatch* _stopwatch;
	char _isAllowedToBeRunOnAgent;
	NSObject*<OS_dispatch_queue> _messageQueue;
	unsigned long long _timeout;

}

@property (assign,nonatomic) char isExecuting;                                              //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isCancelled;                                              //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) char isFinished;                                               //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) CalStopwatch * stopwatch;                                      //@synthesize stopwatch=_stopwatch - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_xpc_object> connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> messageQueue;              //@synthesize messageQueue=_messageQueue - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * inputPayload; 
@property (nonatomic,retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;                                    //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) char isAllowedToBeRunOnAgent;                                  //@synthesize isAllowedToBeRunOnAgent=_isAllowedToBeRunOnAgent - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
+(void)disableAgentLinkForTesting;
-(id)description;
-(id)init;
-(NSObject*<OS_xpc_object>)connection;
-(NSError *)error;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)timeout;
-(void)start;
-(void)finish;
-(char)isCancelled;
-(char)isFinished;
-(char)isExecuting;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setTimeout:(unsigned long long)arg1 ;
-(void)prepare;
-(void)setIsFinished:(char)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(void)setIsCancelled:(char)arg1 ;
-(NSDictionary *)inputPayload;
-(void)setErrorWithCode:(long long)arg1 ;
-(char)isAllowedToBeRunOnAgent;
-(NSObject*<OS_dispatch_queue>)messageQueue;
-(CalStopwatch *)stopwatch;
-(char)eligibleForExecution;
-(void)setStopwatch:(CalStopwatch *)arg1 ;
-(void)responsePayloadReceived:(id)arg1 ;
-(void)_finishWithTimeout;
-(void)willFinish;
-(void)setIsAllowedToBeRunOnAgent:(char)arg1 ;
-(void)setMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

