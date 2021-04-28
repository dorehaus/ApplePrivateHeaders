/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentSetupConfiguration, NSArray;

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding> {

	PKPaymentSetupConfiguration* _configuration;
	NSArray* _paymentSetupFeatures;

}

@property (nonatomic,retain) PKPaymentSetupConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSArray * paymentSetupFeatures;                           //@synthesize paymentSetupFeatures=_paymentSetupFeatures - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPaymentSetupConfiguration *)configuration;
-(void)setConfiguration:(PKPaymentSetupConfiguration *)arg1 ;
-(NSArray *)paymentSetupFeatures;
-(void)setPaymentSetupFeatures:(NSArray *)arg1 ;
@end

