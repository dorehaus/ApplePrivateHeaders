/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;
	id _accountStoreDidChangeObserver;

}
+(id)sharedManager;
-(void)dealloc;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)accounts;
-(void)reloadAccounts;
-(id)_accountStore;
-(void)addAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(id)primaryAccount;
-(void)updateAccount:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)saveAllAccounts;
@end

