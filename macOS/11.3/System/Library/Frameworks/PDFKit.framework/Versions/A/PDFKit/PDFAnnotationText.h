/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFAnnotationTextPrivateVars;

@interface PDFAnnotationText : PDFAnnotation <NSCopying, NSCoding> {

	PDFAnnotationTextPrivateVars* _private2;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPage:(id)arg1 ;
-(void)commonInit;
-(id)iconName;
-(void)setIconName:(id)arg1 ;
-(long long)iconType;
-(void)setIconType:(long long)arg1 ;
-(void)setIsSelected:(char)arg1 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
@end

