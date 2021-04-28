/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKAMPCardInfoForMerchantRequest : PKPaymentWebServiceRequest {

	NSString* _merchantIdentifier;

}

@property (nonatomic,copy) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithMerchantIdentifier:(id)arg1 ;
@end

