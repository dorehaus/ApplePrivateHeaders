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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDLinkedPlace;

@interface GEOPDContainedPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _childPlaces;
	unsigned long long _featureId;
	GEOPDLinkedPlace* _parentPlace;
	NSMutableArray* _siblingPlaces;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_featureId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_childPlaces : 1;
		unsigned read_parentPlace : 1;
		unsigned read_siblingPlaces : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasParentPlace; 
@property (nonatomic,retain) GEOPDLinkedPlace * parentPlace; 
@property (nonatomic,retain) NSMutableArray * childPlaces; 
@property (assign,nonatomic) char hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (nonatomic,retain) NSMutableArray * siblingPlaces; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)childPlaceType;
+(Class)siblingPlaceType;
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
-(void)setFeatureId:(unsigned long long)arg1 ;
-(unsigned long long)featureId;
-(void)setHasFeatureId:(char)arg1 ;
-(char)hasFeatureId;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(GEOPDLinkedPlace *)parentPlace;
-(void)setParentPlace:(GEOPDLinkedPlace *)arg1 ;
-(void)addChildPlace:(id)arg1 ;
-(void)addSiblingPlace:(id)arg1 ;
-(unsigned long long)childPlacesCount;
-(void)clearChildPlaces;
-(id)childPlaceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)siblingPlacesCount;
-(void)clearSiblingPlaces;
-(id)siblingPlaceAtIndex:(unsigned long long)arg1 ;
-(char)hasParentPlace;
-(NSMutableArray *)childPlaces;
-(void)setChildPlaces:(NSMutableArray *)arg1 ;
-(NSMutableArray *)siblingPlaces;
-(void)setSiblingPlaces:(NSMutableArray *)arg1 ;
@end

