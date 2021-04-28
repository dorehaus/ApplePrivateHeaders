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

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSString* _badgeChecksum;
	NSString* _badge;
	NSString* _logoChecksum;
	NSString* _logo;
	NSString* _name;
	NSMutableArray* _resources;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dataSet;
	unsigned _linkDisplayStringIndex;
	struct {
		unsigned has_dataSet : 1;
		unsigned has_linkDisplayStringIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_badgeChecksum : 1;
		unsigned read_badge : 1;
		unsigned read_logoChecksum : 1;
		unsigned read_logo : 1;
		unsigned read_name : 1;
		unsigned read_resources : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasBadge; 
@property (nonatomic,retain) NSString * badge; 
@property (nonatomic,readonly) char hasLogo; 
@property (nonatomic,retain) NSString * logo; 
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) char hasBadgeChecksum; 
@property (nonatomic,retain) NSString * badgeChecksum; 
@property (nonatomic,readonly) char hasLogoChecksum; 
@property (nonatomic,retain) NSString * logoChecksum; 
@property (nonatomic,retain) NSMutableArray * resources; 
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (assign,nonatomic) char hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (assign,nonatomic) char hasLinkDisplayStringIndex; 
@property (assign,nonatomic) unsigned linkDisplayStringIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)resourceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)badge;
-(NSString *)url;
-(NSMutableArray *)resources;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(void)setBadge:(NSString *)arg1 ;
-(GEOTileSetRegion*)regions;
-(void)clearRegions;
-(void)readAll:(char)arg1 ;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasUrl;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasBadge;
-(NSString *)logo;
-(NSString *)badgeChecksum;
-(NSString *)logoChecksum;
-(void)setLogo:(NSString *)arg1 ;
-(void)setBadgeChecksum:(NSString *)arg1 ;
-(void)setLogoChecksum:(NSString *)arg1 ;
-(void)addResource:(id)arg1 ;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setLinkDisplayStringIndex:(unsigned)arg1 ;
-(unsigned long long)resourcesCount;
-(void)clearResources;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(char)hasLogo;
-(char)hasBadgeChecksum;
-(char)hasLogoChecksum;
-(void)setResources:(NSMutableArray *)arg1 ;
-(unsigned)dataSet;
-(void)setHasDataSet:(char)arg1 ;
-(char)hasDataSet;
-(unsigned)linkDisplayStringIndex;
-(void)setHasLinkDisplayStringIndex:(char)arg1 ;
-(char)hasLinkDisplayStringIndex;
@end

