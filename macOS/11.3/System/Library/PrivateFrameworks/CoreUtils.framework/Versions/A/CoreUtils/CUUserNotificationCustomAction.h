/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNNotificationAction;

@interface CUUserNotificationCustomAction : NSObject {

	UNNotificationAction* _action;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UNNotificationAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
-(UNNotificationAction *)action;
-(void)setAction:(UNNotificationAction *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

