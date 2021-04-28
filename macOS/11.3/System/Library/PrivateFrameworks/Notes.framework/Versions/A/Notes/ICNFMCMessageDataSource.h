/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICNFMCMessageDataSource <ICNFMCActivityTarget,NSCopying>
@property (readonly) char isReadOnly; 
@property (nonatomic,readonly) char supportsSnippets; 
@property (nonatomic,readonly) char canCompact; 
@property (nonatomic,readonly) id<ICNFMCMailAccount> account; 
@property (nonatomic,readonly) id<ICNFMCMailbox> mailbox; 
@optional
-(id)async_deleteMessages:(id)arg1 moveToTrash:(char)arg2;
-(id)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;

@required
-(char)isReadOnly;
-(id<ICNFMCMailAccount>)account;
-(id<ICNFMCMailbox>)mailbox;
-(void)invalidateMessage:(id)arg1;
-(void)deleteMessages:(id)arg1 moveToTrash:(char)arg2;
-(id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
-(void)setColor:(id)arg1 highlightTextOnly:(char)arg2 forMessages:(id)arg3;
-(id)routeMessages:(id)arg1 fetchingBodies:(char)arg2 messagesNeedingBodies:(id)arg3;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(char)arg2 isEncrypted:(char)arg3 forMessage:(id)arg4;
-(void)saveSnippetsForMessages:(id)arg1;
-(void)doCompact;
-(id)uniquedString:(id)arg1;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3;
-(id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3;
-(char)canCompact;
-(id)attachmentsDirectoryForMessage:(id)arg1;
-(id)snippetsForMessages:(id)arg1;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
-(id)messageForMessageID:(id)arg1;
-(void)flushAllCaches;
-(id)dataForMimePart:(id)arg1;
-(char)hasCachedDataForMimePart:(id)arg1;
-(id)headerDataForMessage:(id)arg1;
-(id)headersForMessage:(id)arg1;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 updateFlags:(char)arg3 allowPartial:(char)arg4;
-(void)undeleteMessages:(id)arg1;
-(id)headersForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 updateFlags:(char)arg3;
-(id)fullBodyDataForMessage:(id)arg1;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3;
-(id)async_setFlagWithKey:(id)arg1 state:(char)arg2 forMessages:(id)arg3;
-(id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(char)arg3 userRecorded:(char)arg4;
-(id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;
-(void)sendResponseType:(char)arg1 forMeetingMessage:(id)arg2;
-(char)supportsSnippets;

@end
