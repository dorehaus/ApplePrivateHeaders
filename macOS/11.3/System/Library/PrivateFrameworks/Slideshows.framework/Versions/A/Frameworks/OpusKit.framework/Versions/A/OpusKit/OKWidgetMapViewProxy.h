/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetMapViewProxyExports.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class OKMKMapView, MKMapView, NSString;

@interface OKWidgetMapViewProxy : OKWidgetView <OKWidgetMapViewProxyExports, MKMapViewDelegate> {

	OKMKMapView* _mapView;
	SCD_Struct_OK2 _region;
	char _zoomToFitAnnotations;

}

@property (nonatomic,retain,readonly) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(MKMapView *)mapView;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(char)arg2 ;
-(char)prepareForDisplay:(char)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setAntialiasing:(char)arg1 ;
-(char)settingScrollEnabled;
-(void)setSettingScrollEnabled:(char)arg1 ;
-(void)a_detailButton:(id)arg1 ;
-(void)selectAnnotationWithIdentifier:(id)arg1 animated:(char)arg2 ;
-(void)zoomToAnnotationsWithIdentifiers:(id)arg1 animated:(char)arg2 ;
-(unsigned long long)settingMapType;
-(void)setSettingMapType:(unsigned long long)arg1 ;
-(char)settingZoomEnabled;
-(void)setSettingZoomEnabled:(char)arg1 ;
-(char)settingScrollWheelEnabled;
-(void)setSettingScrollWheelEnabled:(char)arg1 ;
-(char)settingShowsUserLocation;
-(void)setSettingShowsUserLocation:(char)arg1 ;
-(SCD_Struct_OK15)settingRegion;
-(void)setSettingRegion:(SCD_Struct_OK15)arg1 ;
-(CLLocationCoordinate2D)settingCenterCoordinate;
-(void)setSettingCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setSettingAnnotations:(id)arg1 ;
-(void)setSettingZoomToFitAnnotations:(char)arg1 ;
@end

