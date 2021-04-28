/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFGravityVector : PBCodable <NSCopying> {

	double _x;
	double _y;
	double _z;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) char hasX; 
@property (assign,nonatomic) double x; 
@property (assign,nonatomic) char hasY; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) char hasZ; 
@property (assign,nonatomic) double z; 
+(char)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)x;
-(double)y;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(void)setZ:(double)arg1 ;
-(void)setHasX:(char)arg1 ;
-(char)hasX;
-(void)setHasY:(char)arg1 ;
-(char)hasY;
-(double)z;
-(void)setHasZ:(char)arg1 ;
-(char)hasZ;
@end

