/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/Versions/A/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSgPTPPort.h>

@class IOKConnection, NSMutableArray, NSString;

@interface TSgPTPNetworkPort : TSgPTPPort {

	IOKConnection* _connection;
	NSMutableArray* _clients;
	char _remoteIsSameDevice;
	char _asCapable;
	char _localSyncLogMeanInterval;
	char _remoteSyncLogMeanInterval;
	char _localAnnounceLogMeanInterval;
	char _remoteAnnounceLogMeanInterval;
	unsigned char _localLinkType;
	unsigned char _remoteLinkType;
	unsigned char _localTimestampingMode;
	unsigned char _remoteTimestampingMode;
	unsigned char _localOscillatorType;
	unsigned char _remoteOscillatorType;
	char _hasLocalFrequencyToleranceLower;
	char _hasLocalFrequencyToleranceUpper;
	char _hasRemoteFrequencyToleranceLower;
	char _hasRemoteFrequencyToleranceUpper;
	char _hasLocalFrequencyStabilityLower;
	char _hasLocalFrequencyStabilityUpper;
	char _hasRemoteFrequencyStabilityLower;
	char _hasRemoteFrequencyStabilityUpper;
	char _enabled;
	char _overridenReceiveMatching;
	unsigned short _remotePortNumber;
	unsigned short _overridenReceivePortNumber;
	unsigned _propagationDelay;
	unsigned _maximumPropagationDelay;
	unsigned _minimumPropagationDelay;
	unsigned _propagationDelayLimit;
	unsigned _maximumRawDelay;
	unsigned _minimumRawDelay;
	int _localFrequencyToleranceLower;
	int _localFrequencyToleranceUpper;
	int _remoteFrequencyToleranceLower;
	int _remoteFrequencyToleranceUpper;
	int _localFrequencyStabilityLower;
	int _localFrequencyStabilityUpper;
	int _remoteFrequencyStabilityLower;
	int _remoteFrequencyStabilityUpper;
	unsigned long long _remoteClockIdentity;
	NSString* _sourceAddressString;
	NSString* _destinationAddressString;
	NSString* _interfaceName;
	unsigned long long _overridenReceiveClockIdentity;

}

