/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HMPBNaturalLightingAction : PBCodable <NSCopying> {

	NSData* _lightProfileUUID;
	NSData* _uuid;
	char _naturalLightingEnabled;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) char hasUuid; 
@property (nonatomic,retain) NSData * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) char hasNaturalLightingEnabled; 
@property (assign,nonatomic) char naturalLightingEnabled;                 //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (nonatomic,readonly) char hasLightProfileUUID; 
@property (nonatomic,retain) NSData * lightProfileUUID;                   //@synthesize lightProfileUUID=_lightProfileUUID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)uuid;
-(void)setUuid:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasUuid;
-(char)naturalLightingEnabled;
-(void)setLightProfileUUID:(NSData *)arg1 ;
-(void)setNaturalLightingEnabled:(char)arg1 ;
-(void)setHasNaturalLightingEnabled:(char)arg1 ;
-(char)hasNaturalLightingEnabled;
-(char)hasLightProfileUUID;
-(NSData *)lightProfileUUID;
@end

