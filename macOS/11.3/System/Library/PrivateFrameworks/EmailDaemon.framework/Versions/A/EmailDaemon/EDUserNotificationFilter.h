/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EMBlockedSenderReader, EMVIPReader;
@interface EDUserNotificationFilter : NSObject {

	id<EMBlockedSenderReader> _blockedSenderReader;
	id<EMVIPReader> _vipReader;

}

@property (nonatomic,readonly) id<EMBlockedSenderReader> blockedSenderReader;              //@synthesize blockedSenderReader=_blockedSenderReader - In the implementation block
@property (nonatomic,readonly) id<EMVIPReader> vipReader;                                  //@synthesize vipReader=_vipReader - In the implementation block
-(char)_messageNeedsNotification:(id)arg1 ;
-(id<EMBlockedSenderReader>)blockedSenderReader;
-(id<EMVIPReader>)vipReader;
-(id)initWithBlockedSenderReader:(id)arg1 vipReader:(id)arg2 ;
-(id)messagesNeedingNotification:(id)arg1 ;
@end

