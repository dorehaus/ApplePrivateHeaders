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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPFeedbackImageUploadInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _clientImageUuid;
	NSString* _imageId;
	NSString* _imageUploadHttpMethod;
	NSString* _imageUploadUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientImageUuid : 1;
		unsigned read_imageId : 1;
		unsigned read_imageUploadHttpMethod : 1;
		unsigned read_imageUploadUrl : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasImageId; 
@property (nonatomic,retain) NSString * imageId; 
@property (nonatomic,readonly) char hasClientImageUuid; 
@property (nonatomic,retain) NSString * clientImageUuid; 
@property (nonatomic,readonly) char hasImageUploadUrl; 
@property (nonatomic,retain) NSString * imageUploadUrl; 
@property (nonatomic,readonly) char hasImageUploadHttpMethod; 
@property (nonatomic,retain) NSString * imageUploadHttpMethod; 
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
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(NSString *)clientImageUuid;
-(NSString *)imageId;
-(void)setClientImageUuid:(NSString *)arg1 ;
-(void)setImageId:(NSString *)arg1 ;
-(char)hasClientImageUuid;
-(char)hasImageId;
-(NSString *)imageUploadUrl;
-(NSString *)imageUploadHttpMethod;
-(void)setImageUploadUrl:(NSString *)arg1 ;
-(void)setImageUploadHttpMethod:(NSString *)arg1 ;
-(char)hasImageUploadUrl;
-(char)hasImageUploadHttpMethod;
@end

