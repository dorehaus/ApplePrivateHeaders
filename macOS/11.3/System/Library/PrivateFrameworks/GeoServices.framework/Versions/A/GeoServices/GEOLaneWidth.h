/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLaneWidth : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _offset;
	unsigned _width;
	unsigned _zilchPathIndex;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) char hasOffset; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) char hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)offset;
-(void)setWidth:(unsigned)arg1 ;
-(unsigned)width;
-(id)dictionaryRepresentation;
-(void)setOffset:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(char)arg1 ;
-(char)hasZilchPathIndex;
-(void)setHasOffset:(char)arg1 ;
-(char)hasOffset;
-(void)setHasWidth:(char)arg1 ;
-(char)hasWidth;
@end

