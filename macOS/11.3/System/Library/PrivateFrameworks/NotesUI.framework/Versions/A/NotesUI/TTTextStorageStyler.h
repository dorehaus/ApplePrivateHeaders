/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TTTextStorageStyler <NSObject>
@optional
-(void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(char)arg3 isReadingSelectionFromPasteboard:(char)arg4;

@required
-(void)styleText:(id)arg1 inRange:(NSRange)arg2 fixModelAttributes:(char)arg3;
-(void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
-(id)modelForStyleAttributes:(id)arg1 filterAttributes:(char)arg2;
-(id)styleForModelAttributes:(id)arg1;
-(void)resetGuessedFontSizes;

@end

