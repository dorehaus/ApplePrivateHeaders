/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMessageChangeAction.h>

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction {

	long long _conversationNotificationLevel;
	long long _originalConversationNotificationLevel;
	long long _conversationID;

}

@property (nonatomic,readonly) long long conversationNotificationLevel;                      //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (nonatomic,readonly) long long originalConversationNotificationLevel;              //@synthesize originalConversationNotificationLevel=_originalConversationNotificationLevel - In the implementation block
@property (assign) long long conversationID;                                                 //@synthesize conversationID=_conversationID - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(long long)conversationID;
-(void)setConversationID:(long long)arg1 ;
-(long long)conversationNotificationLevel;
-(id)initWithConversationID:(long long)arg1 conversationNotificationLevel:(long long)arg2 originalConversationNotificationLevel:(long long)arg3 ;
-(id)initWithMessage:(id)arg1 conversationNotificationLevel:(long long)arg2 ;
-(long long)originalConversationNotificationLevel;
@end

