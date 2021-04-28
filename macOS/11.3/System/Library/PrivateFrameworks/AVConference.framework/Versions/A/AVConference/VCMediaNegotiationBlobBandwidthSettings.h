/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable <NSCopying> {

	int _configuration;
	int _configurationExtension;
	unsigned _maxBandwidth;
	SCD_Struct_VC55 _has;

}

@property (assign,nonatomic) int configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned maxBandwidth;                       //@synthesize maxBandwidth=_maxBandwidth - In the implementation block
@property (assign,nonatomic) char hasConfigurationExtension; 
@property (assign,nonatomic) int configurationExtension;                  //@synthesize configurationExtension=_configurationExtension - In the implementation block
+(int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(int)configuration;
-(void)setConfiguration:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)maxBandwidth;
-(void)setMaxBandwidth:(unsigned)arg1 ;
-(id)configurationAsString:(int)arg1 ;
-(int)StringAsConfiguration:(id)arg1 ;
-(int)configurationExtension;
-(void)setConfigurationExtension:(int)arg1 ;
-(void)setHasConfigurationExtension:(char)arg1 ;
-(char)hasConfigurationExtension;
-(id)configurationExtensionAsString:(int)arg1 ;
-(int)StringAsConfigurationExtension:(id)arg1 ;
-(id)newBandwidthConfigurations;
@end

