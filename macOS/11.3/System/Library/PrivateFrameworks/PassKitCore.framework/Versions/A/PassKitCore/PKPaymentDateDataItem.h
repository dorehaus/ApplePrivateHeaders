/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSDate, NSTimeZone;

@interface PKPaymentDateDataItem : PKPaymentDataItem {

	NSDate* _paymentDate;
	NSTimeZone* _paymentTimeZone;
	long long _paymentFrequency;

}

@property (nonatomic,retain) NSDate * paymentDate;                      //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * paymentTimeZone;              //@synthesize paymentTimeZone=_paymentTimeZone - In the implementation block
@property (assign,nonatomic) long long paymentFrequency;                //@synthesize paymentFrequency=_paymentFrequency - In the implementation block
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(void)setPaymentFrequency:(long long)arg1 ;
-(void)setPaymentTimeZone:(NSTimeZone *)arg1 ;
-(long long)paymentFrequency;
-(NSTimeZone *)paymentTimeZone;
-(char)isValidWithError:(id*)arg1 ;
@end

