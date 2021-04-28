/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNAccelerationConstraint : SCNConstraint {

	float _maximumLinearVelocity;
	float _maximumLinearAcceleration;
	float _decelerationDistance;
	float _damping;

}

@property (assign,nonatomic) double maximumLinearAcceleration; 
@property (assign,nonatomic) double maximumLinearVelocity; 
@property (assign,nonatomic) double decelerationDistance; 
@property (assign,nonatomic) double damping; 
+(char)supportsSecureCoding;
+(id)accelerationConstraint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(double)maximumLinearVelocity;
-(void)setMaximumLinearVelocity:(double)arg1 ;
-(double)maximumLinearAcceleration;
-(void)setMaximumLinearAcceleration:(double)arg1 ;
-(double)decelerationDistance;
-(void)setDecelerationDistance:(double)arg1 ;
@end

