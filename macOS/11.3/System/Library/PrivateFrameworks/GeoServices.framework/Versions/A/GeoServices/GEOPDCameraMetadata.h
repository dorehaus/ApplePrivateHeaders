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

@class PBDataReader, GEOPDLensProjection, GEOPDOrientedPosition;

@interface GEOPDCameraMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _textureIds;
	GEOPDLensProjection* _lensProjection;
	GEOPDOrientedPosition* _position;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cameraNumber;
	int _imageHeight;
	int _imageWidth;
	struct {
		unsigned has_cameraNumber : 1;
		unsigned has_imageHeight : 1;
		unsigned has_imageWidth : 1;
		unsigned read_textureIds : 1;
		unsigned read_lensProjection : 1;
		unsigned read_position : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasCameraNumber; 
@property (assign,nonatomic) int cameraNumber; 
@property (assign,nonatomic) char hasImageWidth; 
@property (assign,nonatomic) int imageWidth; 
@property (assign,nonatomic) char hasImageHeight; 
@property (assign,nonatomic) int imageHeight; 
@property (nonatomic,readonly) char hasLensProjection; 
@property (nonatomic,retain) GEOPDLensProjection * lensProjection; 
@property (nonatomic,readonly) char hasPosition; 
@property (nonatomic,retain) GEOPDOrientedPosition * position; 
@property (nonatomic,readonly) unsigned long long textureIdsCount; 
@property (nonatomic,readonly) unsigned* textureIds; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDOrientedPosition *)position;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(int)imageWidth;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)imageHeight;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(char)hasPosition;
-(void)setCameraNumber:(int)arg1 ;
-(int)cameraNumber;
-(void)setHasCameraNumber:(char)arg1 ;
-(char)hasCameraNumber;
-(char)hasLensProjection;
-(GEOPDLensProjection *)lensProjection;
-(unsigned long long)textureIdsCount;
-(unsigned*)textureIds;
-(void)setImageWidth:(int)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(void)setLensProjection:(GEOPDLensProjection *)arg1 ;
-(void)addTextureId:(unsigned)arg1 ;
-(void)clearTextureIds;
-(unsigned)textureIdAtIndex:(unsigned long long)arg1 ;
-(void)setHasImageWidth:(char)arg1 ;
-(char)hasImageWidth;
-(void)setHasImageHeight:(char)arg1 ;
-(char)hasImageHeight;
-(void)setTextureIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

