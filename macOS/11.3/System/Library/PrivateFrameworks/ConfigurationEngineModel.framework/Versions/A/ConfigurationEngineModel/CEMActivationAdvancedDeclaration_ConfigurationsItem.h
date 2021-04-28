/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMAnyPayload;

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase {

	NSString* _payloadIdentifier;
	CEMAnyPayload* _payloadOverrides;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                  //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadOverrides;              //@synthesize payloadOverrides=_payloadOverrides - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withOverrides:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(void)setPayloadOverrides:(CEMAnyPayload *)arg1 ;
-(NSString *)payloadIdentifier;
-(CEMAnyPayload *)payloadOverrides;
@end
