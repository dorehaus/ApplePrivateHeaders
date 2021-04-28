/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/Versions/A/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSPushHandlerDelegate <NSObject>
@optional
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;
-(void)handler:(id)arg1 receivedNoStorageResponseForTopic:(id)arg2 messageContext:(id)arg3;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 checkpointTrace:(id)arg5 messageContext:(id)arg6;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forUnknownTopic:(id)arg3 messageContext:(id)arg4;
-(void)handler:(id)arg1 isConnectedChanged:(char)arg2;

@end

