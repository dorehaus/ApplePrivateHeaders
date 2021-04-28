/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIconDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOStyleAttributes, NSString;

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOStyleAttributes* _styleAttributes;
	unsigned _cartoId;
	unsigned _transitTypeEnumValue;
	SCD_Struct_GE119 _flags;

}

@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasCartoId; 
@property (assign,nonatomic) unsigned cartoId; 
@property (assign,nonatomic) char hasTransitTypeEnumValue; 
@property (assign,nonatomic) unsigned transitTypeEnumValue; 
@property (nonatomic,readonly) char hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(char)hasStyleAttributes;
-(int)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(void)setCartoId:(unsigned)arg1 ;
-(void)setTransitTypeEnumValue:(unsigned)arg1 ;
-(unsigned)cartoId;
-(void)setHasCartoId:(char)arg1 ;
-(char)hasCartoId;
-(unsigned)transitTypeEnumValue;
-(void)setHasTransitTypeEnumValue:(char)arg1 ;
-(char)hasTransitTypeEnumValue;
@end

