/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTExpressionNode.h>

@class NSString;

@interface TSTNumberNode : TSTExpressionNode {

	NSString* _string;
	TSUDecimal _number;

}

@property (nonatomic,retain) NSString * string; 
@property (readonly) TSUDecimal number;                      //@synthesize number=_number - In the implementation block
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(TSUDecimal)number;
-(int)tokenType;
-(void)saveToArchive:(NumberNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const NumberNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isEqualToExpressionNode:(id)arg1 ;
-(TSCEFunctionArgSpec*)argumentSpec;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)exportString;
-(void)fixStorageLanguage:(id)arg1 ;
-(id)initWithContext:(id)arg1 number:(const TSUDecimal*)arg2 string:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(id)initWithContext:(id)arg1 number:(const TSUDecimal*)arg2 locale:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 locale:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(void)setNumber:(const TSUDecimal*)arg1 withLocale:(id)arg2 ;
@end

