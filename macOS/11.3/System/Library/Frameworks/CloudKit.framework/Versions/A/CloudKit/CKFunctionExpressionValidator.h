/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString, NSArray;

@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {

	NSString* _functionName;
	NSArray* _argumentValidators;

}

@property (nonatomic,retain) NSString * functionName;                   //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSArray * argumentValidators;              //@synthesize argumentValidators=_argumentValidators - In the implementation block
-(NSString *)functionName;
-(id)CKPropertiesDescription;
-(char)validate:(id)arg1 error:(id*)arg2 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(id)initWithFunctionName:(id)arg1 validators:(id)arg2 ;
-(void)setArgumentValidators:(NSArray *)arg1 ;
-(NSArray *)argumentValidators;
@end
