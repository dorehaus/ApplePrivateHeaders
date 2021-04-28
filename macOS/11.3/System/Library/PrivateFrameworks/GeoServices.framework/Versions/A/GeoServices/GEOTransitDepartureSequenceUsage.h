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

@class PBDataReader, NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _direction;
	NSString* _headsign;
	unsigned long long _lineId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_lineId : 1;
		unsigned read_direction : 1;
		unsigned read_headsign : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (nonatomic,readonly) char hasDirection; 
@property (nonatomic,retain) NSString * direction; 
@property (nonatomic,readonly) char hasHeadsign; 
@property (nonatomic,retain) NSString * headsign; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)direction;
-(void)setDirection:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)headsign;
-(void)setHeadsign:(NSString *)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(char)hasLineId;
-(unsigned long long)lineId;
-(char)hasHeadsign;
-(char)hasDirection;
-(void)setHasLineId:(char)arg1 ;
@end

