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

@class NSString, NSNumber, CEMAccountCardDAVDeclaration_CommunicationServiceRules;

@interface CEMAccountCardDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCardDAVAccountDescription;
	NSString* _payloadCardDAVHostName;
	NSString* _payloadCardDAVPrincipalURL;
	NSNumber* _payloadCardDAVUseSSL;
	NSNumber* _payloadCardDAVPort;
	CEMAccountCardDAVDeclaration_CommunicationServiceRules* _payloadCommunicationServiceRules;
	NSString* _payloadCardDAVCredentials;

}

@property (nonatomic,copy) NSString * payloadCardDAVAccountDescription;                                                            //@synthesize payloadCardDAVAccountDescription=_payloadCardDAVAccountDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadCardDAVHostName;                                                                      //@synthesize payloadCardDAVHostName=_payloadCardDAVHostName - In the implementation block
@property (nonatomic,copy) NSString * payloadCardDAVPrincipalURL;                                                                  //@synthesize payloadCardDAVPrincipalURL=_payloadCardDAVPrincipalURL - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCardDAVUseSSL;                                                                        //@synthesize payloadCardDAVUseSSL=_payloadCardDAVUseSSL - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCardDAVPort;                                                                          //@synthesize payloadCardDAVPort=_payloadCardDAVPort - In the implementation block
@property (nonatomic,copy) CEMAccountCardDAVDeclaration_CommunicationServiceRules * payloadCommunicationServiceRules;              //@synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules - In the implementation block
@property (nonatomic,copy) NSString * payloadCardDAVCredentials;                                                                   //@synthesize payloadCardDAVCredentials=_payloadCardDAVCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withCardDAVAccountDescription:(id)arg2 withCardDAVHostName:(id)arg3 withCardDAVPrincipalURL:(id)arg4 withCardDAVUseSSL:(id)arg5 withCardDAVPort:(id)arg6 withCommunicationServiceRules:(id)arg7 withCardDAVCredentials:(id)arg8 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withCardDAVHostName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadCardDAVCredentials;
-(void)setPayloadCardDAVAccountDescription:(NSString *)arg1 ;
-(void)setPayloadCardDAVHostName:(NSString *)arg1 ;
-(void)setPayloadCardDAVPrincipalURL:(NSString *)arg1 ;
-(void)setPayloadCardDAVUseSSL:(NSNumber *)arg1 ;
-(void)setPayloadCardDAVPort:(NSNumber *)arg1 ;
-(void)setPayloadCommunicationServiceRules:(CEMAccountCardDAVDeclaration_CommunicationServiceRules *)arg1 ;
-(void)setPayloadCardDAVCredentials:(NSString *)arg1 ;
-(NSString *)payloadCardDAVAccountDescription;
-(NSString *)payloadCardDAVHostName;
-(NSString *)payloadCardDAVPrincipalURL;
-(NSNumber *)payloadCardDAVUseSSL;
-(NSNumber *)payloadCardDAVPort;
-(CEMAccountCardDAVDeclaration_CommunicationServiceRules *)payloadCommunicationServiceRules;
@end

