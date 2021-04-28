/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSStunCandidatePairDelegate, OS_dispatch_source;
#import <IDSFoundation/IDSFoundation-Structs.h>
@class IDSStunCandidate, NSUUID, NSString, NSData, IDSQuickRelaySessionInfo, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;

@interface IDSStunCandidatePair : NSObject {

	unsigned long long _state;
	IDSStunCandidate* _local;
	IDSStunCandidate* _remote;
	IDSStunCandidate* _relayRemote;
	char _isNominated;
	char _isActive;
	id<IDSStunCandidatePairDelegate> _delegate;
	/*^block*/id _sendMsgBlock;
	double _lastIncomingPacketTime;
	double _lastOutgoingPacketTime;
	unsigned _totalPacketsSentOnLink;
	unsigned _totalPacketsReceivedOnLink;
	char _hbStarted;
	double _hbStartTime;
	unsigned short _hbCounter;
	unsigned char _statsIntervalInSeconds;
	char _linkID;
	NSUUID* _linkUUID;
	NSString* _sessionID;
	NSString* _groupID;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	IDSQuickRelaySessionInfo* _relaySessionInfo;
	NSDictionary* _sessionInfoDict;
	unsigned short _channelNumber;
	unsigned short _relayLinkID;
	char _isAcceptedRelaySession;
	long long _participantID;
	unsigned long long _capabilityFlags;
	unsigned char _protocolVersion;
	char _isInitiator;
	char _enableSKE;
	NSData* _softwareData;
	NSString* _appName;
	NSMutableArray* _pendingStunRequests;
	NSMutableArray* _repliedStunRequests;
	NSMutableDictionary* _requestIDToQueryLinkIDs;
	NSMutableDictionary* _requestIDToSessionInfoReqType;
	NSMutableDictionary* _stunSentBytesToRequestID;
	NSUUID* _defaultLocalDeviceCBUUID;
	NSUUID* _defaultRemoteDeviceCBUUID;
	long long _relayProviderType;
	long long _allocateType;
	double _allocateTime;
	double _selfAllocateStartTime;
	double _serverLatency;
	unsigned _sessionInfoReqCount;
	char _recvSKEData;
	char _sentSKEData;
	NSData* _skeData;
	NSObject*<OS_dispatch_source> _sessionConnectedTimer;
	/*^block*/id _sessionConnectedTimeoutBlock;
	NSObject*<OS_dispatch_source> _sessionConvergenceTimer;
	/*^block*/id _sessionConvergenceBlock;
	NSObject*<OS_dispatch_source> _sessionGoAwayTimer;
	/*^block*/id _sessionGoAwayBlock;
	char _pendingRealloc;
	NSObject*<OS_dispatch_source> _reallocTimer;
	char _pendingNoSessionStateAllocbind;
	NSObject*<OS_dispatch_source> _noSessionStateTimer;
	char _recvDisconnected;
	char _recvDisconnectedAck;
	NSData* _encKey;
	NSData* _decKey;
	NSData* _hmacKey;
	NSDictionary* _participantIDMap;
	char _serverIsDegraded;
	double _testStartTime;
	unsigned _testOptions;
	char _isDisconnecting;
	double _triggeredCheckTime;
	NSObject*<OS_dispatch_source> _probingTimer;
	char _isRealloc;
	NSObject*<OS_dispatch_source> _allocbindFailoverTimer;

}

