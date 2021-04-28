/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString, GEOMapItemStorage;

@interface MSPPinnedPlaceStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _contactStorages;
	NSString* _customName;
	NSString* _identifier;
	GEOMapItemStorage* _mapItemStorage;
	NSString* _originatingAddressString;
	int _type;
	char _hidden;
	SCD_Struct_MS2 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasCustomName; 
@property (nonatomic,retain) NSString * customName;                            //@synthesize customName=_customName - In the implementation block
@property (nonatomic,readonly) char hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;               //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactStorages;                 //@synthesize contactStorages=_contactStorages - In the implementation block
@property (assign,nonatomic) char hasHidden; 
@property (assign,nonatomic) char hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) char hasOriginatingAddressString; 
@property (nonatomic,retain) NSString * originatingAddressString;              //@synthesize originatingAddressString=_originatingAddressString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)contactStorageType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(void)setHidden:(char)arg1 ;
-(char)hidden;
-(int)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(NSString *)customName;
-(PBUnknownFields *)unknownFields;
-(char)hasIdentifier;
-(void)setHasHidden:(char)arg1 ;
-(char)hasHidden;
-(char)hasMapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setCustomName:(NSString *)arg1 ;
-(NSString *)originatingAddressString;
-(void)setOriginatingAddressString:(NSString *)arg1 ;
-(char)hasCustomName;
-(unsigned long long)contactStoragesCount;
-(NSMutableArray *)contactStorages;
-(char)hasOriginatingAddressString;
-(void)addContactStorage:(id)arg1 ;
-(void)clearContactStorages;
-(id)contactStorageAtIndex:(unsigned long long)arg1 ;
-(void)setContactStorages:(NSMutableArray *)arg1 ;
@end

