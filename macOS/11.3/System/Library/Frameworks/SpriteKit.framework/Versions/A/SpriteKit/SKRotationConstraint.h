/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKRotationConstraint : SKConstraint {

	SKRange* _zRotationRange;

}

@property (copy) SKRange * zRotationRange;              //@synthesize zRotationRange=_zRotationRange - In the implementation block
+(char)supportsSecureCoding;
+(id)constraintWithZRotationRange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)zRotationRange;
-(char)isEqualToRotationConstraint:(id)arg1 ;
-(void)setZRotationRange:(SKRange *)arg1 ;
-(id)initWithZRotationRange:(id)arg1 ;
@end

