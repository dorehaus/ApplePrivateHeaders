/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFFormPrivateVars;

@interface PDFForm : NSObject <NSCopying> {

	PDFFormPrivateVars* _private;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(CFDictionaryRef)createDictionaryRef;
-(id)fieldNames;
-(id)fieldNamed:(id)arg1 ;
-(void)_commonResetForm:(id)arg1 inclusive:(char)arg2 ;
-(void)addNeedsAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(char)arg3 ;
-(id)stringValueForFieldNamed:(id)arg1 ;
-(id)defaultStringValueForFieldNamed:(id)arg1 ;
-(CGPDFStringRef)defaultDAStringRef;
-(void)addFormField:(id)arg1 ;
-(void)removeFormFieldWithFieldName:(id)arg1 ;
-(void)resetFormForFields:(id)arg1 ;
-(void)resetFormExcludingFields:(id)arg1 ;
@end

