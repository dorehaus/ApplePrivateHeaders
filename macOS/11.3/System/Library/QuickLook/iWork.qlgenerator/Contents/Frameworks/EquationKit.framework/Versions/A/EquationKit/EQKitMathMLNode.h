/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/EquationKit.framework/Versions/A/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutNode.h>

@protocol EQKitLayoutNode;
@class NSString;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode> {

	id<EQKitLayoutNode> mParent;

}

@property (assign,nonatomic) id<EQKitLayoutNode> parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EQKitLayoutNode>)parent;
-(BOOL)isNumber;
-(void)setParent:(id<EQKitLayoutNode>)arg1 ;
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(BOOL)isSpaceLike;
-(id)layoutStyleNode;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg1 ;
-(long long)scriptLevelWithBase:(long long)arg1 ;
@end

