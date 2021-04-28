/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>
#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSMutableArray, NSMutableDictionary, MRContext;

@interface MREffectFloating : MREffect <MZEffectTiming> {

	long long mTotalImages;
	NSMutableArray* mFrontSlideOrder;
	NSMutableArray* mMiddleSlideOrder;
	NSMutableArray* mBackSlideOrder;
	char mNeedsUpdate;
	char mNeedsMoreSlides;
	long long mIterationOffset;
	NSMutableDictionary* mSlideTimes;
	float* mVBOData;
	unsigned mVBO;
	MRContext* mHackContext;

}

@property (assign,nonatomic) long long totalImages; 
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(char)hasCustomTiming;
+(char)supportsDynamicExpansionForEffectID:(id)arg1 ;
+(unsigned long long)typicalSlideBatchSizeForEffectID:(id)arg1 ;
-(char)isOpaque;
-(void)_cleanup;
-(void)_unload;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2 ;
-(void)setMultiImageSlideRange:(NSRange)arg1 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)supportsDynamicExpansion;
-(long long)typicalSlideBatchSize;
-(unsigned long long)firstSlideIndexStillNeededAtTime:(double)arg1 ;
-(char)needsMoreSlidesAtTime:(double)arg1 ;
-(void)_applyTimingToSlideProviders;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(void)_applySizeScript;
-(void)_orderImages;
-(double)_mainDurationForImageCount:(long long)arg1 ;
-(void)setTotalImages:(long long)arg1 ;
-(double)_rotationForRelative:(double)arg1 directionFactor:(double)arg2 ;
-(double)_zTranslationForRelativeTime:(double)arg1 ;
-(void)_bestTimeInfoFor:(id)arg1 time:(double)arg2 start:(double*)arg3 end:(double*)arg4 ;
-(long long)totalImages;
@end
