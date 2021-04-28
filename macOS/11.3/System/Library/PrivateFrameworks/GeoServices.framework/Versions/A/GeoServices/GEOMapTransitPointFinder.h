/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapTransitPointFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	GEOCoarseLocationLatLng _centerPoint;
	double _mapRadius;
	unsigned long long _pointID;
	unsigned long long _parentID;

}

@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)cancel;
-(GEOMapAccess *)map;
-(id)initWithMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 radius:(double)arg3 ;
-(void)_validatePoint:(SCD_Struct_GE35*)arg1 rect:(SCD_Struct_GE36)arg2 localSearch:(Box<float, 2>)arg3 validPointHandler:(/*^block*/id)arg4 ;
-(id)initWithMap:(id)arg1 approxLocation:(GEOCoarseLocationLatLng)arg2 pointID:(unsigned long long)arg3 ;
-(id)initWithMap:(id)arg1 approxLocation:(GEOCoarseLocationLatLng)arg2 parentID:(unsigned long long)arg3 ;
-(void)findTransitPointsOfType:(unsigned long long)arg1 nodeHandler:(/*^block*/id)arg2 accessPointHandler:(/*^block*/id)arg3 ;
@end

