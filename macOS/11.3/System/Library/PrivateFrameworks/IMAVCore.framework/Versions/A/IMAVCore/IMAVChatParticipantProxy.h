/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/Versions/A/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, IMAVChatProxy, NSString, IMAVChat;

@interface IMAVChatParticipantProxy : NSObject {

	NSDictionary* _info;
	IMAVChatProxy* _chat;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) char _inviteDelivered; 
@property (nonatomic,readonly) IMAVChat * avChat; 
-(NSString *)name;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 chat:(id)arg2 ;
-(IMAVChat *)avChat;
-(char)_inviteDelivered;
-(char)isLocalParticipant;
@end

