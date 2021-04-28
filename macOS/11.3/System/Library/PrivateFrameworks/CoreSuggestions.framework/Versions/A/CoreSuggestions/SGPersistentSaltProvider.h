/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, NSString;

@interface SGPersistentSaltProvider : NSObject {

	_PASLock* _lock;
	NSString* _serviceIdentifier;
	NSString* _accessGroup;

}
+(id)hexStringForData:(id)arg1 ;
+(id)saltProviderWithString:(id)arg1 serviceIdentifier:(id)arg2 accessGroup:(id)arg3 ;
+(id)saltProviderFromKeyChainWithServiceIdentifier:(id)arg1 accessGroup:(id)arg2 ;
-(id)initWithServiceIdentifier:(id)arg1 accessGroup:(id)arg2 ;
-(id)salt;
-(id)_findOrCreateSalt;
-(id)_queryKeychainError:(out id*)arg1 ;
-(id)_findExistingSaltError:(out id*)arg1 ;
-(id)_createSalt;
-(void)_deleteSalt;
@end

