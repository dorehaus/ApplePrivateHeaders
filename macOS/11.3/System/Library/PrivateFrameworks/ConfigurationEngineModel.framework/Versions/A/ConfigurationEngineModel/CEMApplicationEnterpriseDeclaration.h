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

@class CEMAssetBaseDescriptor, NSString, CEMApplicationEnterpriseDeclaration_AppPackage;

@interface CEMApplicationEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {

	CEMAssetBaseDescriptor* _payloadDescriptor;
	NSString* _payloadBundleIdentifier;
	CEMApplicationEnterpriseDeclaration_AppPackage* _payloadAppPackage;
	NSString* _payloadAppPackageHashMD5;
	NSString* _payloadDisplayImage;
	NSString* _payloadDisplayImageHashMD5;
	NSString* _payloadFullSizeImage;
	NSString* _payloadFullSizeImageHashMD5;

}

@property (nonatomic,copy) CEMAssetBaseDescriptor * payloadDescriptor;                                      //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) NSString * payloadBundleIdentifier;                                              //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (nonatomic,copy) CEMApplicationEnterpriseDeclaration_AppPackage * payloadAppPackage;              //@synthesize payloadAppPackage=_payloadAppPackage - In the implementation block
@property (nonatomic,copy) NSString * payloadAppPackageHashMD5;                                             //@synthesize payloadAppPackageHashMD5=_payloadAppPackageHashMD5 - In the implementation block
@property (nonatomic,copy) NSString * payloadDisplayImage;                                                  //@synthesize payloadDisplayImage=_payloadDisplayImage - In the implementation block
@property (nonatomic,copy) NSString * payloadDisplayImageHashMD5;                                           //@synthesize payloadDisplayImageHashMD5=_payloadDisplayImageHashMD5 - In the implementation block
@property (nonatomic,copy) NSString * payloadFullSizeImage;                                                 //@synthesize payloadFullSizeImage=_payloadFullSizeImage - In the implementation block
@property (nonatomic,copy) NSString * payloadFullSizeImageHashMD5;                                          //@synthesize payloadFullSizeImageHashMD5=_payloadFullSizeImageHashMD5 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5 withDisplayImage:(id)arg6 withDisplayImageHashMD5:(id)arg7 withFullSizeImage:(id)arg8 withFullSizeImageHashMD5:(id)arg9 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withAppPackage:(id)arg4 withAppPackageHashMD5:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDescriptor:(CEMAssetBaseDescriptor *)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(CEMAssetBaseDescriptor *)payloadDescriptor;
-(NSString *)payloadBundleIdentifier;
-(void)setPayloadAppPackage:(CEMApplicationEnterpriseDeclaration_AppPackage *)arg1 ;
-(void)setPayloadAppPackageHashMD5:(NSString *)arg1 ;
-(void)setPayloadDisplayImage:(NSString *)arg1 ;
-(void)setPayloadDisplayImageHashMD5:(NSString *)arg1 ;
-(void)setPayloadFullSizeImage:(NSString *)arg1 ;
-(void)setPayloadFullSizeImageHashMD5:(NSString *)arg1 ;
-(CEMApplicationEnterpriseDeclaration_AppPackage *)payloadAppPackage;
-(NSString *)payloadAppPackageHashMD5;
-(NSString *)payloadDisplayImage;
-(NSString *)payloadDisplayImageHashMD5;
-(NSString *)payloadFullSizeImage;
-(NSString *)payloadFullSizeImageHashMD5;
@end

