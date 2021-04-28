/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher {

	char _useMatchedCoordinateForMatching;

}

@property (assign,nonatomic) char useMatchedCoordinateForMatching;              //@synthesize useMatchedCoordinateForMatching=_useMatchedCoordinateForMatching - In the implementation block
-(int)transportType;
-(char)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2 ;
-(double)_courseFromLocation:(id)arg1 ;
-(char)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(void)setUseMatchedCoordinateForMatching:(char)arg1 ;
-(id)matchLocation:(id)arg1 transportType:(int)arg2 ;
-(double)_approximateMaxSpeedForRoad:(SCD_Struct_GE74*)arg1 ;
-(GEOCoarseLocationLatLng)_coordinateFromLocation:(id)arg1 ;
-(id)_routeMatcherForRoute:(id)arg1 ;
-(char)useMatchedCoordinateForMatching;
@end

