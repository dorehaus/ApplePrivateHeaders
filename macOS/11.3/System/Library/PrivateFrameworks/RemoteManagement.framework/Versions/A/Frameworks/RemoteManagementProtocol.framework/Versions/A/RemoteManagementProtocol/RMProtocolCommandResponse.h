/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementProtocol.framework/Versions/A/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolCommandResponse_Command;

@interface RMProtocolCommandResponse : RMModelPayloadBase {

	NSString* _responseCommandToken;
	RMProtocolCommandResponse_Command* _responseCommand;

}

@property (nonatomic,copy) NSString * responseCommandToken;                                  //@synthesize responseCommandToken=_responseCommandToken - In the implementation block
@property (nonatomic,copy) RMProtocolCommandResponse_Command * responseCommand;              //@synthesize responseCommand=_responseCommand - In the implementation block
+(id)requestWithCommandToken:(id)arg1 command:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RMProtocolCommandResponse_Command *)responseCommand;
-(void)setResponseCommand:(RMProtocolCommandResponse_Command *)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseCommandToken:(NSString *)arg1 ;
-(NSString *)responseCommandToken;
@end

