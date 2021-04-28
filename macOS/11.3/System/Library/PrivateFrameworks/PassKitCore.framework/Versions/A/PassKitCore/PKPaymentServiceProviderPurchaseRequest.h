/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest {

	NSString* _purchaseIdentifier;

}

@property (nonatomic,copy) NSString * purchaseIdentifier;              //@synthesize purchaseIdentifier=_purchaseIdentifier - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPurchaseIdentifier:(id)arg1 ;
-(NSString *)purchaseIdentifier;
-(void)setPurchaseIdentifier:(NSString *)arg1 ;
@end

