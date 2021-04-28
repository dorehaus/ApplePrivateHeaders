/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCAnimationPathPhysics.h>

@interface MRAnimationPathPhysics : MCAnimationPathPhysics {

	float mBaseValue;
	float mDeltaValue;
	float mVelocity;
	double mTime;

}

@property (assign,nonatomic) float baseValue; 
@property (assign,nonatomic) float velocity; 
-(float)velocity;
-(void)setVelocity:(float)arg1 ;
-(float)baseValue;
-(void)setBaseValue:(float)arg1 ;
-(id)initWithMCAnimationPath:(id)arg1 ;
-(float)computeValueForTime:(double)arg1 withContext:(id)arg2 ;
@end
