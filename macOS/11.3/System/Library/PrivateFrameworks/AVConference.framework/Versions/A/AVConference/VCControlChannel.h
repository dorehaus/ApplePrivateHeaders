/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface VCControlChannel : VCObject {

	id _messageReceivedDelegate;
	id _dataReceivedDelegate;
	int _bytesSent;
	int _lastProcessedBytesSent;
	int _bytesSentToReport;
	int _maxSentRate;
	int _minSentRate;
	int _bytesReceived;
	int _lastProcessedBytesReceived;
	int _bytesReceivedToReport;
	int _maxReceivedRate;
	int _minReceivedRate;
	double _lastUpdateTimestamp;
	unsigned _reliableMessageResendInterval;
	NSObject*<OS_dispatch_queue> _asyncProcessingQueue;

}

@property (assign,nonatomic) id messageReceivedDelegate;                            //@synthesize messageReceivedDelegate=_messageReceivedDelegate - In the implementation block
@property (assign,nonatomic) id dataReceivedDelegate; 
@property (nonatomic,readonly) unsigned reliableMessageResendInterval;              //@synthesize reliableMessageResendInterval=_reliableMessageResendInterval - In the implementation block
-(void)dealloc;
-(id)init;
-(id)messageReceivedDelegate;
-(char)sendReliableMessageAndWait:(id)arg1 ;
-(void)sendReliableMessage:(id)arg1 ;
-(void)setDataReceivedDelegate:(id)arg1 ;
-(char)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)setEncryptionWithEncryptionMaterial:(SCD_Struct_VC169*)arg1 ;
-(void)flushActiveMessages;
-(unsigned)reliableMessageResendInterval;
-(void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)broadcastUnreliableMessage:(id)arg1 ;
-(void)setMessageReceivedDelegate:(id)arg1 ;
-(void)throwNotSupportedExceptionForMethod:(id)arg1 ;
-(id)dataReceivedDelegate;
@end

