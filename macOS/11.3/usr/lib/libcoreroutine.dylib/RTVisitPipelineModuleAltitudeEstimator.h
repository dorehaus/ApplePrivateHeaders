/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class RTLocationManager, NSString;

@interface RTVisitPipelineModuleAltitudeEstimator : NSObject <RTVisitPipelineModule> {

	double _maxHorizontalAccuracy;
	RTLocationManager* _locationManager;
	double _estimatedAltitude;
	double _estimatedVerticalUncertainty;

}

@property (nonatomic,readonly) double maxHorizontalAccuracy;                     //@synthesize maxHorizontalAccuracy=_maxHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) double estimatedAltitude;                           //@synthesize estimatedAltitude=_estimatedAltitude - In the implementation block
@property (assign,nonatomic) double estimatedVerticalUncertainty;                //@synthesize estimatedVerticalUncertainty=_estimatedVerticalUncertainty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)process:(id)arg1 ;
-(double)maxHorizontalAccuracy;
-(RTLocationManager *)locationManager;
-(id)initWithMaxHorizontalAccuracy:(double)arg1 locationManager:(id)arg2 ;
-(void)initializeZAxisParameters;
-(id)dateIntervalForAltitudeEstimation:(id)arg1 ;
-(void)updateAltitudeForCentroid:(id)arg1 locations:(id)arg2 ;
-(id)updateAltitudeforVisit:(id)arg1 ;
-(double)estimatedAltitude;
-(void)setEstimatedAltitude:(double)arg1 ;
-(double)estimatedVerticalUncertainty;
-(void)setEstimatedVerticalUncertainty:(double)arg1 ;
@end

