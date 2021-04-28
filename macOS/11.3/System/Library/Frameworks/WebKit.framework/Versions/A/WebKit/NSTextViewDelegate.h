/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSTextViewDelegate <NSTextDelegate>
@optional
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementString:(id)arg3;
-(NSRange*)textView:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3;
-(void)textViewDidChangeSelection:(id)arg1;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
-(char)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(CGRect)arg3 atIndex:(unsigned long long)arg4;
-(void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(CGRect)arg3 atIndex:(unsigned long long)arg4;
-(void)textView:(id)arg1 draggedCell:(id)arg2 inRect:(CGRect)arg3 event:(id)arg4 atIndex:(unsigned long long)arg5;
-(id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3;
-(char)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5;
-(id)textView:(id)arg1 willChangeSelectionFromCharacterRanges:(id)arg2 toCharacterRanges:(id)arg3;
-(char)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
-(id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
-(void)textViewDidChangeTypingAttributes:(id)arg1;
-(id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
-(long long)textView:(id)arg1 shouldSetSpellingState:(long long)arg2 range:(NSRange)arg3;
-(id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
-(id)textView:(id)arg1 willCheckTextInRange:(NSRange)arg2 options:(id)arg3 types:(unsigned long long*)arg4;
-(id)textView:(id)arg1 didCheckTextInRange:(NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 results:(id)arg5 orthography:(id)arg6 wordCount:(long long)arg7;
-(id)textView:(id)arg1 URLForContentsOfTextAttachment:(id)arg2 atIndex:(unsigned long long)arg3;
-(id)textView:(id)arg1 willShowSharingServicePicker:(id)arg2 forItems:(id)arg3;
-(id)undoManagerForTextView:(id)arg1;
-(id)textView:(id)arg1 shouldUpdateTouchBarItemIdentifiers:(id)arg2;
-(id)textView:(id)arg1 candidatesForSelectedRange:(NSRange)arg2;
-(id)textView:(id)arg1 candidates:(id)arg2 forSelectedRange:(NSRange)arg3;
-(char)textView:(id)arg1 shouldSelectCandidateAtIndex:(unsigned long long)arg2;
-(char)textView:(id)arg1 clickedOnLink:(id)arg2;
-(void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(CGRect)arg3;
-(void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(CGRect)arg3;
-(void)textView:(id)arg1 draggedCell:(id)arg2 inRect:(CGRect)arg3 event:(id)arg4;

@end

