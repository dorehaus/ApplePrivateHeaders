/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementProtocol.framework/Versions/A/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString;

@interface RMProtocolEnrollReferralResponse : RMModelPayloadBase {

	NSString* _responseReferralBaseURL;

}

@property (nonatomic,copy) NSString * responseReferralBaseURL;              //@synthesize responseReferralBaseURL=_responseReferralBaseURL - In the implementation block
+(id)requestWithReferralBaseURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseReferralBaseURL:(NSString *)arg1 ;
-(NSString *)responseReferralBaseURL;
@end

