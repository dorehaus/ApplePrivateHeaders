/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/GEOTransitTextDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, GEOFormattedString;

@interface GEOTransitClusterArtworkItem : PBCodable <GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _text;
	unsigned _artworkIndex;
	struct {
		unsigned has_artworkIndex : 1;
	}  _flags;

}

@property (nonatomic,readonly) int artworkSourceType; 
@property (nonatomic,readonly) int artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitTextDataSource> textDataSource; 
@property (nonatomic,readonly) char hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOServerFormattedString> text; 
@property (assign,nonatomic) char hasArtworkIndex; 
@property (assign,nonatomic) unsigned artworkIndex; 
@property (nonatomic,readonly) char hasText; 
@property (nonatomic,retain) GEOFormattedString * text; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id<GEOServerFormattedString>)text;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setText:(id<GEOServerFormattedString>)arg1 ;
-(char)hasText;
-(void)setArtworkIndex:(unsigned)arg1 ;
-(unsigned)artworkIndex;
-(void)setHasArtworkIndex:(char)arg1 ;
-(char)hasArtworkIndex;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(char)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
@end

