/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate;
@class NSObject, MRPendingMessageQueue, NSMutableDictionary;

@interface MRProtocolMessageQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MRProtocolMessageQueueDataSource> _datasource;
	id<MRProtocolMessageQueueDelegate> _delegate;
	MRPendingMessageQueue* _pendingMessageQueue;
	NSMutableDictionary* _pendingReplyQueue;

}

@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDataSource> datasource; 
@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDelegate> delegate; 
-(void)dealloc;
-(id<MRProtocolMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<MRProtocolMessageQueueDelegate>)arg1 ;
-(void)flush;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(id<MRProtocolMessageQueueDataSource>)datasource;
-(void)setDatasource:(id<MRProtocolMessageQueueDataSource>)arg1 ;
-(void)enqueueMessage:(id)arg1 expectedMessage:(unsigned long long)arg2 reply:(/*^block*/id)arg3 queue:(id)arg4 ;
-(char)reply:(id)arg1 ;
@end