@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
@property (readonly) IDSStunCandidate * local;                                        //@synthesize local=_local - In the implementation block
@property (readonly) IDSStunCandidate * remote;                                       //@synthesize remote=_remote - In the implementation block
@property (retain) IDSStunCandidate * relayRemote;                                    //@synthesize relayRemote=_relayRemote - In the implementation block
@property (assign,nonatomic) char isNominated;                                        //@synthesize isNominated=_isNominated - In the implementation block
@property (assign,nonatomic) char isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) double lastIncomingPacketTime;                           //@synthesize lastIncomingPacketTime=_lastIncomingPacketTime - In the implementation block
@property (assign,nonatomic) double lastOutgoingPacketTime;                           //@synthesize lastOutgoingPacketTime=_lastOutgoingPacketTime - In the implementation block
@property (assign,nonatomic) unsigned totalPacketsSentOnLink;                         //@synthesize totalPacketsSentOnLink=_totalPacketsSentOnLink - In the implementation block
@property (assign,nonatomic) unsigned totalPacketsReceivedOnLink;                     //@synthesize totalPacketsReceivedOnLink=_totalPacketsReceivedOnLink - In the implementation block
@property (assign,nonatomic) char hbStarted;                                          //@synthesize hbStarted=_hbStarted - In the implementation block
@property (assign,nonatomic) double hbStartTime;                                      //@synthesize hbStartTime=_hbStartTime - In the implementation block
@property (nonatomic,readonly) unsigned short hbCounter;                              //@synthesize hbCounter=_hbCounter - In the implementation block
@property (nonatomic,readonly) unsigned char statsIntervalInSeconds;                  //@synthesize statsIntervalInSeconds=_statsIntervalInSeconds - In the implementation block
@property (assign,nonatomic) char linkID;                                             //@synthesize linkID=_linkID - In the implementation block
@property (copy) NSUUID * linkUUID;                                                   //@synthesize linkUUID=_linkUUID - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> allocbindFailoverTimer;              //@synthesize allocbindFailoverTimer=_allocbindFailoverTimer - In the implementation block
@property (readonly) NSString * sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) NSData * relaySessionToken;                                      //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (readonly) NSData * relaySessionKey;                                        //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (readonly) IDSQuickRelaySessionInfo * relaySessionInfo;                     //@synthesize relaySessionInfo=_relaySessionInfo - In the implementation block
@property (readonly) NSDictionary * sessionInfoDict;                                  //@synthesize sessionInfoDict=_sessionInfoDict - In the implementation block
@property (assign,nonatomic) unsigned short channelNumber;                            //@synthesize channelNumber=_channelNumber - In the implementation block
@property (nonatomic,readonly) unsigned short relayLinkID;                            //@synthesize relayLinkID=_relayLinkID - In the implementation block
@property (assign,nonatomic) char isAcceptedRelaySession;                             //@synthesize isAcceptedRelaySession=_isAcceptedRelaySession - In the implementation block
@property (assign,nonatomic) long long participantID;                                 //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,readonly) unsigned long long capabilityFlags;                    //@synthesize capabilityFlags=_capabilityFlags - In the implementation block
@property (nonatomic,readonly) unsigned char protocolVersion;                         //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) char isInitiator;                                      //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) char enableSKE;                                        //@synthesize enableSKE=_enableSKE - In the implementation block
@property (readonly) NSData * softwareData;                                           //@synthesize softwareData=_softwareData - In the implementation block
@property (readonly) NSString * appName;                                              //@synthesize appName=_appName - In the implementation block
@property (readonly) NSMutableArray * pendingStunRequests;                            //@synthesize pendingStunRequests=_pendingStunRequests - In the implementation block
@property (readonly) NSMutableArray * repliedStunRequests;                            //@synthesize repliedStunRequests=_repliedStunRequests - In the implementation block
@property (copy) NSUUID * defaultLocalDeviceCBUUID;                                   //@synthesize defaultLocalDeviceCBUUID=_defaultLocalDeviceCBUUID - In the implementation block
@property (copy) NSUUID * defaultRemoteDeviceCBUUID;                                  //@synthesize defaultRemoteDeviceCBUUID=_defaultRemoteDeviceCBUUID - In the implementation block
@property (copy) NSString * groupID;                                                  //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) long long relayProviderType;                             //@synthesize relayProviderType=_relayProviderType - In the implementation block
@property (assign,nonatomic) long long allocateType;                                  //@synthesize allocateType=_allocateType - In the implementation block
@property (assign,nonatomic) double allocateTime;                                     //@synthesize allocateTime=_allocateTime - In the implementation block
@property (assign,nonatomic) double selfAllocateStartTime;                            //@synthesize selfAllocateStartTime=_selfAllocateStartTime - In the implementation block
@property (nonatomic,readonly) double testStartTime;                                  //@synthesize testStartTime=_testStartTime - In the implementation block
@property (assign,nonatomic) double serverLatency;                                    //@synthesize serverLatency=_serverLatency - In the implementation block
@property (nonatomic,readonly) unsigned sessionInfoReqCount;                          //@synthesize sessionInfoReqCount=_sessionInfoReqCount - In the implementation block
@property (assign,nonatomic) char recvSKEData;                                        //@synthesize recvSKEData=_recvSKEData - In the implementation block
@property (assign,nonatomic) char sentSKEData;                                        //@synthesize sentSKEData=_sentSKEData - In the implementation block
@property (copy) NSData * skeData;                                                    //@synthesize skeData=_skeData - In the implementation block
@property (assign,nonatomic) char pendingRealloc;                                     //@synthesize pendingRealloc=_pendingRealloc - In the implementation block
@property (assign,nonatomic) char pendingNoSessionStateAllocbind;                     //@synthesize pendingNoSessionStateAllocbind=_pendingNoSessionStateAllocbind - In the implementation block
@property (assign,nonatomic) char recvDisconnected;                                   //@synthesize recvDisconnected=_recvDisconnected - In the implementation block
@property (assign,nonatomic) char recvDisconnectedAck;                                //@synthesize recvDisconnectedAck=_recvDisconnectedAck - In the implementation block
@property (assign,nonatomic) char isRealloc;                                          //@synthesize isRealloc=_isRealloc - In the implementation block
@property (readonly) NSData * encKey;                                                 //@synthesize encKey=_encKey - In the implementation block
@property (readonly) NSData * decKey;                                                 //@synthesize decKey=_decKey - In the implementation block
@property (readonly) NSData * hmacKey;                                                //@synthesize hmacKey=_hmacKey - In the implementation block
@property (readonly) NSDictionary * participantIDMap;                                 //@synthesize participantIDMap=_participantIDMap - In the implementation block
@property (nonatomic,readonly) char serverIsDegraded;                                 //@synthesize serverIsDegraded=_serverIsDegraded - In the implementation block
@property (assign,nonatomic) char isDisconnecting;                                    //@synthesize isDisconnecting=_isDisconnecting - In the implementation block
@property (assign,nonatomic) double triggeredCheckTime;                               //@synthesize triggeredCheckTime=_triggeredCheckTime - In the implementation block
@property (nonatomic,readonly) unsigned testOptions;                                  //@synthesize testOptions=_testOptions - In the implementation block
+(id)candidatePairWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 delegate:(id)arg4 sendMsgBlock:(/*^block*/id)arg5 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)invalidate;
-(unsigned long long)state;
-(char)isActive;
-(void)setState:(unsigned long long)arg1 ;
-(IDSStunCandidate *)remote;
-(char)isInitiator;
-(void)setIsActive:(char)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(long long)participantID;
-(void)setParticipantID:(long long)arg1 ;
-(IDSStunCandidate *)local;
-(NSString *)appName;
-(unsigned short)channelNumber;
-(NSData *)relaySessionKey;
-(NSData *)relaySessionToken;
-(char)linkID;
-(NSUUID *)linkUUID;
-(char)serverIsDegraded;
-(NSDictionary *)participantIDMap;
-(char)isRelayStunCandidatePair;
-(char)isSharedQRSession;
-(char)isValidRelayStunCandidatePair;
-(NSData *)softwareData;
-(char)isSelfQRSession;
-(char)hasValidCapabilityFlags;
-(unsigned long long)capabilityFlags;
-(long long)relayProviderType;
-(void)deriveAES128CTRKeys:(id)arg1 ;
-(IDSQuickRelaySessionInfo *)relaySessionInfo;
-(double)serverLatency;
-(unsigned)totalPacketsSentOnLink;
-(unsigned)totalPacketsReceivedOnLink;
-(char)isAcceptedRelaySession;
-(id)candidatePairToken;
-(id)initWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 delegate:(id)arg4 sendMsgBlock:(/*^block*/id)arg5 ;
-(void)_stopReallocTimer;
-(void)setAllocbindFailoverTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIsRealloc:(char)arg1 ;
-(void)stopLinkProbingTimer;
-(long long)allocateType;
-(double)allocateTime;
-(unsigned char)protocolVersion;
-(IDSStunCandidate *)relayRemote;
-(char)recvSKEData;
-(char)sentSKEData;
-(NSData *)skeData;
-(NSUUID *)defaultLocalDeviceCBUUID;
-(NSUUID *)defaultRemoteDeviceCBUUID;
-(char)enableSKE;
-(void)_startNoSessionStateTimer;
-(void)_stopNoSessionStateTimer;
-(void)_handleNoSessionStateTimer;
-(void)_startReallocTimer;
-(void)_handleReallocTimer;
-(void)stopSessionConnectedTimer;
-(void)_handleSessionConnectedtTimer;
-(void)stopSessionConvergenceTimer;
-(void)_handleSessionConvergenceTimer;
-(void)stopSessionGoAwayTimer;
-(void)_handleSessionGoAwayTimer;
-(unsigned long long)getParticipantIDHash:(id)arg1 ;
-(void)removeStunRequest:(id)arg1 ;
-(char)shouldRexmitStunRequest:(id)arg1 ;
-(void)addStunRequest:(id)arg1 ;
-(void)sendStatsRequest:(id)arg1 options:(id)arg2 ;
-(void)_notifyQREventAdded:(id)arg1 ;
-(void)processSessionInfoRequestTimeout:(id)arg1 ;
-(void)updateStunSentBytes:(long long)arg1 requestID:(id)arg2 ;
-(void)sendInfoRequest:(id)arg1 ;
-(void)sendSessionInfoRequest:(id)arg1 options:(id)arg2 ;
-(void)sendTestRequest:(id)arg1 ;
-(void)setHbStarted:(char)arg1 ;
-(void)_handleLinkProbingTimer;
-(char)shouldProcessStunResponse:(id)arg1 ;
-(char)_optionallyCheckEncMarker:(id)arg1 ;
-(id)processParticipantsData:(char*)arg1 dataLen:(int)arg2 ;
-(unsigned long long)getStunSentBytes:(id)arg1 ;
-(void)_notifySessionStreamInfoReceived:(id)arg1 withParticipants:(id)arg2 sentBytes:(unsigned long long)arg3 receivedBytes:(unsigned long long)arg4 offlineRequest:(char)arg5 streamInfoRequest:(char)arg6 success:(char)arg7 ;
-(char)hasNoSessionStateTestOptions;
-(void)setPendingNoSessionState:(char)arg1 ;
-(void)setPropertiesWithRelaySessionInfo:(id)arg1 sessionInfoDict:(id)arg2 enableSKE:(char)arg3 ;
-(void)setPropertiesWithReallocCandidatePair:(id)arg1 reallocToken:(id)arg2 ;
-(unsigned)nextSessionInfoReqID;
-(void)synthesizeNat64WithPrefix;
-(void)setPendingRealloc:(char)arg1 ;
-(void)startSessionConnectedTimer:(int)arg1 block:(/*^block*/id)arg2 ;
-(void)startSessionConvergenceTimer:(int)arg1 block:(/*^block*/id)arg2 ;
-(void)startSessionGoAwayTimer:(int)arg1 block:(/*^block*/id)arg2 ;
-(unsigned short)hbCounter;
-(void)setChannelSettings:(unsigned)arg1 ;
-(void)setTestOptionsFromUserDefaults;
-(void)setRelayLinkID:(unsigned short)arg1 ;
-(void)setProtocolVersion:(unsigned char)arg1 isInitiator:(char)arg2 enableSKE:(char)arg3 ;
-(void)initParticipantIDMap;
-(void)updateParticipantIDMap:(id)arg1 ;
-(void)startLinkProbingTimer:(unsigned)arg1 ;
-(char)processStatsResponse:(id)arg1 arrivalTime:(double)arg2 ;
-(char)processInfoResponse:(id)arg1 packetBuffer:(SCD_Struct_ID8*)arg2 headerOverhead:(unsigned long long)arg3 ;
-(char)processSessionInfoResponse:(id)arg1 packetBuffer:(SCD_Struct_ID8*)arg2 headerOverhead:(unsigned long long)arg3 ;
-(char)processTestResponse:(id)arg1 arrivalTime:(double)arg2 ;
-(char)processInfoIndication:(id)arg1 arrivalTime:(double)arg2 ;
-(char)processSessionInfoIndication:(id)arg1 arrivalTime:(double)arg2 ;
-(char)processDataMessageErrorIndication:(id)arg1 ;
-(char)processStunErrorResponse:(id)arg1 packetBuffer:(SCD_Struct_ID8*)arg2 headerOverhead:(unsigned long long)arg3 ;
-(void)setRelayRemote:(IDSStunCandidate *)arg1 ;
-(char)isNominated;
-(void)setIsNominated:(char)arg1 ;
-(void)setLinkID:(char)arg1 ;
-(char)hbStarted;
-(void)setIsAcceptedRelaySession:(char)arg1 ;
-(void)setDefaultLocalDeviceCBUUID:(NSUUID *)arg1 ;
-(void)setDefaultRemoteDeviceCBUUID:(NSUUID *)arg1 ;
-(void)setRelayProviderType:(long long)arg1 ;
-(void)setAllocateType:(long long)arg1 ;
-(void)setAllocateTime:(double)arg1 ;
-(double)selfAllocateStartTime;
-(void)setSelfAllocateStartTime:(double)arg1 ;
-(void)setServerLatency:(double)arg1 ;
-(char)pendingRealloc;
-(char)recvDisconnected;
-(void)setRecvDisconnected:(char)arg1 ;
-(char)recvDisconnectedAck;
-(void)setRecvDisconnectedAck:(char)arg1 ;
-(void)setSkeData:(NSData *)arg1 ;
-(double)testStartTime;
-(char)isDisconnecting;
-(void)setIsDisconnecting:(char)arg1 ;
-(char)pendingNoSessionStateAllocbind;
-(void)setPendingNoSessionStateAllocbind:(char)arg1 ;
-(unsigned)testOptions;
-(double)triggeredCheckTime;
-(void)setTriggeredCheckTime:(double)arg1 ;
-(double)lastIncomingPacketTime;
-(void)setLastIncomingPacketTime:(double)arg1 ;
-(double)lastOutgoingPacketTime;
-(void)setLastOutgoingPacketTime:(double)arg1 ;
-(void)setTotalPacketsSentOnLink:(unsigned)arg1 ;
-(void)setTotalPacketsReceivedOnLink:(unsigned)arg1 ;
-(double)hbStartTime;
-(void)setHbStartTime:(double)arg1 ;
-(unsigned char)statsIntervalInSeconds;
-(void)setLinkUUID:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_source>)allocbindFailoverTimer;
-(NSDictionary *)sessionInfoDict;
-(void)setChannelNumber:(unsigned short)arg1 ;
-(unsigned short)relayLinkID;
-(NSMutableArray *)pendingStunRequests;
-(NSMutableArray *)repliedStunRequests;
-(unsigned)sessionInfoReqCount;
-(void)setRecvSKEData:(char)arg1 ;
-(void)setSentSKEData:(char)arg1 ;
-(char)isRealloc;
-(NSData *)encKey;
-(NSData *)decKey;
-(NSData *)hmacKey;
@end

