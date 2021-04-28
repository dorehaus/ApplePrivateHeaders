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

@class PBDataReader, PBUnknownFields, GEOPlaceFormattedString, GEOFormattedString;

@interface GEOAlertNonRecommendedRouteText : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceFormattedString* _body;
	GEOFormattedString* _responseAlertPrimary;
	GEOFormattedString* _responseAlertSecondary;
	GEOPlaceFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_body : 1;
		unsigned read_responseAlertPrimary : 1;
		unsigned read_responseAlertSecondary : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasResponseAlertPrimary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertPrimary; 
@property (nonatomic,readonly) char hasResponseAlertSecondary; 
@property (nonatomic,retain) GEOFormattedString * responseAlertSecondary; 
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * title; 
@property (nonatomic,readonly) char hasBody; 
@property (nonatomic,retain) GEOPlaceFormattedString * body; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPlaceFormattedString *)title;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBody:(GEOPlaceFormattedString *)arg1 ;
-(GEOPlaceFormattedString *)body;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasTitle;
-(GEOFormattedString *)responseAlertPrimary;
-(GEOFormattedString *)responseAlertSecondary;
-(void)setResponseAlertPrimary:(GEOFormattedString *)arg1 ;
-(void)setResponseAlertSecondary:(GEOFormattedString *)arg1 ;
-(char)hasResponseAlertPrimary;
-(char)hasResponseAlertSecondary;
-(char)hasBody;
@end

