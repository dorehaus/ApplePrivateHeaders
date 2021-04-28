/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCHLegendModelCache;

@interface TSCHLegendViewCache : NSObject {

	unsigned long long _cellCount;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfColumns;
	CGSize _finalSize;
	TSCHLegendModelCache* _modelCache;
	CGPoint* _cellOrigins;

}

@property (readonly) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (readonly) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (readonly) CGSize legendSize;                               //@synthesize finalSize=_finalSize - In the implementation block
-(void)dealloc;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(CGSize)legendSize;
-(CGPoint)originForCell:(id)arg1 ;
-(id)initWithLegendModelCache:(id)arg1 legendWidth:(double)arg2 ;
@end

