/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHorizontalCelestialBodyData : NSObject {

	double _altitude;
	double _azimuth;

}

@property (nonatomic,readonly) double altitude;              //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double azimuth;               //@synthesize azimuth=_azimuth - In the implementation block
-(double)altitude;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(char)arg4 ;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(char)arg4 ;
-(id)initWithLocation:(GEOCoarseLocationLatLng)arg1 date:(id)arg2 body:(long long)arg3 ;
-(double)azimuth;
@end

