/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RTFingerprintManager, RTLocationManager, RTMapServiceManager, RTWiFiManager, NSMutableArray;

@interface RTCurrentMapItemProvider : NSObject {

	char _registeredForNotifications;
	NSObject*<OS_dispatch_queue> _queue;
	RTFingerprintManager* _fingerprintManager;
	RTLocationManager* _locationManager;
	RTMapServiceManager* _mapServiceManager;
	RTWiFiManager* _wifiManager;
	NSMutableArray* _futureLocations;
	NSMutableArray* _futureAccessPoints;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTFingerprintManager * fingerprintManager;              //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTMapServiceManager * mapServiceManager;                //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,readonly) RTWiFiManager * wifiManager;                            //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * futureLocations;                       //@synthesize futureLocations=_futureLocations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * futureAccessPoints;                    //@synthesize futureAccessPoints=_futureAccessPoints - In the implementation block
@property (assign,nonatomic) char registeredForNotifications;                          //@synthesize registeredForNotifications=_registeredForNotifications - In the implementation block
+(void)logMapItems:(id)arg1 prestring:(id)arg2 ;
+(id)convertMapItemsToPredictedLocationsOfInterest:(id)arg1 ;
+(void)logPredictedLocationsOfInterest:(id)arg1 prestring:(id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)shutdown;
-(void)_shutdown;
-(id)initWithFingerprintManager:(id)arg1 locationManager:(id)arg2 mapServiceManager:(id)arg3 wifiManager:(id)arg4 ;
-(void)fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(RTFingerprintManager *)fingerprintManager;
-(RTLocationManager *)locationManager;
-(RTMapServiceManager *)mapServiceManager;
-(RTWiFiManager *)wifiManager;
-(void)onLocationNotification:(id)arg1 ;
-(void)onWiFiScanNotification:(id)arg1 ;
-(void)_performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(char)registeredForNotifications;
-(void)setRegisteredForNotifications:(char)arg1 ;
-(id)_filterLocations:(id)arg1 ;
-(id)_filterWiFiAccessPoints:(id)arg1 ;
-(id)_pickMinimumHorizontalUncertainty:(id)arg1 ;
-(NSMutableArray *)futureLocations;
-(NSMutableArray *)futureAccessPoints;
@end

