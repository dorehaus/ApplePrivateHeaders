/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString, NSSet, NSDictionary;

@interface BWStreamingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	unsigned _activeDeviceMask;
	int _deviceType;
	int _devicePosition;
	unsigned _streamingTime;
	int _clientIDType;
	NSString* _clientApplicationID;
	NSSet* _sunburnDetectOccurred;
	NSDictionary* _degradedAutoFocusStatus;
	NSDictionary* _numberOfSphereJitterDetectAttempts;
	NSDictionary* _numberOfSphereJitterDetects;
	NSDictionary* _actuatorVendor;
	NSString* _sphereMode;
	unsigned _numberOfPhotoCaptures;
	unsigned _numberOfBurstPhotoCaptures;
	unsigned _numberOfBalancedPhotoCaptures;
	unsigned _timeToFirstPhotoCapture;
	unsigned _maxTimeSinceLastPhotoCapture;
	unsigned _minTimeSinceLastPhotoCapture;
	unsigned _numberOfButtonMashingCapturesAtRate0;
	unsigned _numberOfButtonMashingCapturesAtRate1;
	unsigned _numberOfButtonMashingEventsAtRate0;
	unsigned _numberOfButtonMashingEventsAtRate1;
	unsigned _timeOfFlightCameraProjectorModeMask;
	unsigned _timeOfFlightCameraUsageTypeMask;
	float _structuredLightIdleTemperatureFirstReading;
	float _structuredLightActiveTemperatureFirstReading;
	float _structuredLightActiveTemperatureLastReading;
	float _structuredLightActiveTemperatureRange;
	float _structuredLightActiveTemperatureAverage;
	float _infaredSensorTemperatureRange;
	float _infaredSensorTemperatureAverage;
	char _cinematicFramingSupported;
	char _cinematicFramingEnabled;
	unsigned _cinematicFramingControlMode;

}

