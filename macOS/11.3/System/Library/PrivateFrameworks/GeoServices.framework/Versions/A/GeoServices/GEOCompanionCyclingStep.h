/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, PBDataReader, GEOPBTransitArtwork, GEONameInfo, NSString;

@interface GEOCompanionCyclingStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	PBDataReader* _reader;
	GEOJunctionElement* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	GEOPBTransitArtwork* _artworkOverride;
	GEONameInfo* _exitNumber;
	NSMutableArray* _maneuverNames;
	NSString* _shield;
	NSMutableArray* _signposts;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _drivingSide;
	int _junctionType;
	int _maneuverType;
	int _shieldType;
	char _toFreeway;
	struct {
		unsigned has_drivingSide : 1;
		unsigned has_junctionType : 1;
		unsigned has_maneuverType : 1;
		unsigned has_shieldType : 1;
		unsigned has_toFreeway : 1;
		unsigned read_junctionElements : 1;
		unsigned read_artworkOverride : 1;
		unsigned read_exitNumber : 1;
		unsigned read_maneuverNames : 1;
		unsigned read_shield : 1;
		unsigned read_signposts : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) char hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> maneuverArtworkOverride; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasShield; 
@property (nonatomic,retain) NSString * shield; 
@property (assign,nonatomic) char hasShieldType; 
@property (assign,nonatomic) int shieldType; 
@property (assign,nonatomic) char hasToFreeway; 
@property (assign,nonatomic) char toFreeway; 
@property (nonatomic,readonly) char hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber; 
@property (assign,nonatomic) char hasDrivingSide; 
@property (assign,nonatomic) int drivingSide; 
@property (nonatomic,readonly) char hasArtworkOverride; 
@property (nonatomic,retain) GEOPBTransitArtwork * artworkOverride; 
+(char)isValid:(id)arg1 ;
+(Class)maneuverNameType;
+(Class)signpostType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(char)arg1 ;
-(char)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(int)shieldType;
-(int)drivingSide;
-(int)junctionType;
-(GEOJunctionElement*)junctionElements;
-(unsigned long long)junctionElementsCount;
-(void)clearJunctionElements;
-(NSString *)shield;
-(GEONameInfo *)exitNumber;
-(GEOPBTransitArtwork *)artworkOverride;
-(void)setShield:(NSString *)arg1 ;
-(void)setShieldType:(int)arg1 ;
-(void)setJunctionType:(int)arg1 ;
-(void)addJunctionElement:(GEOJunctionElement)arg1 ;
-(void)addManeuverName:(id)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(void)setToFreeway:(char)arg1 ;
-(void)setExitNumber:(GEONameInfo *)arg1 ;
-(void)setDrivingSide:(int)arg1 ;
-(void)setArtworkOverride:(GEOPBTransitArtwork *)arg1 ;
-(GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)maneuverNamesCount;
-(void)clearManeuverNames;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(char)hasShield;
-(void)setHasShieldType:(char)arg1 ;
-(char)hasShieldType;
-(void)setHasJunctionType:(char)arg1 ;
-(char)hasJunctionType;
-(id)junctionTypeAsString:(int)arg1 ;
-(int)StringAsJunctionType:(id)arg1 ;
-(void)setJunctionElements:(GEOJunctionElement*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)maneuverNames;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)signposts;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(char)toFreeway;
-(void)setHasToFreeway:(char)arg1 ;
-(char)hasToFreeway;
-(char)hasExitNumber;
-(void)setHasDrivingSide:(char)arg1 ;
-(char)hasDrivingSide;
-(id)drivingSideAsString:(int)arg1 ;
-(int)StringAsDrivingSide:(id)arg1 ;
-(char)hasArtworkOverride;
-(id<GEOTransitArtworkDataSource>)maneuverArtworkOverride;
@end

