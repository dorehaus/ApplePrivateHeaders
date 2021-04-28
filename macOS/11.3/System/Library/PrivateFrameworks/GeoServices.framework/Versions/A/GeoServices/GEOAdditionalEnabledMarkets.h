/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSArray, NSDictionary;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _offlineMarkets;
	NSMutableArray* _transitMarkets;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_offlineMarkets : 1;
		unsigned read_transitMarkets : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * queryItems; 
@property (nonatomic,readonly) NSDictionary * queryParameters; 
@property (nonatomic,retain) NSMutableArray * transitMarkets; 
@property (nonatomic,retain) NSMutableArray * offlineMarkets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(id)additionalEnabledMarkets;
+(Class)transitMarketType;
+(Class)offlineMarketType;
+(id)_additionalEnabledTransitMarkets;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)queryItems;
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
-(NSDictionary *)queryParameters;
-(NSMutableArray *)transitMarkets;
-(NSMutableArray *)offlineMarkets;
-(void)addTransitMarket:(id)arg1 ;
-(void)addOfflineMarket:(id)arg1 ;
-(unsigned long long)transitMarketsCount;
-(void)clearTransitMarkets;
-(id)transitMarketAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)offlineMarketsCount;
-(void)clearOfflineMarkets;
-(id)offlineMarketAtIndex:(unsigned long long)arg1 ;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(void)setOfflineMarkets:(NSMutableArray *)arg1 ;
-(void)reload;
@end

