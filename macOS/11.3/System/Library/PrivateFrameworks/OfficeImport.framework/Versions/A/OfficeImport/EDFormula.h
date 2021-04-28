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

@interface EDFormula : NSObject <EDFormulaBuilding> {

	CFDataRef mPackedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formula;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(unsigned)tokenCount;
-(id)warning;
-(int)warningType;
-(char*)lastExtendedDataForTokenAtIndex:(unsigned)arg1 length:(unsigned*)arg2 ;
-(int)tokenTypeAtIndex:(unsigned)arg1 ;
-(BOOL)isSupportedFormula;
-(void)setCleaned:(BOOL)arg1 ;
-(id)originalFormulaString;
-(void)populateXlPtg:(XlPtg*)arg1 index:(unsigned)arg2 ;
-(BOOL)setupTokensWithTokensCount:(unsigned)arg1 tokensWithDataCount:(unsigned)arg2 extendedDataLength:(unsigned)arg3 extendedDataCount:(unsigned)arg4 ;
-(void)setWarning:(int)arg1 ;
-(void)removeAllTokens;
-(BOOL)copyTokenFromXlPtg:(XlPtg*)arg1 ;
-(EDToken*)tokenAtIndex:(unsigned)arg1 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 ;
-(BOOL)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 extendedDataCount:(unsigned)arg3 ;
-(char*)setExtendedDataAtIndex:(unsigned)arg1 extendedDataIndex:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)setupExtendedDataForTokenAtIndex:(unsigned)arg1 extendedDataLength:(unsigned)arg2 extendedDataCount:(unsigned)arg3 ;
-(BOOL)copyTokenAtIndex:(unsigned)arg1 fromFormula:(id)arg2 ;
-(unsigned)firstTokenIndexForArgAtIndex:(unsigned)arg1 ;
-(BOOL)removeTokenAtIndex:(unsigned)arg1 ;
-(id)saveArgs:(unsigned)arg1 andDelete:(char)arg2 ;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2 ;
-(char)convertToList:(unsigned)arg1 withFinalParen:(char)arg2 ;
-(char*)extendedDataForTokenAtIndex:(unsigned)arg1 extendedDataIndex:(unsigned)arg2 length:(unsigned*)arg3 ;
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
-(id)initWithFormula:(id)arg1 ;
-(void)replaceTokenTypeAtIndex:(unsigned)arg1 withType:(int)arg2 ;
-(unsigned)countExtendedDataForTokenAtIndex:(unsigned)arg1 ;
-(BOOL)replaceTokenAtIndex:(unsigned)arg1 withFormula:(id)arg2 ;
-(BOOL)replaceTokenAtIndex:(unsigned)arg1 withFormula:(id)arg2 formulaTokenIndex:(unsigned)arg3 ;
-(ChVector<XlPtg *>*)xlPtgs;
-(BOOL)convertTokensToSharedAtRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(void)setOriginalFormulaString:(id)arg1 ;
-(id)warningParameter;
-(void)setWarningParameter:(id)arg1 ;
-(BOOL)isCleaned;
-(BOOL)isContainsRelativeReferences;
-(void)updateContainsRelativeReferences:(BOOL)arg1 ;
-(BOOL)isCleanedWithEvaluationStack;
-(void)updateCleanedWithEvaluationStack:(BOOL)arg1 ;
-(BOOL)isSharedFormula;
-(BOOL)isBaseFormula;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned long long*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
@end
