/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountType;

@interface ACAccountsHelper : NSObject {

	ACAccountType* _type;

}
+(id)store;
+(id)storeQueue;
-(id)type;
-(char)removeAccount:(id)arg1 error:(id*)arg2 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)storedAccounts;
-(id)initWithACType:(id)arg1 ;
-(char)saveAccount:(id)arg1 verifyCredential:(char)arg2 error:(id*)arg3 ;
-(char)verifyAccount:(id)arg1 error:(id*)arg2 ;
-(char)requestAccess;
-(id)accountWithUID:(id)arg1 ;
-(id)makeAnAccount;
@end

