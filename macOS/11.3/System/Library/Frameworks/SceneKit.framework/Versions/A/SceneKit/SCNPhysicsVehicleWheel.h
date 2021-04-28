/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding> {

	SCNNode* _node;
	SCNPhysicsVehicle* _vehicle;
	int _wheelIndex;
	double _suspensionStiffness;
	double _suspensionCompression;
	double _suspensionDamping;
	double _maximumSuspensionTravel;
	double _frictionSlip;
	double _maximumSuspensionForce;
	SCNVector3 _connectionPosition;
	SCNVector3 _steeringAxis;
	SCNVector3 _axle;
	double _radius;
	double _suspensionRestLength;
	char _isFront;

}

@property (readonly) SCNNode * node; 
@property (assign) double suspensionStiffness; 
@property (assign) double suspensionCompression; 
@property (assign) double suspensionDamping; 
@property (assign) double maximumSuspensionTravel; 
@property (assign) double frictionSlip; 
@property (assign) double maximumSuspensionForce; 
@property (assign) SCNVector3 connectionPosition; 
@property (assign) SCNVector3 steeringAxis; 
@property (assign) SCNVector3 axle; 
@property (assign) double radius; 
@property (assign) double suspensionRestLength; 
+(char)supportsSecureCoding;
+(id)wheelWithNode:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(char)isFront;
-(void)setConnectionPosition:(SCNVector3)arg1 ;
-(double)suspensionStiffness;
-(void)setSuspensionStiffness:(double)arg1 ;
-(double)suspensionCompression;
-(void)setSuspensionCompression:(double)arg1 ;
-(double)suspensionDamping;
-(void)setSuspensionDamping:(double)arg1 ;
-(double)maximumSuspensionTravel;
-(void)setMaximumSuspensionTravel:(double)arg1 ;
-(double)frictionSlip;
-(void)setFrictionSlip:(double)arg1 ;
-(double)maximumSuspensionForce;
-(void)setMaximumSuspensionForce:(double)arg1 ;
-(SCNVector3)connectionPosition;
-(SCNVector3)steeringAxis;
-(void)setSteeringAxis:(SCNVector3)arg1 ;
-(SCNVector3)axle;
-(void)setAxle:(SCNVector3)arg1 ;
-(double)suspensionRestLength;
-(void)setSuspensionRestLength:(double)arg1 ;
-(void)setIsFront:(char)arg1 ;
-(void)_setVehicle:(id)arg1 ;
-(void)_setWheelIndex:(int)arg1 ;
@end

