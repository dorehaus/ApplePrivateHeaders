/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestMessageMessage_Reply : CEMPayloadBase {

	NSString* _replyEcho;

}

@property (nonatomic,copy) NSString * replyEcho;              //@synthesize replyEcho=_replyEcho - In the implementation block
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
+(id)allowedReplyKeys;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setReplyEcho:(NSString *)arg1 ;
-(NSString *)replyEcho;
@end

