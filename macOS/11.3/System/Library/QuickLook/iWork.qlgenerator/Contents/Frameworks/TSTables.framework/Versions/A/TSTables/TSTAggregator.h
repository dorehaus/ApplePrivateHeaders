/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSTGroupBy, TSTAggNode, TSTCategoryOwner;

@interface TSTAggregator : NSObject {

	TSTGroupBy* _groupBy;
	TSKUIDStruct _columnUid;
	TSTAggNode* _aggRoot;

}

@property (nonatomic,__weak,readonly) TSTGroupBy * groupBy;                   //@synthesize groupBy=_groupBy - In the implementation block
@property (nonatomic,readonly) TSKUIDStruct columnUid;                        //@synthesize columnUid=_columnUid - In the implementation block
@property (nonatomic,readonly) TSTCategoryOwner * categoryOwner; 
-(id)description;
-(void)encodeToArchive:(CategoryOwnerArchive_GroupByArchive_AggregatorArchive*)arg1 ;
-(TSTGroupBy *)groupBy;
-(id)aggNodeForGroupNode:(id)arg1 ;
-(TSTCategoryOwner *)categoryOwner;
-(TSKUIDStruct)columnUid;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef>>*)cellRefsForRowUids:(id)arg1 tableUID:(const TSKUIDStruct*)arg2 ;
-(vector<TSCECellRef, std::__1::allocator<TSCECellRef>>*)cellRefsForAggNodesAtGroup:(id)arg1 ;
-(id)initWithColumn:(TSKUIDStruct)arg1 forGroupBy:(id)arg2 ;
-(TSCEValue*)aggregateValueForType:(unsigned char)arg1 groupNodeUid:(TSKUIDStruct)arg2 ;
-(id)initWithArchive:(const CategoryOwnerArchive_GroupByArchive_AggregatorArchive*)arg1 groupBy:(id)arg2 ;
-(TSCEValue*)aggregateValueForType:(unsigned char)arg1 atLevel:(unsigned char)arg2 atRow:(TSUViewRowIndex)arg3 ;
-(TSCECategoryRef)aggregateRefForType:(unsigned char)arg1 atLevel:(unsigned char)arg2 atRow:(TSUViewRowIndex)arg3 ;
-(void)rebuildAggFormulas;
-(void)clearAggFormulas:(id)arg1 ;
@end