@property (assign,nonatomic) unsigned activeDeviceMask;                                       //@synthesize activeDeviceMask=_activeDeviceMask - In the implementation block
@property (assign,nonatomic) int deviceType;                                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) int devicePosition;                                              //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) unsigned streamingTime;                                          //@synthesize streamingTime=_streamingTime - In the implementation block
@property (nonatomic,copy) NSString * clientApplicationID;                                    //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
@property (nonatomic,retain) NSSet * sunburnDetectOccurred;                                   //@synthesize sunburnDetectOccurred=_sunburnDetectOccurred - In the implementation block
@property (nonatomic,retain) NSDictionary * degradedAutoFocusStatus;                          //@synthesize degradedAutoFocusStatus=_degradedAutoFocusStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * numberOfSphereJitterDetectAttempts;               //@synthesize numberOfSphereJitterDetectAttempts=_numberOfSphereJitterDetectAttempts - In the implementation block
@property (nonatomic,retain) NSDictionary * numberOfSphereJitterDetects;                      //@synthesize numberOfSphereJitterDetects=_numberOfSphereJitterDetects - In the implementation block
@property (nonatomic,retain) NSDictionary * actuatorVendor;                                   //@synthesize actuatorVendor=_actuatorVendor - In the implementation block
@property (nonatomic,retain) NSString * sphereMode;                                           //@synthesize sphereMode=_sphereMode - In the implementation block
@property (assign,nonatomic) unsigned numberOfPhotoCaptures;                                  //@synthesize numberOfPhotoCaptures=_numberOfPhotoCaptures - In the implementation block
@property (assign,nonatomic) unsigned numberOfBurstPhotoCaptures;                             //@synthesize numberOfBurstPhotoCaptures=_numberOfBurstPhotoCaptures - In the implementation block
@property (assign,nonatomic) unsigned numberOfBalancedPhotoCaptures;                          //@synthesize numberOfBalancedPhotoCaptures=_numberOfBalancedPhotoCaptures - In the implementation block
@property (assign,nonatomic) unsigned timeToFirstPhotoCapture;                                //@synthesize timeToFirstPhotoCapture=_timeToFirstPhotoCapture - In the implementation block
@property (assign,nonatomic) unsigned maxTimeSinceLastPhotoCapture;                           //@synthesize maxTimeSinceLastPhotoCapture=_maxTimeSinceLastPhotoCapture - In the implementation block
@property (assign,nonatomic) unsigned minTimeSinceLastPhotoCapture;                           //@synthesize minTimeSinceLastPhotoCapture=_minTimeSinceLastPhotoCapture - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingCapturesAtRate0;                   //@synthesize numberOfButtonMashingCapturesAtRate0=_numberOfButtonMashingCapturesAtRate0 - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingCapturesAtRate1;                   //@synthesize numberOfButtonMashingCapturesAtRate1=_numberOfButtonMashingCapturesAtRate1 - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingEventsAtRate0;                     //@synthesize numberOfButtonMashingEventsAtRate0=_numberOfButtonMashingEventsAtRate0 - In the implementation block
@property (assign,nonatomic) unsigned numberOfButtonMashingEventsAtRate1;                     //@synthesize numberOfButtonMashingEventsAtRate1=_numberOfButtonMashingEventsAtRate1 - In the implementation block
@property (assign,nonatomic) unsigned timeOfFlightCameraProjectorModeMask;                    //@synthesize timeOfFlightCameraProjectorModeMask=_timeOfFlightCameraProjectorModeMask - In the implementation block
@property (assign,nonatomic) unsigned timeOfFlightCameraUsageTypeMask;                        //@synthesize timeOfFlightCameraUsageTypeMask=_timeOfFlightCameraUsageTypeMask - In the implementation block
@property (assign,nonatomic) float structuredLightIdleTemperatureFirstReading;                //@synthesize structuredLightIdleTemperatureFirstReading=_structuredLightIdleTemperatureFirstReading - In the implementation block
@property (assign,nonatomic) float structuredLightActiveTemperatureFirstReading;              //@synthesize structuredLightActiveTemperatureFirstReading=_structuredLightActiveTemperatureFirstReading - In the implementation block
@property (assign,nonatomic) float structuredLightActiveTemperatureLastReading;               //@synthesize structuredLightActiveTemperatureLastReading=_structuredLightActiveTemperatureLastReading - In the implementation block
@property (assign,nonatomic) float structuredLightActiveTemperatureRange;                     //@synthesize structuredLightActiveTemperatureRange=_structuredLightActiveTemperatureRange - In the implementation block
@property (assign,nonatomic) float structuredLightActiveTemperatureAverage;                   //@synthesize structuredLightActiveTemperatureAverage=_structuredLightActiveTemperatureAverage - In the implementation block
@property (assign,nonatomic) float infaredSensorTemperatureRange;                             //@synthesize infaredSensorTemperatureRange=_infaredSensorTemperatureRange - In the implementation block
@property (assign,nonatomic) float infaredSensorTemperatureAverage;                           //@synthesize infaredSensorTemperatureAverage=_infaredSensorTemperatureAverage - In the implementation block
@property (assign,nonatomic) char cinematicFramingSupported;                                  //@synthesize cinematicFramingSupported=_cinematicFramingSupported - In the implementation block
@property (assign,nonatomic) char cinematicFramingEnabled;                                    //@synthesize cinematicFramingEnabled=_cinematicFramingEnabled - In the implementation block
@property (assign,nonatomic) unsigned cinematicFramingControlMode;                            //@synthesize cinematicFramingControlMode=_cinematicFramingControlMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(int)deviceType;
-(id)eventName;
-(void)setDeviceType:(int)arg1 ;
-(char)cinematicFramingEnabled;
-(unsigned)cinematicFramingControlMode;
-(void)setCinematicFramingControlMode:(unsigned)arg1 ;
-(void)setCinematicFramingEnabled:(char)arg1 ;
-(void)setCinematicFramingSupported:(char)arg1 ;
-(char)cinematicFramingSupported;
-(id)eventDictionary;
-(NSString *)clientApplicationID;
-(void)setClientApplicationID:(NSString *)arg1 ;
-(NSString *)sphereMode;
-(void)setSphereMode:(NSString *)arg1 ;
-(unsigned)activeDeviceMask;
-(void)setActiveDeviceMask:(unsigned)arg1 ;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
-(unsigned)streamingTime;
-(void)setStreamingTime:(unsigned)arg1 ;
-(NSSet *)sunburnDetectOccurred;
-(void)setSunburnDetectOccurred:(NSSet *)arg1 ;
-(NSDictionary *)degradedAutoFocusStatus;
-(void)setDegradedAutoFocusStatus:(NSDictionary *)arg1 ;
-(NSDictionary *)numberOfSphereJitterDetectAttempts;
-(void)setNumberOfSphereJitterDetectAttempts:(NSDictionary *)arg1 ;
-(NSDictionary *)numberOfSphereJitterDetects;
-(void)setNumberOfSphereJitterDetects:(NSDictionary *)arg1 ;
-(NSDictionary *)actuatorVendor;
-(void)setActuatorVendor:(NSDictionary *)arg1 ;
-(unsigned)numberOfPhotoCaptures;
-(void)setNumberOfPhotoCaptures:(unsigned)arg1 ;
-(unsigned)numberOfBurstPhotoCaptures;
-(void)setNumberOfBurstPhotoCaptures:(unsigned)arg1 ;
-(unsigned)numberOfBalancedPhotoCaptures;
-(void)setNumberOfBalancedPhotoCaptures:(unsigned)arg1 ;
-(unsigned)timeToFirstPhotoCapture;
-(void)setTimeToFirstPhotoCapture:(unsigned)arg1 ;
-(unsigned)maxTimeSinceLastPhotoCapture;
-(void)setMaxTimeSinceLastPhotoCapture:(unsigned)arg1 ;
-(unsigned)minTimeSinceLastPhotoCapture;
-(void)setMinTimeSinceLastPhotoCapture:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingCapturesAtRate0;
-(void)setNumberOfButtonMashingCapturesAtRate0:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingCapturesAtRate1;
-(void)setNumberOfButtonMashingCapturesAtRate1:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingEventsAtRate0;
-(void)setNumberOfButtonMashingEventsAtRate0:(unsigned)arg1 ;
-(unsigned)numberOfButtonMashingEventsAtRate1;
-(void)setNumberOfButtonMashingEventsAtRate1:(unsigned)arg1 ;
-(unsigned)timeOfFlightCameraProjectorModeMask;
-(void)setTimeOfFlightCameraProjectorModeMask:(unsigned)arg1 ;
-(unsigned)timeOfFlightCameraUsageTypeMask;
-(void)setTimeOfFlightCameraUsageTypeMask:(unsigned)arg1 ;
-(float)structuredLightIdleTemperatureFirstReading;
-(void)setStructuredLightIdleTemperatureFirstReading:(float)arg1 ;
-(float)structuredLightActiveTemperatureFirstReading;
-(void)setStructuredLightActiveTemperatureFirstReading:(float)arg1 ;
-(float)structuredLightActiveTemperatureLastReading;
-(void)setStructuredLightActiveTemperatureLastReading:(float)arg1 ;
-(float)structuredLightActiveTemperatureRange;
-(void)setStructuredLightActiveTemperatureRange:(float)arg1 ;
-(float)structuredLightActiveTemperatureAverage;
-(void)setStructuredLightActiveTemperatureAverage:(float)arg1 ;
-(float)infaredSensorTemperatureRange;
-(void)setInfaredSensorTemperatureRange:(float)arg1 ;
-(float)infaredSensorTemperatureAverage;
-(void)setInfaredSensorTemperatureAverage:(float)arg1 ;
@end

