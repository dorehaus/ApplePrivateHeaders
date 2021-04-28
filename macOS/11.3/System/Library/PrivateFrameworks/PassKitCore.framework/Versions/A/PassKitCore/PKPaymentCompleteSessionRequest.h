/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentRewrapRequestBase.h>

@class PKPaymentMerchantSession;

@interface PKPaymentCompleteSessionRequest : PKPaymentRewrapRequestBase {

	PKPaymentMerchantSession* _merchantSession;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
-(id)bodyDictionary;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(PKPaymentMerchantSession *)merchantSession;
-(id)endpointName;
@end
