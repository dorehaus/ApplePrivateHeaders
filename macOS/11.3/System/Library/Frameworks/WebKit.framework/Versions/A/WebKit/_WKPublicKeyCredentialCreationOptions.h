/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _WKPublicKeyCredentialRelyingPartyEntity, _WKPublicKeyCredentialUserEntity, NSArray, NSNumber, _WKAuthenticatorSelectionCriteria, _WKAuthenticationExtensionsClientInputs;

@interface _WKPublicKeyCredentialCreationOptions : NSObject {

	_WKPublicKeyCredentialRelyingPartyEntity* _relyingParty;
	_WKPublicKeyCredentialUserEntity* _user;
	NSArray* _publicKeyCredentialParamaters;
	NSNumber* _timeout;
	NSArray* _excludeCredentials;
	_WKAuthenticatorSelectionCriteria* _authenticatorSelection;
	long long _attestation;
	_WKAuthenticationExtensionsClientInputs* _extensions;

}

@property (nonatomic,retain) _WKPublicKeyCredentialRelyingPartyEntity * relyingParty;                 //@synthesize relyingParty=_relyingParty - In the implementation block
@property (nonatomic,retain) _WKPublicKeyCredentialUserEntity * user;                                 //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSArray * publicKeyCredentialParamaters;                                   //@synthesize publicKeyCredentialParamaters=_publicKeyCredentialParamaters - In the implementation block
@property (nonatomic,copy) NSNumber * timeout;                                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSArray * excludeCredentials;                                              //@synthesize excludeCredentials=_excludeCredentials - In the implementation block
@property (nonatomic,retain) _WKAuthenticatorSelectionCriteria * authenticatorSelection;              //@synthesize authenticatorSelection=_authenticatorSelection - In the implementation block
@property (assign,nonatomic) long long attestation;                                                   //@synthesize attestation=_attestation - In the implementation block
@property (nonatomic,retain) _WKAuthenticationExtensionsClientInputs * extensions;                    //@synthesize extensions=_extensions - In the implementation block
-(_WKPublicKeyCredentialUserEntity *)user;
-(NSNumber *)timeout;
-(void)setUser:(_WKPublicKeyCredentialUserEntity *)arg1 ;
-(void)setTimeout:(NSNumber *)arg1 ;
-(_WKAuthenticationExtensionsClientInputs *)extensions;
-(void)setExtensions:(_WKAuthenticationExtensionsClientInputs *)arg1 ;
-(long long)attestation;
-(void)setAttestation:(long long)arg1 ;
-(void)setRelyingParty:(_WKPublicKeyCredentialRelyingPartyEntity *)arg1 ;
-(void)setPublicKeyCredentialParamaters:(NSArray *)arg1 ;
-(id)initWithRelyingParty:(id)arg1 user:(id)arg2 publicKeyCredentialParamaters:(id)arg3 ;
-(_WKPublicKeyCredentialRelyingPartyEntity *)relyingParty;
-(NSArray *)publicKeyCredentialParamaters;
-(NSArray *)excludeCredentials;
-(void)setExcludeCredentials:(NSArray *)arg1 ;
-(_WKAuthenticatorSelectionCriteria *)authenticatorSelection;
-(void)setAuthenticatorSelection:(_WKAuthenticatorSelectionCriteria *)arg1 ;
@end

