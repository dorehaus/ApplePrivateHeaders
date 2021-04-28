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

@interface GEORPFeatureHandle : PBCodable <NSCopying> {

	GEORPFeatureHandleStyleAttribute* _styleAttributes;
	unsigned long long _styleAttributesCount;
	unsigned long long _styleAttributesSpace;
	unsigned _featureIndex;
	unsigned _featureTileX;
	unsigned _featureTileY;
	unsigned _featureTileZ;
	unsigned _identifier;
	int _style;
	int _type;
	struct {
		unsigned has_featureIndex : 1;
		unsigned has_featureTileX : 1;
		unsigned has_featureTileY : 1;
		unsigned has_featureTileZ : 1;
		unsigned has_identifier : 1;
		unsigned has_style : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasFeatureIndex; 
@property (assign,nonatomic) unsigned featureIndex; 
@property (assign,nonatomic) char hasFeatureTileX; 
@property (assign,nonatomic) unsigned featureTileX; 
@property (assign,nonatomic) char hasFeatureTileY; 
@property (assign,nonatomic) unsigned featureTileY; 
@property (assign,nonatomic) char hasFeatureTileZ; 
@property (assign,nonatomic) unsigned featureTileZ; 
@property (assign,nonatomic) char hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) char hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) unsigned long long styleAttributesCount; 
@property (nonatomic,readonly) GEORPFeatureHandleStyleAttribute* styleAttributes; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)identifier;
-(int)style;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStyle:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(GEORPFeatureHandleStyleAttribute*)styleAttributes;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasIdentifier;
-(unsigned)featureIndex;
-(void)setHasStyle:(char)arg1 ;
-(char)hasStyle;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasIdentifier:(char)arg1 ;
-(void)clearStyleAttributes;
-(void)setFeatureIndex:(unsigned)arg1 ;
-(void)setFeatureTileX:(unsigned)arg1 ;
-(void)setFeatureTileY:(unsigned)arg1 ;
-(void)setFeatureTileZ:(unsigned)arg1 ;
-(void)addStyleAttribute:(GEORPFeatureHandleStyleAttribute)arg1 ;
-(unsigned long long)styleAttributesCount;
-(GEORPFeatureHandleStyleAttribute)styleAttributeAtIndex:(unsigned long long)arg1 ;
-(void)setHasFeatureIndex:(char)arg1 ;
-(char)hasFeatureIndex;
-(unsigned)featureTileX;
-(void)setHasFeatureTileX:(char)arg1 ;
-(char)hasFeatureTileX;
-(unsigned)featureTileY;
-(void)setHasFeatureTileY:(char)arg1 ;
-(char)hasFeatureTileY;
-(unsigned)featureTileZ;
-(void)setHasFeatureTileZ:(char)arg1 ;
-(char)hasFeatureTileZ;
-(void)setStyleAttributes:(GEORPFeatureHandleStyleAttribute*)arg1 count:(unsigned long long)arg2 ;
@end

