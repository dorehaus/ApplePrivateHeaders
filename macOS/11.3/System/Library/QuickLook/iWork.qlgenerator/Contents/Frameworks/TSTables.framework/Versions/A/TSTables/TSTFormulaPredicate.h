/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCEFormulaObject, NSString, NSDate, TSTFormulaPredArg, NSLock;

@interface TSTFormulaPredicate : NSObject <NSCopying> {

	TSCEFormulaObject* _formula;
	unsigned char _predicateType;
	unsigned char _qualifier1;
	unsigned char _qualifier2;
	short _argIndex0;
	short _argIndex1;
	short _argIndex2;
	char _paramsAreDone;
	unsigned char _nodeTag0;
	unsigned char _nodeTag1;
	unsigned char _nodeTag2;
	double _numberParam1;
	double _numberParam2;
	NSString* _stringParam1;
	NSDate* _dateTimeParam1;
	NSDate* _dateTimeParam2;
	TSCENumberValue* _durationParam1;
	TSCENumberValue* _durationParam2;
	TSCECrossTableReference _crossTableRefParam0;
	TSCECrossTableReference _crossTableRefParam1;
	TSCECrossTableReference _crossTableRefParam2;
	TSTFormulaPredArg* _predArg1;
	TSTFormulaPredArg* _predArg2;
	NSLock* _populateMembersLock;

}

