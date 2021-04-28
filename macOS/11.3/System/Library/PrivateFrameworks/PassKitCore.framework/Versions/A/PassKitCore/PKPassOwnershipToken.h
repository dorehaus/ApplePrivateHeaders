/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPassOwnershipToken : NSObject {

	NSString* _ownershipToken;
	NSString* _ownershipTokenIdentifier;

}

@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;              //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ownershipToken; 
+(void)queryKeychainForOwnershipTokens:(/*^block*/id)arg1 ;
+(void)deleteAllLocalKeychainOwnershipTokens;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)ownershipTokenIdentifier;
-(id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_readFromKeychain;
-(void)_writeToKeychain;
-(void)deleteTokenFromLocalKeychain;
-(id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2 ;
-(NSString *)ownershipToken;
-(void)setOwnershipToken:(NSString *)arg1 ;
-(void)deleteTokenFromKeychain;
@end

