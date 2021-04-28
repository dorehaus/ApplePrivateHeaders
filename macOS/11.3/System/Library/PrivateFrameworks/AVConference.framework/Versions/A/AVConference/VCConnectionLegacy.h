/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCConnection.h>
#import <libobjc.A.dylib/VCConnectionProtocol.h>

@class NSUUID, NSString;

@interface VCConnectionLegacy : VCConnection <VCConnectionProtocol> {

	unsigned _type;
	int _priority;
	char _waitToBeNominated;
	tagCONNRESULT* _connectionResult;
	char isLocalConstrained;
	char isLocalExpensive;
	char isRemoteConstrained;
	char isRemoteExpensive;
	char isLocalDelegated;
	char isRemoteDelegated;
	char isLocalOn5G;
	char isRemoteOn5G;

}

@property (readonly) tagCONNRESULT* connectionResult;                   //@synthesize connectionResult=_connectionResult - In the implementation block
@property (assign) char waitToBeNominated;                              //@synthesize waitToBeNominated=_waitToBeNominated - In the implementation block
@property (readonly) unsigned short relayChannelNumber; 
@property (readonly) char isUpgraded; 
@property (readonly) char isReplaceOnly; 
@property (readonly) char isLocalOnWiFi; 
@property (readonly) char isRemoteOnWiFi; 
@property (readonly) char isLocalOnCellular; 
@property (readonly) char isRemoteOnCellular; 
@property (readonly) char isLocalOn5G; 
@property (readonly) char isRemoteOn5G; 
@property (readonly) char isLocalExpensive; 
@property (readonly) char isRemoteExpensive; 
@property (readonly) char isLocalConstrained; 
@property (readonly) char isRemoteConstrained; 
@property (readonly) char isLocalDelegated; 
@property (readonly) char isRemoteDelegated; 
@property (readonly) char isIPv6; 
@property (assign) int connectionMTU; 
@property (readonly) int connectionId; 
@property (readonly) char isRelay; 
@property (readonly) char isVPN; 
@property (readonly) char serverIsDegraded; 
@property (readonly) NSUUID * connectionUUID; 
@property (readonly) int localConnectionType; 
@property (readonly) int remoteConnectionType; 
@property (assign) int localCellTech; 
@property (assign) int remoteCellTech; 
@property (assign) int priority;                                        //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned type;                                     //@synthesize type=_type - In the implementation block
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@property (assign) unsigned uplinkBitrateCap; 
@property (assign) unsigned downlinkBitrateCap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copy;
-(void)dealloc;
-(NSString *)description;
-(unsigned)type;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(int)remoteConnectionType;
-(char)serverIsDegraded;
-(int)cellularMTU;
-(NSUUID *)connectionUUID;
-(int)connectionId;
-(char)isRelay;
-(char)isLocalExpensive;
-(char)isRemoteExpensive;
-(char)isIPv6;
-(int)localCellTech;
-(int)remoteCellTech;
-(id)initWithConnectionResult:(tagCONNRESULT*)arg1 type:(unsigned)arg2 ;
-(tagCONNRESULT*)connectionResult;
-(char)waitToBeNominated;
-(char)isLocalOnWiFi;
-(char)isRemoteOnWiFi;
-(id)ipportToString:(tagIPPORT*)arg1 ;
-(unsigned short)relayChannelNumber;
-(char)isLocalOnCellular;
-(char)isRemoteOnCellular;
-(tagIPPORT)IPPortForNWConnection:(id)arg1 ;
-(char)isRemoteIPPort:(tagIPPORT*)arg1 ;
-(char)isSameAsConnection:(id)arg1 ;
-(char)isOnSameInterfacesWithConnection:(id)arg1 ;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(char)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(char)isLocalOn5G;
-(char)isRemoteOn5G;
-(char)isLocalConstrained;
-(char)isRemoteConstrained;
-(char)isLocalDelegated;
-(char)isRemoteDelegated;
-(int)connectionMTU;
-(void)setConnectionMTU:(int)arg1 ;
-(char)isVPN;
-(int)localConnectionType;
-(void)setLocalCellTech:(int)arg1 ;
-(void)setRemoteCellTech:(int)arg1 ;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(unsigned)uplinkBitrateCap;
-(void)setUplinkBitrateCap:(unsigned)arg1 ;
-(unsigned)downlinkBitrateCap;
-(void)setDownlinkBitrateCap:(unsigned)arg1 ;
-(id)initWithCandidatePair:(tagCANDIDATEPAIR*)arg1 ;
-(char)isLocalIPPort:(tagIPPORT*)arg1 ;
-(char)isOnSameIPPortWithConnection:(id)arg1 ;
-(char)isUpgraded;
-(char)isReplaceOnly;
-(void)setWaitToBeNominated:(char)arg1 ;
@end
