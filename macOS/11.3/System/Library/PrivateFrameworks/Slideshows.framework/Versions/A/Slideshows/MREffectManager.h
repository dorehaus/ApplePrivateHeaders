/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MREffectManager : NSObject {

	NSMutableDictionary* mEffectSets;
	NSMutableDictionary* mEffectPools;
	NSMutableDictionary* mFontRepository;

}
+(void)initialize;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)releaseResources;
-(id)effectWithEffectID:(id)arg1 ;
-(char)hasCustomTimingForEffectID:(id)arg1 ;
-(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
-(id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2 ;
-(id)descriptionForEffectID:(id)arg1 ;
-(double)defaultPhaseInDurationForEffectID:(id)arg1 ;
-(double)defaultMainDurationForEffectID:(id)arg1 ;
-(double)defaultPhaseOutDurationForEffectID:(id)arg1 ;
-(void)recycleEffect:(id)arg1 ;
-(id)resourcePathForEffectID:(id)arg1 andResource:(id)arg2 ;
-(Class)classForEffectID:(id)arg1 ;
-(id)sizeScriptForEffectID:(id)arg1 andKey:(id)arg2 ;
-(char)hasMultiImageInputForEffectID:(id)arg1 ;
-(id)imageInputInfosForEffectID:(id)arg1 ;
-(id)imageProviderInfosForEffectID:(id)arg1 ;
-(char)isOpaqueForEffectID:(id)arg1 ;
-(id)attributeDescriptionForEffectID:(id)arg1 andKey:(id)arg2 ;
-(double)lineSpacingFactorForTextInEffectID:(id)arg1 presetID:(id)arg2 atIndex:(long long)arg3 ;
@end

