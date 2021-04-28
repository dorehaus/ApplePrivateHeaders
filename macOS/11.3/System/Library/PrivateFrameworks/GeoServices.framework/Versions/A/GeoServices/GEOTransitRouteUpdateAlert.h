/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSData;

@interface GEOTransitRouteUpdateAlert : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _content;
	NSData* _identifier;
	GEOFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_content : 1;
		unsigned read_identifier : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) GEOFormattedString * title; 
@property (nonatomic,readonly) char hasContent; 
@property (nonatomic,retain) GEOFormattedString * content; 
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSData * identifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)identifier;
-(void)setTitle:(GEOFormattedString *)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setContent:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)content;
-(GEOFormattedString *)title;
-(char)hasContent;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(char)hasTitle;
-(char)hasIdentifier;
@end

