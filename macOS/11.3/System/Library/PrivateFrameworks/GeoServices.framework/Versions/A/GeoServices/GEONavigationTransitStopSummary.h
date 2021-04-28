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

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {

	GEOLatLng* _coordinate;
	unsigned long long _stopID;
	struct {
		unsigned has_stopID : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasStopID; 
@property (assign,nonatomic) unsigned long long stopID; 
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(char)hasCoordinate;
-(void)setStopID:(unsigned long long)arg1 ;
-(unsigned long long)stopID;
-(void)setHasStopID:(char)arg1 ;
-(char)hasStopID;
-(id)initWithTransitStop:(id)arg1 ;
@end

