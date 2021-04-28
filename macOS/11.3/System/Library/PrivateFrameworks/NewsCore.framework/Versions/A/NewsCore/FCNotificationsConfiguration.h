/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCNotificationsConfiguration : NSObject {

	NSArray* _preSubscribedNotificationsChannelIDs;
	NSArray* _recommendedNotificationChannelIDs;

}

@property (nonatomic,copy,readonly) NSArray * preSubscribedNotificationsChannelIDs;              //@synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recommendedNotificationChannelIDs;                 //@synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2 ;
-(NSArray *)preSubscribedNotificationsChannelIDs;
-(NSArray *)recommendedNotificationChannelIDs;
@end

