/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSEmailAddress;

@interface EWSGetUserOofSettingsRequestType : EWSBaseRequestType {

	EWSEmailAddress* _Mailbox;

}

@property (nonatomic,retain) EWSEmailAddress * Mailbox;              //@synthesize Mailbox=_Mailbox - In the implementation block
+(id)definition;
-(void)setMailbox:(EWSEmailAddress *)arg1 ;
-(EWSEmailAddress *)Mailbox;
@end
