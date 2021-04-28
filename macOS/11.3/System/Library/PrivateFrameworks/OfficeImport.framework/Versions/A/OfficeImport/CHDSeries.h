/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class CHDChart, CHDChartType, CHDFormula, CHDDataValue, CHDData, EDKeyedCollection, EDCollection, CHDErrorBar, CHDDataLabel, OADGraphicProperties, NSString;

@interface CHDSeries : NSObject <EDKeyedObject> {

	CHDChart* mChart;
	CHDChartType* mChartType;
	unsigned long long mOrder;
	unsigned long long mStyleIndex;
	CHDFormula* mName;
	CHDDataValue* mLastCachedName;
	CHDData* mValueData;
	CHDData* mCategoryData;
	EDKeyedCollection* mDataValuePropertiesCollection;
	EDCollection* mTrendlinesCollection;
	CHDErrorBar* mErrorBarX;
	CHDErrorBar* mErrorBarY;
	CHDDataLabel* mDefaultDataLabel;
	OADGraphicProperties* mGraphicProperties;
	BOOL mDateTimeFormattingFlag;
	BOOL mHiddenFlag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seriesWithChart:(id)arg1 ;
-(NSString *)description;
-(id)name;
-(BOOL)isEmpty;
-(BOOL)isHidden;
-(void)setName:(id)arg1 ;
-(long long)key;
-(unsigned long long)order;
-(id)valueData;
-(void)setOrder:(unsigned long long)arg1 ;
-(id)graphicProperties;
-(id)lastCachedName;
-(id)categoryData;
-(BOOL)isDateTimeFormattingFlag;
-(id)chartType;
-(id)dataValuePropertiesCollection;
-(id)defaultDataLabel;
-(id)errorBarYAxis;
-(id)shallowCopy;
-(id)chart;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setDateTimeFormattingFlag:(BOOL)arg1 ;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(void)setDefaultDataLabel:(id)arg1 ;
-(void)setChartType:(id)arg1 ;
-(void)setErrorBarYAxis:(id)arg1 ;
-(void)setErrorBarXAxis:(id)arg1 ;
-(void)clearBackPointers;
-(unsigned long long)styleIndex;
-(void)setValueData:(id)arg1 ;
-(void)setCategoryData:(id)arg1 ;
-(unsigned long long)categoryCount;
-(void)setDataValuePropertiesCollection:(id)arg1 ;
-(id)trendlineCollection;
-(void)setTrendlineCollection:(id)arg1 ;
-(BOOL)hasTrendlines;
-(void)setErrorBar:(id)arg1 ;
-(BOOL)hasErrorBars;
-(id)errorBarXAxis;
-(void)setHiddenFlag:(BOOL)arg1 ;
-(id)defaultSeriesNameForIndex:(unsigned long long)arg1 ;
@end
