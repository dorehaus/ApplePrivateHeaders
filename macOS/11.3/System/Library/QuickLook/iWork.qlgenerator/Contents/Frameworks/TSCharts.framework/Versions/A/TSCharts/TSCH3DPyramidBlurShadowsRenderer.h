/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DShadowsRenderer.h>

@class NSArray, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {

	NSArray* _pyramidResources;
	TSCH3DPyramidBlurFBOResource* _finalShadowResource;
	tvec2<int> _initialSize;
	int _requestedSize;
	float _targetRadiusFactor;

}
-(void)invalidate;
-(float)blurSlackForQuality:(float)arg1 ;
-(void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(/*^block*/id)arg3 ;
-(id)shadowsFBOForContext:(id)arg1 ;
-(void)unprotectShadowInSession:(id)arg1 ;
-(id)initWithSize:(int)arg1 targetRadiusFactor:(float)arg2 ;
-(id)p_allResources;
-(void)p_setupResourcesForSize:(tvec2<int>)arg1 ;
@end

