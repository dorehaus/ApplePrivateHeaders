/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAccessibilityNode.h>

@class NSString;

@interface PDFAccessibilityNodeText : PDFAccessibilityNode {

	NSString* _stringValue;

}

@property (nonatomic,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
-(id)description;
-(NSString *)stringValue;
-(id)accessibilityRole;
-(CGRect)accessibilityFrame;
-(id)accessibilityAttributedStringForRange:(NSRange)arg1 ;
-(NSRange)accessibilityRangeForLine:(long long)arg1 ;
-(id)accessibilityStringForRange:(NSRange)arg1 ;
-(NSRange)accessibilityRangeForPosition:(CGPoint)arg1 ;
-(CGRect)accessibilityFrameForRange:(NSRange)arg1 ;
-(long long)accessibilityLineForIndex:(long long)arg1 ;
-(id)accessibilityValue;
-(NSRange)accessibilityVisibleCharacterRange;
-(long long)accessibilityNumberOfCharacters;
-(NSRange)accessibilitySelectedTextRange;
-(void)setAccessibilitySelectedTextRange:(NSRange)arg1 ;
-(id)accessibilitySelectedTextRanges;
-(void)setAccessibilitySelectedTextRanges:(id)arg1 ;
-(CGPDFLayoutRef)_pageLayout;
-(char)_containsNonTextNodes;
-(id)_annotationNodesInRange:(NSRange)arg1 ;
@end

