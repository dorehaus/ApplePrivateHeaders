/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NFAWDLoggerDelegate;
@class AWDServerConnection, NSData, NSUserDefaults, NFAWDVersionInfo, NSObject, NSCountedSet;

@interface NFAWDLogger : NSObject {

	unsigned _hwType;
	AWDServerConnection* _awdServer;
	unsigned long long _previousTransactionState;
	NSData* _uuid;
	unsigned long long _uuidRefTimestamp;
	NSUserDefaults* _userDefault;
	NSData* _tsmUuid;
	unsigned long long _tsmUuidRefTimestamp;
	NSData* _rmpUuid;
	unsigned long long _rmpUuidRefTimestamp;
	NFAWDVersionInfo* _versionInfo;
	NSData* _deviceExceptionUuid;
	unsigned long long _previousVASTransactionState;
	NSObject*<OS_dispatch_queue> _awdSubmissionQueue;
	unsigned long long _middlewareExceptionCount;
	unsigned long long _previousCardIngestionSessionState;
	unsigned long long _previousExpressTransactionState;
	NSData* _restrictedModeID;
	id<NFAWDLoggerDelegate> _delegate;
	NSCountedSet* _expressTransactionInfo;
	NSData* _activeAID;

}

@property (copy) NSData * activeAID;                                               //@synthesize activeAID=_activeAID - In the implementation block
@property (assign,nonatomic,__weak) id<NFAWDLoggerDelegate> delegate; 
+(id)sharedAWDLogger;
-(void)_registerNFCVersionMetric;
-(void)_registerGeneralStatisticMetric;
-(void)_registerDeviceExceptionStatisticMetric;
-(void)_registerExpressTransactionStatisticMetric;
-(void)_registerLPCDStatisticMetric;
-(void)_updateStats:(id)arg1 reset:(char)arg2 ;
-(void)_postAWDEvent:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_postAWDHCIStartOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2 ;
-(void)_postAWDHCIEndOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2 ;
-(char)incrementMiddlewareExceptionCountWithReset:(char)arg1 ;
-(void)_postReaderSessionStartedWithType:(unsigned)arg1 uuid:(id)arg2 ;
-(void)_postReaderSessionPollingStartedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)_postReaderSessionTagFoundWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)_postReaderSessionTagReadWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)_postReaderSessionEndedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)_postReaderSessionBurnoutTimerInvokedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(unsigned)getBatteryPercent;
-(void)postAWDSERemovedEvent:(id)arg1 isIcf:(char)arg2 ;
-(void)postAWDRestrictedModeFromContactlessMode:(char)arg1 isIcf:(char)arg2 ;
-(void)postAWDMiddlewareException:(unsigned)arg1 mwVersion:(unsigned)arg2 errorType:(unsigned)arg3 errorCode:(unsigned)arg4 breadcrumb:(unsigned long long)arg5 checkMaxExceptionCounter:(char)arg6 ;
-(void)_resetAWDLoadStackExceptionCount;
-(void)_postAWDHardwareExceptionEventWithAssertionCounter:(unsigned)arg1 hardwareType:(unsigned)arg2 wdogDump:(unsigned*)arg3 hwFltDump:(unsigned*)arg4 ;
-(void)postAWDMobileSoftwareUpdateException:(unsigned)arg1 ;
-(NSData *)activeAID;
-(id)init;
-(id<NFAWDLoggerDelegate>)delegate;
-(void)setDelegate:(id<NFAWDLoggerDelegate>)arg1 ;
-(unsigned long long)getTimestamp;
-(id)generateUUID;
-(void)postAWDEvent:(id)arg1 ;
-(void)postAWDCardIngestionSessionStateChange:(id)arg1 ;
-(void)postReaderModeIngestionSessionStarted:(id)arg1 ;
-(void)postReaderModeIngestionSessionEnded:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)postAWDTSMConnectivityException:(unsigned)arg1 ;
-(void)postAWDAPNReceived;
-(void)updateStats:(id)arg1 reset:(char)arg2 ;
-(void)postAWDTSMStartWithParameters:(id)arg1 ;
-(void)postAWDTSMEndWithParameters:(id)arg1 ;
-(void)postAWDTSMEndOfSession;
-(void)postAWDExpressTransactionEvent:(id)arg1 ;
-(void)postAWDHCIActivityTimeout:(id)arg1 ;
-(void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDHCIStartOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDFelicaHCIEndOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDHCEStateChangeEvent:(unsigned)arg1 ;
-(void)postAWDHCEStartEvent:(id)arg1 ;
-(void)postAWDHCEEndEvent;
-(void)postAWDReaderSessionEventWithParameters:(id)arg1 ;
-(void)postAWDReaderModeExceptionForType:(unsigned)arg1 tagType:(unsigned)arg2 rfFrameInterface:(char)arg3 withErrorCode:(unsigned)arg4 ;
-(void)postAWDCardIngestionReaderStateChangeWithType:(unsigned)arg1 errorCode:(unsigned)arg2 ;
-(void)postAWDSEMemoryInfo:(id)arg1 isIcf:(char)arg2 ;
-(void)getAWDUniversityCode:(id)arg1 universityCodes:(unsigned*)arg2 ;
-(void)postAWDFelicaStateChangeEvent:(id)arg1 ;
-(void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned)arg1 withStatus:(unsigned)arg2 ;
-(void)postAWDTransactionEndOfOperation;
-(void)setActiveAID:(NSData *)arg1 ;
-(void)postAWDCRSAuthInitEventWithStatus:(unsigned)arg1 ;
-(void)postAWDCRSAuthWithStatus:(unsigned)arg1 withMethod:(unsigned)arg2 ;
-(void)postAWDCRSAuthECommerceWithParameters:(id)arg1 ;
-(void)postAWDCRSDeAuthWithStatus:(unsigned)arg1 ;
-(void)postAWDPurpleTrustOperationWithParameters:(id)arg1 ;
-(void)postAWDFieldEventWithFieldOn:(char)arg1 withTechnology:(unsigned)arg2 ;
-(void)postAWDTransactionLastRAPDU;
-(void)postAWDSESelectEventWithAID:(id)arg1 ;
-(void)postAWDPLLUnlockEvent;
-(void)enableQueryMetricsListener;
-(void)postAWDVersionInfo:(id)arg1 ;
-(void)postAWDSERestrictedModeExited:(char)arg1 ;
-(void)postAWDSERestrictedModeEntered:(id)arg1 isIcf:(char)arg2 ;
-(void)postAWDVASSelectOSE:(id)arg1 ;
-(void)postAWDVASTransactionException:(unsigned)arg1 withSWStatus:(unsigned)arg2 ;
-(void)postAWDVASGetData:(id)arg1 ;
-(void)postAWDPeerPaymentEnrollmentWithParameters:(id)arg1 ;
-(void)postAWDPeerPaymentRequestWithParameters:(id)arg1 ;
@end

