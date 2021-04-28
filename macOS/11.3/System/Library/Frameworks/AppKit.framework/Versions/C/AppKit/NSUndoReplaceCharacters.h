/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSUndoTextOperation.h>

@class NSAttributedString;

@interface NSUndoReplaceCharacters : NSUndoTextOperation {

	NSRange _replacementRange;
	NSAttributedString* _attributedString;

}
-(void)dealloc;
-(void)undoRedo:(id)arg1 ;
-(id)initWithAffectedRange:(NSRange)arg1 textStorage:(id)arg2 undoManager:(id)arg3 replacementRange:(NSRange)arg4 ;
-(id)initWithAffectedRange:(NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3 replacementRange:(NSRange)arg4 ;
@end

