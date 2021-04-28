/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTExpressionNode.h>

@class TSTFunctionEndNode, NSString, NSArray;

@interface TSTFunctionNode : TSTExpressionNode {

	TSTFunctionEndNode* _functionEndNode;
	int _functionIndex;
	NSString* _whitespaceAfterLeftParen;
	NSArray* _whitespaceAfterDelimiters;
	NSString* _whitespaceAfterFunctionName;
	NSString* _invalidFunctionName;

}

@property (nonatomic,readonly) int functionIndex;                                          //@synthesize functionIndex=_functionIndex - In the implementation block
@property (nonatomic,retain) TSTFunctionEndNode * functionEndNode; 
@property (nonatomic,readonly) unsigned long long numArguments; 
@property (nonatomic,readonly) short minArguments; 
@property (nonatomic,readonly) short maxArguments; 
@property (retain) NSString * whitespaceAfterLeftParen;                                    //@synthesize whitespaceAfterLeftParen=_whitespaceAfterLeftParen - In the implementation block
@property (nonatomic,retain) NSArray * whitespaceAfterDelimiters;                          //@synthesize whitespaceAfterDelimiters=_whitespaceAfterDelimiters - In the implementation block
@property (nonatomic,retain) NSString * whitespaceAfterFunctionName;                       //@synthesize whitespaceAfterFunctionName=_whitespaceAfterFunctionName - In the implementation block
@property (nonatomic,retain) NSString * invalidFunctionName;                               //@synthesize invalidFunctionName=_invalidFunctionName - In the implementation block
@property (getter=isInvalidFunction,nonatomic,readonly) char invalidFunction; 
+(id)newDefaultFunctionNodeWithContext:(id)arg1 functionIndex:(int)arg2 ;
+(id)newSumNodeWithContext:(id)arg1 children:(id)arg2 ;
-(id)string;
-(void)setChildren:(id)arg1 ;
-(int)tokenType;
-(void)saveToArchive:(FunctionNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const FunctionNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(int)functionIndex;
-(unsigned long long)numArguments;
-(short)minArguments;
-(short)maxArguments;
-(TSTFunctionEndNode *)functionEndNode;
-(char)isEqualToExpressionNode:(id)arg1 ;
-(id)formulaPlainText;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)exportString;
-(void)setFunctionEndNode:(TSTFunctionEndNode *)arg1 ;
-(void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(unsigned char)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5 ;
-(unsigned long long)lastIndexOfSubtree;
-(id)mostSpecificNodeContainingIndex:(unsigned long long)arg1 correspondingIndex:(unsigned long long)arg2 ;
-(char)isFunctionNode;
-(id)initWithContext:(id)arg1 functionIndex:(int)arg2 children:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(void)setWhitespaceAfterFunctionName:(NSString *)arg1 ;
-(void)resurrectModeTokens;
-(void)setInvalidFunctionName:(NSString *)arg1 ;
-(void)p_resetArgumentSpecForChildren;
-(id)p_functionSpec;
-(char)isDescendantOfChild:(id)arg1 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 unwrapped:(char)arg3 ;
-(char)isEmptyFunctionNode;
-(char)isMissingRequiredArgument;
-(char)isInvalidFunction;
-(NSString *)whitespaceAfterLeftParen;
-(void)setWhitespaceAfterLeftParen:(NSString *)arg1 ;
-(NSArray *)whitespaceAfterDelimiters;
-(void)setWhitespaceAfterDelimiters:(NSArray *)arg1 ;
-(NSString *)whitespaceAfterFunctionName;
-(NSString *)invalidFunctionName;
@end

