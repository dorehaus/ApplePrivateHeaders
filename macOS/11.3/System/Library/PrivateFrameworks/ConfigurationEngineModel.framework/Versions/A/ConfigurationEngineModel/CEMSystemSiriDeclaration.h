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

@class NSNumber, NSString;

@interface CEMSystemSiriDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowAssistant;
	NSNumber* _payloadAllowDictation;
	NSNumber* _payloadAllowAssistantUserGeneratedContent;
	NSNumber* _payloadForceAssistantProfanityFilter;

}

@property (nonatomic,copy) NSNumber * payloadAllowAssistant;                                  //@synthesize payloadAllowAssistant=_payloadAllowAssistant - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowDictation;                                  //@synthesize payloadAllowDictation=_payloadAllowDictation - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAssistantUserGeneratedContent;              //@synthesize payloadAllowAssistantUserGeneratedContent=_payloadAllowAssistantUserGeneratedContent - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceAssistantProfanityFilter;                   //@synthesize payloadForceAssistantProfanityFilter=_payloadForceAssistantProfanityFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowAssistant:(id)arg2 withAllowDictation:(id)arg3 withAllowAssistantUserGeneratedContent:(id)arg4 withForceAssistantProfanityFilter:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)multipleAllowed;
-(char)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowAssistant:(NSNumber *)arg1 ;
-(void)setPayloadAllowDictation:(NSNumber *)arg1 ;
-(void)setPayloadAllowAssistantUserGeneratedContent:(NSNumber *)arg1 ;
-(void)setPayloadForceAssistantProfanityFilter:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowAssistant;
-(NSNumber *)payloadAllowDictation;
-(NSNumber *)payloadAllowAssistantUserGeneratedContent;
-(NSNumber *)payloadForceAssistantProfanityFilter;
@end

