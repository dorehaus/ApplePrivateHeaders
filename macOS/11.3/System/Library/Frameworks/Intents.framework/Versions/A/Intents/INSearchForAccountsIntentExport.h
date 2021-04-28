/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString;


@protocol INSearchForAccountsIntentExport <NSObject,JSExport>
@property (copy) INSpeakableString * accountNickname; 
@property (assign) long long accountType; 
@property (copy) INSpeakableString * organizationName; 
@property (assign) long long requestedBalanceType; 
@required
-(id)init;
-(void)setAccountType:(long long)arg1;
-(long long)accountType;
-(INSpeakableString *)organizationName;
-(void)setOrganizationName:(id)arg1;
-(INSpeakableString *)accountNickname;
-(void)setAccountNickname:(id)arg1;
-(long long)requestedBalanceType;
-(void)setRequestedBalanceType:(long long)arg1;

@end

