/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/Catalyst-Structs.h>
#import <libobjc.A.dylib/CATHTTPMessageParserDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_source, CATRemoteConnectionDelegate;
@class CATHTTPMessageParser, NSMutableArray, NSObject, NSError, NSMutableData, NSArray, CATSerialOperationQueue, NSString, CATRemoteConnectionSocketOptions, NSInputStream, NSOutputStream;

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate> {

	CATHTTPMessageParser* mMessageParser;
	long long mState;
	NSMutableArray* mPendingSendContexts;
	NSObject*<OS_dispatch_source> mConnectionTimeoutTimer;
	NSError* mInterruptionError;
	NSMutableData* mReadBuffer;
	NSArray* mTrustedCertificates;
	long long mPeerTrustState;
	CATSerialOperationQueue* mStreamEventQueue;
	char _usesSSL;
	id<CATRemoteConnectionDelegate> _delegate;
	NSString* _name;
	double _connectionTimeoutInterval;
	CATRemoteConnectionSocketOptions* _socketOptions;
	NSArray* _customTrustEvaluationPolicies;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	unsigned long long _bufferSize;

}

@property (nonatomic,retain) NSInputStream * inputStream;                                  //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                                //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) char usesSSL;                                                 //@synthesize usesSSL=_usesSSL - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                                //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic,__weak) id<CATRemoteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SecTrustRef peerTrust; 
@property (assign,nonatomic) double connectionTimeoutInterval;                             //@synthesize connectionTimeoutInterval=_connectionTimeoutInterval - In the implementation block
@property (nonatomic,copy) CATRemoteConnectionSocketOptions * socketOptions;               //@synthesize socketOptions=_socketOptions - In the implementation block
@property (nonatomic,copy) NSArray * customTrustEvaluationPolicies;                        //@synthesize customTrustEvaluationPolicies=_customTrustEvaluationPolicies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2 bufferSize:(unsigned long long)arg3 ;
+(void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<CATRemoteConnectionDelegate>)delegate;
-(void)open;
-(void)close;
-(void)setDelegate:(id<CATRemoteConnectionDelegate>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSOutputStream *)outputStream;
-(unsigned long long)bufferSize;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(NSInputStream *)inputStream;
-(id)initWithNetService:(id)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(CATRemoteConnectionSocketOptions *)socketOptions;
-(void)messageParser:(id)arg1 didParseRequestData:(id)arg2 ;
-(void)messageParser:(id)arg1 didParseResponseData:(id)arg2 moreComing:(char)arg3 ;
-(void)messageParser:(id)arg1 didParseRequestWithURL:(id)arg2 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 bufferSize:(unsigned long long)arg3 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)enqueueSendContext:(id)arg1 ;
-(char)secureUsingIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 isServer:(char)arg3 ;
-(void)connectionDidInterruptWithError:(id)arg1 ;
-(double)connectionTimeoutInterval;
-(void)connectionTimedOut;
-(void)unscheduleStreams;
-(void)sendDidFail:(id)arg1 withError:(id)arg2 ;
-(void)delegateDidClose;
-(void)setUsesSSL:(char)arg1 ;
-(char)usesSSL;
-(void)delegateWillSecure;
-(int)applyCustomEvaluationPoliciesToTrust:(SecTrustRef)arg1 ;
-(void)delegateDidSecure;
-(NSArray *)customTrustEvaluationPolicies;
-(void)connectionShouldSendData;
-(void)connectionDidReceiveData;
-(char)trySendingDataWithContext:(id)arg1 error:(id*)arg2 ;
-(void)sendDidSucceed:(id)arg1 ;
-(void)delegateDidWriteDataForContextIfNeeded:(id)arg1 ;
-(void)delegateDidSendData:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateDidSendDataWithStream:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)delegateDidFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)delegateDidInterruptWithError:(id)arg1 ;
-(void)delegateDidWriteDataFromStream:(id)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)delegateDidReceiveData:(id)arg1 ;
-(void)delegateDidReceiveStreamData:(id)arg1 moreComing:(char)arg2 ;
-(void)delegateDidReceiveDataRequestWithURL:(id)arg1 ;
-(void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)configureStreamSocketOptions;
-(void)delegateDidOpen;
-(void)tryEvaluatingPeerTrustWithStream:(id)arg1 ;
-(SecTrustRef)peerTrust;
-(void)sendData:(id)arg1 userInfo:(id)arg2 ;
-(void)sendDataWithStream:(id)arg1 length:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)secureUsingClientIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)secureUsingServerIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)scheduleStreams;
-(void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(char)arg1 ;
-(void)setConnectionTimeoutInterval:(double)arg1 ;
-(void)setSocketOptions:(CATRemoteConnectionSocketOptions *)arg1 ;
-(void)setCustomTrustEvaluationPolicies:(NSArray *)arg1 ;
@end
