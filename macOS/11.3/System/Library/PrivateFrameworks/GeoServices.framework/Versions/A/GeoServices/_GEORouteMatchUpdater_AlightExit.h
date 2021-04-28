/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOPBTransitStop, GEOPBTransitStation, GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_AlightExit : _GEORouteMatchUpdater {

	GEOPBTransitStop* _alightStop;
	GEOPBTransitStation* _alightStation;
	PolylineCoordinate _routeCoordinateAlightStation;
	GEOComposedRouteStep* _alightStep;
	GEOComposedRouteStep* _postAlightStep;
	GEOComposedRouteStep* _postAlightWalkingStep;

}
-(id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2 ;
-(char)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(char)_isLocationNearAlightNode:(id)arg1 ;
@end
