/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray, NSNumber, NSData, CEMCredentialSCEPDeclaration_SCEPSubjectAltName;

@interface CEMCredentialSCEPDeclaration_SCEP : CEMPayloadBase {

	NSString* _payloadURL;
	NSString* _payloadName;
	NSArray* _payloadSubject;
	NSNumber* _payloadKeysize;
	NSString* _payloadKeyType;
	NSNumber* _payloadKeyUsage;
	NSData* _payloadCAFingerprint;
	NSNumber* _payloadRetries;
	NSNumber* _payloadRetryDelay;
	CEMCredentialSCEPDeclaration_SCEPSubjectAltName* _payloadSubjectAltName;
	NSNumber* _payloadKeyIsExtractable;
	NSString* _payloadChallengeCredential;
	NSNumber* _payloadAllowAllAppsAccess;

}

@property (nonatomic,copy) NSString * payloadURL;                                                                //@synthesize payloadURL=_payloadURL - In the implementation block
@property (nonatomic,copy) NSString * payloadName;                                                               //@synthesize payloadName=_payloadName - In the implementation block
@property (nonatomic,copy) NSArray * payloadSubject;                                                             //@synthesize payloadSubject=_payloadSubject - In the implementation block
@property (nonatomic,copy) NSNumber * payloadKeysize;                                                            //@synthesize payloadKeysize=_payloadKeysize - In the implementation block
@property (nonatomic,copy) NSString * payloadKeyType;                                                            //@synthesize payloadKeyType=_payloadKeyType - In the implementation block
@property (nonatomic,copy) NSNumber * payloadKeyUsage;                                                           //@synthesize payloadKeyUsage=_payloadKeyUsage - In the implementation block
@property (nonatomic,copy) NSData * payloadCAFingerprint;                                                        //@synthesize payloadCAFingerprint=_payloadCAFingerprint - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRetries;                                                            //@synthesize payloadRetries=_payloadRetries - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRetryDelay;                                                         //@synthesize payloadRetryDelay=_payloadRetryDelay - In the implementation block
@property (nonatomic,copy) CEMCredentialSCEPDeclaration_SCEPSubjectAltName * payloadSubjectAltName;              //@synthesize payloadSubjectAltName=_payloadSubjectAltName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadKeyIsExtractable;                                                   //@synthesize payloadKeyIsExtractable=_payloadKeyIsExtractable - In the implementation block
@property (nonatomic,copy) NSString * payloadChallengeCredential;                                                //@synthesize payloadChallengeCredential=_payloadChallengeCredential - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAllAppsAccess;                                                 //@synthesize payloadAllowAllAppsAccess=_payloadAllowAllAppsAccess - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithURL:(id)arg1 withName:(id)arg2 withSubject:(id)arg3 withKeysize:(id)arg4 withKeyType:(id)arg5 withKeyUsage:(id)arg6 withCAFingerprint:(id)arg7 withRetries:(id)arg8 withRetryDelay:(id)arg9 withSubjectAltName:(id)arg10 withKeyIsExtractable:(id)arg11 withChallengeCredential:(id)arg12 withAllowAllAppsAccess:(id)arg13 ;
+(id)buildRequiredOnlyWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadURL:(NSString *)arg1 ;
-(NSString *)payloadURL;
-(void)setPayloadName:(NSString *)arg1 ;
-(void)setPayloadSubject:(NSArray *)arg1 ;
-(void)setPayloadKeysize:(NSNumber *)arg1 ;
-(void)setPayloadKeyType:(NSString *)arg1 ;
-(void)setPayloadKeyUsage:(NSNumber *)arg1 ;
-(void)setPayloadCAFingerprint:(NSData *)arg1 ;
-(void)setPayloadRetries:(NSNumber *)arg1 ;
-(void)setPayloadRetryDelay:(NSNumber *)arg1 ;
-(void)setPayloadSubjectAltName:(CEMCredentialSCEPDeclaration_SCEPSubjectAltName *)arg1 ;
-(void)setPayloadKeyIsExtractable:(NSNumber *)arg1 ;
-(void)setPayloadChallengeCredential:(NSString *)arg1 ;
-(void)setPayloadAllowAllAppsAccess:(NSNumber *)arg1 ;
-(NSString *)payloadName;
-(NSArray *)payloadSubject;
-(NSNumber *)payloadKeysize;
-(NSString *)payloadKeyType;
-(NSNumber *)payloadKeyUsage;
-(NSData *)payloadCAFingerprint;
-(NSNumber *)payloadRetries;
-(NSNumber *)payloadRetryDelay;
-(CEMCredentialSCEPDeclaration_SCEPSubjectAltName *)payloadSubjectAltName;
-(NSNumber *)payloadKeyIsExtractable;
-(NSString *)payloadChallengeCredential;
-(NSNumber *)payloadAllowAllAppsAccess;
@end

