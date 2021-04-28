/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@class GEOComposedRouteEVStepInfo;

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep {

	GEOComposedRouteEVStepInfo* _evInfo;

}
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)evInfo;
-(id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 geoStep:(id)arg3 stepIndex:(unsigned long long)arg4 pointRange:(NSRange)arg5 maneuverPointRange:(NSRange)arg6 ;
@end

