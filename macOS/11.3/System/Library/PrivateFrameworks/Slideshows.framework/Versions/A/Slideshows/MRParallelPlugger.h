/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCAnimationPath, MRAnimationPathScalar, MRAnimationContext, MCPlugParallel;

@interface MRParallelPlugger : NSObject {

	MCAnimationPath* mAnimationPathParam1;
	MCAnimationPath* mAnimationPathParam2;
	MCAnimationPath* mAnimationPathXY;
	MRAnimationPathScalar* mAnimationPathX;
	MRAnimationPathScalar* mAnimationPathY;
	MRAnimationPathScalar* mAnimationPathZ;
	MRAnimationPathScalar* mAnimationPathScale;
	MRAnimationPathScalar* mAnimationPathRX;
	MRAnimationPathScalar* mAnimationPathRY;
	MRAnimationPathScalar* mAnimationPathRZ;
	MRAnimationPathScalar* mAnimationPathOpacity;
	MRAnimationContext* mAnimationContext;
	char mPlugWasSetSinceLastRendering;
	unsigned char mCurrentLayoutIndex;
	char mNeedsUpdate;
	MCPlugParallel* mPlug;

}

@property (nonatomic,copy) MCPlugParallel * plug; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) char needsUpdate; 
-(void)dealloc;
-(id)init;
-(char)needsUpdate;
-(void)setNeedsUpdate:(char)arg1 ;
-(MCPlugParallel *)plug;
-(void)setPlug:(MCPlugParallel *)arg1 ;
-(void)setOpacityAnimationPath:(id)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(char)applyAtTime:(double)arg1 toSublayer:(id)arg2 withArguments:(id)arg3 ;
@end

