/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEORPGroundViewImageResource : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _cameraNumber;
	int _loadStatus;
	unsigned _lod;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) char hasCameraNumber; 
@property (assign,nonatomic) unsigned cameraNumber; 
@property (assign,nonatomic) char hasLod; 
@property (assign,nonatomic) unsigned lod; 
@property (assign,nonatomic) char hasLoadStatus; 
@property (assign,nonatomic) int loadStatus; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setCameraNumber:(unsigned)arg1 ;
-(void)setLod:(unsigned)arg1 ;
-(void)setLoadStatus:(int)arg1 ;
-(unsigned)cameraNumber;
-(void)setHasCameraNumber:(char)arg1 ;
-(char)hasCameraNumber;
-(unsigned)lod;
-(void)setHasLod:(char)arg1 ;
-(char)hasLod;
-(int)loadStatus;
-(void)setHasLoadStatus:(char)arg1 ;
-(char)hasLoadStatus;
-(id)loadStatusAsString:(int)arg1 ;
-(int)StringAsLoadStatus:(id)arg1 ;
@end

