/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSItemType.h>

@class NSString, EWSSingleRecipientType, NSDateComponents;

@interface EWSPostItemType : EWSItemType {

	char _IsRead;
	NSString* _ConversationTopic;
	EWSSingleRecipientType* _From;
	NSString* _InternetMessageId;
	NSDateComponents* _PostedTime;
	NSString* _References;
	EWSSingleRecipientType* _Sender;

}

@property (nonatomic,copy) NSString * ConversationTopic;                                //@synthesize ConversationTopic=_ConversationTopic - In the implementation block
@property (nonatomic,retain) EWSSingleRecipientType * From;                             //@synthesize From=_From - In the implementation block
@property (nonatomic,copy) NSString * InternetMessageId;                                //@synthesize InternetMessageId=_InternetMessageId - In the implementation block
@property (assign,nonatomic) char IsRead;                                               //@synthesize IsRead=_IsRead - In the implementation block
@property (nonatomic,retain) NSDateComponents * PostedTime;                             //@synthesize PostedTime=_PostedTime - In the implementation block
@property (nonatomic,copy) NSString * References;                                       //@synthesize References=_References - In the implementation block
@property (setter=ender,nonatomic,retain) EWSSingleRecipientType * Sender;              //@synthesize Sender=_Sender - In the implementation block
+(id)definition;
-(void)setSender:(EWSSingleRecipientType *)arg1 ;
-(void)setFrom:(EWSSingleRecipientType *)arg1 ;
-(void)setIsRead:(char)arg1 ;
-(EWSSingleRecipientType *)Sender;
-(void)setReferences:(NSString *)arg1 ;
-(NSString *)ConversationTopic;
-(void)setConversationTopic:(NSString *)arg1 ;
-(EWSSingleRecipientType *)From;
-(NSString *)InternetMessageId;
-(void)setInternetMessageId:(NSString *)arg1 ;
-(char)IsRead;
-(NSString *)References;
-(NSDateComponents *)PostedTime;
-(void)setPostedTime:(NSDateComponents *)arg1 ;
@end

