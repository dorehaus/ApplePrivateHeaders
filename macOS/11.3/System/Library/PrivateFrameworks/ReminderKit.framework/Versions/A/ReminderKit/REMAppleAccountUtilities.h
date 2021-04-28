/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore;

@interface REMAppleAccountUtilities : NSObject {

	char _primaryICloudACAccountIsValid;
	ACAccount* _unsafeUntilSystemReady_primaryICloudACAccount;
	ACAccountStore* _accountStore;
	ACAccount* __debug_primaryICloudACAccount;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                  //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) char primaryICloudACAccountIsValid;                             //@synthesize primaryICloudACAccountIsValid=_primaryICloudACAccountIsValid - In the implementation block
@property (nonatomic,retain) ACAccount * _debug_primaryICloudACAccount;                      //@synthesize _debug_primaryICloudACAccount=__debug_primaryICloudACAccount - In the implementation block
@property (readonly) ACAccount * unsafeUntilSystemReady_primaryICloudACAccount;              //@synthesize unsafeUntilSystemReady_primaryICloudACAccount=_unsafeUntilSystemReady_primaryICloudACAccount - In the implementation block
@property (readonly) char unsafeUntilSystemReady_primaryICloudAccountEnabled; 
+(id)sharedInstance;
+(id)getAppleIDSession;
+(id)accountDescriptionWithACAccount:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)accessQueue;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)initForObservingAccountStoreChanges:(char)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(ACAccount *)_debug_primaryICloudACAccount;
-(char)primaryICloudACAccountIsValid;
-(void)setPrimaryICloudACAccountIsValid:(char)arg1 ;
-(void)internalInvalidatePrimaryICloudACAccount;
-(ACAccount *)unsafeUntilSystemReady_primaryICloudACAccount;
-(void)set_debug_primaryICloudACAccount:(ACAccount *)arg1 ;
-(id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
-(void)invalidatePrimaryICloudACAccount;
-(void)saveDidChooseToMigrate:(char)arg1 didFinishMigration:(char)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(char)unsafeUntilSystemReady_primaryICloudAccountEnabled;
-(id)unsafeUntilSystemReady_primaryICloudAccountCalDavService;
-(void)_unsetMigrationFlagsWithACAccount:(id)arg1 inStore:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setPrimaryICloudACAccount:(id)arg1 ;
@end

