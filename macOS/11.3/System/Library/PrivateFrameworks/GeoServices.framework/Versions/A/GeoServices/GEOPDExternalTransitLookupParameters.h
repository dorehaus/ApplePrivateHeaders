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

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOLocation;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _externalTransitStationCodes;
	NSString* _sourceId;
	GEOLocation* _transactionLocation;
	double _transactionTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_transactionTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_externalTransitStationCodes : 1;
		unsigned read_sourceId : 1;
		unsigned read_transactionLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp; 
@property (nonatomic,readonly) char hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation; 
@property (nonatomic,readonly) char hasSourceId; 
@property (nonatomic,retain) NSString * sourceId; 
@property (nonatomic,retain) NSMutableArray * externalTransitStationCodes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)externalTransitStationCodeType;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)clearSensitiveFields;
-(GEOLocation *)transactionLocation;
-(NSString *)sourceId;
-(NSMutableArray *)externalTransitStationCodes;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(void)setSourceId:(NSString *)arg1 ;
-(void)addExternalTransitStationCode:(id)arg1 ;
-(char)hasTransactionLocation;
-(unsigned long long)externalTransitStationCodesCount;
-(void)clearExternalTransitStationCodes;
-(id)externalTransitStationCodeAtIndex:(unsigned long long)arg1 ;
-(double)transactionTimestamp;
-(void)setHasTransactionTimestamp:(char)arg1 ;
-(char)hasTransactionTimestamp;
-(char)hasSourceId;
-(void)setExternalTransitStationCodes:(NSMutableArray *)arg1 ;
@end

