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

@class PBDataReader, PBUnknownFields, GEORPCorrectedCoordinate, GEORPCorrectedLabel;

@interface GEORPTileFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPCorrectedCoordinate* _coordinate;
	GEORPCorrectedLabel* _label;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_coordinate : 1;
		unsigned read_label : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * label; 
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * coordinate; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPCorrectedLabel *)label;
-(void)setLabel:(GEORPCorrectedLabel *)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPCorrectedCoordinate *)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasLabel;
-(void)setCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(char)hasCoordinate;
@end

