/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDFormulaBuilding.h>

@class NSString;

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {

	EDBuildablePtg* mTree;
	int mWarning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)warningType;
-(id)formula;
-(int)tokenTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)isSupportedFormula;
-(void)setWarning:(int)arg1 ;
-(EDBuildablePtg*)tokenAtIndex:(unsigned long long)arg1 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 ;
-(void)removeTokenAtIndex:(unsigned long long)arg1 ;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2 ;
-(char)convertToList:(unsigned)arg1 withFinalParen:(char)arg2 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3 ;
-(char)insertName:(unsigned long long)arg1 atIndex:(unsigned)arg2 ;
-(char)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned)arg3 ;
-(char)addArrayWithCol:(int)arg1 andRow:(int)arg2 ;
-(char)convertToList:(unsigned)arg1 ;
-(char)convertToIntersect:(unsigned)arg1 ;
-(char)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(char*)arg1 withEDLinks:(id)arg2 ;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(char)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3 ;
-(char)shrinkSpanningRefAtArgIndex:(unsigned)arg1 ;
-(char)addInfixOperator:(int)arg1 atIndex:(unsigned)arg2 factor:(double)arg3 ;
-(char)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(char)fixTableOfConstantsRefs;
-(char)uppercaseArgAtIndex:(unsigned)arg1 ;
-(EDBuildablePtg*)tokenAtIndex:(unsigned long long)arg1 previousToken:(EDBuildablePtg*)arg2 ;
-(char)insertName:(unsigned long long)arg1 link:(unsigned long long)arg2 external:(char)arg3 atIndex:(unsigned)arg4 ;
-(char)makeArrayForLastToken:(unsigned long long)arg1 ;
-(char)convertRefs:(unsigned)arg1 toTypes:(int*)arg2 ;
-(void)convertRefsInList:(EDBuildablePtg*)arg1 toType:(int)arg2 ;
-(char)shrinkSpanningRef:(EDBuildablePtg*)arg1 ;
-(char)fixTableOfConstantsRef:(EDBuildablePtg*)arg1 ;
-(id)stringFromStringTokenAtIndex:(unsigned long long)arg1 ;
-(void)replaceStringInStringTokenAtIndex:(unsigned long long)arg1 content:(id)arg2 ;
-(char)isConstantList:(unsigned)arg1 ;
-(char)convertRefs:(unsigned)arg1 toType:(int)arg2 ;
-(void)copyToFormula:(id)arg1 ;
-(char)copyToken:(unsigned)arg1 from:(id)arg2 ;
-(BOOL)argTokenIsDurationAtIndex:(unsigned)arg1 ;
-(int)argTokenTypeAtIndex:(unsigned)arg1 ;
-(char)replaceArgPtgAtIndex:(unsigned)arg1 withFormula:(id)arg2 ;
-(char)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned)arg2 numArgs:(unsigned)arg3 ;
-(unsigned)removeOptionalPtgArgs:(unsigned)arg1 minArgs:(unsigned)arg2 ;
@end

