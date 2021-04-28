/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionResetFormPrivateVars, NSArray;

@interface PDFActionResetForm : PDFAction <NSCopying> {

	PDFActionResetFormPrivateVars* _private2;

}

@property (nonatomic,copy) NSArray * fields; 
@property (assign,nonatomic) char fieldsIncludedAreCleared; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSArray *)fields;
-(id)toolTip;
-(void)commonInit;
-(void)setFields:(NSArray *)arg1 ;
-(const CFDictionaryRef)createDictionaryRef;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(char)fieldsIncludedAreCleared;
-(void)addFlagsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addFieldsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)setFieldsIncludedAreCleared:(char)arg1 ;
@end
