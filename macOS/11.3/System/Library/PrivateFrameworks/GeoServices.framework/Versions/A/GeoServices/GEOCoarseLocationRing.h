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

@interface GEOCoarseLocationRing : PBCodable <NSCopying> {

	GEOCoarseLocationPoint* _points;
	unsigned long long _pointsCount;
	unsigned long long _pointsSpace;

}

@property (nonatomic,readonly) unsigned long long pointsCount; 
@property (nonatomic,readonly) GEOCoarseLocationPoint* points; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOCoarseLocationPoint*)points;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)clearPoints;
-(void)addPoints:(GEOCoarseLocationPoint)arg1 ;
-(unsigned long long)pointsCount;
-(GEOCoarseLocationPoint)pointsAtIndex:(unsigned long long)arg1 ;
-(void)setPoints:(GEOCoarseLocationPoint*)arg1 count:(unsigned long long)arg2 ;
@end
