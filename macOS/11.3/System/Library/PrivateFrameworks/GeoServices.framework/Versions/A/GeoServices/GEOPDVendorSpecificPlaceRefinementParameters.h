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

@class PBDataReader, PBUnknownFields, GEOStructuredAddress, NSData, NSString, NSMutableArray, GEOLatLng;

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOStructuredAddress* _addressHint;
	NSData* _addressObjectHint;
	NSString* _externalItemId;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	unsigned long long _muid;
	NSString* _placeNameHint;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _addressGeocodeAccuracyHint;
	int _placeTypeHint;
	int _resultProviderId;
	struct {
		unsigned has_muid : 1;
		unsigned has_addressGeocodeAccuracyHint : 1;
		unsigned has_placeTypeHint : 1;
		unsigned has_resultProviderId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressHint : 1;
		unsigned read_addressObjectHint : 1;
		unsigned read_externalItemId : 1;
		unsigned read_formattedAddressLineHints : 1;
		unsigned read_locationHint : 1;
		unsigned read_placeNameHint : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) char hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) char hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId; 
@property (nonatomic,readonly) char hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint; 
@property (nonatomic,readonly) char hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint; 
@property (nonatomic,readonly) char hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints; 
@property (assign,nonatomic) char hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint; 
@property (assign,nonatomic) char hasAddressGeocodeAccuracyHint; 
@property (assign,nonatomic) int addressGeocodeAccuracyHint; 
@property (nonatomic,readonly) char hasAddressObjectHint; 
@property (nonatomic,retain) NSData * addressObjectHint; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(Class)formattedAddressLineHintType;
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
-(NSString *)vendorId;
-(void)setVendorId:(NSString *)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(char)hasMuid;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(int)resultProviderId;
-(void)setHasResultProviderId:(char)arg1 ;
-(char)hasResultProviderId;
-(GEOLatLng *)locationHint;
-(GEOStructuredAddress *)addressHint;
-(NSString *)placeNameHint;
-(NSMutableArray *)formattedAddressLineHints;
-(NSData *)addressObjectHint;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(void)setPlaceTypeHint:(int)arg1 ;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(void)setAddressObjectHint:(NSData *)arg1 ;
-(unsigned long long)formattedAddressLineHintsCount;
-(void)clearFormattedAddressLineHints;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(char)hasLocationHint;
-(char)hasAddressHint;
-(char)hasPlaceNameHint;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(int)placeTypeHint;
-(void)setHasPlaceTypeHint:(char)arg1 ;
-(char)hasPlaceTypeHint;
-(id)placeTypeHintAsString:(int)arg1 ;
-(int)StringAsPlaceTypeHint:(id)arg1 ;
-(int)addressGeocodeAccuracyHint;
-(void)setHasAddressGeocodeAccuracyHint:(char)arg1 ;
-(char)hasAddressGeocodeAccuracyHint;
-(id)addressGeocodeAccuracyHintAsString:(int)arg1 ;
-(int)StringAsAddressGeocodeAccuracyHint:(id)arg1 ;
-(char)hasAddressObjectHint;
-(NSString *)externalItemId;
-(void)setExternalItemId:(NSString *)arg1 ;
-(char)hasVendorId;
-(char)hasExternalItemId;
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(GEOCoarseLocationLatLng)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 contentProvider:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
@end
