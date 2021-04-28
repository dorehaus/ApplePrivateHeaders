/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHChartFeature, NSArray, TSUIntToIntDictionary, NSString, TSSPropertySet, NSSet;

@interface TSCHChartType : NSObject <TSDMixing, NSCopying> {

	TSCHChartFeature* _feature;

}

@property (nonatomic,readonly) int chartBodyBoundsDefinition; 
@property (nonatomic,readonly) NSArray * allCDESectionLabels; 
@property (nonatomic,readonly) NSArray * categoryAxisIDs; 
@property (nonatomic,readonly) NSArray * supportedAxisScales; 
@property (nonatomic,readonly) int stackingSignRule; 
@property (nonatomic,readonly) TSUIntToIntDictionary * genericToSpecificPropertyMap; 
@property (nonatomic,readonly) Class chartLayoutItemClass; 
@property (nonatomic,readonly) Class chartLayoutClass; 
@property (nonatomic,readonly) Class layoutClass; 
@property (nonatomic,readonly) Class repClass; 
@property (nonatomic,readonly) Class sageGeometeryHelperClass; 
@property (nonatomic,readonly) Class presetImagerClass; 
@property (nonatomic,readonly) NSString * localizedDeliveryTypeForWedge; 
@property (nonatomic,readonly) NSString * unlocalizedDeliveryTypeForWedge; 
@property (nonatomic,readonly) NSString * localizedTitleForDeliveryTypeWedge; 
@property (nonatomic,readonly) NSString * localizedActionStringForWedgeExplosion; 
@property (nonatomic,readonly) char approximatesTitleAccommodationUsingLegendSize; 
@property (nonatomic,readonly) char drawValueLabelsForZero; 
@property (nonatomic,readonly) char editableFormatForValueStrings; 
@property (nonatomic,readonly) char explosionAffectsChartBodyBounds; 
@property (nonatomic,readonly) char isPseudoType; 
@property (nonatomic,readonly) char rendersBackgroundAxis; 
@property (nonatomic,readonly) char rendersUsingRadialGeometry; 
@property (nonatomic,readonly) char reverseSingleColumnLegendOrder; 
@property (nonatomic,readonly) char requiresSeparateLabelsRenderPass; 
@property (nonatomic,readonly) char supportsGroupedShadows; 
@property (nonatomic,readonly) char supportsValueLabelSpacing; 
@property (nonatomic,readonly) char supportsSeriesLabels; 
@property (nonatomic,readonly) char supportsSeriesShadow; 
@property (nonatomic,readonly) char supportsValueLabels; 
@property (nonatomic,readonly) char supportsEditing; 
@property (nonatomic,readonly) char supportsTrendLines; 
@property (nonatomic,readonly) char supportsErrorBars; 
@property (nonatomic,readonly) char supportsErrorBarsScatterX; 
@property (nonatomic,readonly) char supportsElementSeriesNames; 
@property (nonatomic,readonly) char supportsPercentNumberFormatting; 
@property (nonatomic,readonly) char supportsSymbolOverhang; 
@property (nonatomic,readonly) char supportsElementChunking; 
@property (nonatomic,readonly) char supportsMinorGridlines; 
@property (nonatomic,readonly) char supportsMultipleValueScales; 
@property (nonatomic,readonly) char supportsValueAxisLabelsPosition; 
@property (nonatomic,readonly) char supportsAxisLabelsOrientation; 
@property (nonatomic,readonly) char supportsAxisLine; 
@property (nonatomic,readonly) char supportsTickmarks; 
@property (nonatomic,readonly) char supportsCategoryAxisMinorTickmarks; 
@property (nonatomic,readonly) char supportsCategoryAxisSeriesNames; 
@property (nonatomic,readonly) char supportsConnectingLines; 
@property (nonatomic,readonly) char supportsCategoryAxisPlotToEdgesOption; 
@property (nonatomic,readonly) char supportsAxisLabelAngle; 
@property (nonatomic,readonly) char supportsIndividualShadowRendering; 
@property (nonatomic,readonly) char supportsCategoryAxisLabels; 
@property (nonatomic,readonly) char supportsCalloutLines; 
@property (nonatomic,readonly) char supportsInnerRadius; 
@property (nonatomic,readonly) char supportsBubbleOptions; 
@property (nonatomic,readonly) char supportsIncrementalResize; 
@property (nonatomic,readonly) char supportsStartAngleRotation; 
@property (nonatomic,readonly) CGSize minimumChartBodySize; 
@property (nonatomic,readonly) CGSize minimumChartBodySizeForTransformingGeometry; 
@property (nonatomic,readonly) double defaultLabelExplosionValue; 
@property (nonatomic,readonly) double minInnerRadiusPercentage; 
@property (nonatomic,readonly) double maxInnerRadiusPercentage; 
@property (nonatomic,readonly) float defaultLabelExplosionPercentage; 
@property (nonatomic,readonly) unsigned long long presentationDimension; 
@property (nonatomic,readonly) TSSPropertySet * specificSeriesFillProperties; 
@property (nonatomic,readonly) TSSPropertySet * specificSeriesStrokeProperties; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedToolTipDescriptionForShadow; 
@property (nonatomic,readonly) NSString * userInterfaceName; 
@property (nonatomic,readonly) char is3D; 
@property (nonatomic,readonly) char isMultiData; 
@property (nonatomic,readonly) char isHorizontal; 
@property (nonatomic,readonly) char hasFixedFrameRatio; 
@property (nonatomic,readonly) char hasExplodableSeriesElements; 
@property (nonatomic,readonly) char requiresStagesBuildingInReverse; 
@property (nonatomic,readonly) char requiresYAxisOrdinal; 
@property (nonatomic,readonly) char supportsCategoryLabelsInChartRangeEditor; 
@property (nonatomic,readonly) char supportsMultipleValuesPerSeries; 
@property (nonatomic,readonly) char supportsSharedAndSeparateX; 
@property (nonatomic,readonly) char supportsBorderFrame; 
@property (nonatomic,readonly) char supportsLabelExplosion; 
@property (nonatomic,readonly) char supportsMultipleSeriesTypes; 
@property (nonatomic,readonly) char supportsShowLabelsInFrontOption; 
@property (nonatomic,readonly) char supportsPlaceTitleAtCenter; 
@property (nonatomic,readonly) char supportsBackgroundFill; 
@property (nonatomic,readonly) char supportsShadowOffset; 
@property (nonatomic,readonly) char supportsSeriesFill; 
@property (nonatomic,readonly) char supportsSeriesStroke; 
@property (nonatomic,readonly) char suppliesFinalTextures; 
@property (nonatomic,readonly) char supportsReferenceLines; 
@property (nonatomic,readonly) TSCHChartType * otherDimensionChartType; 
@property (nonatomic,readonly) double maxDepthRatio; 
@property (nonatomic,readonly) NSArray * valueAxisIDs; 
@property (nonatomic,readonly) NSSet * supportedSeriesTypes; 
+(id)scatterChart;
+(id)multiDataScatterChart;
+(id)bubbleChart;
+(id)multiDataBubbleChart;
+(id)pieChart;
+(id)pieChart3D;
+(id)donutChart;
+(id)donutChart3D;
+(id)barChart;
+(id)barChart3D;
+(id)columnChart;
+(id)columnChart3D;
+(id)lineChart;
+(id)lineChart3D;
+(id)areaChart;
+(id)areaChart3D;
+(id)stackedBarChart;
+(id)stackedBarChart3D;
+(id)stackedColumnChart;
+(id)stackedColumnChart3D;
+(id)stackedAreaChart;
+(id)stackedAreaChart3D;
+(id)mixedChart;
+(id)twoYAxisChart;
+(id)allChartTypes;
+(id)chartTypePlaceholderForDefault3DScaleProperty;
+(CGSize)fallbackMinimumChartBodySize;
+(id)multipleChartsSelected;
+(id)multipleChartsSelected2D;
+(id)multipleChartsSelected3D;
+(id)multiDataColumnChart;
+(id)multiDataBarChart;
+(id)all3DChartTypes;
+(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 chartType:(id)arg2 barShape:(int)arg3 ;
+(double)sageDepthFactorForExportingChartInfo:(id)arg1 ;
+(id)chartTypeForUserInterfaceTag:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)name;
-(char)isHorizontal;
-(id)feature;
-(char)is3D;
-(Class)layoutClass;
-(Class)repClass;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)p_debugDescription;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(char)requiresStagesBuildingInReverse;
-(char)suppliesFinalTextures;
-(char)supportsSharedAndSeparateX;
-(NSArray *)valueAxisIDs;
-(unsigned long long)maxSeries;
-(unsigned long long)maxCellsToCheckForGridValueType;
-(unsigned long long)maxCellsForAdding;
-(char)supportsMultipleValuesPerSeries;
-(char)supportsSeriesLabels;
-(id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2 ;
-(double)valueAxisTitleRotation;
-(double)categoryAxisTitleRotation;
-(char)supportsReferenceLines;
-(double)maxDepthRatio;
-(TSCHChartType *)otherDimensionChartType;
-(TSCH3DChartRotationLimit)rotation3DLimit;
-(float)rotation3DMinX;
-(float)rotation3DMaxX;
-(float)rotation3DMinY;
-(float)rotation3DMaxY;
-(char)drawValueLabelsForZero;
-(char)isMultiData;
-(NSArray *)supportedAxisScales;
-(char)editableFormatForValueStrings;
-(char)supportsCategoryAxisPlotToEdgesOption;
-(unsigned long long)styleIndexForAxisID:(id)arg1 ;
-(Class)valueAxisClassForID:(id)arg1 scale:(long long)arg2 ;
-(NSArray *)categoryAxisIDs;
-(id)defaultSeriesType:(unsigned long long)arg1 ;
-(char)supportsMultipleSeriesTypes;
-(char)requiresYAxisOrdinal;
-(id)defaultDataFileName;
-(char)supportsLabelExplosion;
-(char)supportsCalloutLines;
-(TSUIntToIntDictionary *)genericToSpecificPropertyMap;
-(char)supportsSeriesFill;
-(char)supportsSeriesStroke;
-(char)supportsShadowOffset;
-(char)supportsValueLabels;
-(NSString *)userInterfaceName;
-(id)g_genericToSpecificPropertyMapPie;
-(id)g_genericToSpecificPropertyMapDonut;
-(id)g_genericToSpecificPropertyMapScatter;
-(id)g_genericToSpecificPropertyMapBar;
-(id)g_genericToSpecificPropertyMapColumn;
-(id)g_genericToSpecificPropertyMapLine;
-(id)g_genericToSpecificPropertyMapArea;
-(id)g_genericToSpecificPropertyMapStackedColumn;
-(id)g_genericToSpecificPropertyMapStackedBar;
-(id)g_genericToSpecificPropertyMapStackedArea;
-(id)g_genericToSpecificPropertyMapBubble;
-(int)stackingSignRule;
-(Class)presetImagerClass;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(char*)arg7 ;
-(NSEdgeInsets)swatchImageEdgeInsetsForSize:(CGSize)arg1 ;
-(CGSize)minimumChartBodySize;
-(NSSet *)supportedSeriesTypes;
-(char)supportsBorderFrame;
-(char)supportsEditingForAxisID:(id)arg1 ;
-(char)reverseSingleColumnLegendOrder;
-(char)supportsGroupedShadows;
-(char)supportsEditing;
-(char)supportsBackgroundFill;
-(char)supportsTrendLines;
-(char)supportsErrorBars;
-(char)supportsElementSeriesNames;
-(char)supportsPercentNumberFormatting;
-(char)supportsSymbolOverhang;
-(char)supportsElementChunking;
-(char)supportsCategoryAxisMinorTickmarks;
-(char)supportsCategoryAxisSeriesNames;
-(char)supportsConnectingLines;
-(char)hasFixedFrameRatio;
-(char)rendersBackgroundAxis;
-(char)hasExplodableSeriesElements;
-(char)rendersUsingRadialGeometry;
-(char)supportsCategoryLabelsInChartRangeEditor;
-(char)supportsBubbleOptions;
-(unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1 ;
-(int)representativeGridValueAxisType;
-(char)supportsValueLabelSpacing;
-(void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2 ;
-(char)supportsShowLabelsInFrontOption;
-(id)filteredStyleOwnersFromStyleOwners:(id)arg1 ;
-(float)defaultLabelExplosionPercentage;
-(char)supportsPlaceTitleAtCenter;
-(double)minInnerRadiusPercentage;
-(double)maxInnerRadiusPercentage;
-(id)userInterfaceNameForPlaceTitleAtCenter:(char)arg1 ;
-(id)animationFiltersWithDefaultFilters:(id)arg1 ;
-(Class)chartLayoutItemClass;
-(Class)chartLayoutClass;
-(Class)sageGeometeryHelperClass;
-(char)explosionAffectsChartBodyBounds;
-(char)supportsMinorGridlines;
-(char)supportsAxisLine;
-(char)supportsIndividualShadowRendering;
-(id)animationDeliveryStylesForFilter:(id)arg1 ;
-(long long)userInterfaceTag;
-(char)supportsStartAngleRotation;
-(unsigned long long)maxCellsForInsert;
-(id)initWithFeatureClass:(Class)arg1 ;
-(NSString *)localizedToolTipDescriptionForShadow;
-(unsigned long long)presentationDimension;
-(char)supportsCategoryAxisLabels;
-(int)chartBodyBoundsDefinition;
-(CGSize)minimumChartBodySizeForTransformingGeometry;
-(char)approximatesTitleAccommodationUsingLegendSize;
-(char)requiresSeparateLabelsRenderPass;
-(char)supportsSeriesShadow;
-(char)isPseudoType;
-(char)supportsErrorBarsScatterX;
-(double)defaultLabelExplosionValue;
-(char)supportsMultipleValueScales;
-(char)supportsValueAxisLabelsPosition;
-(char)supportsAxisLabelsOrientation;
-(char)supportsTickmarks;
-(char)supportsAxisLabelAngle;
-(NSArray *)allCDESectionLabels;
-(char)supportsIncrementalResize;
-(NSString *)localizedDeliveryTypeForWedge;
-(NSString *)unlocalizedDeliveryTypeForWedge;
-(NSString *)localizedTitleForDeliveryTypeWedge;
-(id)localizedWedgeDragLabelWithPercent:(unsigned long long)arg1 ;
-(NSString *)localizedActionStringForWedgeExplosion;
-(char)supportsInnerRadius;
-(char)shouldChangeExplosionWithPreviousChartType:(id)arg1 chartInfo:(id)arg2 seriesList:(id)arg3 ;
-(TSSPropertySet *)specificSeriesFillProperties;
-(TSSPropertySet *)specificSeriesStrokeProperties;
-(id)alternateArchiveChartTypeAndReturnWriterVersion:(unsigned long long*)arg1 readerVersion:(unsigned long long*)arg2 featureID:(id*)arg3 ;
-(id)seriesWarning;
-(id)seriesPlotRowsWarning;
-(id)seriesPlotColumnsWarning;
-(id)cellsCreatedWarning;
-(id)cellsAddedWarning;
-(CGSize)mungeBodySize:(CGSize)arg1 ;
-(char)layoutFrameShouldEncloseInfoGeometry;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(id)g_genericToSpecificPropertyMapMixed;
-(id)g_genericToSpecificPropertyMapTwoAxis;
@end

