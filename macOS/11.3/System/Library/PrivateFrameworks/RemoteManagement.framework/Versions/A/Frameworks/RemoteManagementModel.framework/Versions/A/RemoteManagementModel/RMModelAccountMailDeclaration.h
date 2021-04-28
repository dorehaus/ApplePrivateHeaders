/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementModel.framework/Versions/A/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString, RMModelAccountMailDeclaration_IncomingServer, RMModelAccountMailDeclaration_OutgoingServer;

@interface RMModelAccountMailDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadVisibleName;
	NSString* _payloadUserIdentityAssetReference;
	RMModelAccountMailDeclaration_IncomingServer* _payloadIncomingServer;
	RMModelAccountMailDeclaration_OutgoingServer* _payloadOutgoingServer;

}

@property (nonatomic,copy) NSString * payloadVisibleName;                                                     //@synthesize payloadVisibleName=_payloadVisibleName - In the implementation block
@property (nonatomic,copy) NSString * payloadUserIdentityAssetReference;                                      //@synthesize payloadUserIdentityAssetReference=_payloadUserIdentityAssetReference - In the implementation block
@property (nonatomic,copy) RMModelAccountMailDeclaration_IncomingServer * payloadIncomingServer;              //@synthesize payloadIncomingServer=_payloadIncomingServer - In the implementation block
@property (nonatomic,copy) RMModelAccountMailDeclaration_OutgoingServer * payloadOutgoingServer;              //@synthesize payloadOutgoingServer=_payloadOutgoingServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 userIdentityAssetReference:(id)arg3 incomingServer:(id)arg4 outgoingServer:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 incomingServer:(id)arg2 outgoingServer:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(void)setPayloadVisibleName:(NSString *)arg1 ;
-(NSString *)payloadVisibleName;
-(char)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(NSString *)payloadUserIdentityAssetReference;
-(void)setPayloadUserIdentityAssetReference:(NSString *)arg1 ;
-(RMModelAccountMailDeclaration_IncomingServer *)payloadIncomingServer;
-(RMModelAccountMailDeclaration_OutgoingServer *)payloadOutgoingServer;
-(void)setPayloadIncomingServer:(RMModelAccountMailDeclaration_IncomingServer *)arg1 ;
-(void)setPayloadOutgoingServer:(RMModelAccountMailDeclaration_OutgoingServer *)arg1 ;
@end

