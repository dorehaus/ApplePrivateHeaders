/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadEnable;
	NSNumber* _payloadDefer;
	NSNumber* _payloadUserEntersMissingInfo;
	NSNumber* _payloadUseRecoveryKey;
	NSNumber* _payloadShowRecoveryKey;
	NSString* _payloadOutputPath;
	NSString* _payloadUsername;
	NSString* _payloadPassword;
	NSNumber* _payloadUseKeychain;
	NSNumber* _payloadDeferForceAtUserLoginMaxBypassAttempts;
	NSNumber* _payloadDeferDontAskAtUserLogout;
	NSString* _payloadCertificateIdentifier;

}

@property (nonatomic,copy) NSString * payloadEnable;                                              //@synthesize payloadEnable=_payloadEnable - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDefer;                                               //@synthesize payloadDefer=_payloadDefer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadUserEntersMissingInfo;                               //@synthesize payloadUserEntersMissingInfo=_payloadUserEntersMissingInfo - In the implementation block
@property (nonatomic,copy) NSNumber * payloadUseRecoveryKey;                                      //@synthesize payloadUseRecoveryKey=_payloadUseRecoveryKey - In the implementation block
@property (nonatomic,copy) NSNumber * payloadShowRecoveryKey;                                     //@synthesize payloadShowRecoveryKey=_payloadShowRecoveryKey - In the implementation block
@property (nonatomic,copy) NSString * payloadOutputPath;                                          //@synthesize payloadOutputPath=_payloadOutputPath - In the implementation block
@property (nonatomic,copy) NSString * payloadUsername;                                            //@synthesize payloadUsername=_payloadUsername - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                                            //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadUseKeychain;                                         //@synthesize payloadUseKeychain=_payloadUseKeychain - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDeferForceAtUserLoginMaxBypassAttempts;              //@synthesize payloadDeferForceAtUserLoginMaxBypassAttempts=_payloadDeferForceAtUserLoginMaxBypassAttempts - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDeferDontAskAtUserLogout;                            //@synthesize payloadDeferDontAskAtUserLogout=_payloadDeferDontAskAtUserLogout - In the implementation block
@property (nonatomic,copy) NSString * payloadCertificateIdentifier;                               //@synthesize payloadCertificateIdentifier=_payloadCertificateIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnable:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withDefer:(id)arg3 withUserEntersMissingInfo:(id)arg4 withUseRecoveryKey:(id)arg5 withShowRecoveryKey:(id)arg6 withOutputPath:(id)arg7 withUsername:(id)arg8 withPassword:(id)arg9 withUseKeychain:(id)arg10 withDeferForceAtUserLoginMaxBypassAttempts:(id)arg11 withDeferDontAskAtUserLogout:(id)arg12 withCertificateIdentifier:(id)arg13 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(void)setPayloadEnable:(NSString *)arg1 ;
-(NSString *)payloadEnable;
-(void)setPayloadUsername:(NSString *)arg1 ;
-(NSString *)payloadUsername;
-(NSString *)payloadCertificateIdentifier;
-(void)setPayloadCertificateIdentifier:(NSString *)arg1 ;
-(void)setPayloadDefer:(NSNumber *)arg1 ;
-(void)setPayloadUserEntersMissingInfo:(NSNumber *)arg1 ;
-(void)setPayloadUseRecoveryKey:(NSNumber *)arg1 ;
-(void)setPayloadShowRecoveryKey:(NSNumber *)arg1 ;
-(void)setPayloadOutputPath:(NSString *)arg1 ;
-(void)setPayloadUseKeychain:(NSNumber *)arg1 ;
-(void)setPayloadDeferForceAtUserLoginMaxBypassAttempts:(NSNumber *)arg1 ;
-(void)setPayloadDeferDontAskAtUserLogout:(NSNumber *)arg1 ;
-(NSNumber *)payloadDefer;
-(NSNumber *)payloadUserEntersMissingInfo;
-(NSNumber *)payloadUseRecoveryKey;
-(NSNumber *)payloadShowRecoveryKey;
-(NSString *)payloadOutputPath;
-(NSNumber *)payloadUseKeychain;
-(NSNumber *)payloadDeferForceAtUserLoginMaxBypassAttempts;
-(NSNumber *)payloadDeferDontAskAtUserLogout;
@end

