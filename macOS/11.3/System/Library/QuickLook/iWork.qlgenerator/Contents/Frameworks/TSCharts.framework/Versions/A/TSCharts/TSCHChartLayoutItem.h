/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSArray, TSCHChartRootLayoutItem, TSCHChartInfo, TSCHChartModel;

@interface TSCHChartLayoutItem : NSObject {

	char _layoutSizeSet;
	char _drawingRectCacheValid;
	char _minSizeCacheValid;
	char _overhangRectCacheValid;
	char _treeBuilt;
	TSCHChartLayoutItem* _parent;
	NSArray* _children;
	CGSize _layoutSize;
	CGPoint _layoutOffset;
	CGSize _minSizeCache;
	CGRect _drawingRectCache;
	CGRect _overhangRectCache;

}

@property (assign,nonatomic,__weak) TSCHChartLayoutItem * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) char layoutSizeSet;                               //@synthesize layoutSizeSet=_layoutSizeSet - In the implementation block
@property (assign,nonatomic) CGRect drawingRectCache;                          //@synthesize drawingRectCache=_drawingRectCache - In the implementation block
@property (assign,nonatomic) char drawingRectCacheValid;                       //@synthesize drawingRectCacheValid=_drawingRectCacheValid - In the implementation block
@property (assign,nonatomic) CGSize minSizeCache;                              //@synthesize minSizeCache=_minSizeCache - In the implementation block
@property (assign,nonatomic) char minSizeCacheValid;                           //@synthesize minSizeCacheValid=_minSizeCacheValid - In the implementation block
@property (assign,nonatomic) CGRect overhangRectCache;                         //@synthesize overhangRectCache=_overhangRectCache - In the implementation block
@property (assign,nonatomic) char overhangRectCacheValid;                      //@synthesize overhangRectCacheValid=_overhangRectCacheValid - In the implementation block
@property (nonatomic,retain) NSArray * children;                               //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) char treeBuilt;                                   //@synthesize treeBuilt=_treeBuilt - In the implementation block
@property (nonatomic,readonly) TSCHChartRootLayoutItem * root; 
@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (nonatomic,readonly) TSCHChartModel * model; 
@property (assign,nonatomic) SCD_Struct_TS50 layoutSettings; 
@property (readonly) CGSize minSize; 
@property (assign,nonatomic) CGPoint layoutOffset;                             //@synthesize layoutOffset=_layoutOffset - In the implementation block
@property (assign,nonatomic) CGSize layoutSize;                                //@synthesize layoutSize=_layoutSize - In the implementation block
@property (assign,nonatomic) CGRect layoutRect; 
@property (nonatomic,readonly) CGRect rootedLayoutRect; 
@property (nonatomic,readonly) CGPoint drawingOffset; 
@property (nonatomic,readonly) CGSize drawingSize; 
@property (nonatomic,readonly) CGRect drawingRect; 
@property (nonatomic,readonly) CGRect rootedDrawingRect; 
@property (nonatomic,readonly) CGRect overhangRect; 
@property (nonatomic,readonly) char isInResize; 
@property (nonatomic,readonly) CGSize startingSize; 
@property (nonatomic,readonly) unsigned long long dataSetIndex; 
+(id)chartLayoutWithChartInfo:(id)arg1 ;
-(id)description;
-(TSCHChartLayoutItem *)parent;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(TSCHChartRootLayoutItem *)root;
-(CGSize)minSize;
-(CGRect)layoutRect;
-(CGSize)layoutSize;
-(CGRect)drawingRect;
-(CGPoint)layoutOffset;
-(TSCHChartModel *)model;
-(id)initWithParent:(id)arg1 ;
-(void)setParent:(TSCHChartLayoutItem *)arg1 ;
-(void)clearAll;
-(CGSize)drawingSize;
-(void)setLayoutSize:(CGSize)arg1 ;
-(CGPoint)drawingOffset;
-(TSCHChartInfo *)chartInfo;
-(void)setLayoutSettings:(SCD_Struct_TS50)arg1 ;
-(SCD_Struct_TS50)layoutSettings;
-(CGRect)rootedLayoutRect;
-(CGRect)calcDrawingRect;
-(char)isInResize;
-(CGSize)startingSize;
-(void)layoutInward;
-(void)layoutOutward;
-(void)setLayoutOffset:(CGPoint)arg1 ;
-(CGRect)rootedDrawingRect;
-(id)renderersWithRep:(id)arg1 ;
-(unsigned long long)dataSetIndex;
-(void)layoutUsingMethod:(int)arg1 ;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(const CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(id)p_description;
-(char)treeBuilt;
-(void)buildSubTree;
-(void)clearLayoutSize;
-(CGSize)calcMinSize;
-(void)iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)clearDrawingRect;
-(void)clearOverhangRect;
-(CGRect)overhangRect;
-(char)stopIteratingItemsContainingPoint:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)p_iterateChildrenWithBlock:(/*^block*/id)arg1 ;
-(void)clearMinSize;
-(void)setLayoutRect:(CGRect)arg1 ;
-(CGPoint)overhangOffset;
-(CGSize)overhangSize;
-(double)overhangMagnitudeForEdge:(unsigned)arg1 ;
-(char)layoutSizeSet;
-(void)setLayoutSizeSet:(char)arg1 ;
-(CGRect)drawingRectCache;
-(void)setDrawingRectCache:(CGRect)arg1 ;
-(char)drawingRectCacheValid;
-(void)setDrawingRectCacheValid:(char)arg1 ;
-(CGSize)minSizeCache;
-(void)setMinSizeCache:(CGSize)arg1 ;
-(char)minSizeCacheValid;
-(void)setMinSizeCacheValid:(char)arg1 ;
-(CGRect)overhangRectCache;
-(void)setOverhangRectCache:(CGRect)arg1 ;
-(char)overhangRectCacheValid;
-(void)setOverhangRectCacheValid:(char)arg1 ;
-(void)setTreeBuilt:(char)arg1 ;
@end
