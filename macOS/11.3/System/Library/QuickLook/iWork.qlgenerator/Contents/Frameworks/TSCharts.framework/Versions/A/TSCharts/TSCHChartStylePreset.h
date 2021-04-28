/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSCharts/TSSCustomPresetMigration.h>
#import <TSCharts/TSCHParagraphStyleOwner.h>
#import <TSCharts/TSCHStyleSwapSupporting.h>
#import <TSCharts/TSSPreset.h>
#import <TSCharts/TSPCopying.h>
#import <TSCharts/TSKModel.h>

@class NSString, NSUUID, TSCHChartStyle, TSCHLegendStyle, NSArray, TSCHReferenceLineStyle, TSCHChartStyleState, TSSStylesheet;

@interface TSCHChartStylePreset : TSPObject <TSSCustomPresetMigration, TSCHParagraphStyleOwner, TSCHStyleSwapSupporting, TSSPreset, TSPCopying, TSKModel> {

	NSUUID* _uuid;
	TSCHChartStyle* _chartStyle;
	TSCHLegendStyle* _legendStyle;
	NSArray* _valueAxisStylesList;
	NSArray* _categoryAxisStylesList;
	NSArray* _seriesStylesList;
	NSArray* _paragraphStylesList;
	TSCHReferenceLineStyle* _refLineStyle;
	char _hasUpgradedFromFinalizeHandler;

}

@property (nonatomic,copy,readonly) TSCHChartStyleState * chartStyleState; 
@property (nonatomic,readonly) TSCHChartStyle * chartStyle;                             //@synthesize chartStyle=_chartStyle - In the implementation block
@property (nonatomic,readonly) TSCHLegendStyle * legendStyle;                           //@synthesize legendStyle=_legendStyle - In the implementation block
@property (nonatomic,readonly) NSArray * valueAxisStyles;                               //@synthesize valueAxisStylesList=_valueAxisStylesList - In the implementation block
@property (nonatomic,readonly) NSArray * categoryAxisStyles;                            //@synthesize categoryAxisStylesList=_categoryAxisStylesList - In the implementation block
@property (nonatomic,readonly) NSArray * seriesStyles;                                  //@synthesize seriesStylesList=_seriesStylesList - In the implementation block
@property (nonatomic,readonly) NSArray * paragraphStyles;                               //@synthesize paragraphStylesList=_paragraphStylesList - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) TSCHReferenceLineStyle * refLineStyle;                   //@synthesize refLineStyle=_refLineStyle - In the implementation block
@property (nonatomic,readonly) NSArray * allStyles; 
@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)needsObjectUUID;
+(void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3 ;
+(void)upgradeCalloutLineStylesForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3 ;
+(void)upgradeDonutStylesForSeriesPresets:(id)arg1 ;
+(void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2 ;
+(void)p_replaceProperty:(int)arg1 inStyle:(id)arg2 withObject:(id)arg3 ;
+(id)p_getDefaultErrorBarColor:(id)arg1 valueAxisStyles:(id)arg2 ;
+(id)p_getDefaultTrendLineShadowColor:(id)arg1 ;
+(id)p_getDefaultTrendLineStrokeColor:(id)arg1 ;
+(void)p_useProperty:(int)arg1 asProperty:(int)arg2 inStyle:(id)arg3 ;
+(void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2 ;
+(void)upgradeShadowPropertyForParagraphStyles:(id)arg1 ;
+(id)presetWithContext:(id)arg1 fromStyleState:(id)arg2 uuid:(id)arg3 ;
-(NSString *)description;
-(NSUUID *)uuid;
-(id)swatchImage;
-(TSSStylesheet *)stylesheet;
-(id)copyWithContext:(id)arg1 ;
-(id)referencedStyles;
-(NSString *)presetKind;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSCHChartStyle *)chartStyle;
-(TSCHLegendStyle *)legendStyle;
-(NSArray *)valueAxisStyles;
-(NSArray *)categoryAxisStyles;
-(NSArray *)seriesStyles;
-(NSArray *)paragraphStyles;
-(TSCHReferenceLineStyle *)refLineStyle;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 refLineStyle:(id)arg8 uuid:(id)arg9 ;
-(void)upgradePresetIfNecessaryFromFinalizeHandlerWithOptionalPreUFFVersion:(const unsigned long long*)arg1 ;
-(id)paragraphStyleAtIndex:(unsigned long long)arg1 ;
-(id)buildChartNonStyle;
-(id)buildLegendNonStyle;
-(id)buildAxisNonStyle;
-(TSCHChartStyleState *)chartStyleState;
-(id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 refLineStyle:(id)arg8 ;
-(id)presetByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2 paragraphStyles:(id)arg3 ;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(id)buildSeriesNonStyle;
-(id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2 ;
-(id)initForCopyingWithContext:(id)arg1 ;
-(id)copyWithContext:(id)arg1 shallowCopyStyles:(char)arg2 ;
-(NSArray *)allStyles;
-(id)migratedPresetInTheme:(id)arg1 followReplacements:(char)arg2 ;
-(char)isEquivalentToPreset:(id)arg1 outReasons:(id*)arg2 ;
@end

