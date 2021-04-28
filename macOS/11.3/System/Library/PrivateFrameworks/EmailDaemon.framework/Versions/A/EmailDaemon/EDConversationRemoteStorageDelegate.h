/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDConversationRemoteStorageDelegate <NSObject>
@optional
-(void)conversationRemoteStorageDidInitialize:(id)arg1;
-(void)conversationRemoteStorageWillResetData:(id)arg1;
-(void)conversationRemoteStorageDidResetData:(id)arg1;

@required
-(void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;

@end

