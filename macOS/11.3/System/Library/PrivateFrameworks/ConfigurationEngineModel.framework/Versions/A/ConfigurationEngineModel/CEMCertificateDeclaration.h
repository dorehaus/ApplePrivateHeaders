/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMAssetBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, NSString;

@interface CEMCertificateDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {

	CEMAssetBaseDescriptor* _payloadDescriptor;
	CEMAssetBaseReference* _payloadReference;

}

@property (nonatomic,copy) CEMAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) CEMAssetBaseReference * payloadReference;                //@synthesize payloadReference=_payloadReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 ;
+(id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDescriptor:(CEMAssetBaseDescriptor *)arg1 ;
-(CEMAssetBaseDescriptor *)payloadDescriptor;
-(void)setPayloadReference:(CEMAssetBaseReference *)arg1 ;
-(CEMAssetBaseReference *)payloadReference;
@end

