/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKPaymentPushProvisioningSharingStatusRequest : PKPaymentWebServiceRequest {

	NSString* _sharingIdentifier;
	NSString* _cardConfigurationIdentifer;
	PKEncryptedPushProvisioningTarget* _encryptedProvisioningTarget;

}

@property (nonatomic,copy) NSString * sharingIdentifier;                                                   //@synthesize sharingIdentifier=_sharingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cardConfigurationIdentifer;                                          //@synthesize cardConfigurationIdentifer=_cardConfigurationIdentifer - In the implementation block
@property (nonatomic,retain) PKEncryptedPushProvisioningTarget * encryptedProvisioningTarget;              //@synthesize encryptedProvisioningTarget=_encryptedProvisioningTarget - In the implementation block
-(id)requestBody;
-(PKEncryptedPushProvisioningTarget *)encryptedProvisioningTarget;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithProvisioningSharingIdentifier:(id)arg1 cardCardConfigurationIdentifer:(id)arg2 ;
-(id)initWithEncryptedProvisioningTarget:(id)arg1 ;
-(NSString *)sharingIdentifier;
-(void)setSharingIdentifier:(NSString *)arg1 ;
-(NSString *)cardConfigurationIdentifer;
-(void)setCardConfigurationIdentifer:(NSString *)arg1 ;
-(void)setEncryptedProvisioningTarget:(PKEncryptedPushProvisioningTarget *)arg1 ;
@end

