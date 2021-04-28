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

@class PBDataReader, PBUnknownFields, GEOPDPhoto, NSString;

@interface GEOPDPictureItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPhoto* _photo;
	NSString* _primaryText;
	NSString* _secondaryText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _photoItemType;
	struct {
		unsigned has_photoItemType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_photo : 1;
		unsigned read_primaryText : 1;
		unsigned read_secondaryText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo; 
@property (nonatomic,readonly) char hasPrimaryText; 
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,readonly) char hasSecondaryText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (assign,nonatomic) char hasPhotoItemType; 
@property (assign,nonatomic) int photoItemType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
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
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(GEOPDPhoto *)photo;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(char)hasPrimaryText;
-(char)hasSecondaryText;
-(char)hasPhoto;
-(void)setPhotoItemType:(int)arg1 ;
-(int)photoItemType;
-(void)setHasPhotoItemType:(char)arg1 ;
-(char)hasPhotoItemType;
-(id)photoItemTypeAsString:(int)arg1 ;
-(int)StringAsPhotoItemType:(id)arg1 ;
@end

