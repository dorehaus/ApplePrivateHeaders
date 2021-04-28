/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MPAnimationPath.h>

@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {

	NSMutableSet* _keyframes;

}
+(id)animationPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)cleanup;
-(id)parent;
-(void)dump;
-(id)keyframes;
-(id)orderedKeyframes;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(double)relativeTimeForKeyframe:(id)arg1 ;
-(id)fullDebugLog;
-(void)setAnimationPath:(id)arg1 ;
-(void)copyKeyframes:(id)arg1 ;
-(void)addKeyframes:(id)arg1 ;
-(void)removeKeyframe:(id)arg1 ;
-(void)addKeyframe:(id)arg1 ;
-(id)createKeyframeWithScalar:(double)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(double)parentPhaseInDuration;
-(double)parentPhaseOutDuration;
-(double)parentMainDuration;
-(void)removeKeyframes:(id)arg1 ;
-(void)removeAllKeyframes;
-(id)newKeyframeWithScalar:(double)arg1 atTime:(double)arg2 ;
-(id)newKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 forDuration:(double)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 forDuration:(double)arg4 ;
@end

