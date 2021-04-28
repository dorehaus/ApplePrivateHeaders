/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE69* _geoIds;
	NSString* _administrativeAreaCode;
	NSString* _administrativeArea;
	NSMutableArray* _areaOfInterests;
	NSString* _countryCode;
	NSString* _country;
	NSMutableArray* _dependentLocalitys;
	NSString* _fullThoroughfare;
	NSString* _inlandWater;
	NSString* _locality;
	NSString* _ocean;
	NSString* _postCodeExtension;
	NSString* _postCodeFull;
	NSString* _postCode;
	NSString* _premises;
	NSString* _premise;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;
	NSMutableArray* _subPremises;
	NSString* _subThoroughfare;
	NSString* _thoroughfare;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasCountry; 
@property (nonatomic,retain) NSString * country; 
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) char hasAdministrativeArea; 
@property (nonatomic,retain) NSString * administrativeArea; 
@property (nonatomic,readonly) char hasAdministrativeAreaCode; 
@property (nonatomic,retain) NSString * administrativeAreaCode; 
@property (nonatomic,readonly) char hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea; 
@property (nonatomic,readonly) char hasLocality; 
@property (nonatomic,retain) NSString * locality; 
@property (nonatomic,readonly) char hasPostCode; 
@property (nonatomic,retain) NSString * postCode; 
@property (nonatomic,readonly) char hasSubLocality; 
@property (nonatomic,retain) NSString * subLocality; 
@property (nonatomic,readonly) char hasPremises; 
@property (nonatomic,retain) NSString * premises; 
@property (nonatomic,readonly) char hasThoroughfare; 
@property (nonatomic,retain) NSString * thoroughfare; 
@property (nonatomic,readonly) char hasSubThoroughfare; 
@property (nonatomic,retain) NSString * subThoroughfare; 
@property (nonatomic,readonly) char hasFullThoroughfare; 
@property (nonatomic,retain) NSString * fullThoroughfare; 
@property (nonatomic,readonly) char hasPostCodeExtension; 
@property (nonatomic,retain) NSString * postCodeExtension; 
@property (nonatomic,retain) NSMutableArray * areaOfInterests; 
@property (nonatomic,readonly) char hasInlandWater; 
@property (nonatomic,retain) NSString * inlandWater; 
@property (nonatomic,readonly) char hasOcean; 
@property (nonatomic,retain) NSString * ocean; 
@property (nonatomic,retain) NSMutableArray * dependentLocalitys; 
@property (nonatomic,readonly) char hasPremise; 
@property (nonatomic,retain) NSString * premise; 
@property (nonatomic,retain) NSMutableArray * subPremises; 
@property (nonatomic,readonly) char hasPostCodeFull; 
@property (nonatomic,retain) NSString * postCodeFull; 
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)subPremiseType;
+(char)isValid:(id)arg1 ;
+(Class)areaOfInterestType;
+(Class)dependentLocalityType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(char)isEmpty;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)country;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)administrativeAreaCode;
-(void)setThoroughfare:(NSString *)arg1 ;
-(void)setSubThoroughfare:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSMutableArray *)subPremises;
-(NSString *)subLocality;
-(NSString *)locality;
-(NSString *)subAdministrativeArea;
-(NSString *)administrativeArea;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(id)addressDictionary;
-(void)setSubPremises:(NSMutableArray *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setAdministrativeAreaCode:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setInlandWater:(NSString *)arg1 ;
-(void)setOcean:(NSString *)arg1 ;
-(unsigned long long)subPremisesCount;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(long long*)geoIds;
-(void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(char)hasCountryCode;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(char)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(void)setPostCode:(NSString *)arg1 ;
-(void)setFullThoroughfare:(NSString *)arg1 ;
-(char)hasAdministrativeAreaCode;
-(char)hasAdministrativeArea;
-(char)hasLocality;
-(char)hasPostCode;
-(NSString *)postCode;
-(char)hasFullThoroughfare;
-(NSString *)fullThoroughfare;
-(void)addGeoId:(long long)arg1 ;
-(long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)areaOfInterests;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(NSString *)premises;
-(unsigned long long)areaOfInterestsCount;
-(id)postalAddress;
-(NSString *)postCodeExtension;
-(NSMutableArray *)dependentLocalitys;
-(NSString *)premise;
-(NSString *)postCodeFull;
-(void)setPremises:(NSString *)arg1 ;
-(void)setPostCodeExtension:(NSString *)arg1 ;
-(void)addAreaOfInterest:(id)arg1 ;
-(void)addDependentLocality:(id)arg1 ;
-(void)setPremise:(NSString *)arg1 ;
-(void)addSubPremise:(id)arg1 ;
-(void)setPostCodeFull:(NSString *)arg1 ;
-(void)clearAreaOfInterests;
-(id)areaOfInterestAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dependentLocalitysCount;
-(void)clearDependentLocalitys;
-(id)dependentLocalityAtIndex:(unsigned long long)arg1 ;
-(void)clearSubPremises;
-(id)subPremiseAtIndex:(unsigned long long)arg1 ;
-(char)hasCountry;
-(char)hasSubAdministrativeArea;
-(char)hasSubLocality;
-(char)hasPremises;
-(char)hasThoroughfare;
-(char)hasSubThoroughfare;
-(char)hasPostCodeExtension;
-(void)setAreaOfInterests:(NSMutableArray *)arg1 ;
-(char)hasInlandWater;
-(char)hasOcean;
-(void)setDependentLocalitys:(NSMutableArray *)arg1 ;
-(char)hasPremise;
-(char)hasPostCodeFull;
@end

