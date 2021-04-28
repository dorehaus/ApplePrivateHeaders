/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/Versions/A/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointDistance : PKPhysicsJoint {

	unsigned* _jointDef : 2DistanceJointDef;
	unsigned* _joint : 2DistanceJoint;
	CGPoint _anchorA;
	CGPoint _anchorB;

}

@property (assign,nonatomic) double damping; 
@property (assign,nonatomic) double frequency; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) char collideConnected; 
+(char)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(double)length;
-(void)setLength:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)create;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(void)setCollideConnected:(char)arg1 ;
-(unsigned*)_joint;
-(char)isEqualToDistanceJoint:(id)arg1 ;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(char)collideConnected;
@end
