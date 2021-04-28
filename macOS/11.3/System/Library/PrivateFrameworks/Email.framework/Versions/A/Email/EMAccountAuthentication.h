/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDAccountFactory;
@interface EMAccountAuthentication : NSObject {

	id<EDAccountFactory> _accountFactory;

}

@property (nonatomic,readonly) id<EDAccountFactory> accountFactory;              //@synthesize accountFactory=_accountFactory - In the implementation block
+(id)log;
-(id<EDAccountFactory>)accountFactory;
-(char)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)arg1 ;
-(char)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)arg1 ;
-(char)_shouldAutoUpdateDeliveryAccount:(id)arg1 forChangedReceivingAccount:(id)arg2 ;
-(char)_hostnamesHaveSameTopLevelDomain:(id)arg1 deliveryAccount:(id)arg2 ;
-(id)initWithAccountFactory:(id)arg1 ;
-(char)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)arg1 ;
-(char)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)arg1 ;
@end
