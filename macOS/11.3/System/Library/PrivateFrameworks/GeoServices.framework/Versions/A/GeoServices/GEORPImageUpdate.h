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

@class PBDataReader, NSString, GEORPPhotoMetadata, NSData;

@interface GEORPImageUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _imageId;
	GEORPPhotoMetadata* _photoMetadata;
	NSData* _uploadResponse;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _action;
	struct {
		unsigned has_action : 1;
		unsigned read_imageId : 1;
		unsigned read_photoMetadata : 1;
		unsigned read_uploadResponse : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,readonly) char hasUploadResponse; 
@property (nonatomic,retain) NSData * uploadResponse; 
@property (assign,nonatomic) char hasAction; 
@property (assign,nonatomic) int action; 
@property (nonatomic,readonly) char hasPhotoMetadata; 
@property (nonatomic,retain) GEORPPhotoMetadata * photoMetadata; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)imageId;
-(void)setImageId:(NSString *)arg1 ;
-(char)hasImageId;
-(NSData *)uploadResponse;
-(GEORPPhotoMetadata *)photoMetadata;
-(void)setUploadResponse:(NSData *)arg1 ;
-(void)setPhotoMetadata:(GEORPPhotoMetadata *)arg1 ;
-(char)hasUploadResponse;
-(void)setHasAction:(char)arg1 ;
-(char)hasAction;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(char)hasPhotoMetadata;
@end
