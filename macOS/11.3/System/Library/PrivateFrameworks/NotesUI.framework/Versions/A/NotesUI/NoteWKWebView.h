/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WKWebView.h>

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView {

	NoteHTMLEditorView* _noteHTMLEditorView;

}

@property (assign,nonatomic,__weak) NoteHTMLEditorView * noteHTMLEditorView;              //@synthesize noteHTMLEditorView=_noteHTMLEditorView - In the implementation block
-(char)becomeFirstResponder;
-(char)performDragOperation:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)pasteAsPlainText:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(NoteHTMLEditorView *)noteHTMLEditorView;
-(void)ic_evaluateJavaScript:(id)arg1 ;
-(void)strikethrough:(id)arg1 ;
-(void)setNoteHTMLEditorView:(NoteHTMLEditorView *)arg1 ;
@end

