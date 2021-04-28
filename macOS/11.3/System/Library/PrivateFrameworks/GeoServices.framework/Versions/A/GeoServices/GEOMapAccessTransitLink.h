/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessLine.h>
#import <libobjc.A.dylib/GEOMapTransitLink.h>

@protocol GEOMapTransitStop;
@class NSString;

@interface GEOMapAccessTransitLink : GEOMapAccessLine <GEOMapTransitLink> {

	shared_ptr<geo::MapEdgeTransit>* _transitEdge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>>* _coords;
	id<GEOMapTransitStop> _stopFrom;
	id<GEOMapTransitStop> _stopTo;

}

@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom;                    //@synthesize stopFrom=_stopFrom - In the implementation block
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo;                      //@synthesize stopTo=_stopTo - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) double length; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithMap:(id)arg1 transitEdge:(shared_ptr<geo::MapEdgeTransit>*)arg2 ;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1 outClosestCoordinateOnLine:(GEOCoarseLocationLatLng*)arg2 ;
-(unsigned long long)transitLineID;
-(NSString *)internalLineName;
-(unsigned)minimumTravelTime;
-(id<GEOMapTransitStop>)stopFrom;
-(id<GEOMapTransitStop>)stopTo;
@end

