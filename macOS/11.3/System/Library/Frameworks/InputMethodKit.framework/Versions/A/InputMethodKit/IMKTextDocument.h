/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKAbstractTextDocument.h>

@class NSMutableString;

@interface IMKTextDocument : IMKAbstractTextDocument {

	IMKTextDocument* _composingTextInternal;
	NSMutableString* _committedText;
	NSRange _selectedRange;

}

@property (assign,nonatomic) unsigned long long cursorPosition; 
@property (assign,nonatomic) NSRange selectedRange;                                        //@synthesize selectedRange=_selectedRange - In the implementation block
@property (nonatomic,readonly) NSMutableString * committedText;                            //@synthesize committedText=_committedText - In the implementation block
@property (nonatomic,readonly) unsigned long long composingTextStartPosition; 
@property (nonatomic,readonly) unsigned long long composingTextEndPosition; 
@property (nonatomic,readonly) unsigned long long selectedTextEndPosition; 
@property (nonatomic,readonly) IMKTextDocument * composingTextInternal;                    //@synthesize composingTextInternal=_composingTextInternal - In the implementation block
@property (nonatomic,readonly) IMKTextDocument * composingText; 
@property (nonatomic,readonly) NSRange composingTextRange; 
@property (nonatomic,readonly) unsigned long long length; 
+(id)textDocumentWithTextDocument:(id)arg1 surroundingCharactersToCopy:(unsigned long long)arg2 ;
+(id)keyPathsForValuesAffectingText;
-(id)characters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(id)characters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(char)hasContentBefore:(long long)arg1 ;
-(unsigned long long)deleteCharacters:(unsigned long long)arg1 before:(long long)arg2 ;
-(void)insertCharacters:(id)arg1 before:(long long)arg2 ;
-(void)replaceCharactersAtCursor:(unsigned long long)arg1 withCharacters:(id)arg2 ;
-(unsigned long long)deleteCharacters:(unsigned long long)arg1 after:(long long)arg2 ;
-(void)insertCharacters:(id)arg1 after:(long long)arg2 ;
-(id)initWithTraits:(id)arg1 candidateMenu:(id)arg2 ;
-(unsigned long long)composingTextStartPosition;
-(unsigned long long)composingTextEndPosition;
-(IMKTextDocument *)composingTextInternal;
-(unsigned long long)selectedTextEndPosition;
-(unsigned long long)deleteCharacters:(unsigned long long)arg1 afterCursorPosition:(unsigned long long)arg2 ;
-(void)insertCharacters:(id)arg1 atCursorPosition:(unsigned long long)arg2 ;
-(void)clearAllContents;
-(NSRange)composingTextRange;
-(void)selectCharacters:(unsigned long long)arg1 before:(long long)arg2 ;
-(void)selectCharacters:(unsigned long long)arg1 after:(long long)arg2 ;
-(void)selectCodeUnits:(unsigned long long)arg1 before:(long long)arg2 ;
-(void)selectCodeUnits:(unsigned long long)arg1 after:(long long)arg2 ;
-(char)_hasComposingText;
-(void)dealloc;
-(unsigned long long)length;
-(char)isEmpty;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(NSRange)selectedRange;
-(id)selectedText;
-(char)hasSelection;
-(unsigned long long)cursorPosition;
-(void)setCursorPosition:(unsigned long long)arg1 ;
-(NSMutableString *)committedText;
-(id)initWithTextDocument:(id)arg1 surroundingCharactersToCopy:(unsigned long long)arg2 ;
-(IMKTextDocument *)composingText;
-(id)recomposeCharacters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(id)recomposeCharacters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(void)commitComposingText;
-(void)insertCharactersAtCursor:(id)arg1 ;
-(unsigned long long)moveCursorByCharacterCount:(long long)arg1 ;
@end

