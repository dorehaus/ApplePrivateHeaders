/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Accounts/Notification/AMSAccountNotificationPlugin.bundle/Contents/MacOS/AMSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount;

@interface AMSSyncAccountFlagsTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;

}

@property (retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (retain) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)performSync;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
@end

