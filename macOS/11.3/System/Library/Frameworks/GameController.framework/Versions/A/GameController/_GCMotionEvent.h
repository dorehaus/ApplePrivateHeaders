/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GCMotionEvent <NSCopying,NSObject>
@property (readonly) char hasGyro; 
@property (readonly) double gyroPitch; 
@property (readonly) double gyroYaw; 
@property (readonly) double gyroRoll; 
@property (readonly) char hasAccelerometer; 
@property (readonly) double accelerometerX; 
@property (readonly) double accelerometerY; 
@property (readonly) double accelerometerZ; 
@property (readonly) char hasAttitude; 
@property (readonly) double attitudeW; 
@property (readonly) double attitudeX; 
@property (readonly) double attitudeY; 
@property (readonly) double attitudeZ; 
@required
-(char)hasAttitude;
-(char)hasGyro;
-(double)gyroPitch;
-(double)gyroYaw;
-(double)gyroRoll;
-(char)hasAccelerometer;
-(double)accelerometerX;
-(double)accelerometerY;
-(double)accelerometerZ;
-(double)attitudeW;
-(double)attitudeX;
-(double)attitudeY;
-(double)attitudeZ;

@end

