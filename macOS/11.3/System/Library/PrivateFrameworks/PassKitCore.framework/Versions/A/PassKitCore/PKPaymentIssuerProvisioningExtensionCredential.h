/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry, NSArray;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential {

	NSExtension* _extension;
	PKIssuerProvisioningExtensionPaymentPassEntry* _entry;

}

@property (nonatomic,readonly) NSExtension * extension;                                            //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) PKIssuerProvisioningExtensionPaymentPassEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
-(NSExtension *)extension;
-(PKIssuerProvisioningExtensionPaymentPassEntry *)entry;
-(NSArray *)metadata;
-(id)initWithExtension:(id)arg1 entry:(id)arg2 ;
@end

