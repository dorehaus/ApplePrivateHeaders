/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountFeatureDescriptor.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding> {

	NSDecimalNumber* _feePercentage;
	NSDecimalNumber* _minimumFee;
	NSDecimalNumber* _maximumFee;

}

@property (nonatomic,copy) NSDecimalNumber * feePercentage;              //@synthesize feePercentage=_feePercentage - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumFee;                 //@synthesize minimumFee=_minimumFee - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumFee;                 //@synthesize maximumFee=_maximumFee - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDecimalNumber *)feePercentage;
-(NSDecimalNumber *)minimumFee;
-(NSDecimalNumber *)maximumFee;
-(char)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1 ;
-(void)setFeePercentage:(NSDecimalNumber *)arg1 ;
-(void)setMinimumFee:(NSDecimalNumber *)arg1 ;
-(void)setMaximumFee:(NSDecimalNumber *)arg1 ;
@end

