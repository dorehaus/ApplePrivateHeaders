/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase {

	CEMSecurityInformationCommand_StatusSecurityInfo* _statusSecurityInfo;

}

@property (nonatomic,copy) CEMSecurityInformationCommand_StatusSecurityInfo * statusSecurityInfo;              //@synthesize statusSecurityInfo=_statusSecurityInfo - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithSecurityInfo:(id)arg1 ;
+(id)buildRequiredOnlyWithSecurityInfo:(id)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusSecurityInfo:(CEMSecurityInformationCommand_StatusSecurityInfo *)arg1 ;
-(CEMSecurityInformationCommand_StatusSecurityInfo *)statusSecurityInfo;
@end

