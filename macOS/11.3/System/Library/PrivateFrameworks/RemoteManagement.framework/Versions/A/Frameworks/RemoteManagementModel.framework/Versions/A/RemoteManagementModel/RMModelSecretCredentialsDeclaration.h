/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementModel.framework/Versions/A/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMModelSecretCredentialsDeclaration : RMModelPayloadBase {

	NSString* _payloadSecret;

}

@property (nonatomic,copy) NSString * payloadSecret;              //@synthesize payloadSecret=_payloadSecret - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithSecret:(id)arg1 ;
+(id)buildRequiredOnlyWithSecret:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadSecret:(NSString *)arg1 ;
-(NSString *)payloadSecret;
-(id)serializeWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end
