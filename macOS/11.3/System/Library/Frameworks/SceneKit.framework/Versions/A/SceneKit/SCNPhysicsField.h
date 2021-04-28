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

@class SCNPhysicsWorld, SCNNode;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {

	SCNVector3 _halfExtent;
	double _strength;
	double _falloffExponent;
	double _minimumDistance;
	char _active;
	long long _scope;
	char _usesEllipsoidalExtent;
	char _exclusive;
	SCNVector3 _offset;
	SCNVector3 _direction;
	unsigned long long _categoryBitMask;
	SCNPhysicsWorld* _world;
	SCNNode* _node;
	c3dPhysicsField* _field;

}

@property (assign,nonatomic) double strength; 
@property (assign,nonatomic) double falloffExponent; 
@property (assign,nonatomic) double minimumDistance; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (assign,getter=isExclusive,nonatomic) char exclusive; 
@property (assign,nonatomic) SCNVector3 halfExtent; 
@property (assign,nonatomic) char usesEllipsoidalExtent; 
@property (assign,nonatomic) long long scope; 
@property (assign,nonatomic) SCNVector3 offset; 
@property (assign,nonatomic) SCNVector3 direction; 
@property (assign,nonatomic) unsigned long long categoryBitMask; 
+(char)supportsSecureCoding;
+(id)field;
+(id)magneticField;
+(id)SCNUID_creationOptions;
+(id)SCNUID_instanciateWithOption:(id)arg1 ;
+(double)_displayScaleFactor;
+(id)dragField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)vortexField;
+(id)radialGravityField;
+(id)linearGravityField;
+(id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2 ;
+(id)springField;
+(id)electricField;
+(void)_setDisplayScaleFactor:(double)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_owner;
-(char)isActive;
-(SCNVector3)offset;
-(c3dPhysicsField*)_handle;
-(SCNVector3)direction;
-(void)setActive:(char)arg1 ;
-(void)_commonInit;
-(void)setDirection:(SCNVector3)arg1 ;
-(void)setOffset:(SCNVector3)arg1 ;
-(long long)scope;
-(double)minimumDistance;
-(void)setMinimumDistance:(double)arg1 ;
-(void)setScope:(long long)arg1 ;
-(double)strength;
-(char)isExclusive;
-(SCNVector3)halfExtent;
-(char)usesEllipsoidalExtent;
-(char)supportsOffset;
-(char)supportsDirection;
-(SCNVector3)evalAtLocation:(SCNVector3)arg1 ;
-(void)_willRemoveFromPhysicsWorld;
-(void)_setWorld:(id)arg1 ;
-(unsigned long long)categoryBitMask;
-(void)setCategoryBitMask:(unsigned long long)arg1 ;
-(void)_removeOwner;
-(void)_setOwner:(id)arg1 ;
-(c3dPhysicsField*)_createField;
-(void)_setupCommonProperties;
-(void)setHalfExtent:(SCNVector3)arg1 ;
-(void)setStrength:(double)arg1 ;
-(void)setFalloffExponent:(double)arg1 ;
-(void)setUsesEllipsoidalExtent:(char)arg1 ;
-(void)setExclusive:(char)arg1 ;
-(double)falloffExponent;
-(char)exclusive;
@end

