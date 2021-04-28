/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol SKPhysicsContactDelegate;
@interface SKPhysicsWorld : NSObject <NSSecureCoding> {

	double speed;
	id<SKPhysicsContactDelegate> _contactDelegate;
	CGVector _gravity;

}

@property (assign,nonatomic) CGVector gravity;                                          //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) id<SKPhysicsContactDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)fields;
-(CGVector)gravity;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(void)setGravity:(CGVector)arg1 ;
-(id<SKPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<SKPhysicsContactDelegate>)arg1 ;
-(void)removeJoint:(id)arg1 ;
-(void)addJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeAllJoints;
-(void)removeAllBodies;
-(3)sampleFieldsAt:;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(char)hasBodies;
-(char)hasFields;
-(id)bodies;
-(3)sampleFields:;
@end

