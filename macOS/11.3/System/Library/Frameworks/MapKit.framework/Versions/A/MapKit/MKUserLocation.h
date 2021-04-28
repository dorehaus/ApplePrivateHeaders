/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class MKUserLocationInternal, CLLocation, CLHeading, NSString;

@interface MKUserLocation : NSObject <MKAnnotation> {

	MKUserLocationInternal* _internal;
	double _expectedCoordinateUpdateInterval;
	double _expectedHeadingUpdateInterval;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double headingDegrees; 
@property (nonatomic,readonly) double accuracy; 
@property (assign,getter=isUpdating,nonatomic) char updating; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (assign,nonatomic) double expectedCoordinateUpdateInterval;              //@synthesize expectedCoordinateUpdateInterval=_expectedCoordinateUpdateInterval - In the implementation block
@property (assign,nonatomic) double expectedHeadingUpdateInterval;                 //@synthesize expectedHeadingUpdateInterval=_expectedHeadingUpdateInterval - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
+(void)_setAnnotationClass:(Class)arg1 ;
+(id)keyPathsForValuesAffectingSubtitle;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)reset;
-(CLLocation *)location;
-(double)timestamp;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(char)isUpdating;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)shortDescription;
-(void)setTimestamp:(double)arg1 ;
-(double)course;
-(void)setCourse:(double)arg1 ;
-(char)isEqualToLocation:(id)arg1 ;
-(void)setUpdating:(char)arg1 ;
-(void)setHeading:(CLHeading *)arg1 ;
-(CLHeading *)heading;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(double)accuracy;
-(id)annotation;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(void)setExpectedCoordinateUpdateInterval:(double)arg1 ;
-(double)expectedCoordinateUpdateInterval;
-(CLLocation *)fixedLocation;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(void)_updateCoordinate;
-(char)hasValidHeading;
-(double)headingDegrees;
-(double)expectedHeadingUpdateInterval;
-(void)setExpectedHeadingUpdateInterval:(double)arg1 ;
@end

