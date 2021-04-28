/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/SiriCoreConnectionProviderDelegate.h>

@protocol SiriCoreSiriBackgroundConnectionDelegate, OS_dispatch_queue, SiriCoreConnectionProvider, OS_dispatch_data, OS_dispatch_source;
@class NSObject, SiriCoreSiriConnectionInfo, SiriCoreDataDecompressor, SiriCoreDataCompressor, NSMutableDictionary, SiriCorePingInfo, NSString, NSMutableArray;

@interface SiriCoreSiriBackgroundConnection : NSObject <SiriCoreConnectionProviderDelegate> {

	id<SiriCoreSiriBackgroundConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id<SiriCoreConnectionProvider> _connectionProvider;
	SiriCoreSiriConnectionInfo* _connectionInfo;
	NSObject*<OS_dispatch_data> _bufferedInputData;
	NSObject*<OS_dispatch_data> _bufferedProviderHeaderOutputData;
	NSObject*<OS_dispatch_data> _bufferedGeneralOutputData;
	NSObject*<OS_dispatch_data> _bufferedUncompressedData;
	SiriCoreDataDecompressor* _inputDecompressor;
	SiriCoreDataCompressor* _outputCompressor;
	CFHTTPMessageRef _httpResponseHeader;
	char _isOpened;
	char _isCanceled;
	char _hasReportedError;
	NSMutableDictionary* _errorsForConnectionMethods;
	NSObject*<OS_dispatch_source> _aceHeaderTimerSource;
	unsigned long long _aceHeaderTimerFireCount;
	NSObject*<OS_dispatch_source> _pingTimerSource;
	unsigned _currentPingIndex;
	SiriCorePingInfo* _pingInfo;
	unsigned long long _lastInputLength;
	void* _lastInputDataPointer;
	unsigned long long _inputLengthUnchangedCounter;
	unsigned long long _lastOutputLength;
	void* _lastOutputDataPointer;
	unsigned long long _outputLengthUnchangedCounter;
	unsigned _currentBarrierIndex;
	NSMutableDictionary* _outstandingBarriers;
	long long _connectionMethod;
	NSObject*<OS_dispatch_data> _safetyNetBuffer;
	NSObject*<OS_dispatch_queue> _metricsQueue;
	double _firstStartTime;
	double _currentStartTime;
	double _currentOpenTime;
	double _firstByteReadTime;
	unsigned long long _startCount;
	unsigned long long _metricsCount;
	NSString* _peerType;
	NSString* _peerVersion;
	NSString* _productTypePrefix;
	char _usesProxyConnection;
	char _deviceIsInWalkaboutExperimentGroup;
	char _siriConnectionUsesPeerManagedSync;
	Class _peerProviderClass;
	NSMutableArray* _outgoingCommandsWithSendCompletions;
	char _primaryConnectionViable;
	char _betterPathAvailable;
	long long _secondaryConnectionOpenState;
	id<SiriCoreConnectionProvider> _secondaryConnectionProvider;
	char _dispatchedSnapshotMetrics;
	double _receivedDataTime;

}

