/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMOutgoingMessageBuilder.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSData, EMMessageObjectID, NSString;

@interface EMOutgoingMessage : NSObject <EMOutgoingMessageBuilder, NSSecureCoding, EFPubliclyDescribable> {

	char _shouldSign;
	char _shouldEncrypt;
	NSData* _messageData;
	long long _action;
	EMMessageObjectID* _originalMessageID;
	long long _conversationNotificationLevel;

}

@property (nonatomic,copy) NSData * messageData;                                   //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) long long action;                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) char shouldSign;                                      //@synthesize shouldSign=_shouldSign - In the implementation block
@property (assign,nonatomic) char shouldEncrypt;                                   //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (assign,nonatomic) long long conversationNotificationLevel;              //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (nonatomic,retain) EMMessageObjectID * originalMessageID;                //@synthesize originalMessageID=_originalMessageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setMessageData:(NSData *)arg1 ;
-(NSData *)messageData;
-(char)shouldEncrypt;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSString *)ef_publicDescription;
-(long long)conversationNotificationLevel;
-(void)setConversationNotificationLevel:(long long)arg1 ;
-(void)setOriginalMessageID:(EMMessageObjectID *)arg1 ;
-(void)setShouldSign:(char)arg1 ;
-(void)setShouldEncrypt:(char)arg1 ;
-(EMMessageObjectID *)originalMessageID;
-(char)shouldSign;
-(id)initWithMessageData:(id)arg1 ;
@end
