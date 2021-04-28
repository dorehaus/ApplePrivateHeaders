/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {

	NSArray* _aggregatedGEOSteps;
	double _aggregatedStepsDistance;
	unsigned _aggregatedStepsDuration;

}
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)duration;
-(double)distance;
-(char)isUncertainArrival;
-(unsigned)_calculateAggregatedStepsDuration;
-(double)_calculateAggregatedStepsDistance;
-(id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 maneuverPointRange:(NSRange)arg5 ;
@end

