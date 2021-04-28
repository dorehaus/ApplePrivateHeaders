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

@interface GEONavCameraState : PBCodable <NSCopying> {

	int _distanceToManeuver;
	int _speedBucket;
	int _upcomingManeuverType;
	char _isGroupedManeuver;
	struct {
		unsigned has_distanceToManeuver : 1;
		unsigned has_speedBucket : 1;
		unsigned has_upcomingManeuverType : 1;
		unsigned has_isGroupedManeuver : 1;
	}  _flags;

}

@property (assign,nonatomic) char hasUpcomingManeuverType; 
@property (assign,nonatomic) int upcomingManeuverType; 
@property (assign,nonatomic) char hasDistanceToManeuver; 
@property (assign,nonatomic) int distanceToManeuver; 
@property (assign,nonatomic) char hasIsGroupedManeuver; 
@property (assign,nonatomic) char isGroupedManeuver; 
@property (assign,nonatomic) char hasSpeedBucket; 
@property (assign,nonatomic) int speedBucket; 
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
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setDistanceToManeuver:(int)arg1 ;
-(int)distanceToManeuver;
-(void)setHasDistanceToManeuver:(char)arg1 ;
-(char)hasDistanceToManeuver;
-(void)setUpcomingManeuverType:(int)arg1 ;
-(void)setIsGroupedManeuver:(char)arg1 ;
-(void)setSpeedBucket:(int)arg1 ;
-(int)upcomingManeuverType;
-(void)setHasUpcomingManeuverType:(char)arg1 ;
-(char)hasUpcomingManeuverType;
-(id)upcomingManeuverTypeAsString:(int)arg1 ;
-(int)StringAsUpcomingManeuverType:(id)arg1 ;
-(id)distanceToManeuverAsString:(int)arg1 ;
-(int)StringAsDistanceToManeuver:(id)arg1 ;
-(char)isGroupedManeuver;
-(void)setHasIsGroupedManeuver:(char)arg1 ;
-(char)hasIsGroupedManeuver;
-(int)speedBucket;
-(void)setHasSpeedBucket:(char)arg1 ;
-(char)hasSpeedBucket;
-(id)speedBucketAsString:(int)arg1 ;
-(int)StringAsSpeedBucket:(id)arg1 ;
@end

