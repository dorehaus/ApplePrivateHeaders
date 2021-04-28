/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, INSpeakableString, INPerson;


@protocol INSendMessageIntentExport <NSObject,JSExport>
@property (copy) NSArray * recipients; 
@property (assign) long long outgoingMessageType; 
@property (copy) NSString * content; 
@property (copy) INSpeakableString * speakableGroupName; 
@property (copy) NSString * conversationIdentifier; 
@property (copy) NSString * serviceName; 
@property (copy) INPerson * sender; 
@property (assign) long long effect; 
@property (copy) NSArray * attachments; 
@required
-(id)init;
-(NSArray *)attachments;
-(void)setAttachments:(id)arg1;
-(void)setContent:(id)arg1;
-(NSString *)content;
-(NSString *)serviceName;
-(NSString *)conversationIdentifier;
-(INPerson *)sender;
-(void)setServiceName:(id)arg1;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(void)setSender:(id)arg1;
-(INSpeakableString *)speakableGroupName;
-(long long)effect;
-(void)setEffect:(long long)arg1;
-(void)setConversationIdentifier:(id)arg1;
-(void)setSpeakableGroupName:(id)arg1;
-(long long)outgoingMessageType;
-(void)setOutgoingMessageType:(long long)arg1;

@end

