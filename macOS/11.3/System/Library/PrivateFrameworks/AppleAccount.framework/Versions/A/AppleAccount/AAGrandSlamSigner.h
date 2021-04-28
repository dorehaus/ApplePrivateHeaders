/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, ACAccount, NSString;

@interface AAGrandSlamSigner : NSObject {

	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	NSString* _appTokenID;
	char _useAltDSID;
	NSString* _headerFieldKey;

}

@property (nonatomic,readonly) ACAccount * grandSlamAccount;               //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) char useAltDSID;                              //@synthesize useAltDSID=_useAltDSID - In the implementation block
@property (nonatomic,retain) NSString * headerFieldKey;                    //@synthesize headerFieldKey=_headerFieldKey - In the implementation block
-(ACAccountStore *)accountStore;
-(char)signURLRequest:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3 ;
-(void)setHeaderFieldKey:(NSString *)arg1 ;
-(ACAccount *)grandSlamAccount;
-(char)signURLRequest:(id)arg1 isUserInitiated:(char)arg2 ;
-(void)setUseAltDSID:(char)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4 ;
-(char)useAltDSID;
-(NSString *)headerFieldKey;
@end

