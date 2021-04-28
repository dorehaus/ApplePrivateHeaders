/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode, NSMutableDictionary;

@interface SCNIKConstraint : SCNConstraint {

	SCNNode* _chainRootNode;
	SCNVector3 _ikTarget;
	NSMutableDictionary* _jointsPerNode;

}

@property (nonatomic,readonly) SCNNode * chainRootNode; 
@property (assign,nonatomic) SCNVector3 targetPosition; 
+(char)supportsSecureCoding;
+(id)inverseKinematicsConstraintWithChainRootNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithChainRootNode:(id)arg1 ;
-(void)setMaxAllowedRotationAngle:(double)arg1 forJoint:(id)arg2 ;
-(double)maxAllowedRotationAngleForJoint:(id)arg1 ;
-(SCNNode *)chainRootNode;
-(SCNVector3)targetPosition;
-(void)setTargetPosition:(SCNVector3)arg1 ;
-(void)setChainRootNode:(SCNNode *)arg1 ;
-(id)jointForNode:(id)arg1 ;
-(void)_customEncodingOfSCNIKConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNIKConstraint:(id)arg1 ;
-(void)_didDecodeSCNIKConstraint:(id)arg1 ;
@end

