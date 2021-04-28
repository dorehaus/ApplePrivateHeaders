/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKDisbursementVoucherResponse : PKPeerPaymentWebServiceResponse {

	NSString* _voucher;
	NSURL* _redemptionURL;

}

@property (nonatomic,copy,readonly) NSString * voucher;                 //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redemptionURL;              //@synthesize redemptionURL=_redemptionURL - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)voucher;
-(NSURL *)redemptionURL;
@end

