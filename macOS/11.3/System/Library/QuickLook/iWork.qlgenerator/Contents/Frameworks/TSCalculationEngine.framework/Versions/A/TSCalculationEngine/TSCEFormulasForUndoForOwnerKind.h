/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCalculationEngine.framework/Versions/A/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCEFormulasForUndoForOwnerKind : NSObject <NSCopying> {

	unsigned short _ownerKind;
	unordered_map<TSCECellRef, TSCEFormulaObject *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, TSCEFormulaObject *>>>* _formulas;
	unordered_set<TSCECellRef, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<TSCECellRef>>* _nonFormulaCells;
	unordered_set<TSKUIDStruct, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<TSKUIDStruct>>* _formulaOwnerUIDs;

}

@property (assign,nonatomic) unsigned short ownerKind;              //@synthesize ownerKind=_ownerKind - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)count;
-(unsigned short)ownerKind;
-(void)addFormula:(id)arg1 atCellRef:(const TSCECellRef*)arg2 ;
-(const unordered_set<TSKUIDStruct, std::__1::hash<TSKUIDStruct>, std::__1::equal_to<TSKUIDStruct>, std::__1::allocator<TSKUIDStruct>>*)formulaOwnerUIDs;
-(void)foreachFormula:(/*^block*/id)arg1 ;
-(void)setOwnerKind:(unsigned short)arg1 ;
@end
