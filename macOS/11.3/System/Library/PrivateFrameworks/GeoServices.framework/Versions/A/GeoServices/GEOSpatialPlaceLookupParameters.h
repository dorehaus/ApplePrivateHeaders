/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray, GEOMapRegion, GEOPOICategoryFilter;

@interface GEOSpatialPlaceLookupParameters : NSObject {

	GEOCoarseLocationLatLng _coordinate;
	double _radius;
	NSArray* _categories;
	int _maxResultCount;
	GEOMapRegion* _mapRegion;
	GEOPOICategoryFilter* _poiCategoryFilter;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;                    //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                         //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                                  //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * mapRegion;                              //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) GEOPOICategoryFilter * poiCategoryFilter;              //@synthesize poiCategoryFilter=_poiCategoryFilter - In the implementation block
@property (nonatomic,readonly) int maxResultCount;                                    //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(id)init;
-(GEOCoarseLocationLatLng)coordinate;
-(double)radius;
-(GEOMapRegion *)mapRegion;
-(int)maxResultCount;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 categories:(id)arg3 ;
-(NSArray *)categories;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 poiCategoryFilter:(id)arg3 ;
-(id)initWithMapRegion:(id)arg1 poiCategoryFilter:(id)arg2 ;
-(GEOPOICategoryFilter *)poiCategoryFilter;
@end

