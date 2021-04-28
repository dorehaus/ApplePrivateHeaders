/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentMerchantSession, NSString, NSData;

@interface PKPaymentMerchantData : NSObject {

	PKPaymentMerchantSession* _merchantSession;
	NSString* _merchantIdentifier;
	NSData* _applicationData;

}

@property (nonatomic,readonly) NSString * merchantIdentifier;              //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * applicationData;                   //@synthesize applicationData=_applicationData - In the implementation block
-(id)init;
-(NSData *)applicationData;
-(NSString *)merchantIdentifier;
-(id)initWithPaymentRequest:(id)arg1 ;
-(id)initWithMerchantIdentifier:(id)arg1 applicationData:(id)arg2 ;
-(id)encode;
@end

