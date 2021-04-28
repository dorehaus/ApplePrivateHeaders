/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject {

	TSCHChartInfo* _chartInfo;
	/*^block*/id _willModifyBlock;

}

@property (nonatomic,copy) id willModifyBlock;              //@synthesize willModifyBlock=_willModifyBlock - In the implementation block
+(id)upgraderWithChartInfo:(id)arg1 ;
+(double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned long long)arg3 toNewLimitingSeries:(unsigned long long)arg4 ;
+(char)chartTypeUsesSeriesLimiting:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 ;
-(unsigned long long)numberOfSeries;
-(void)upgradeForSpice:(char)arg1 naturalSize:(CGSize)arg2 ;
-(SCD_Struct_TS50)oldLayoutSettings;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(void)setWillModifyBlock:(id)arg1 ;
-(SCD_Struct_TS50)p_oldLayoutSettingsForSpice:(char)arg1 ;
-(void)configureScene:(id)arg1 ;
-(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 ;
-(void)mutateInfoWithMutations:(id)arg1 ;
-(id)adjustedScaleFromLayoutSettings:(const SCD_Struct_TS50*)arg1 toLayoutSettings:(const SCD_Struct_TS50*)arg2 ;
-(SCD_Struct_TS50)upgradedLayoutSettings;
-(id)configuredSceneWithLayoutSettings:(SCD_Struct_TS50)arg1 ;
-(void)mutateInfoByAdjustingScaleFromLayoutSettings:(const SCD_Struct_TS50*)arg1 toLayoutSettings:(const SCD_Struct_TS50*)arg2 ;
-(id)willModifyBlock;
@end

