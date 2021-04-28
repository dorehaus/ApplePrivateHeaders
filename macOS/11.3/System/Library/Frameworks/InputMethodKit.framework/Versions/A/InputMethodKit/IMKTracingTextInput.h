/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKDecorator.h>
#import <libobjc.A.dylib/IMKTextInput.h>

@interface IMKTracingTextInput : IMKDecorator <IMKTextInput>
-(long long)characterIndexForPoint:(CGPoint)arg1 tracking:(long long)arg2 inMarkedRange:(char*)arg3 ;
-(id)uniqueClientIdentifierString;
-(long long)length;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(id)bundleIdentifier;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(NSRange)selectedRange;
-(NSRange)markedRange;
-(id)validAttributesForMarkedText;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(int)windowLevel;
-(void)selectInputMode:(id)arg1 ;
-(id)attributesForCharacterIndex:(unsigned long long)arg1 lineHeightRectangle:(CGRect*)arg2 ;
-(id)stringFromRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(void)setMarkedText:(id)arg1 selectionRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)overrideKeyboardWithKeyboardNamed:(id)arg1 ;
-(char)supportsUnicode;
-(char)supportsProperty:(unsigned)arg1 ;
@end

