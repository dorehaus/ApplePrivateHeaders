/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
@interface TSCEFormulasForUndo : NSObject {

	unordered_map<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *, std::__1::hash<TSCESubFormulaOwnerIndex>, std::__1::equal_to<TSCESubFormulaOwnerIndex>, std::__1::allocator<std::__1::pair<const TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>>>* _formulasForOwnerKind;
	unordered_map<TSCECellRef, NSString *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, NSString *>>>* _formulaStringsForCellRefs;

}
-(id)description;
-(unsigned long long)count;
-(char)isEmpty;
-(id)initWithArchive:(const FormulasForUndoArchive*)arg1 ;
-(void)saveToArchive:(FormulasForUndoArchive*)arg1 archiver:(id)arg2 ;
-(void)addFormulaObject:(id)arg1 atCellRef:(const TSCECellRef*)arg2 forOwnerKind:(unsigned short)arg3 ;
-(unordered_set<TSKUIDStruct, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<TSKUIDStruct>>*)ownerUIDsForOwnerKind:(unsigned short)arg1 ;
-(vector<TSCESubFormulaOwnerIndex, std::__1::allocator<TSCESubFormulaOwnerIndex>>*)allOwnerKinds;
-(id)subsetForOwnerKind:(unsigned short)arg1 ;
-(unsigned long long)countForOwnerKind:(unsigned short)arg1 ;
-(id)splitIntoChunksForExcessiveSize;
-(void)foreachFormulaInOwnerKind:(unsigned short)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)addFormulaString:(id)arg1 atCellRef:(const TSCECellRef*)arg2 ;
-(id)formulaStringAtCellRef:(const TSCECellRef*)arg1 ;
@end
