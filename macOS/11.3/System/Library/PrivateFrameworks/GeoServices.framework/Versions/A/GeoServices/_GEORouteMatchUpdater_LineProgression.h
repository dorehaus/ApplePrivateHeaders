/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater {

	GEOComposedTransitTripRouteStep* _boardStep;
	GEOComposedTransitTripRouteStep* _alightStep;
	PolylineCoordinate _startRouteCoordinate;

}
-(unsigned long long)priority;
-(id)initWithTransitRouteMatcher:(id)arg1 tripSegment:(id)arg2 ;
-(char)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
@end
