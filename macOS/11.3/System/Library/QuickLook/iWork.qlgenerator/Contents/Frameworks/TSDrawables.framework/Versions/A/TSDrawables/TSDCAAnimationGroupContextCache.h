/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDCAAnimationContextCache.h>

@class NSArray;

@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache {

	NSArray* _animations;
	NSArray* _animationContextCaches;

}

@property (nonatomic,readonly) NSArray * animations;                          //@synthesize animations=_animations - In the implementation block
@property (nonatomic,readonly) NSArray * animationContextCaches;              //@synthesize animationContextCaches=_animationContextCaches - In the implementation block
+(id)p_flattenedBestAnimationContextCachesForKeyPath:(id)arg1 atTime:(double)arg2 inContextCaches:(id)arg3 ;
-(NSArray *)animations;
-(id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3 ;
-(id)initWithAnimation:(id)arg1 ;
-(NSArray *)animationContextCaches;
-(id)p_bestAnimationContextCachesForKeyPath:(id)arg1 atTime:(double)arg2 ;
-(double)p_groupTimingFactorAtTime:(double)arg1 ;
@end
