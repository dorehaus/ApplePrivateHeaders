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

@class PBDataReader, PBUnknownFields, GEORPCorrectedCoordinate, NSData, NSMutableArray, NSString;

@interface GEORPDirectionsCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPCorrectedCoordinate* _arrivalCoordinate;
	NSData* _directionsResponseId;
	NSMutableArray* _instructionCorrections;
	NSString* _overviewScreenshotImageId;
	NSMutableArray* _problematicRouteIndexs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	char _noGoodRoutesShown;
	struct {
		unsigned has_noGoodRoutesShown : 1;
		unsigned read_unknownFields : 1;
		unsigned read_arrivalCoordinate : 1;
		unsigned read_directionsResponseId : 1;
		unsigned read_instructionCorrections : 1;
		unsigned read_overviewScreenshotImageId : 1;
		unsigned read_problematicRouteIndexs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,retain) NSMutableArray * problematicRouteIndexs; 
@property (nonatomic,retain) NSMutableArray * instructionCorrections; 
@property (nonatomic,readonly) char hasOverviewScreenshotImageId; 
@property (nonatomic,retain) NSString * overviewScreenshotImageId; 
@property (nonatomic,readonly) char hasArrivalCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * arrivalCoordinate; 
@property (assign,nonatomic) char hasNoGoodRoutesShown; 
@property (assign,nonatomic) char noGoodRoutesShown; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)problematicRouteIndexType;
+(Class)instructionCorrectionType;
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
-(NSData *)directionsResponseId;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(char)hasDirectionsResponseId;
-(NSString *)overviewScreenshotImageId;
-(GEORPCorrectedCoordinate *)arrivalCoordinate;
-(void)addProblematicRouteIndex:(id)arg1 ;
-(void)addInstructionCorrection:(id)arg1 ;
-(void)setOverviewScreenshotImageId:(NSString *)arg1 ;
-(void)setArrivalCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(void)setNoGoodRoutesShown:(char)arg1 ;
-(unsigned long long)problematicRouteIndexsCount;
-(void)clearProblematicRouteIndexs;
-(id)problematicRouteIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)instructionCorrectionsCount;
-(void)clearInstructionCorrections;
-(id)instructionCorrectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)problematicRouteIndexs;
-(void)setProblematicRouteIndexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)instructionCorrections;
-(void)setInstructionCorrections:(NSMutableArray *)arg1 ;
-(char)hasOverviewScreenshotImageId;
-(char)hasArrivalCoordinate;
-(char)noGoodRoutesShown;
-(void)setHasNoGoodRoutesShown:(char)arg1 ;
-(char)hasNoGoodRoutesShown;
@end

