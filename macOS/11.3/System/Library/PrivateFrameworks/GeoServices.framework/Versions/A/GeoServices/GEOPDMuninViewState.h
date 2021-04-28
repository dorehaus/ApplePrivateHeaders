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

@class PBDataReader, GEOPDCameraFrame, GEOPDLocationInfo;

@interface GEOPDMuninViewState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDCameraFrame* _cameraFrame;
	GEOPDLocationInfo* _locationInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) char hasCameraFrame; 
@property (nonatomic,retain) GEOPDCameraFrame * cameraFrame; 
@property (nonatomic,readonly) char hasLocationInfo; 
@property (nonatomic,retain) GEOPDLocationInfo * locationInfo; 
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
-(GEOPDCameraFrame *)cameraFrame;
-(GEOPDLocationInfo *)locationInfo;
-(void)setCameraFrame:(GEOPDCameraFrame *)arg1 ;
-(void)setLocationInfo:(GEOPDLocationInfo *)arg1 ;
-(char)hasCameraFrame;
-(char)hasLocationInfo;
@end

