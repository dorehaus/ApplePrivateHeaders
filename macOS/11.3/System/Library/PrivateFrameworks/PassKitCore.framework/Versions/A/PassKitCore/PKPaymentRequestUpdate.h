/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding> {

	long long _status;
	NSArray* _paymentSummaryItems;
	NSArray* _contentItems;

}

@property (nonatomic,copy) NSArray * contentItems;                     //@synthesize contentItems=_contentItems - In the implementation block
@property (assign,nonatomic) long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSArray * paymentSummaryItems;              //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSArray *)contentItems;
-(void)setContentItems:(NSArray *)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(NSArray *)paymentSummaryItems;
-(id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
@end

