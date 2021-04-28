/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuildingSection.h>

@class NSString;

@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection> {

	GEOCoarseLocationLatLng* _coordinates;
	unsigned long long _coordinateCount;
	double _baseHeight;
	double _height;
	unsigned long long _sectionIndex;
	GEOCoarseLocationLatLng _centerCoordinate;
	double _radius;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng centerCoordinate;              //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                         //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates;                  //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinateCount;                    //@synthesize coordinateCount=_coordinateCount - In the implementation block
@property (nonatomic,readonly) double baseHeight;                                     //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,readonly) double height;                                         //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)height;
-(GEOCoarseLocationLatLng)centerCoordinate;
-(double)radius;
-(GEOCoarseLocationLatLng*)coordinates;
-(unsigned long long)coordinateCount;
-(double)baseHeight;
-(id)initWithFeature:(SCD_Struct_GE108*)arg1 sectionIndex:(unsigned long long)arg2 ;
@end
