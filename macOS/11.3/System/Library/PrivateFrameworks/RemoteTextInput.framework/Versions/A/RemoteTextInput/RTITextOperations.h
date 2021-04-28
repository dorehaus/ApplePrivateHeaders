/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/Versions/A/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardOutput, TIKeyboardIntermediateText, RTIStyledIntermediateText, NSDictionary, NSAttributedString, NSString, NSMutableDictionary;

@interface RTITextOperations : NSObject <NSSecureCoding> {

	TIKeyboardOutput* _keyboardOutput;
	TIKeyboardIntermediateText* _intermediateText;
	RTIStyledIntermediateText* _styledIntermediateText;
	NSDictionary* _attributedPlaceholders;
	NSAttributedString* _textCheckingAnnotatedString;
	NSString* _textToAssert;
	SEL _editingActionSelector;
	NSString* _textCheckingAnnotationToRemove;
	NSRange _selectionRangeToAssert;
	NSRange _textCheckingAnnotationRange;
	NSRange _textCheckingReplacementRange;
	NSRange _textCheckingAnnotationRemovalRange;

}

@property (nonatomic,retain) NSDictionary * attributedPlaceholders;                              //@synthesize attributedPlaceholders=_attributedPlaceholders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutableAttributedPlaceholders; 
@property (nonatomic,readonly) TIKeyboardOutput * keyboardOutput;                                //@synthesize keyboardOutput=_keyboardOutput - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;                      //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,retain) RTIStyledIntermediateText * styledIntermediateText;                 //@synthesize styledIntermediateText=_styledIntermediateText - In the implementation block
@property (nonatomic,copy) NSString * textToAssert;                                              //@synthesize textToAssert=_textToAssert - In the implementation block
@property (assign,nonatomic) NSRange selectionRangeToAssert;                                     //@synthesize selectionRangeToAssert=_selectionRangeToAssert - In the implementation block
@property (assign,nonatomic) SEL editingActionSelector;                                          //@synthesize editingActionSelector=_editingActionSelector - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedInsertionText; 
@property (assign,nonatomic) NSRange textCheckingAnnotationRange;                                //@synthesize textCheckingAnnotationRange=_textCheckingAnnotationRange - In the implementation block
@property (assign,nonatomic) NSRange textCheckingReplacementRange;                               //@synthesize textCheckingReplacementRange=_textCheckingReplacementRange - In the implementation block
@property (nonatomic,copy) NSAttributedString * textCheckingAnnotatedString;                     //@synthesize textCheckingAnnotatedString=_textCheckingAnnotatedString - In the implementation block
@property (assign,nonatomic) NSRange textCheckingAnnotationRemovalRange;                         //@synthesize textCheckingAnnotationRemovalRange=_textCheckingAnnotationRemovalRange - In the implementation block
@property (nonatomic,copy) NSString * textCheckingAnnotationToRemove;                            //@synthesize textCheckingAnnotationToRemove=_textCheckingAnnotationToRemove - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)setSelectionRangeToAssert:(NSRange)arg1 ;
-(TIKeyboardOutput *)keyboardOutput;
-(void)insertAttributedText:(id)arg1 ;
-(void)setEditingActionSelector:(SEL)arg1 ;
-(void)setStyledIntermediateText:(RTIStyledIntermediateText *)arg1 ;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(NSAttributedString *)textCheckingAnnotatedString;
-(void)setTextCheckingAnnotationRange:(NSRange)arg1 ;
-(void)setTextCheckingReplacementRange:(NSRange)arg1 ;
-(void)setTextCheckingAnnotatedString:(NSAttributedString *)arg1 ;
-(void)setTextCheckingAnnotationRemovalRange:(NSRange)arg1 ;
-(void)setTextCheckingAnnotationToRemove:(NSString *)arg1 ;
-(NSString *)textToAssert;
-(NSRange)selectionRangeToAssert;
-(TIKeyboardIntermediateText *)intermediateText;
-(RTIStyledIntermediateText *)styledIntermediateText;
-(SEL)editingActionSelector;
-(NSRange)textCheckingAnnotationRange;
-(NSRange)textCheckingReplacementRange;
-(NSRange)textCheckingAnnotationRemovalRange;
-(NSString *)textCheckingAnnotationToRemove;
-(void)_createAttributedPlaceholdersIfNecessary;
-(NSMutableDictionary *)mutableAttributedPlaceholders;
-(void)insertAttributedText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(NSAttributedString *)attributedInsertionText;
-(NSDictionary *)attributedPlaceholders;
-(void)setAttributedPlaceholders:(NSDictionary *)arg1 ;
-(void)setTextToAssert:(NSString *)arg1 ;
@end

