/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentContentItem, NSString;

@interface PKPaymentContentItemValidator : NSObject <PKPaymentValidating> {

	PKPaymentContentItem* _item;

}

@property (nonatomic,readonly) PKPaymentContentItem * item;              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithObject:(id)arg1 ;
+(Class)validatedClass;
-(PKPaymentContentItem *)item;
-(id)initWithContentItem:(id)arg1 ;
-(char)isValidWithError:(id*)arg1 ;
-(char)isValidWithAPIType:(unsigned long long)arg1 withError:(id*)arg2 ;
@end

