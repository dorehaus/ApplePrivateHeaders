/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCMessageDataSource <MCActivityTarget,NSCopying>
@property (readonly) char isReadOnly; 
@property (nonatomic,readonly) char canCompact; 
@property (nonatomic,readonly) id<MCMailAccount> account; 
@property (nonatomic,readonly) id<MCMailbox> mailbox; 
@required
-(char)isReadOnly;
-(id<MCMailAccount>)account;
-(id<MCMailbox>)mailbox;
-(void)invalidateMessage:(id)arg1;
-(void)setFlagWithKey:(id)arg1 state:(char)arg2 forMessages:(id)arg3;
-(id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(char)arg3 userRecorded:(char)arg4;
-(void)deleteMessages:(id)arg1 moveToTrash:(char)arg2;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
-(void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
-(void)setColor:(id)arg1 highlightTextOnly:(char)arg2 forMessages:(id)arg3;
-(id)routeMessages:(id)arg1 fetchingBodies:(char)arg2 messagesNeedingBodies:(id)arg3;
-(void)sendResponseType:(char)arg1 forMeetingMessage:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)muteConversationForMessages:(id)arg1;
-(void)unmuteConversationForMessages:(id)arg1;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(char)arg2 isEncrypted:(char)arg3 forMessage:(id)arg4;
-(void)saveSnippetsForMessages:(id)arg1;
-(void)doCompact;
-(id)uniquedString:(id)arg1;
-(void)getTopLevelMimePart:(id*)arg1 headers:(id*)arg2 body:(id*)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(char)arg5 updateFlags:(char)arg6 allowPartial:(char)arg7 skipSignatureVerification:(char)arg8;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3;
-(id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 allowPartial:(char)arg4;
-(char)canCompact;

@end
