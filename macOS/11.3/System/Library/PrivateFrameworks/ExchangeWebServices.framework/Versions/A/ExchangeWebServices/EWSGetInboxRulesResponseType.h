/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSGetInboxRulesResponseType : EWSResponseMessageType {

	char _OutlookRuleBlobExists;
	NSArray* _InboxRules;

}

@property (assign,nonatomic) char OutlookRuleBlobExists;              //@synthesize OutlookRuleBlobExists=_OutlookRuleBlobExists - In the implementation block
@property (nonatomic,copy) NSArray * InboxRules;                      //@synthesize InboxRules=_InboxRules - In the implementation block
+(id)definition;
-(char)OutlookRuleBlobExists;
-(void)setOutlookRuleBlobExists:(char)arg1 ;
-(NSArray *)InboxRules;
-(void)setInboxRules:(NSArray *)arg1 ;
@end

