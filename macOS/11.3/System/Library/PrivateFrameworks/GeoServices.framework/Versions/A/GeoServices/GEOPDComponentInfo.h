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

@class PBUnknownFields, GEOPDComponentFilter;

@interface GEOPDComponentInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDComponentFilter* _filter;
	unsigned _count;
	unsigned _startIndex;
	int _type;
	int _urgency;
	char _includeSource;
	struct {
		unsigned has_count : 1;
		unsigned has_startIndex : 1;
		unsigned has_type : 1;
		unsigned has_urgency : 1;
		unsigned has_includeSource : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex; 
@property (assign,nonatomic) char hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (nonatomic,readonly) char hasFilter; 
@property (nonatomic,retain) GEOPDComponentFilter * filter; 
@property (assign,nonatomic) char hasIncludeSource; 
@property (assign,nonatomic) char includeSource; 
@property (assign,nonatomic) char hasUrgency; 
@property (assign,nonatomic) int urgency; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)count;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDComponentFilter *)filter;
-(void)setFilter:(GEOPDComponentFilter *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)setUrgency:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(unsigned)startIndex;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(char)arg1 ;
-(void)setHasCount:(char)arg1 ;
-(char)hasCount;
-(char)hasFilter;
-(void)setHasStartIndex:(char)arg1 ;
-(char)hasStartIndex;
-(void)setIncludeSource:(char)arg1 ;
-(char)includeSource;
-(void)setHasIncludeSource:(char)arg1 ;
-(char)hasIncludeSource;
-(int)urgency;
-(void)setHasUrgency:(char)arg1 ;
-(char)hasUrgency;
-(id)urgencyAsString:(int)arg1 ;
-(int)StringAsUrgency:(id)arg1 ;
-(id)initWithType:(int)arg1 count:(unsigned)arg2 ;
@end

