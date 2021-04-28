/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHSelectionPathType, NSArray;

@interface TSCHSelectionPath : NSObject <NSCopying> {

	TSCHSelectionPathType* _pathType;
	NSArray* _arguments;
	TSCHSelectionPath* _subSelection;

}

@property (nonatomic,readonly) TSCHSelectionPathType * pathType;              //@synthesize pathType=_pathType - In the implementation block
@property (nonatomic,readonly) TSCHSelectionPath * subSelection;              //@synthesize subSelection=_subSelection - In the implementation block
+(id)seriesSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 ;
+(id)selectionPathWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3 ;
+(id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)arg1 ;
+(id)selectionPathWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3 ;
+(id)seriesEditModeSelectionPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)type;
-(TSCHSelectionPathType *)pathType;
-(id)initWithArchive:(const ChartSelectionPathArchive*)arg1 ;
-(void)saveToArchive:(ChartSelectionPathArchive*)arg1 ;
-(id)argumentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)argumentsCount;
-(id)initWithType:(id)arg1 name:(id)arg2 arguments:(id)arg3 ;
-(id)debuggingName;
-(id)initWithPathType:(id)arg1 arguments:(id)arg2 subSelection:(id)arg3 ;
-(TSCHSelectionPath *)subSelection;
-(id)rangeOfReferenceLinePathsToPath:(id)arg1 forModel:(id)arg2 ;
-(id)rangeOfPathsToPath:(id)arg1 ;
@end

