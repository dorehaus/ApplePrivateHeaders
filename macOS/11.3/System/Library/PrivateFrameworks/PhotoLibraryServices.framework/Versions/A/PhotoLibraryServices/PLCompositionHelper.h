/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLCompositionHelper : NSObject
+(id)updateReframeStateForAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 outFormatIdentifier:(id*)arg4 outFormatVersion:(id*)arg5 isReframed:(char)arg6 ;
+(void)compositionController:(id)arg1 setEffectFilterName:(id)arg2 version:(long long)arg3 ;
+(id)adjustmentConstants;
+(id)newIdentityCompositionController;
+(id)validatedCompositionCopyFor:(id)arg1 ;
+(id)validatedCompositionCopyFor:(id)arg1 mediaType:(long long)arg2 ;
+(id)photosSchema;
+(char)isIdentityCompositionController:(id)arg1 ;
+(char)isIdentityCompositionController:(id)arg1 forKeys:(id)arg2 ;
+(id)defaultValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)identityValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)minMaxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)minValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)maxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)valueForType:(long long)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 ;
+(id)valueForCompositionController:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 ;
+(char)compositionControllerHasAnyAutoEnhancement:(id)arg1 ;
+(id)activeEffectAdjustmentForCompositionController:(id)arg1 ;
+(char)compositionController:(id)arg1 isCropConstraintEqualToCompositionController:(id)arg2 ;
+(char)compositionController:(id)arg1 isEffectFilterEqualToCompositionController:(id)arg2 ;
+(char)compositionController:(id)arg1 isEffectFilterIntensityEqualToCompositionController:(id)arg2 ;
+(char)compositionController:(id)arg1 isPortraitEqualToCompositionController:(id)arg2 ;
+(char)compositionController:(id)arg1 isPortraitIntensityEqualToCompositionController:(id)arg2 ;
+(char)compositionController:(id)arg1 isDepthIntensityEqualToCompositionController:(id)arg2 ;
+(char)compositionController:(id)arg1 isGeometryEqualToCompositionController:(id)arg2 ;
+(CGSize)synchronousInputSizeForCompositionController:(id)arg1 ;
+(char)compositionHasOvercaptureSourceSelection:(id)arg1 ;
+(void)compositionController:(id)arg1 setInputOrientation:(long long)arg2 ;
@end

