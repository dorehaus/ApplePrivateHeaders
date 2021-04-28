/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementModel.framework/Versions/A/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSData;

@interface RMModelCertificateIdentityCredentialsDeclaration : RMModelPayloadBase {

	NSData* _payloadCertificate;

}

@property (nonatomic,copy) NSData * payloadCertificate;              //@synthesize payloadCertificate=_payloadCertificate - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithCertificate:(id)arg1 ;
+(id)buildRequiredOnlyWithCertificate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadCertificate:(NSData *)arg1 ;
-(NSData *)payloadCertificate;
-(id)serializeWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end
