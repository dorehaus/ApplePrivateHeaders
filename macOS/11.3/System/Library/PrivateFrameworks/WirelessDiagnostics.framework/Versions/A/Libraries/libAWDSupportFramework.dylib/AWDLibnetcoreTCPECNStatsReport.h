/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying> {

	unsigned long long _tcpECNClientSetup;
	unsigned long long _tcpECNClientSuccess;
	unsigned long long _tcpECNConnNoPacketLossCE;
	unsigned long long _tcpECNConnPacketLossCE;
	unsigned long long _tcpECNConnPacketLossNoCE;
	unsigned long long _tcpECNConnRecvCE;
	unsigned long long _tcpECNConnRecvECE;
	unsigned long long _tcpECNFallbackCE;
	unsigned long long _tcpECNFallbackReorder;
	unsigned long long _tcpECNFallbackSynLoss;
	unsigned long long _tcpECNNotSupportedPeer;
	unsigned long long _tcpECNRecvCE;
	unsigned long long _tcpECNRecvECE;
	unsigned long long _tcpECNSentECE;
	unsigned long long _tcpECNServerSetup;
	unsigned long long _tcpECNServerSuccess;
	unsigned long long _tcpECNSynAckLost;
	unsigned long long _tcpECNSynLost;
	char _tcpECNClientNegotiationEnabled;
	char _tcpECNServerNegotiationEnabled;
	SCD_Struct_AW18 _has;

}

