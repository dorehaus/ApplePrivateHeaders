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

@class PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOJunctionInfo, NSMutableArray, GEONameInfo;

@interface GEOSignGuidance : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _artworkOverride;
	GEOJunctionInfo* _junctionInfo;
	NSMutableArray* _secondarySigns;
	GEONameInfo* _shieldName;
	NSMutableArray* _signDetails;
	NSMutableArray* _signTitles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maneuverArrowOverride;
	unsigned _stackRanking;
	struct {
		unsigned has_maneuverArrowOverride : 1;
		unsigned has_stackRanking : 1;
		unsigned read_unknownFields : 1;
		unsigned read_artworkOverride : 1;
		unsigned read_junctionInfo : 1;
		unsigned read_secondarySigns : 1;
		unsigned read_shieldName : 1;
		unsigned read_signDetails : 1;
		unsigned read_signTitles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * signTitles; 
@property (nonatomic,retain) NSMutableArray * signDetails; 
@property (nonatomic,retain) NSMutableArray * secondarySigns; 
@property (assign,nonatomic) char hasManeuverArrowOverride; 
@property (assign,nonatomic) int maneuverArrowOverride; 
@property (nonatomic,readonly) char hasShieldName; 
@property (nonatomic,retain) GEONameInfo * shieldName; 
@property (assign,nonatomic) char hasStackRanking; 
@property (assign,nonatomic) unsigned stackRanking; 
@property (nonatomic,readonly) char hasJunctionInfo; 
@property (nonatomic,retain) GEOJunctionInfo * junctionInfo; 
@property (nonatomic,readonly) char hasArtworkOverride; 
@property (nonatomic,retain) GEOPBTransitArtwork * artworkOverride; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)signTitleType;
+(Class)signDetailType;
+(Class)secondarySignType;
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
-(GEOPBTransitArtwork *)artworkOverride;
-(void)setArtworkOverride:(GEOPBTransitArtwork *)arg1 ;
-(char)hasArtworkOverride;
-(GEONameInfo *)shieldName;
-(GEOJunctionInfo *)junctionInfo;
-(void)addSignTitle:(id)arg1 ;
-(void)addSignDetail:(id)arg1 ;
-(void)addSecondarySign:(id)arg1 ;
-(void)setManeuverArrowOverride:(int)arg1 ;
-(void)setShieldName:(GEONameInfo *)arg1 ;
-(void)setStackRanking:(unsigned)arg1 ;
-(void)setJunctionInfo:(GEOJunctionInfo *)arg1 ;
-(unsigned long long)signTitlesCount;
-(void)clearSignTitles;
-(id)signTitleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)signDetailsCount;
-(void)clearSignDetails;
-(id)signDetailAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)secondarySignsCount;
-(void)clearSecondarySigns;
-(id)secondarySignAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)signTitles;
-(void)setSignTitles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)signDetails;
-(void)setSignDetails:(NSMutableArray *)arg1 ;
-(NSMutableArray *)secondarySigns;
-(void)setSecondarySigns:(NSMutableArray *)arg1 ;
-(int)maneuverArrowOverride;
-(void)setHasManeuverArrowOverride:(char)arg1 ;
-(char)hasManeuverArrowOverride;
-(id)maneuverArrowOverrideAsString:(int)arg1 ;
-(int)StringAsManeuverArrowOverride:(id)arg1 ;
-(char)hasShieldName;
-(unsigned)stackRanking;
-(void)setHasStackRanking:(char)arg1 ;
-(char)hasStackRanking;
-(char)hasJunctionInfo;
@end

