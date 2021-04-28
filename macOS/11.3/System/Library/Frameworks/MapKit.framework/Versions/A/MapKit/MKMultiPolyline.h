/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSArray, NSString;

@interface MKMultiPolyline : MKShape <MKGeoJSONObject, MKOverlay> {

	NSArray* _polylines;
	SCD_Struct_MK7 _boundingMapRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * polylines;                       //@synthesize polylines=_polylines - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK7 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(SCD_Struct_MK7)boundingMapRect;
-(id)initWithPolylines:(id)arg1 ;
-(NSArray *)polylines;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
@end

