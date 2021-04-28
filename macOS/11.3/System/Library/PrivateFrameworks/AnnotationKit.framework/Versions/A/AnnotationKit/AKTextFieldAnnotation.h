/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKTextBoxAnnotation.h>

@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation {

	NSString* _fieldName;

}

@property (copy) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
@end

