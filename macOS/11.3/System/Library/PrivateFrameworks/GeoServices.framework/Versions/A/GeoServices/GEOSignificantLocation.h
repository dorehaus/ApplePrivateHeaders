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

@class PBDataReader, GEOStructuredAddress, NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOStructuredAddress* _address;
	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	struct {
		unsigned has_confidence : 1;
		unsigned has_locationIndex : 1;
		unsigned has_numberOfVisitsBucket : 1;
		unsigned read_address : 1;
		unsigned read_identifier : 1;
		unsigned read_location : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) char hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex; 
@property (assign,nonatomic) char hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket; 
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) char hasConfidence; 
@property (assign,nonatomic) double confidence; 
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOStructuredAddress * address; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(GEOStructuredAddress *)address;
-(double)confidence;
-(void)setAddress:(GEOStructuredAddress *)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasIdentifier;
-(void)clearSensitiveFields;
-(void)setHasConfidence:(char)arg1 ;
-(char)hasConfidence;
-(char)hasAddress;
-(char)hasLocation;
-(void)setLocationIndex:(unsigned)arg1 ;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(unsigned)locationIndex;
-(void)setHasLocationIndex:(char)arg1 ;
-(char)hasLocationIndex;
-(unsigned)numberOfVisitsBucket;
-(void)setHasNumberOfVisitsBucket:(char)arg1 ;
-(char)hasNumberOfVisitsBucket;
@end
