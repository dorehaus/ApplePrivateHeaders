/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSAccount;

@interface SSUpdateAccountResponse : NSObject {

	unsigned long long _credentialSource;
	SSAccount* _updatedAccount;

}

@property (nonatomic,readonly) unsigned long long credentialSource;              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,readonly) SSAccount * updatedAccount;                       //@synthesize updatedAccount=_updatedAccount - In the implementation block
-(unsigned long long)credentialSource;
-(id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2 ;
-(SSAccount *)updatedAccount;
@end
