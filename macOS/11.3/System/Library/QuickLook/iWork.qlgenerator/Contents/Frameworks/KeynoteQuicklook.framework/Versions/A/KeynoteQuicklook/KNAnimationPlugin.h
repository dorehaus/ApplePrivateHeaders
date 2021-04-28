/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KNAnimationPlugin <NSObject>
@optional
+(id)customAttributes;
+(id)customEffectTimingCurveDisplayParametersForAttributes:(id)arg1 layoutStyleOnly:(char)arg2;
+(long long)rendererTypeForAnimationContext:(id)arg1;
+(char)isResponsibleForDrawingAllTextures;
+(char)isCARendererBased;
-(id)animationInfoForAnimatedBuild:(id)arg1;

@required
+(id)supportedTypes;
+(id)defaultAttributes;
+(id)animationName;
+(id)localizedMenuString:(long long)arg1;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+(id)thumbnailImageNameForType:(long long)arg1;
+(long long)animationCategory;
+(id)animationFilter;
+(unsigned long long)directionType;
-(id)initWithAnimationContext:(id)arg1;

@end

