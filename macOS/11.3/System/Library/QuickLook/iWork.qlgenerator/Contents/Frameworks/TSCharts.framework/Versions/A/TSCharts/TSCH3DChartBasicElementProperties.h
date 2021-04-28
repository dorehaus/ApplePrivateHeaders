/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DChartMutableElementProperties.h>

@class TSCH3DChartModelEnumerator;

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {

	TSCH3DChartModelEnumerator* _enumerator;
	tvec2<int> _size;

}

@property (nonatomic,readonly) tvec2<int> size;              //@synthesize size=_size - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(tvec2<int>)size;
-(void)dealloc;
-(void)resetWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS0)arg2 ;
-(void)createResources;
-(id)texcoordsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)normalsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
@end