@property (assign,nonatomic) unsigned long long remoteClockIdentity;                        //@synthesize remoteClockIdentity=_remoteClockIdentity - In the implementation block
@property (assign,nonatomic) unsigned short remotePortNumber;                               //@synthesize remotePortNumber=_remotePortNumber - In the implementation block
@property (assign,nonatomic) char remoteIsSameDevice;                                       //@synthesize remoteIsSameDevice=_remoteIsSameDevice - In the implementation block
@property (assign,getter=isASCapable,nonatomic) char asCapable;                             //@synthesize asCapable=_asCapable - In the implementation block
@property (assign,nonatomic) unsigned propagationDelay;                                     //@synthesize propagationDelay=_propagationDelay - In the implementation block
@property (assign,nonatomic) unsigned maximumPropagationDelay;                              //@synthesize maximumPropagationDelay=_maximumPropagationDelay - In the implementation block
@property (assign,nonatomic) unsigned minimumPropagationDelay;                              //@synthesize minimumPropagationDelay=_minimumPropagationDelay - In the implementation block
@property (assign,nonatomic) unsigned propagationDelayLimit;                                //@synthesize propagationDelayLimit=_propagationDelayLimit - In the implementation block
@property (assign,nonatomic) unsigned maximumRawDelay;                                      //@synthesize maximumRawDelay=_maximumRawDelay - In the implementation block
@property (assign,nonatomic) unsigned minimumRawDelay;                                      //@synthesize minimumRawDelay=_minimumRawDelay - In the implementation block
@property (assign,nonatomic) char localSyncLogMeanInterval;                                 //@synthesize localSyncLogMeanInterval=_localSyncLogMeanInterval - In the implementation block
@property (assign,nonatomic) char remoteSyncLogMeanInterval;                                //@synthesize remoteSyncLogMeanInterval=_remoteSyncLogMeanInterval - In the implementation block
@property (assign,nonatomic) char localAnnounceLogMeanInterval;                             //@synthesize localAnnounceLogMeanInterval=_localAnnounceLogMeanInterval - In the implementation block
@property (assign,nonatomic) char remoteAnnounceLogMeanInterval;                            //@synthesize remoteAnnounceLogMeanInterval=_remoteAnnounceLogMeanInterval - In the implementation block
@property (assign,nonatomic) unsigned char localLinkType;                                   //@synthesize localLinkType=_localLinkType - In the implementation block
@property (assign,nonatomic) unsigned char remoteLinkType;                                  //@synthesize remoteLinkType=_remoteLinkType - In the implementation block
@property (assign,nonatomic) unsigned char localTimestampingMode;                           //@synthesize localTimestampingMode=_localTimestampingMode - In the implementation block
@property (assign,nonatomic) unsigned char remoteTimestampingMode;                          //@synthesize remoteTimestampingMode=_remoteTimestampingMode - In the implementation block
@property (assign,nonatomic) unsigned char localOscillatorType;                             //@synthesize localOscillatorType=_localOscillatorType - In the implementation block
@property (assign,nonatomic) unsigned char remoteOscillatorType;                            //@synthesize remoteOscillatorType=_remoteOscillatorType - In the implementation block
@property (assign,nonatomic) char hasLocalFrequencyToleranceLower;                          //@synthesize hasLocalFrequencyToleranceLower=_hasLocalFrequencyToleranceLower - In the implementation block
@property (assign,nonatomic) int localFrequencyToleranceLower;                              //@synthesize localFrequencyToleranceLower=_localFrequencyToleranceLower - In the implementation block
@property (assign,nonatomic) char hasLocalFrequencyToleranceUpper;                          //@synthesize hasLocalFrequencyToleranceUpper=_hasLocalFrequencyToleranceUpper - In the implementation block
@property (assign,nonatomic) int localFrequencyToleranceUpper;                              //@synthesize localFrequencyToleranceUpper=_localFrequencyToleranceUpper - In the implementation block
@property (assign,nonatomic) char hasRemoteFrequencyToleranceLower;                         //@synthesize hasRemoteFrequencyToleranceLower=_hasRemoteFrequencyToleranceLower - In the implementation block
@property (assign,nonatomic) int remoteFrequencyToleranceLower;                             //@synthesize remoteFrequencyToleranceLower=_remoteFrequencyToleranceLower - In the implementation block
@property (assign,nonatomic) char hasRemoteFrequencyToleranceUpper;                         //@synthesize hasRemoteFrequencyToleranceUpper=_hasRemoteFrequencyToleranceUpper - In the implementation block
@property (assign,nonatomic) int remoteFrequencyToleranceUpper;                             //@synthesize remoteFrequencyToleranceUpper=_remoteFrequencyToleranceUpper - In the implementation block
@property (assign,nonatomic) char hasLocalFrequencyStabilityLower;                          //@synthesize hasLocalFrequencyStabilityLower=_hasLocalFrequencyStabilityLower - In the implementation block
@property (assign,nonatomic) int localFrequencyStabilityLower;                              //@synthesize localFrequencyStabilityLower=_localFrequencyStabilityLower - In the implementation block
@property (assign,nonatomic) char hasLocalFrequencyStabilityUpper;                          //@synthesize hasLocalFrequencyStabilityUpper=_hasLocalFrequencyStabilityUpper - In the implementation block
@property (assign,nonatomic) int localFrequencyStabilityUpper;                              //@synthesize localFrequencyStabilityUpper=_localFrequencyStabilityUpper - In the implementation block
@property (assign,nonatomic) char hasRemoteFrequencyStabilityLower;                         //@synthesize hasRemoteFrequencyStabilityLower=_hasRemoteFrequencyStabilityLower - In the implementation block
@property (assign,nonatomic) int remoteFrequencyStabilityLower;                             //@synthesize remoteFrequencyStabilityLower=_remoteFrequencyStabilityLower - In the implementation block
@property (assign,nonatomic) char hasRemoteFrequencyStabilityUpper;                         //@synthesize hasRemoteFrequencyStabilityUpper=_hasRemoteFrequencyStabilityUpper - In the implementation block
@property (assign,nonatomic) int remoteFrequencyStabilityUpper;                             //@synthesize remoteFrequencyStabilityUpper=_remoteFrequencyStabilityUpper - In the implementation block
@property (nonatomic,copy) NSString * sourceAddressString;                                  //@synthesize sourceAddressString=_sourceAddressString - In the implementation block
@property (nonatomic,copy) NSString * destinationAddressString;                             //@synthesize destinationAddressString=_destinationAddressString - In the implementation block
@property (assign,nonatomic) char enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) IOKConnection * connection; 
@property (assign,nonatomic) char overridenReceiveMatching;                                 //@synthesize overridenReceiveMatching=_overridenReceiveMatching - In the implementation block
@property (assign,nonatomic) unsigned long long overridenReceiveClockIdentity;              //@synthesize overridenReceiveClockIdentity=_overridenReceiveClockIdentity - In the implementation block
@property (assign,nonatomic) unsigned short overridenReceivePortNumber;                     //@synthesize overridenReceivePortNumber=_overridenReceivePortNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * interfaceName;                               //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
-(IOKConnection *)connection;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(char)_enabled;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(NSString *)interfaceName;
-(void)serviceTerminated;
-(char)_commonInitWithService:(id)arg1 ;
-(void)updateProperties;
-(unsigned char)_localOscillatorType;
-(char)_hasLocalFrequencyToleranceLower;
-(int)_localFrequencyToleranceLower;
-(char)_hasLocalFrequencyToleranceUpper;
-(int)_localFrequencyToleranceUpper;
-(char)_hasLocalFrequencyStabilityLower;
-(int)_localFrequencyStabilityLower;
-(char)_hasLocalFrequencyStabilityUpper;
-(int)_localFrequencyStabilityUpper;
-(unsigned char)localOscillatorType;
-(void)setLocalOscillatorType:(unsigned char)arg1 ;
-(char)hasLocalFrequencyToleranceLower;
-(void)setHasLocalFrequencyToleranceLower:(char)arg1 ;
-(int)localFrequencyToleranceLower;
-(void)setLocalFrequencyToleranceLower:(int)arg1 ;
-(char)hasLocalFrequencyToleranceUpper;
-(void)setHasLocalFrequencyToleranceUpper:(char)arg1 ;
-(int)localFrequencyToleranceUpper;
-(void)setLocalFrequencyToleranceUpper:(int)arg1 ;
-(char)hasLocalFrequencyStabilityLower;
-(void)setHasLocalFrequencyStabilityLower:(char)arg1 ;
-(int)localFrequencyStabilityLower;
-(void)setLocalFrequencyStabilityLower:(int)arg1 ;
-(char)hasLocalFrequencyStabilityUpper;
-(void)setHasLocalFrequencyStabilityUpper:(char)arg1 ;
-(int)localFrequencyStabilityUpper;
-(void)setLocalFrequencyStabilityUpper:(int)arg1 ;
-(unsigned long long)_remoteClockIdentity;
-(unsigned short)_remotePortNumber;
-(char)_remoteIsSameDevice;
-(char)_isASCapable;
-(unsigned)_propagationDelay;
-(unsigned)_maximumPropagationDelay;
-(unsigned)_minimumPropagationDelay;
-(unsigned)_propagationDelayLimit;
-(unsigned)_maximumRawDelay;
-(unsigned)_minimumRawDelay;
-(char)_localSyncLogMeanInterval;
-(char)_remoteSyncLogMeanInterval;
-(char)_localAnnounceLogMeanInterval;
-(char)_remoteAnnounceLogMeanInterval;
-(unsigned char)_localLinkType;
-(unsigned char)_remoteLinkType;
-(unsigned char)_localTimestampingMode;
-(unsigned char)_remoteTimestampingMode;
-(unsigned char)_remoteOscillatorType;
-(char)_hasRemoteFrequencyToleranceLower;
-(int)_remoteFrequencyToleranceLower;
-(char)_hasRemoteFrequencyToleranceUpper;
-(int)_remoteFrequencyToleranceUpper;
-(char)_hasRemoteFrequencyStabilityLower;
-(int)_remoteFrequencyStabilityLower;
-(char)_hasRemoteFrequencyStabilityUpper;
-(int)_remoteFrequencyStabilityUpper;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
-(char)_overridenReceiveMatching;
-(unsigned long long)_overridenReceiveClockIdentity;
-(unsigned short)_overridenReceivePortNumber;
-(unsigned long long)remoteClockIdentity;
-(void)setRemoteClockIdentity:(unsigned long long)arg1 ;
-(unsigned short)remotePortNumber;
-(void)setRemotePortNumber:(unsigned short)arg1 ;
-(char)remoteIsSameDevice;
-(void)setRemoteIsSameDevice:(char)arg1 ;
-(char)isASCapable;
-(void)setAsCapable:(char)arg1 ;
-(unsigned)propagationDelay;
-(void)setPropagationDelay:(unsigned)arg1 ;
-(unsigned)maximumPropagationDelay;
-(void)setMaximumPropagationDelay:(unsigned)arg1 ;
-(unsigned)minimumPropagationDelay;
-(void)setMinimumPropagationDelay:(unsigned)arg1 ;
-(unsigned)maximumRawDelay;
-(void)setMaximumRawDelay:(unsigned)arg1 ;
-(unsigned)minimumRawDelay;
-(void)setMinimumRawDelay:(unsigned)arg1 ;
-(char)localSyncLogMeanInterval;
-(void)setLocalSyncLogMeanInterval:(char)arg1 ;
-(char)remoteSyncLogMeanInterval;
-(void)setRemoteSyncLogMeanInterval:(char)arg1 ;
-(char)localAnnounceLogMeanInterval;
-(void)setLocalAnnounceLogMeanInterval:(char)arg1 ;
-(char)remoteAnnounceLogMeanInterval;
-(void)setRemoteAnnounceLogMeanInterval:(char)arg1 ;
-(unsigned char)localLinkType;
-(void)setLocalLinkType:(unsigned char)arg1 ;
-(unsigned char)remoteLinkType;
-(void)setRemoteLinkType:(unsigned char)arg1 ;
-(unsigned char)localTimestampingMode;
-(void)setLocalTimestampingMode:(unsigned char)arg1 ;
-(unsigned char)remoteTimestampingMode;
-(void)setRemoteTimestampingMode:(unsigned char)arg1 ;
-(unsigned char)remoteOscillatorType;
-(void)setRemoteOscillatorType:(unsigned char)arg1 ;
-(char)hasRemoteFrequencyToleranceLower;
-(void)setHasRemoteFrequencyToleranceLower:(char)arg1 ;
-(int)remoteFrequencyToleranceLower;
-(void)setRemoteFrequencyToleranceLower:(int)arg1 ;
-(char)hasRemoteFrequencyToleranceUpper;
-(void)setHasRemoteFrequencyToleranceUpper:(char)arg1 ;
-(int)remoteFrequencyToleranceUpper;
-(void)setRemoteFrequencyToleranceUpper:(int)arg1 ;
-(char)hasRemoteFrequencyStabilityLower;
-(void)setHasRemoteFrequencyStabilityLower:(char)arg1 ;
-(int)remoteFrequencyStabilityLower;
-(void)setRemoteFrequencyStabilityLower:(int)arg1 ;
-(char)hasRemoteFrequencyStabilityUpper;
-(void)setHasRemoteFrequencyStabilityUpper:(char)arg1 ;
-(int)remoteFrequencyStabilityUpper;
-(void)setRemoteFrequencyStabilityUpper:(int)arg1 ;
-(NSString *)sourceAddressString;
-(void)setSourceAddressString:(NSString *)arg1 ;
-(NSString *)destinationAddressString;
-(void)setDestinationAddressString:(NSString *)arg1 ;
-(char)overridenReceiveMatching;
-(void)setOverridenReceiveMatching:(char)arg1 ;
-(unsigned long long)overridenReceiveClockIdentity;
-(void)setOverridenReceiveClockIdentity:(unsigned long long)arg1 ;
-(unsigned short)overridenReceivePortNumber;
-(void)setOverridenReceivePortNumber:(unsigned short)arg1 ;
-(char)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)arg1 syncMessageInterval:(char)arg2 announceMessageInterval:(char)arg3 error:(id*)arg4 ;
-(char)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)arg1 remotePortNumber:(unsigned short)arg2 error:(id*)arg3 ;
-(char)restoreReceiveMatchingError:(id*)arg1 ;
-(char)enablePortError:(id*)arg1 ;
-(char)disablePortError:(id*)arg1 ;
-(char)getCurrentPortInfo:(SCD_Struct_TS4*)arg1 error:(id*)arg2 ;
-(void)_handleNotification:(int)arg1 withArg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5 arg5:(unsigned long long)arg6 arg6:(unsigned long long)arg7 ;
-(char)registerAsyncCallbackError:(id*)arg1 ;
-(char)deregisterAsyncCallbackError:(id*)arg1 ;
-(unsigned)propagationDelayLimit;
-(void)setPropagationDelayLimit:(unsigned)arg1 ;
@end

