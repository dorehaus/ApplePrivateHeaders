/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTIDSMessage.h>

@class PDSProtoBatchRegisterReq, PDSProtoBatchRegisterResp;

@interface PDSRegisterMessage : FTIDSMessage {

	PDSProtoBatchRegisterReq* _protoRequest;
	PDSProtoBatchRegisterResp* _protoResponse;
	unsigned long long _regReason;

}

@property (nonatomic,retain) PDSProtoBatchRegisterReq * protoRequest;                //@synthesize protoRequest=_protoRequest - In the implementation block
@property (nonatomic,retain) PDSProtoBatchRegisterResp * protoResponse;              //@synthesize protoResponse=_protoResponse - In the implementation block
@property (assign,nonatomic) unsigned long long regReason;                           //@synthesize regReason=_regReason - In the implementation block
-(char)requiresPushTokenKeys;
-(double)anisetteHeadersTimeout;
-(id)messageBodyDataOverride;
-(id)overrideContentType;
-(id)parsedIDSMessageResult;
-(char)wantsClientInfo;
-(char)wantsUDID;
-(char)hasRequiredKeys:(id*)arg1 ;
-(id)bagKey;
-(id)additionalMessageHeaders;
-(void)handleResponseBody:(id)arg1 ;
-(char)wantsIDSProtocolVersion;
-(void)setProtoRequest:(PDSProtoBatchRegisterReq *)arg1 ;
-(unsigned long long)regReason;
-(void)setRegReason:(unsigned long long)arg1 ;
-(PDSProtoBatchRegisterResp *)protoResponse;
-(PDSProtoBatchRegisterReq *)protoRequest;
-(void)setProtoResponse:(PDSProtoBatchRegisterResp *)arg1 ;
@end

