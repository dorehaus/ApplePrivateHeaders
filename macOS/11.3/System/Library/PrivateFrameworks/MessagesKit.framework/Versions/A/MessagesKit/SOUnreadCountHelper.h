/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessagesKit.framework/Versions/A/MessagesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesKit/SOHelper.h>
#import <libobjc.A.dylib/SOUnreadCountHelperReceiverProtocol.h>

@protocol SOUnreadCountHelperDelegate;
@class NSString;

@interface SOUnreadCountHelper : SOHelper <SOUnreadCountHelperReceiverProtocol> {

	unsigned long long _unreadCount;
	id<SOUnreadCountHelperDelegate> _unreadCountDelegate;

}

@property (nonatomic,readonly) unsigned long long unreadCount;                                        //@synthesize unreadCount=_unreadCount - In the implementation block
@property (assign,nonatomic,__weak) id<SOUnreadCountHelperDelegate> unreadCountDelegate;              //@synthesize unreadCountDelegate=_unreadCountDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleName;
+(id)weakSharedInstance;
+(id)receiverProtocol;
+(id)remoteReceiverProtocol;
-(unsigned long long)unreadCount;
-(void)updateProperties:(id)arg1 ;
-(void)setupConnection:(id)arg1 ;
-(void)setValue:(id)arg1 forControllerKey:(id)arg2 ;
-(void)processUnreadCountForChatGUID:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)markChatGUIDAsRead:(id)arg1 ;
-(void)setUnreadCountDelegate:(id<SOUnreadCountHelperDelegate>)arg1 ;
-(id)unreadChats;
-(void)_calculateTotalUnreadCount;
-(void)_postUnreadCountNotificationForChatGUID:(id)arg1 ;
-(void)_postUnreadChatNotificationForChatGUID:(id)arg1 ;
-(unsigned long long)unreadCountForChatGUID:(id)arg1 ;
-(id)unreadChatsBlocking;
-(unsigned long long)totalUnreadCount;
-(id)unreadFormatForParticipants:(long long)arg1 andUnreadCount:(id)arg2 ;
-(id<SOUnreadCountHelperDelegate>)unreadCountDelegate;
@end

