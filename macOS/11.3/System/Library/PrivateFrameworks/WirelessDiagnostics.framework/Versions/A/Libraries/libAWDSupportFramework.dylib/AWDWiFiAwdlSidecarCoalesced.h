/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDSidecarBssSteering, AWDSidecarPeerTraffic, NSString;

@interface AWDWiFiAwdlSidecarCoalesced : PBCodable <NSCopying> {

	unsigned long long _remoteBgDuration;
	unsigned long long _remoteFgDuration;
	unsigned long long _selfBgDuration;
	unsigned long long _selfFgDuration;
	unsigned long long _timestamp;
	unsigned _pencilOffCount;
	unsigned _pencilOnCount;
	unsigned _remoteBgEntryCount;
	int _remotePeerRssi24G;
	int _remotePeerRssi5G;
	AWDSidecarBssSteering* _remoteSidecarBssSteering;
	AWDSidecarPeerTraffic* _remoteSidecarPeerTraffic;
	unsigned _selfBgEntryCount;
	int _selfPeerRssi24G;
	int _selfPeerRssi5G;
	AWDSidecarBssSteering* _selfSidecarBssSteering;
	AWDSidecarPeerTraffic* _selfSidecarPeerTraffic;
	NSString* _sessionUUID;
	char _remotefIsSDB;
	char _selfIsSDB;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasSelfFgDuration; 
@property (assign,nonatomic) unsigned long long selfFgDuration;                             //@synthesize selfFgDuration=_selfFgDuration - In the implementation block
@property (assign,nonatomic) char hasSelfBgDuration; 
@property (assign,nonatomic) unsigned long long selfBgDuration;                             //@synthesize selfBgDuration=_selfBgDuration - In the implementation block
@property (assign,nonatomic) char hasSelfBgEntryCount; 
@property (assign,nonatomic) unsigned selfBgEntryCount;                                     //@synthesize selfBgEntryCount=_selfBgEntryCount - In the implementation block
@property (assign,nonatomic) char hasSelfPeerRssi24G; 
@property (assign,nonatomic) int selfPeerRssi24G;                                           //@synthesize selfPeerRssi24G=_selfPeerRssi24G - In the implementation block
@property (assign,nonatomic) char hasSelfPeerRssi5G; 
@property (assign,nonatomic) int selfPeerRssi5G;                                            //@synthesize selfPeerRssi5G=_selfPeerRssi5G - In the implementation block
@property (assign,nonatomic) char hasSelfIsSDB; 
@property (assign,nonatomic) char selfIsSDB;                                                //@synthesize selfIsSDB=_selfIsSDB - In the implementation block
@property (assign,nonatomic) char hasRemoteFgDuration; 
@property (assign,nonatomic) unsigned long long remoteFgDuration;                           //@synthesize remoteFgDuration=_remoteFgDuration - In the implementation block
@property (assign,nonatomic) char hasRemoteBgDuration; 
@property (assign,nonatomic) unsigned long long remoteBgDuration;                           //@synthesize remoteBgDuration=_remoteBgDuration - In the implementation block
@property (assign,nonatomic) char hasRemoteBgEntryCount; 
@property (assign,nonatomic) unsigned remoteBgEntryCount;                                   //@synthesize remoteBgEntryCount=_remoteBgEntryCount - In the implementation block
@property (assign,nonatomic) char hasRemotePeerRssi24G; 
@property (assign,nonatomic) int remotePeerRssi24G;                                         //@synthesize remotePeerRssi24G=_remotePeerRssi24G - In the implementation block
@property (assign,nonatomic) char hasRemotePeerRssi5G; 
@property (assign,nonatomic) int remotePeerRssi5G;                                          //@synthesize remotePeerRssi5G=_remotePeerRssi5G - In the implementation block
@property (assign,nonatomic) char hasRemotefIsSDB; 
@property (assign,nonatomic) char remotefIsSDB;                                             //@synthesize remotefIsSDB=_remotefIsSDB - In the implementation block
@property (nonatomic,readonly) char hasSelfSidecarBssSteering; 
@property (nonatomic,retain) AWDSidecarBssSteering * selfSidecarBssSteering;                //@synthesize selfSidecarBssSteering=_selfSidecarBssSteering - In the implementation block
@property (nonatomic,readonly) char hasRemoteSidecarBssSteering; 
@property (nonatomic,retain) AWDSidecarBssSteering * remoteSidecarBssSteering;              //@synthesize remoteSidecarBssSteering=_remoteSidecarBssSteering - In the implementation block
@property (nonatomic,readonly) char hasSelfSidecarPeerTraffic; 
@property (nonatomic,retain) AWDSidecarPeerTraffic * selfSidecarPeerTraffic;                //@synthesize selfSidecarPeerTraffic=_selfSidecarPeerTraffic - In the implementation block
@property (nonatomic,readonly) char hasRemoteSidecarPeerTraffic; 
@property (nonatomic,retain) AWDSidecarPeerTraffic * remoteSidecarPeerTraffic;              //@synthesize remoteSidecarPeerTraffic=_remoteSidecarPeerTraffic - In the implementation block
@property (assign,nonatomic) char hasPencilOnCount; 
@property (assign,nonatomic) unsigned pencilOnCount;                                        //@synthesize pencilOnCount=_pencilOnCount - In the implementation block
@property (assign,nonatomic) char hasPencilOffCount; 
@property (assign,nonatomic) unsigned pencilOffCount;                                       //@synthesize pencilOffCount=_pencilOffCount - In the implementation block
@property (nonatomic,readonly) char hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                                        //@synthesize sessionUUID=_sessionUUID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setSelfSidecarBssSteering:(AWDSidecarBssSteering *)arg1 ;
-(void)setRemoteSidecarBssSteering:(AWDSidecarBssSteering *)arg1 ;
-(void)setSelfSidecarPeerTraffic:(AWDSidecarPeerTraffic *)arg1 ;
-(void)setRemoteSidecarPeerTraffic:(AWDSidecarPeerTraffic *)arg1 ;
-(void)setSessionUUID:(NSString *)arg1 ;
-(void)setSelfFgDuration:(unsigned long long)arg1 ;
-(void)setHasSelfFgDuration:(char)arg1 ;
-(char)hasSelfFgDuration;
-(void)setSelfBgDuration:(unsigned long long)arg1 ;
-(void)setHasSelfBgDuration:(char)arg1 ;
-(char)hasSelfBgDuration;
-(void)setSelfBgEntryCount:(unsigned)arg1 ;
-(void)setHasSelfBgEntryCount:(char)arg1 ;
-(char)hasSelfBgEntryCount;
-(void)setSelfPeerRssi24G:(int)arg1 ;
-(void)setHasSelfPeerRssi24G:(char)arg1 ;
-(char)hasSelfPeerRssi24G;
-(void)setSelfPeerRssi5G:(int)arg1 ;
-(void)setHasSelfPeerRssi5G:(char)arg1 ;
-(char)hasSelfPeerRssi5G;
-(void)setSelfIsSDB:(char)arg1 ;
-(void)setHasSelfIsSDB:(char)arg1 ;
-(char)hasSelfIsSDB;
-(void)setRemoteFgDuration:(unsigned long long)arg1 ;
-(void)setHasRemoteFgDuration:(char)arg1 ;
-(char)hasRemoteFgDuration;
-(void)setRemoteBgDuration:(unsigned long long)arg1 ;
-(void)setHasRemoteBgDuration:(char)arg1 ;
-(char)hasRemoteBgDuration;
-(void)setRemoteBgEntryCount:(unsigned)arg1 ;
-(void)setHasRemoteBgEntryCount:(char)arg1 ;
-(char)hasRemoteBgEntryCount;
-(void)setRemotePeerRssi24G:(int)arg1 ;
-(void)setHasRemotePeerRssi24G:(char)arg1 ;
-(char)hasRemotePeerRssi24G;
-(void)setRemotePeerRssi5G:(int)arg1 ;
-(void)setHasRemotePeerRssi5G:(char)arg1 ;
-(char)hasRemotePeerRssi5G;
-(void)setRemotefIsSDB:(char)arg1 ;
-(void)setHasRemotefIsSDB:(char)arg1 ;
-(char)hasRemotefIsSDB;
-(char)hasSelfSidecarBssSteering;
-(char)hasRemoteSidecarBssSteering;
-(char)hasSelfSidecarPeerTraffic;
-(char)hasRemoteSidecarPeerTraffic;
-(void)setPencilOnCount:(unsigned)arg1 ;
-(void)setHasPencilOnCount:(char)arg1 ;
-(char)hasPencilOnCount;
-(void)setPencilOffCount:(unsigned)arg1 ;
-(void)setHasPencilOffCount:(char)arg1 ;
-(char)hasPencilOffCount;
-(char)hasSessionUUID;
-(unsigned long long)selfFgDuration;
-(unsigned long long)selfBgDuration;
-(unsigned)selfBgEntryCount;
-(int)selfPeerRssi24G;
-(int)selfPeerRssi5G;
-(char)selfIsSDB;
-(unsigned long long)remoteFgDuration;
-(unsigned long long)remoteBgDuration;
-(unsigned)remoteBgEntryCount;
-(int)remotePeerRssi24G;
-(int)remotePeerRssi5G;
-(char)remotefIsSDB;
-(AWDSidecarBssSteering *)selfSidecarBssSteering;
-(AWDSidecarBssSteering *)remoteSidecarBssSteering;
-(AWDSidecarPeerTraffic *)selfSidecarPeerTraffic;
-(AWDSidecarPeerTraffic *)remoteSidecarPeerTraffic;
-(unsigned)pencilOnCount;
-(unsigned)pencilOffCount;
-(NSString *)sessionUUID;
@end
