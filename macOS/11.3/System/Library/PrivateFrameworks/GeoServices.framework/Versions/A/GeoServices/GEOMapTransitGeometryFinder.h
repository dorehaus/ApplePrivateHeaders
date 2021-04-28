/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

@interface GEOMapTransitGeometryFinder : GEOMapRequest {

	GEOMapTileFinder* _tileFinder;
	unsigned long long _transitID;

}
-(void)cancel;
-(id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(void)findTransitGeometryWithHandler:(/*^block*/id)arg1 ;
@end

