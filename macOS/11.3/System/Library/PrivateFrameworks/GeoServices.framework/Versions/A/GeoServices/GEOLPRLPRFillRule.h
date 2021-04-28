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

@class PBDataReader, GEOLPRLicensePlateStructure, GEOLPRTargetChar;

@interface GEOLPRLPRFillRule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _plateTypeIndexes;
	GEOLPRLicensePlateStructure* _frLicensePlateStructure;
	GEOLPRTargetChar* _fromChar;
	GEOLPRTargetChar* _toChar;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _fillType;
	struct {
		unsigned has_fillType : 1;
		unsigned read_plateTypeIndexes : 1;
		unsigned read_frLicensePlateStructure : 1;
		unsigned read_fromChar : 1;
		unsigned read_toChar : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasFrLicensePlateStructure; 
@property (nonatomic,retain) GEOLPRLicensePlateStructure * frLicensePlateStructure; 
@property (nonatomic,readonly) unsigned long long plateTypeIndexesCount; 
@property (nonatomic,readonly) unsigned* plateTypeIndexes; 
@property (nonatomic,readonly) char hasFromChar; 
@property (nonatomic,retain) GEOLPRTargetChar * fromChar; 
@property (nonatomic,readonly) char hasToChar; 
@property (nonatomic,retain) GEOLPRTargetChar * toChar; 
@property (assign,nonatomic) char hasFillType; 
@property (assign,nonatomic) int fillType; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOLPRTargetChar *)fromChar;
-(GEOLPRTargetChar *)toChar;
-(GEOLPRLicensePlateStructure *)frLicensePlateStructure;
-(void)addPlateTypeIndexes:(unsigned)arg1 ;
-(void)setFromChar:(GEOLPRTargetChar *)arg1 ;
-(void)setToChar:(GEOLPRTargetChar *)arg1 ;
-(void)setFillType:(int)arg1 ;
-(void)setFrLicensePlateStructure:(GEOLPRLicensePlateStructure *)arg1 ;
-(unsigned long long)plateTypeIndexesCount;
-(void)clearPlateTypeIndexes;
-(unsigned)plateTypeIndexesAtIndex:(unsigned long long)arg1 ;
-(unsigned*)plateTypeIndexes;
-(void)setPlateTypeIndexes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(char)hasFromChar;
-(char)hasToChar;
-(int)fillType;
-(void)setHasFillType:(char)arg1 ;
-(char)hasFillType;
-(id)fillTypeAsString:(int)arg1 ;
-(int)StringAsFillType:(id)arg1 ;
-(char)hasFrLicensePlateStructure;
@end
