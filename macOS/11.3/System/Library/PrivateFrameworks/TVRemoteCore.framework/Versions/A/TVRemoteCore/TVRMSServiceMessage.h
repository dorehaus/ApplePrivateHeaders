/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVRMSServiceMessage : PBCodable <NSCopying> {

	NSString* _displayName;
	NSString* _homeSharingGroupKey;
	NSString* _hostName;
	NSString* _networkName;
	int _port;
	int _serviceDiscoverySource;
	int _serviceLegacyFlags;
	int _serviceType;
	SCD_Struct_TV8 _has;

}

@property (nonatomic,readonly) char hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) char hasNetworkName; 
@property (nonatomic,retain) NSString * networkName;                      //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,readonly) char hasHostName; 
@property (nonatomic,retain) NSString * hostName;                         //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) char hasPort; 
@property (assign,nonatomic) int port;                                    //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) char hasServiceType; 
@property (assign,nonatomic) int serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) char hasServiceDiscoverySource; 
@property (assign,nonatomic) int serviceDiscoverySource;                  //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) char hasServiceLegacyFlags; 
@property (assign,nonatomic) int serviceLegacyFlags;                      //@synthesize serviceLegacyFlags=_serviceLegacyFlags - In the implementation block
@property (nonatomic,readonly) char hasHomeSharingGroupKey; 
@property (nonatomic,retain) NSString * homeSharingGroupKey;              //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)port;
-(NSString *)displayName;
-(id)dictionaryRepresentation;
-(void)setPort:(int)arg1 ;
-(NSString *)hostName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)serviceType;
-(void)setServiceType:(int)arg1 ;
-(char)hasDisplayName;
-(void)setHasServiceType:(char)arg1 ;
-(char)hasServiceType;
-(NSString *)networkName;
-(void)setHostName:(NSString *)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(char)hasNetworkName;
-(void)setHasPort:(char)arg1 ;
-(char)hasPort;
-(int)serviceDiscoverySource;
-(int)serviceLegacyFlags;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(int)arg1 ;
-(void)setServiceLegacyFlags:(int)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(char)hasHostName;
-(void)setHasServiceDiscoverySource:(char)arg1 ;
-(char)hasServiceDiscoverySource;
-(void)setHasServiceLegacyFlags:(char)arg1 ;
-(char)hasServiceLegacyFlags;
-(char)hasHomeSharingGroupKey;
@end

