/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@class IMChat, IMPluginPayload, NSURL, DDScannerResult, NSArray, NSMutableSet, NSString, IMMessage, LPLinkMetadata, NSData, NSAttributedString;

@interface IMBalloonPluginDataSource : NSObject {

	char _payloadInShelf;
	char _initialMessageIsFromMe;
	char _allowedByScreenTime;
	char _isLast;
	char _isShowingLatestMessageAsBreadcrumb;
	char _hasInvalidatedSize;
	char _parentChatHasAllUnknownRecipients;
	char _showingLatestMessageAsBreadcrumb;
	IMChat* _chat;
	IMPluginPayload* _pluginPayload;
	NSURL* _url;
	DDScannerResult* _dataDetectedResult;
	NSArray* _attachmentGUIDs;
	NSURL* _URLToOpenOnTapAction;
	NSArray* _pendingAttachmentData;
	NSMutableSet* _temporaryAttachmentURLs;
	NSString* __imMessageGUID;
	NSString* _messageGUID;
	NSString* _sessionGUID;
	NSString* _bundleID;
	NSArray* _consumedPayloads;
	NSString* _guidOfLastMessageInSession;
	long long _messageIDOfLastMessageInSession;

}

@property (nonatomic,retain) NSURL * url;                                                                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) DDScannerResult * dataDetectedResult;                                                             //@synthesize dataDetectedResult=_dataDetectedResult - In the implementation block
@property (nonatomic,retain) NSArray * attachmentGUIDs;                                                                        //@synthesize attachmentGUIDs=_attachmentGUIDs - In the implementation block
@property (nonatomic,retain) IMPluginPayload * pluginPayload;                                                                  //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) NSArray * pendingAttachmentData;                                                                  //@synthesize pendingAttachmentData=_pendingAttachmentData - In the implementation block
@property (nonatomic,retain) NSMutableSet * temporaryAttachmentURLs;                                                           //@synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs - In the implementation block
@property (nonatomic,retain) NSString * _imMessageGUID;                                                                        //@synthesize _imMessageGUID=__imMessageGUID - In the implementation block
@property (assign,setter=setShowingLatestMessageAsBreadcrumb:,nonatomic) char isShowingLatestMessageAsBreadcrumb;              //@synthesize isShowingLatestMessageAsBreadcrumb=_isShowingLatestMessageAsBreadcrumb - In the implementation block
@property (assign,nonatomic) char allowedByScreenTime;                                                                         //@synthesize allowedByScreenTime=_allowedByScreenTime - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                                                           //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSString * sessionGUID;                                                                           //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * bundleID;                                                                     //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) char hasInvalidatedSize;                                                                          //@synthesize hasInvalidatedSize=_hasInvalidatedSize - In the implementation block
@property (assign,nonatomic) char payloadInShelf;                                                                              //@synthesize payloadInShelf=_payloadInShelf - In the implementation block
@property (nonatomic,readonly) IMMessage * imMessage; 
@property (nonatomic,retain) IMChat * chat;                                                                                    //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSArray * consumedPayloads;                                                                       //@synthesize consumedPayloads=_consumedPayloads - In the implementation block
@property (assign,nonatomic) char initialMessageIsFromMe;                                                                      //@synthesize initialMessageIsFromMe=_initialMessageIsFromMe - In the implementation block
@property (assign,nonatomic) char parentChatHasAllUnknownRecipients;                                                           //@synthesize parentChatHasAllUnknownRecipients=_parentChatHasAllUnknownRecipients - In the implementation block
@property (nonatomic,readonly) LPLinkMetadata * richLinkMetadata; 
@property (nonatomic,retain,readonly) NSData * messagePayloadDataForSending; 
@property (assign,setter=setLast:,nonatomic) char isLast;                                                                      //@synthesize isLast=_isLast - In the implementation block
@property (getter=isShowingLatestMessageAsBreadcrumb,nonatomic,readonly) char showingLatestMessageAsBreadcrumb;                //@synthesize showingLatestMessageAsBreadcrumb=_showingLatestMessageAsBreadcrumb - In the implementation block
@property (nonatomic,retain,readonly) NSString * guidOfLastMessageInSession;                                                   //@synthesize guidOfLastMessageInSession=_guidOfLastMessageInSession - In the implementation block
@property (nonatomic,readonly) long long messageIDOfLastMessageInSession;                                                      //@synthesize messageIDOfLastMessageInSession=_messageIDOfLastMessageInSession - In the implementation block
@property (nonatomic,readonly) char supportsDynamicSize; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,readonly) char wantsStatusItem; 
@property (nonatomic,retain,readonly) NSString * statusString; 
@property (nonatomic,retain,readonly) NSAttributedString * statusAttributedString; 
@property (nonatomic,readonly) char wantsReplyFromContentView; 
@property (nonatomic,readonly) NSURL * URLToOpenOnTapAction;                                                                   //@synthesize URLToOpenOnTapAction=_URLToOpenOnTapAction - In the implementation block
@property (nonatomic,readonly) NSArray * allPayloads; 
@property (nonatomic,readonly) char isFromMe; 
@property (nonatomic,readonly) char isPlayed; 
+(id)previewSummary;
+(id)individualPreviewSummaryForPluginPayload:(id)arg1 ;
+(char)supportsURL:(id)arg1 ;
+(char)supportsIndividualPreviewSummaries;
+(id)previewSummaryForPluginBundle:(id)arg1 ;
+(id)replaceHandleWithContactNameInString:(id)arg1 forAccount:(id)arg2 additionalHandles:(id)arg3 ;
+(id)unlocalizedPreviewSummaryForPluginBundle:(id)arg1 pluginDisplayName:(id)arg2 ;
+(id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id*)arg3 previewAttachmentUTI:(id*)arg4 ;
-(id)description;
-(NSString *)bundleID;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)statusString;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(void)setLast:(char)arg1 ;
-(void)setSessionGUID:(NSString *)arg1 ;
-(NSString *)sessionGUID;
-(unsigned long long)playbackType;
-(void)stopPlayback;
-(char)isFromMe;
-(char)isPlayed;
-(id)_replaceHandleWithContactNameInString:(id)arg1 ;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)setDataDetectedResult:(DDScannerResult *)arg1 ;
-(NSString *)messageGUID;
-(DDScannerResult *)dataDetectedResult;
-(id)initWithPluginPayload:(id)arg1 ;
-(id)individualPreviewSummary;
-(LPLinkMetadata *)richLinkMetadata;
-(char)allowedByScreenTime;
-(void)setAllowedByScreenTime:(char)arg1 ;
-(char)isLast;
-(void)setChat:(IMChat *)arg1 ;
-(IMChat *)chat;
-(id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4 ;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(void)_updateTemporaryAttachmentURLsForPluginPayload;
-(IMPluginPayload *)pluginPayload;
-(NSArray *)consumedPayloads;
-(void)setPendingAttachmentData:(NSArray *)arg1 ;
-(NSArray *)pendingAttachmentData;
-(NSString *)_imMessageGUID;
-(void)sendPayload:(id)arg1 attachments:(id)arg2 ;
-(void)updatePayload:(id)arg1 attachments:(id)arg2 ;
-(unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3 ;
-(void)pluginPayloadDidChange:(unsigned long long)arg1 ;
-(void)payloadDidChange;
-(NSMutableSet *)temporaryAttachmentURLs;
-(void)setTemporaryAttachmentURLs:(NSMutableSet *)arg1 ;
-(long long)messageIDOfLastMessageInSession;
-(char)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2 ;
-(void)_removeTemporaryAttachmentURLs;
-(void)setHasInvalidatedSize:(char)arg1 ;
-(NSString *)guidOfLastMessageInSession;
-(id)individualPreviewAttachmentFileAndUTI:(id*)arg1 ;
-(id)_summaryText;
-(char)isShowingLatestMessageAsBreadcrumb;
-(char)isShowingLatestMessageAsBreadcrumb;
-(void)setShowingLatestMessageAsBreadcrumb:(char)arg1 ;
-(void)_reloadLatestUnconsumedBreadcrumb;
-(NSArray *)allPayloads;
-(void)setPayload:(id)arg1 attachments:(id)arg2 ;
-(NSData *)messagePayloadDataForSending;
-(IMMessage *)imMessage;
-(void)sendPayload:(id)arg1 ;
-(void)updatePayload:(id)arg1 ;
-(void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3 ;
-(void)thumbnailURLWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)payloadWillEnterShelf;
-(void)payloadWillSendFromShelf;
-(char)wantsStatusItem;
-(NSAttributedString *)statusAttributedString;
-(void)didTapStatusItem;
-(char)wantsReplyFromContentView;
-(void)statusStringNeedsUpdate;
-(char)supportsDynamicSize;
-(void)needsResize;
-(void)markAsPlayed;
-(void)playbackWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)datasourceWasMovedToNewGuid:(id)arg1 ;
-(void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1 ;
-(void)endShowingLastConsumedBreadcrumb;
-(char)payloadInShelf;
-(void)setPayloadInShelf:(char)arg1 ;
-(NSArray *)attachmentGUIDs;
-(void)setAttachmentGUIDs:(NSArray *)arg1 ;
-(NSURL *)URLToOpenOnTapAction;
-(char)initialMessageIsFromMe;
-(void)setInitialMessageIsFromMe:(char)arg1 ;
-(void)set_imMessageGUID:(NSString *)arg1 ;
-(char)hasInvalidatedSize;
-(void)setConsumedPayloads:(NSArray *)arg1 ;
-(char)parentChatHasAllUnknownRecipients;
-(void)setParentChatHasAllUnknownRecipients:(char)arg1 ;
@end

