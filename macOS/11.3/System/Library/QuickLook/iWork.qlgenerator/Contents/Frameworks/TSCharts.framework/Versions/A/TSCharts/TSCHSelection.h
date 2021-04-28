/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSKit/TSKSelection.h>

@class TSCHChartDrawableInfo, NSArray, TSCHSelectionPath, TSCHSelectionPathType, NSSet;

@interface TSCHSelection : TSKSelection {

	TSCHChartDrawableInfo* _info;
	NSArray* _paths;

}

@property (nonatomic,retain,readonly) TSCHChartDrawableInfo * chartInfo;              //@synthesize info=_info - In the implementation block
@property (nonatomic,copy,readonly) NSArray * paths;                                  //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) unsigned long long pathCount; 
@property (nonatomic,copy,readonly) TSCHSelectionPath * firstPath; 
@property (nonatomic,copy,readonly) TSCHSelectionPathType * pathType; 
@property (nonatomic,copy,readonly) NSSet * pathTypes; 
@property (nonatomic,readonly) char returnChartFrameForAutoscroll; 
+(Class)archivedSelectionClass;
+(id)selectionWithChartInfo:(id)arg1 paths:(id)arg2 ;
+(id)emptySelectionWithChartInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)pathCount;
-(NSArray *)paths;
-(TSCHSelectionPathType *)pathType;
-(id)initWithPaths:(id)arg1 ;
-(TSCHSelectionPath *)firstPath;
-(void)saveToArchive:(ChartSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const ChartSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(TSCHChartDrawableInfo *)chartInfo;
-(char)returnChartFrameForAutoscroll;
-(id)initWithChartInfo:(id)arg1 paths:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 path:(id)arg2 ;
-(id)selectionByAddingPathsFromArray:(id)arg1 ;
-(id)selectionByRemovingPathsFromArray:(id)arg1 ;
-(NSSet *)pathTypes;
@end
