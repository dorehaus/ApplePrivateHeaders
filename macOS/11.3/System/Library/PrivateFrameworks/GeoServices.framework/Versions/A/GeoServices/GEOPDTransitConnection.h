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

@class PBDataReader, PBUnknownFields, NSString, GEOPDMapsIdentifier, NSMutableArray;

@interface GEOPDTransitConnection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _entityNameString;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _muid;
	NSMutableArray* _transitLabels;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_muid : 1;
		unsigned read_unknownFields : 1;
		unsigned read_entityNameString : 1;
		unsigned read_mapsId : 1;
		unsigned read_transitLabels : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,retain) NSMutableArray * transitLabels; 
@property (nonatomic,readonly) char hasEntityNameString; 
@property (nonatomic,retain) NSString * entityNameString; 
@property (nonatomic,readonly) char hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)transitLabelType;
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
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(char)hasMuid;
-(GEOPDMapsIdentifier *)mapsId;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(char)hasMapsId;
-(NSString *)entityNameString;
-(void)addTransitLabel:(id)arg1 ;
-(void)setEntityNameString:(NSString *)arg1 ;
-(unsigned long long)transitLabelsCount;
-(void)clearTransitLabels;
-(id)transitLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transitLabels;
-(void)setTransitLabels:(NSMutableArray *)arg1 ;
-(char)hasEntityNameString;
@end

