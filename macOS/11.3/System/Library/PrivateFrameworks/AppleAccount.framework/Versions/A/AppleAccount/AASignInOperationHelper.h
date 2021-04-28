/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface AASignInOperationHelper : NSObject {

	ACAccountStore* _accountStore;

}
-(id)init;
-(void)signInAccount:(id)arg1 enablingDataclasses:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_refreshEnabledDataclassesForAccount:(id)arg1 ;
@end