@property (nonatomic,retain) TSTFormulaPredArg * predArg1;              //@synthesize predArg1=_predArg1 - In the implementation block
@property (nonatomic,retain) TSTFormulaPredArg * predArg2;              //@synthesize predArg2=_predArg2 - In the implementation block
+(id)defaultPredicateForType:(unsigned char)arg1 argumentCellRef:(TSCECellRef)arg2 hostCell:(TSUCellCoord)arg3 ;
+(id)defaultPredicateForType:(unsigned char)arg1 argumentCellReference:(id)arg2 hostCell:(TSUCellCoord)arg3 ;
+(char)isThresholdNeededForType:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)formula;
-(void)setFormula:(id)arg1 ;
-(unsigned char)predicateType;
-(void)encodeToArchive:(FormulaPredicateArchive*)arg1 archiver:(id)arg2 ;
-(id)copyByRepairingBadReferences:(TSCEFormulaRewriteContext*)arg1 ;
-(id)initFromArchive:(const FormulaPredicateArchive*)arg1 ;
-(char)containsUidReferences;
-(char)hasBadRefWithUidInfo;
-(id)copyByClearingUids:(id)arg1 containingTableUID:(const TSKUIDStruct*)arg2 ;
-(id)copyByRewritingWithContext:(TSCEFormulaRewriteContext*)arg1 rewriteBlock:(/*^block*/id)arg2 ;
-(id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const TSKUIDStructMap*)arg1 calcEngine:(id)arg2 ownerUID:(const TSKUIDStruct*)arg3 error:(char*)arg4 ;
-(id)copyByRemappingOwnerUIDsWithMap:(const TSKUIDStructMap*)arg1 calcEngine:(id)arg2 error:(char*)arg3 ;
-(id)copyToGeometricFormWithRewriteContext:(TSCEFormulaRewriteContext*)arg1 ;
-(double)numberParam1;
-(unsigned char)qualifier1;
-(id)initWithLiteralTextType:(unsigned char)arg1 string:(id)arg2 argumentCellRef:(TSCECellRef)arg3 hostCell:(TSUCellCoord)arg4 ;
-(id)initWithLiteralDateType:(unsigned char)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(unsigned char)arg6 qualifier2:(unsigned char)arg7 argumentCellRef:(TSCECellRef)arg8 hostCell:(TSUCellCoord)arg9 ;
-(id)initWithLiteralDurationType:(unsigned char)arg1 duration1:(double)arg2 durationUnits1:(int)arg3 duration2:(double)arg4 durationUnits2:(int)arg5 qualifier:(unsigned char)arg6 argumentCellRef:(TSCECellRef)arg7 hostCell:(TSUCellCoord)arg8 ;
-(id)initWithLiteralNumberType:(unsigned char)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(unsigned char)arg4 argumentCellRef:(TSCECellRef)arg5 hostCell:(TSUCellCoord)arg6 ;
-(id)copyToUidFormForHiddenRowsWithTableInfo:(id)arg1 ;
-(id)copyToGeometricFormForHiddenRowsWithTableInfo:(id)arg1 containsBadRef:(char*)arg2 ;
-(char)evaluateAtCellID:(TSUCellCoord)arg1 inFormulaOwner:(const TSKUIDStruct*)arg2 calcEngine:(id)arg3 ;
-(id)stringParam1;
-(id)dateTimeParam1;
-(TSCENumberValue*)durationParam1;
-(void)upgradeTopAndBottom;
-(void)p_clearDerivedVariables;
-(char)p_isEqualForNonFormulaItems:(id)arg1 ;
-(id)predicateArg1atBaseHostCoord:(TSUModelCellCoord)arg1 calcEngine:(id)arg2 ;
-(id)predicateArg2atBaseHostCoord:(TSUModelCellCoord)arg1 calcEngine:(id)arg2 ;
-(TSCEFormulaCreator)p_creatorForPeriodBoundaryWithScale:(unsigned char)arg1 direction:(unsigned char)arg2 offset:(id)arg3 argIndex:(unsigned)arg4 earlierBound:(char)arg5 isCalPers:(char)arg6 hostCell:(const TSCECellRef*)arg7 calcEngine:(id)arg8 ;
-(id)initWithPredicateType:(unsigned char)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(unsigned char)arg4 qualifier2:(unsigned char)arg5 argumentCellRef:(TSCECellRef)arg6 hostCell:(TSUCellCoord)arg7 calcEngine:(id)arg8 forConditionalStyle:(char)arg9 ;
-(id)initWithPredicateType:(unsigned char)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(unsigned char)arg4 qualifier2:(unsigned char)arg5 argumentCellRef:(TSCECellRef)arg6 hostCell:(TSUCellCoord)arg7 calcEngine:(id)arg8 ;
-(id)initWithLiteralDateType:(unsigned char)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(unsigned char)arg6 qualifier2:(unsigned char)arg7 argumentCellRef:(TSCECellRef)arg8 hostCell:(TSUCellCoord)arg9 forConditionalStyle:(char)arg10 ;
-(void)p_setPredicateType:(unsigned char)arg1 ;
-(void)p_setQualifier1:(unsigned char)arg1 ;
-(void)p_setQualifier2:(unsigned char)arg1 ;
-(void)p_setParamIndex0:(short)arg1 ;
-(void)p_setParamIndex1:(short)arg1 ;
-(void)p_setParamIndex2:(short)arg1 ;
-(id)copyToUidFormWithRewriteContext:(TSCEFormulaRewriteContext*)arg1 ;
-(const TSCECrossTableReference*)crossTableRefParam0;
-(const TSCECrossTableReference*)crossTableRefParam1;
-(const TSCECrossTableReference*)crossTableRefParam2;
-(unsigned char)nodeTag0;
-(int)p_argTypeForNodeTag:(unsigned char)arg1 argNum:(unsigned long long)arg2 calculationEngine:(id)arg3 hostCell:(TSUCellCoord)arg4 ;
-(unsigned char)nodeTag1;
-(unsigned char)nodeTag2;
-(char)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(char*)arg4 ;
-(void)p_populateMembersFromFormula;
-(void)setPredArg1:(TSTFormulaPredArg *)arg1 ;
-(void)setPredArg2:(TSTFormulaPredArg *)arg1 ;
-(unsigned char)qualifier2;
-(id)copyByUpgradingToLinkedRefForTable:(const TSKUIDStruct*)arg1 hostCell:(TSUCellCoord)arg2 ;
-(TSTFormulaPredArg *)predArg1;
-(TSTFormulaPredArg *)predArg2;
-(char)isEqualForInspector:(id)arg1 atHostCoordinate:(TSUCellCoord)arg2 ;
-(id)initWithPredicateType:(unsigned char)arg1 arg1:(id)arg2 arg2:(id)arg3 qualifier1:(unsigned char)arg4 qualifier2:(unsigned char)arg5 argumentCellReference:(id)arg6 hostCell:(TSUCellCoord)arg7 calcEngine:(id)arg8 forConditionalStyle:(char)arg9 ;
-(id)copyToUidFormForConditionalStylesWithTableInfo:(id)arg1 containingCell:(TSUCellCoord)arg2 preserveHostCell:(char)arg3 ;
-(void)setHostCell:(const TSKUIDStruct*)arg1 hostColumnUID:(const TSKUIDStruct*)arg2 hostRowUID:(const TSKUIDStruct*)arg3 ;
-(void)getPrecedents:(TSCEReferenceSet*)arg1 calcEngine:(id)arg2 hostOwnerUID:(const TSKUIDStruct*)arg3 hostCellID:(const TSUCellCoord*)arg4 ;
-(char)evaluateAtCellID:(TSUCellCoord)arg1 onSubOwnerID:(const TSCESubFormulaOwnerID*)arg2 calcEngine:(id)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDouble:(double)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withString:(id)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDate:(id)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withDurationValue:(double)arg3 withUnit:(int)arg4 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withCrossTableRef:(TSCECrossTableReference)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withUIDRectRef:(id)arg3 ;
-(void)p_setArgumentAt:(long long)arg1 nodeTag:(unsigned char)arg2 withCategoryRef:(const TSCECategoryRef*)arg3 ;
-(double)numberParam2;
-(id)dateTimeParam2;
-(TSCENumberValue*)durationParam2;
-(id)copyByConvertingBaseToChrome:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(TSUCellCoord)arg3 ;
-(id)copyByConvertingChromeToBase:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(TSUCellCoord)arg3 ;
-(id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(TSUCellCoord)arg3 ;
-(id)copyByOffsettingRelativeReferencesWithOffset:(TSUColumnRowOffset)arg1 ;
-(id)copyByUpdatingLinkedTable:(const TSKUIDStruct*)arg1 hostCell:(TSUCellCoord)arg2 ;
-(void)iterateFormulasWithContext:(TSCEFormulaRewriteContext*)arg1 shouldStop:(char*)arg2 block:(/*^block*/id)arg3 ;
@end

