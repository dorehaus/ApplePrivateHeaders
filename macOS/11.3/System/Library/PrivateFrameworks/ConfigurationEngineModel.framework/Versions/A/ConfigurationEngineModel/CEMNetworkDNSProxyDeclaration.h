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

@class NSString, CEMAnyPayload;

@interface CEMNetworkDNSProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadAppBundleIdentifier;
	NSString* _payloadProviderBundleIdentifier;
	CEMAnyPayload* _payloadProviderConfiguration;

}

@property (nonatomic,copy) NSString * payloadAppBundleIdentifier;                     //@synthesize payloadAppBundleIdentifier=_payloadAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadProviderBundleIdentifier;                //@synthesize payloadProviderBundleIdentifier=_payloadProviderBundleIdentifier - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadProviderConfiguration;              //@synthesize payloadProviderConfiguration=_payloadProviderConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2 withProviderBundleIdentifier:(id)arg3 withProviderConfiguration:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSString *)payloadAppBundleIdentifier;
-(void)setPayloadAppBundleIdentifier:(NSString *)arg1 ;
-(void)setPayloadProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setPayloadProviderConfiguration:(CEMAnyPayload *)arg1 ;
-(NSString *)payloadProviderBundleIdentifier;
-(CEMAnyPayload *)payloadProviderConfiguration;
@end

