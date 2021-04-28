/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureTransitStop, GEOMapFeatureTransitHall, GEOMapFeatureTransitStation, NSString, NSArray;

@interface GEOMapFeatureTransitPoint : NSObject {

	GEOTransitNodeFeature* _feature;
	GEOCoarseLocationLatLng _coordinate;
	double _boundingRadius;
	SCD_Struct_GE36 _boundingRect;
	GEOCoarseLocationLatLng* _polygonPoints;
	unsigned long long _polygonPointsCount;

}

@property (nonatomic,readonly) GEOTileKey tileKey; 
@property (nonatomic,readonly) GEOTransitNodeFeature* feature; 
@property (nonatomic,readonly) GEOMapFeatureTransitStop * stop; 
@property (nonatomic,readonly) GEOMapFeatureTransitHall * hall; 
@property (nonatomic,readonly) GEOMapFeatureTransitStation * station; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;                  //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) NSArray * internalSystemNames; 
@property (nonatomic,readonly) double boundingRadius;                               //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect;                        //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints;              //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonPointsCount;               //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(void)dealloc;
-(id)description;
-(GEOMapFeatureTransitStop *)stop;
-(GEOCoarseLocationLatLng)coordinate;
-(GEOTileKey)tileKey;
-(id)initWithFeature:(GEOTransitNodeFeature*)arg1 ;
-(GEOTransitNodeFeature*)feature;
-(unsigned long long)transitID;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE36)boundingRect;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(unsigned long long)polygonPointsCount;
-(GEOMapFeatureTransitStation *)station;
-(NSArray *)internalSystemNames;
-(GEOMapFeatureTransitHall *)hall;
-(void)updateWithGeometryFeature:(SCD_Struct_GE239*)arg1 ;
@end