@property (assign,nonatomic) char hasTcpECNClientNegotiationEnabled; 
@property (assign,nonatomic) char tcpECNClientNegotiationEnabled;                      //@synthesize tcpECNClientNegotiationEnabled=_tcpECNClientNegotiationEnabled - In the implementation block
@property (assign,nonatomic) char hasTcpECNServerNegotiationEnabled; 
@property (assign,nonatomic) char tcpECNServerNegotiationEnabled;                      //@synthesize tcpECNServerNegotiationEnabled=_tcpECNServerNegotiationEnabled - In the implementation block
@property (assign,nonatomic) char hasTcpECNClientSetup; 
@property (assign,nonatomic) unsigned long long tcpECNClientSetup;                     //@synthesize tcpECNClientSetup=_tcpECNClientSetup - In the implementation block
@property (assign,nonatomic) char hasTcpECNServerSetup; 
@property (assign,nonatomic) unsigned long long tcpECNServerSetup;                     //@synthesize tcpECNServerSetup=_tcpECNServerSetup - In the implementation block
@property (assign,nonatomic) char hasTcpECNClientSuccess; 
@property (assign,nonatomic) unsigned long long tcpECNClientSuccess;                   //@synthesize tcpECNClientSuccess=_tcpECNClientSuccess - In the implementation block
@property (assign,nonatomic) char hasTcpECNServerSuccess; 
@property (assign,nonatomic) unsigned long long tcpECNServerSuccess;                   //@synthesize tcpECNServerSuccess=_tcpECNServerSuccess - In the implementation block
@property (assign,nonatomic) char hasTcpECNNotSupportedPeer; 
@property (assign,nonatomic) unsigned long long tcpECNNotSupportedPeer;                //@synthesize tcpECNNotSupportedPeer=_tcpECNNotSupportedPeer - In the implementation block
@property (assign,nonatomic) char hasTcpECNSynLost; 
@property (assign,nonatomic) unsigned long long tcpECNSynLost;                         //@synthesize tcpECNSynLost=_tcpECNSynLost - In the implementation block
@property (assign,nonatomic) char hasTcpECNSynAckLost; 
@property (assign,nonatomic) unsigned long long tcpECNSynAckLost;                      //@synthesize tcpECNSynAckLost=_tcpECNSynAckLost - In the implementation block
@property (assign,nonatomic) char hasTcpECNRecvCE; 
@property (assign,nonatomic) unsigned long long tcpECNRecvCE;                          //@synthesize tcpECNRecvCE=_tcpECNRecvCE - In the implementation block
@property (assign,nonatomic) char hasTcpECNRecvECE; 
@property (assign,nonatomic) unsigned long long tcpECNRecvECE;                         //@synthesize tcpECNRecvECE=_tcpECNRecvECE - In the implementation block
@property (assign,nonatomic) char hasTcpECNSentECE; 
@property (assign,nonatomic) unsigned long long tcpECNSentECE;                         //@synthesize tcpECNSentECE=_tcpECNSentECE - In the implementation block
@property (assign,nonatomic) char hasTcpECNConnRecvCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnRecvCE;                      //@synthesize tcpECNConnRecvCE=_tcpECNConnRecvCE - In the implementation block
@property (assign,nonatomic) char hasTcpECNConnRecvECE; 
@property (assign,nonatomic) unsigned long long tcpECNConnRecvECE;                     //@synthesize tcpECNConnRecvECE=_tcpECNConnRecvECE - In the implementation block
@property (assign,nonatomic) char hasTcpECNConnPacketLossNoCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnPacketLossNoCE;              //@synthesize tcpECNConnPacketLossNoCE=_tcpECNConnPacketLossNoCE - In the implementation block
@property (assign,nonatomic) char hasTcpECNConnPacketLossCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnPacketLossCE;                //@synthesize tcpECNConnPacketLossCE=_tcpECNConnPacketLossCE - In the implementation block
@property (assign,nonatomic) char hasTcpECNConnNoPacketLossCE; 
@property (assign,nonatomic) unsigned long long tcpECNConnNoPacketLossCE;              //@synthesize tcpECNConnNoPacketLossCE=_tcpECNConnNoPacketLossCE - In the implementation block
@property (assign,nonatomic) char hasTcpECNFallbackSynLoss; 
@property (assign,nonatomic) unsigned long long tcpECNFallbackSynLoss;                 //@synthesize tcpECNFallbackSynLoss=_tcpECNFallbackSynLoss - In the implementation block
@property (assign,nonatomic) char hasTcpECNFallbackReorder; 
@property (assign,nonatomic) unsigned long long tcpECNFallbackReorder;                 //@synthesize tcpECNFallbackReorder=_tcpECNFallbackReorder - In the implementation block
@property (assign,nonatomic) char hasTcpECNFallbackCE; 
@property (assign,nonatomic) unsigned long long tcpECNFallbackCE;                      //@synthesize tcpECNFallbackCE=_tcpECNFallbackCE - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTcpECNClientNegotiationEnabled:(char)arg1 ;
-(void)setHasTcpECNClientNegotiationEnabled:(char)arg1 ;
-(char)hasTcpECNClientNegotiationEnabled;
-(void)setTcpECNServerNegotiationEnabled:(char)arg1 ;
-(void)setHasTcpECNServerNegotiationEnabled:(char)arg1 ;
-(char)hasTcpECNServerNegotiationEnabled;
-(void)setTcpECNClientSetup:(unsigned long long)arg1 ;
-(void)setHasTcpECNClientSetup:(char)arg1 ;
-(char)hasTcpECNClientSetup;
-(void)setTcpECNServerSetup:(unsigned long long)arg1 ;
-(void)setHasTcpECNServerSetup:(char)arg1 ;
-(char)hasTcpECNServerSetup;
-(void)setTcpECNClientSuccess:(unsigned long long)arg1 ;
-(void)setHasTcpECNClientSuccess:(char)arg1 ;
-(char)hasTcpECNClientSuccess;
-(void)setTcpECNServerSuccess:(unsigned long long)arg1 ;
-(void)setHasTcpECNServerSuccess:(char)arg1 ;
-(char)hasTcpECNServerSuccess;
-(void)setTcpECNNotSupportedPeer:(unsigned long long)arg1 ;
-(void)setHasTcpECNNotSupportedPeer:(char)arg1 ;
-(char)hasTcpECNNotSupportedPeer;
-(void)setTcpECNSynLost:(unsigned long long)arg1 ;
-(void)setHasTcpECNSynLost:(char)arg1 ;
-(char)hasTcpECNSynLost;
-(void)setTcpECNSynAckLost:(unsigned long long)arg1 ;
-(void)setHasTcpECNSynAckLost:(char)arg1 ;
-(char)hasTcpECNSynAckLost;
-(void)setTcpECNRecvCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNRecvCE:(char)arg1 ;
-(char)hasTcpECNRecvCE;
-(void)setTcpECNRecvECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNRecvECE:(char)arg1 ;
-(char)hasTcpECNRecvECE;
-(void)setTcpECNSentECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNSentECE:(char)arg1 ;
-(char)hasTcpECNSentECE;
-(void)setTcpECNConnRecvCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnRecvCE:(char)arg1 ;
-(char)hasTcpECNConnRecvCE;
-(void)setTcpECNConnRecvECE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnRecvECE:(char)arg1 ;
-(char)hasTcpECNConnRecvECE;
-(void)setTcpECNConnPacketLossNoCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnPacketLossNoCE:(char)arg1 ;
-(char)hasTcpECNConnPacketLossNoCE;
-(void)setTcpECNConnPacketLossCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnPacketLossCE:(char)arg1 ;
-(char)hasTcpECNConnPacketLossCE;
-(void)setTcpECNConnNoPacketLossCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNConnNoPacketLossCE:(char)arg1 ;
-(char)hasTcpECNConnNoPacketLossCE;
-(void)setTcpECNFallbackSynLoss:(unsigned long long)arg1 ;
-(void)setHasTcpECNFallbackSynLoss:(char)arg1 ;
-(char)hasTcpECNFallbackSynLoss;
-(void)setTcpECNFallbackReorder:(unsigned long long)arg1 ;
-(void)setHasTcpECNFallbackReorder:(char)arg1 ;
-(char)hasTcpECNFallbackReorder;
-(void)setTcpECNFallbackCE:(unsigned long long)arg1 ;
-(void)setHasTcpECNFallbackCE:(char)arg1 ;
-(char)hasTcpECNFallbackCE;
-(char)tcpECNClientNegotiationEnabled;
-(char)tcpECNServerNegotiationEnabled;
-(unsigned long long)tcpECNClientSetup;
-(unsigned long long)tcpECNServerSetup;
-(unsigned long long)tcpECNClientSuccess;
-(unsigned long long)tcpECNServerSuccess;
-(unsigned long long)tcpECNNotSupportedPeer;
-(unsigned long long)tcpECNSynLost;
-(unsigned long long)tcpECNSynAckLost;
-(unsigned long long)tcpECNRecvCE;
-(unsigned long long)tcpECNRecvECE;
-(unsigned long long)tcpECNSentECE;
-(unsigned long long)tcpECNConnRecvCE;
-(unsigned long long)tcpECNConnRecvECE;
-(unsigned long long)tcpECNConnPacketLossNoCE;
-(unsigned long long)tcpECNConnPacketLossCE;
-(unsigned long long)tcpECNConnNoPacketLossCE;
-(unsigned long long)tcpECNFallbackSynLoss;
-(unsigned long long)tcpECNFallbackReorder;
-(unsigned long long)tcpECNFallbackCE;
@end

