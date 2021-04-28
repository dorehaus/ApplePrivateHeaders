/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSTokenFieldDelegate.h>

@class NSCharacterSet, AMVariablesEditorView, NSString;

@interface AMVariablesEditorDateFormatDelegate : NSObject <NSTokenFieldDelegate> {

	NSCharacterSet* _charactersICU;
	NSCharacterSet* _charactersToQuote;
	AMVariablesEditorView* _editorView;

}

@property (retain) NSCharacterSet * charactersICU;                  //@synthesize charactersICU=_charactersICU - In the implementation block
@property (retain) NSCharacterSet * charactersToQuote;              //@synthesize charactersToQuote=_charactersToQuote - In the implementation block
@property (retain) AMVariablesEditorView * editorView;              //@synthesize editorView=_editorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)controlTextDidChange:(id)arg1 ;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)formatDidChange:(id)arg1 ;
-(AMVariablesEditorView *)editorView;
-(void)setEditorView:(AMVariablesEditorView *)arg1 ;
-(void)setCharactersICU:(NSCharacterSet *)arg1 ;
-(void)setCharactersToQuote:(NSCharacterSet *)arg1 ;
-(id)displayStringForPattern:(id)arg1 ;
-(id)displayValueForPattern:(id)arg1 ;
-(id)formatsForPattern:(id)arg1 ;
-(void)setObjectValue:(id)arg1 forTokenField:(id)arg2 ;
-(id)representedObjectsForPattern:(id)arg1 ;
-(NSCharacterSet *)charactersICU;
-(NSCharacterSet *)charactersToQuote;
@end

