/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InternetAccounts/IAAccountSetupResult.h>

@class IMAccount, NSError;

@interface IAChatAccountSetupResult : IAAccountSetupResult {

	IMAccount* _accountObject;
	char _isExistingAccount;
	NSError* _error;

}

@property (retain) IMAccount * accountObject;              //@synthesize accountObject=_accountObject - In the implementation block
@property (retain) NSError * setupError;                   //@synthesize error=_error - In the implementation block
@property (assign) char isExistingAccount;                 //@synthesize isExistingAccount=_isExistingAccount - In the implementation block
-(void)setSetupError:(NSError *)arg1 ;
-(NSError *)setupError;
-(IMAccount *)accountObject;
-(void)setAccountObject:(IMAccount *)arg1 ;
-(char)isExistingAccount;
-(void)setIsExistingAccount:(char)arg1 ;
@end

