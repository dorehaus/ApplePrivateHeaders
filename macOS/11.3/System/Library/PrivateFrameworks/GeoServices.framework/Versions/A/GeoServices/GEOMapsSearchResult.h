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

@class PBDataReader, GEOAddress, GEOPDMapsIdentifier, GEOPlaceActionDetails;

@interface GEOMapsSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOAddress* _address;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _muid;
	GEOPlaceActionDetails* _placeActionDetails;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_muid : 1;
		unsigned read_address : 1;
		unsigned read_mapsId : 1;
		unsigned read_placeActionDetails : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) GEOAddress * address; 
@property (nonatomic,readonly) char hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails; 
@property (nonatomic,readonly) char hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOAddress *)address;
-(void)setAddress:(GEOAddress *)arg1 ;
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
-(GEOPlaceActionDetails *)placeActionDetails;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(char)hasPlaceActionDetails;
-(char)hasAddress;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(char)hasMapsId;
@end

