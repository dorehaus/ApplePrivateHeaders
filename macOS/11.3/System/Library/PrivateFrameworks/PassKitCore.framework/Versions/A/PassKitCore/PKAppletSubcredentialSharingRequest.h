/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKPaymentPass, PKAppletSubcredential, NSString, PKAppletSubcredentialEntitlement;

@interface PKAppletSubcredentialSharingRequest : NSObject <NSSecureCoding, NSCopying> {

	char _forLocalDevice;
	PKPaymentPass* _pass;
	PKAppletSubcredential* _credential;
	NSString* _passIdentifier;
	NSString* _credentialIdentifier;
	PKAppletSubcredentialEntitlement* _entitlement;
	NSString* _recipientIdentifier;
	NSString* _recipientName;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKAppletSubcredential * credential;                          //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) NSString * passIdentifier;                            //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * credentialIdentifier;                      //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientName;                                      //@synthesize recipientName=_recipientName - In the implementation block
@property (assign,getter=isForLocalDevice,nonatomic) char forLocalDevice;                 //@synthesize forLocalDevice=_forLocalDevice - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKAppletSubcredential *)credential;
-(NSString *)passIdentifier;
-(void)setCredential:(PKAppletSubcredential *)arg1 ;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(NSString *)recipientName;
-(id)initWithPaymentPass:(id)arg1 ;
-(PKPaymentPass *)pass;
-(NSString *)credentialIdentifier;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSString *)recipientIdentifier;
-(char)isForLocalDevice;
-(id)credentialWithIdentifier:(id)arg1 ;
-(id)credentialForPass:(id)arg1 ;
-(id)invitations;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(void)setForLocalDevice:(char)arg1 ;
@end

