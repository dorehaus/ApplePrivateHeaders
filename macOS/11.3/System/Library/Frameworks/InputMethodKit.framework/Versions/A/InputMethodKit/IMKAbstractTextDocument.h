/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMKTextDocument.h>

@protocol IMKCandidateMenu;
@class IMKTextDocumentTraits, NSString, NSMutableArray;

@interface IMKAbstractTextDocument : NSObject <IMKTextDocument> {

	IMKTextDocumentTraits* _traits;
	char _showsWithMarking;
	id<IMKCandidateMenu> _candidateMenu;
	NSString* _textMarkedForUndo;
	NSMutableArray* _textSegmentationCharacterCounts;

}

@property (nonatomic,retain) NSString * textMarkedForUndo;                                    //@synthesize textMarkedForUndo=_textMarkedForUndo - In the implementation block
@property (nonatomic,readonly) IMKTextDocumentTraits * traits;                                //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) id<IMKTextDocument> composingText; 
@property (nonatomic,readonly) NSString * selectedText; 
@property (nonatomic,readonly) char hasSelection; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) char showsWithMarking;                                           //@synthesize showsWithMarking=_showsWithMarking - In the implementation block
@property (nonatomic,readonly) id<IMKCandidateMenu> candidateMenu;                            //@synthesize candidateMenu=_candidateMenu - In the implementation block
@property (nonatomic,readonly) NSMutableArray * textSegmentationCharacterCounts;              //@synthesize textSegmentationCharacterCounts=_textSegmentationCharacterCounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)characters:(unsigned long long)arg1 after:(long long)arg2 ;
-(id)characters:(unsigned long long)arg1 before:(long long)arg2 ;
-(id)characters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(id)characters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(id)recomposeCharacters:(unsigned long long)arg1 before:(long long)arg2 ;
-(unsigned long long)deleteCharacters:(unsigned long long)arg1 surrounding:(long long)arg2 ;
-(id<IMKCandidateMenu>)candidateMenu;
-(void)markStateForUndo;
-(unsigned long long)moveCursorToEnd;
-(void)unmarkStateForUndo;
-(void)undoTextChanges;
-(char)hasContentAfter:(long long)arg1 ;
-(void)replaceCharacters:(unsigned long long)arg1 after:(long long)arg2 with:(id)arg3 ;
-(unsigned long long)moveCursorForwardBy:(unsigned long long)arg1 ;
-(void)replaceCharacters:(unsigned long long)arg1 before:(long long)arg2 with:(id)arg3 ;
-(char)hasContentBefore:(long long)arg1 ;
-(unsigned long long)deleteCharacters:(unsigned long long)arg1 before:(long long)arg2 ;
-(void)insertCharacters:(id)arg1 before:(long long)arg2 ;
-(id)charactersBefore:(long long)arg1 ;
-(void)setShowsWithMarking:(char)arg1 ;
-(char)showsWithMarking;
-(void)replaceCharactersAtCursor:(unsigned long long)arg1 withCharacters:(id)arg2 ;
-(void)setText:(id)arg1 preserveCursorPosition:(char)arg2 ;
-(unsigned long long)moveCursorToStart;
-(unsigned long long)deleteCharacters:(unsigned long long)arg1 after:(long long)arg2 ;
-(NSMutableArray *)textSegmentationCharacterCounts;
-(unsigned)characterAfter:(long long)arg1 ;
-(id)characters:(unsigned long long)arg1 surrounding:(long long)arg2 ;
-(id)charactersAfter:(long long)arg1 ;
-(id)charactersSurrounding:(long long)arg1 ;
-(void)deleteCharactersAtCursor:(unsigned long long)arg1 ;
-(unsigned long long)deleteCharactersSurrounding:(long long)arg1 ;
-(void)insertCharacters:(id)arg1 after:(long long)arg2 ;
-(unsigned long long)moveCursorBackwardBy:(unsigned long long)arg1 ;
-(id)recomposeCharacters:(unsigned long long)arg1 after:(long long)arg2 ;
-(void)replaceCharacterAtCursorWith:(unsigned)arg1 ;
-(void)replaceCharactersSurroundingCursor:(unsigned long long)arg1 withCharacters:(id)arg2 ;
-(id)initWithTraits:(id)arg1 candidateMenu:(id)arg2 ;
-(void)setTextMarkedForUndo:(NSString *)arg1 ;
-(NSString *)textMarkedForUndo;
-(NSString *)description;
-(id)init;
-(char)isEmpty;
-(NSString *)text;
-(NSString *)selectedText;
-(char)hasSelection;
-(IMKTextDocumentTraits *)traits;
-(void)commitChanges;
-(void)setText:(NSString *)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)insertCharacterAtCursor:(unsigned)arg1 ;
-(id<IMKTextDocument>)composingText;
-(id)recomposeCharacters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(id)recomposeCharacters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(id)arg3 ;
-(void)commitComposingText;
-(void)deleteCharacterAtCursor;
-(unsigned)characterBefore:(long long)arg1 ;
-(void)insertCharactersAtCursor:(id)arg1 ;
-(unsigned long long)moveCursorByCharacterCount:(long long)arg1 ;
@end

