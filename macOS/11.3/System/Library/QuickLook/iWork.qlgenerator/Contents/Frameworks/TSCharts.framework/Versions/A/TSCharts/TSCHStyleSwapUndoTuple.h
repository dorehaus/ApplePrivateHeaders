/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHStyleSwapSupporting;
#import <TSCharts/TSCharts-Structs.h>
@class TSSStyle, NSUUID, TSPObject, TSSPropertySet, TSCHStyleOwnerReference, TSCHStyleSemanticTag;

@interface TSCHStyleSwapUndoTuple : NSObject {

	TSSStyle* _oldValue;
	TSSStyle* _newValue;
	int _swapType;
	int _index;
	NSUUID* _refLineUUID;
	TSPObject*<TSCHStyleSwapSupporting> _styleSwapSupporting;
	TSSPropertySet* _mutatedProperties;

}

@property (nonatomic,readonly) TSPObject*<TSCHStyleSwapSupporting> styleSwapSupporting;              //@synthesize styleSwapSupporting=_styleSwapSupporting - In the implementation block
@property (nonatomic,readonly) TSSStyle * beforeValue;                                               //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,readonly) TSSStyle * afterValue;                                                //@synthesize newValue=_newValue - In the implementation block
@property (nonatomic,readonly) int swapType;                                                         //@synthesize swapType=_swapType - In the implementation block
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) TSSPropertySet * mutatedProperties; 
@property (nonatomic,readonly) NSUUID * refLineUUID;                                                 //@synthesize refLineUUID=_refLineUUID - In the implementation block
@property (nonatomic,readonly) TSCHStyleOwnerReference * styleOwnerReference; 
@property (nonatomic,readonly) TSCHStyleSemanticTag * semanticTag; 
+(char)hasSwapTuplesRequiringConversion:(id)arg1 ;
+(id)convertedSwapTuplesForSwapTuples:(id)arg1 chartInfo:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)index;
-(id)inverse;
-(TSCHStyleSemanticTag *)semanticTag;
-(id)initWithArchive:(const StyleSwapUndoTupleArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(StyleSwapUndoTupleArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 ;
-(TSPObject*<TSCHStyleSwapSupporting>)styleSwapSupporting;
-(int)swapType;
-(TSSStyle *)afterValue;
-(NSUUID *)refLineUUID;
-(TSSStyle *)beforeValue;
-(id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6 ;
-(TSSPropertySet *)mutatedProperties;
-(id)convertedSwapTupleForChartInfo:(id)arg1 ;
-(id)initWithPersistentStyleSwapSupporting:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6 ;
-(id)migratedStyleForStyle:(id)arg1 documentRoot:(id)arg2 ;
-(id)initWithChartStylePreset:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 ;
-(id)initFromSOSWithSwapType:(int)arg1 index:(unsigned long long)arg2 oldValue:(id)arg3 newValue:(id)arg4 refLineUUID:(id)arg5 ;
-(char)isSwappingSameStyleObject:(id)arg1 ;
-(char)isSwappingSameStyleValues:(id)arg1 ;
-(id)p_nonequalPropertiesFromMap:(id)arg1 toMap:(id)arg2 ;
-(char)canApplyTupleToStyleSwapSupporting:(id)arg1 ;
-(TSCHStyleOwnerReference *)styleOwnerReference;
-(id)migratedSwapTupleForDocumentRoot:(id)arg1 ;
@end

