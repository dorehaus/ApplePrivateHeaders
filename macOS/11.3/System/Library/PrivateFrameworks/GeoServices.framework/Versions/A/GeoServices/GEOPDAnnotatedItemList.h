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

@class PBDataReader, PBUnknownFields, GEOPDPictureItemContainer, GEOPDTextItemContainer, NSString;

@interface GEOPDAnnotatedItemList : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPictureItemContainer* _picItemContainer;
	GEOPDTextItemContainer* _textItemContainer;
	NSString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _annotatedItemStyle;
	struct {
		unsigned has_annotatedItemStyle : 1;
		unsigned read_unknownFields : 1;
		unsigned read_picItemContainer : 1;
		unsigned read_textItemContainer : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) char hasPicItemContainer; 
@property (nonatomic,retain) GEOPDPictureItemContainer * picItemContainer; 
@property (nonatomic,readonly) char hasTextItemContainer; 
@property (nonatomic,retain) GEOPDTextItemContainer * textItemContainer; 
@property (assign,nonatomic) char hasAnnotatedItemStyle; 
@property (assign,nonatomic) int annotatedItemStyle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
+(id)annotatedItemListForPlaceData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
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
-(GEOPDTextItemContainer *)textItemContainer;
-(int)annotatedItemStyle;
-(GEOPDPictureItemContainer *)picItemContainer;
-(void)setPicItemContainer:(GEOPDPictureItemContainer *)arg1 ;
-(void)setTextItemContainer:(GEOPDTextItemContainer *)arg1 ;
-(void)setAnnotatedItemStyle:(int)arg1 ;
-(char)hasPicItemContainer;
-(char)hasTextItemContainer;
-(void)setHasAnnotatedItemStyle:(char)arg1 ;
-(char)hasAnnotatedItemStyle;
-(id)annotatedItemStyleAsString:(int)arg1 ;
-(int)StringAsAnnotatedItemStyle:(id)arg1 ;
@end

