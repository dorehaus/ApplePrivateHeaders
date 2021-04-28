/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementProtocol.framework/Versions/A/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolOrganizationDetails;

@interface RMProtocolOrganizationDetailsResponse : RMModelPayloadBase {

	NSString* _responseOrganizationDetailsToken;
	RMProtocolOrganizationDetails* _responseOrganizationDetails;

}

@property (nonatomic,copy) NSString * responseOrganizationDetailsToken;                              //@synthesize responseOrganizationDetailsToken=_responseOrganizationDetailsToken - In the implementation block
@property (nonatomic,copy) RMProtocolOrganizationDetails * responseOrganizationDetails;              //@synthesize responseOrganizationDetails=_responseOrganizationDetails - In the implementation block
+(id)requestWithOrganizationDetailsToken:(id)arg1 organizationDetails:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseOrganizationDetailsToken:(NSString *)arg1 ;
-(void)setResponseOrganizationDetails:(RMProtocolOrganizationDetails *)arg1 ;
-(NSString *)responseOrganizationDetailsToken;
-(RMProtocolOrganizationDetails *)responseOrganizationDetails;
@end

