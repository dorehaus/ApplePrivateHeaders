/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOPreloadStep : NSObject {

	GEOCoarseLocationLatLng coord;
	double routeIdx;
	GEOTileKeyList* wantedTiles;
	double startTime;
	double endTime;
	unsigned bytesLoaded;
	unsigned bytesLoadedFromNetwork;
	unsigned generation;
	unsigned numRetries;
	unsigned hasError : 1;
	unsigned hasLifetimeError : 1;
	unsigned nearManeuver : 1;
	unsigned loading : 1;
	unsigned loaded : 1;

}
-(char)okToLoad;
-(void)resetErrors;
-(double)networkDataRateKB;
@end