@property (assign,nonatomic,__weak) id<SiriCoreSiriBackgroundConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * peerType;                                                         //@synthesize peerType=_peerType - In the implementation block
@property (nonatomic,copy) NSString * peerVersion;                                                      //@synthesize peerVersion=_peerVersion - In the implementation block
@property (nonatomic,copy) NSString * productTypePrefix;                                                //@synthesize productTypePrefix=_productTypePrefix - In the implementation block
@property (nonatomic,retain) Class peerProviderClass;                                                   //@synthesize peerProviderClass=_peerProviderClass - In the implementation block
@property (assign,nonatomic) char usesProxyConnection;                                                  //@synthesize usesProxyConnection=_usesProxyConnection - In the implementation block
@property (assign,nonatomic) char deviceIsInWalkaboutExperimentGroup;                                   //@synthesize deviceIsInWalkaboutExperimentGroup=_deviceIsInWalkaboutExperimentGroup - In the implementation block
@property (assign,nonatomic) char siriConnectionUsesPeerManagedSync;                                    //@synthesize siriConnectionUsesPeerManagedSync=_siriConnectionUsesPeerManagedSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id<SiriCoreSiriBackgroundConnectionDelegate>)delegate;
-(void)setDelegate:(id<SiriCoreSiriBackgroundConnectionDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)cancel;
-(id)_connectionType;
-(void)barrier:(/*^block*/id)arg1 ;
-(NSString *)peerType;
-(void)_closeConnection;
-(void)probeConnection;
-(void)connectionProvider:(id)arg1 receivedError:(id)arg2 ;
-(id)analysisInfo;
-(void)startHeartBeat;
-(void)stopHeartBeat;
-(void)_startWithConnectionInfo:(id)arg1 proposedFallbackMethod:(long long)arg2 allowFallbackToNewMethod:(char)arg3 ;
-(long long)_nextConnectionMethod;
-(Class)_providerClass;
-(char)_usingPOP;
-(void)_startNetworkProviderWithInfo:(id)arg1 ;
-(char)_usingPeer;
-(id)_httpHeaderData;
-(id)_aceHeaderData;
-(void)_prepareProviderHeaderWithForceReconnect:(char)arg1 ;
-(void)_initializeBufferedGeneralOutputDataWithInitialPayload:(char)arg1 ;
-(id)_getInitialPayloadWithBufferedLength:(unsigned long long*)arg1 forceReconnect:(char)arg2 ;
-(void)_didEncounterError:(id)arg1 ;
-(void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(/*^block*/id)arg2 ;
-(void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1 ;
-(void)_updateBuffersForInitialPayload:(id)arg1 bufferedLength:(unsigned long long)arg2 forceReconnect:(char)arg3 ;
-(void)_setupReadHandlerOnProvider;
-(void)_networkProviderDidOpen;
-(void)_closeConnectionAndPrepareForReconnect:(char)arg1 ;
-(void)_cancelSecondaryConnection;
-(void)_forceTriggerRetry;
-(id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 syncAssistantId:(id)arg4 ;
-(void)_bufferGeneralData:(id)arg1 ;
-(void)_cancelOutstandingBarriers;
-(id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2 ;
-(char)_shouldTrySameConnectionMethodForMethod:(long long)arg1 error:(id)arg2 ;
-(char)_canFallBackFromError:(id)arg1 ;
-(void)_fallBackToNextConnectionMethod:(long long)arg1 fromError:(id)arg2 afterDelay:(double)arg3 ;
-(long long)_normalizeSNR:(long long)arg1 ;
-(char)_tcpInfoIndicatesPoorLinkQuality;
-(void)_aceHeaderTimeoutFired:(id)arg1 afterTimeout:(double)arg2 ;
-(char)_hasReadACEHeader;
-(char)_usingFlorence;
-(char)_wifiOrCellularMayBeBetterThanCurrentStream;
-(void)_pingTimerFired;
-(void)_resumePingTimer;
-(long long)_checkForProgressOnReadingData;
-(long long)_checkPings;
-(char)_hasReadHTTPHeader;
-(char)_sendAcePingWithId:(unsigned)arg1 error:(id*)arg2 ;
-(char)_hasBufferedDataOrOutstandingPings;
-(void)_startSecondaryConnection;
-(char)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(CFHTTPMessageRef)arg2 bytesRead:(unsigned long long*)arg3 error:(id*)arg4 ;
-(id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)_tryReadingParsedDataFromBytes:(const void*)arg1 length:(unsigned long long)arg2 packet:(SCD_Struct_Si3*)arg3 object:(id*)arg4 bytesParsed:(unsigned long long*)arg5 error:(id*)arg6 ;
-(void)_handleAceObject:(id)arg1 ;
-(void)_handlePacket:(SCD_Struct_Si3*)arg1 ;
-(char)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)_tryToWriteBufferedOutputData;
-(void)_sendGeneralData:(id)arg1 ;
-(void)sendCommand:(id)arg1 moreComing:(char)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_connectionHasBytesAvailable:(id)arg1 ;
-(char)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(CFHTTPMessageRef)arg2 statusCode:(long long*)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
-(void)_handleAceNop;
-(void)_handleAcePing:(unsigned)arg1 ;
-(void)_handleAcePong:(unsigned)arg1 ;
-(void)_handleAceEnd;
-(char)_sendAcePongWithId:(unsigned)arg1 error:(id*)arg2 ;
-(void)_handleBarrierReply:(unsigned)arg1 ;
-(id)_connectionMethodDescription;
-(void)_getWifiMetrics:(id)arg1 ;
-(void)_getCellularMetrics:(id)arg1 ;
-(void)connectionProvider:(id)arg1 receivedViabilityChangeNotification:(char)arg2 ;
-(void)connectionProviderReceivedBetterRouteNotification:(id)arg1 ;
-(char)_usingPOPOnPeer;
-(char)_usingNetwork;
-(void)startWithConnectionInfo:(id)arg1 ;
-(void)_setNetworkProvider:(id)arg1 ;
-(void)updateActiveBackgroundConnectionWithSecondary;
-(void)setSendPings:(char)arg1 ;
-(void)sendCommands:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)getConnectionMethodUsed;
-(void)getConnectionMetrics:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setPeerType:(NSString *)arg1 ;
-(NSString *)peerVersion;
-(void)setPeerVersion:(NSString *)arg1 ;
-(NSString *)productTypePrefix;
-(void)setProductTypePrefix:(NSString *)arg1 ;
-(char)usesProxyConnection;
-(void)setUsesProxyConnection:(char)arg1 ;
-(char)siriConnectionUsesPeerManagedSync;
-(void)setSiriConnectionUsesPeerManagedSync:(char)arg1 ;
-(Class)peerProviderClass;
-(void)setPeerProviderClass:(Class)arg1 ;
-(char)deviceIsInWalkaboutExperimentGroup;
-(void)setDeviceIsInWalkaboutExperimentGroup:(char)arg1 ;
@end

