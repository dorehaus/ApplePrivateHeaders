/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementModel.framework/Versions/A/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSNumber, NSString;

@interface RMModelAccountExchangeDeclaration_OAuth : RMModelPayloadBase {

	NSNumber* _payloadEnabled;
	NSString* _payloadSignInURL;
	NSString* _payloadTokenRequestURL;

}

@property (nonatomic,copy) NSNumber * payloadEnabled;                      //@synthesize payloadEnabled=_payloadEnabled - In the implementation block
@property (nonatomic,copy) NSString * payloadSignInURL;                    //@synthesize payloadSignInURL=_payloadSignInURL - In the implementation block
@property (nonatomic,copy) NSString * payloadTokenRequestURL;              //@synthesize payloadTokenRequestURL=_payloadTokenRequestURL - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithEnabled:(id)arg1 signInURL:(id)arg2 tokenRequestURL:(id)arg3 ;
+(id)buildRequiredOnlyWithEnabled:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadEnabled:(NSNumber *)arg1 ;
-(NSNumber *)payloadEnabled;
-(id)serializeWithType:(short)arg1 ;
-(void)setPayloadSignInURL:(NSString *)arg1 ;
-(void)setPayloadTokenRequestURL:(NSString *)arg1 ;
-(NSString *)payloadSignInURL;
-(NSString *)payloadTokenRequestURL;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
@end

