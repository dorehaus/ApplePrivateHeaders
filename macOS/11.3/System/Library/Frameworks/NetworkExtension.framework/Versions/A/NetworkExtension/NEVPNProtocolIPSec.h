/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NSData, NSString, NEKeychainItem, NSArray;

@interface NEVPNProtocolIPSec : NEVPNProtocol {

	NSData* _sharedSecretReference;
	char _useExtendedAuthentication;
	char _extendedAuthPasswordPrompt;
	long long _authenticationMethod;
	NSString* _localIdentifier;
	NSString* _remoteIdentifier;
	NEKeychainItem* _sharedSecretKeychainItem;
	NSArray* _legacyProposals;
	NSArray* _legacyExchangeMode;

}

@property (copy) NEKeychainItem * sharedSecretKeychainItem;              //@synthesize sharedSecretKeychainItem=_sharedSecretKeychainItem - In the implementation block
@property (copy) NSArray * legacyProposals;                              //@synthesize legacyProposals=_legacyProposals - In the implementation block
@property (copy) NSArray * legacyExchangeMode;                           //@synthesize legacyExchangeMode=_legacyExchangeMode - In the implementation block
@property (assign) char extendedAuthPasswordPrompt;                      //@synthesize extendedAuthPasswordPrompt=_extendedAuthPasswordPrompt - In the implementation block
@property (assign) long long authenticationMethod;                       //@synthesize authenticationMethod=_authenticationMethod - In the implementation block
@property (assign) char useExtendedAuthentication;                       //@synthesize useExtendedAuthentication=_useExtendedAuthentication - In the implementation block
@property (copy) NSData * sharedSecretReference;                         //@synthesize sharedSecretReference=_sharedSecretReference - In the implementation block
@property (copy) NSString * localIdentifier;                             //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (copy) NSString * remoteIdentifier;                            //@synthesize remoteIdentifier=_remoteIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3 ;
-(char)needToUpdateKeychain;
-(void)removeKeychainItemsInDomain:(long long)arg1 keepIdentity:(BOOL)arg2 ;
-(void)setSharedSecretReference:(NSData *)arg1 ;
-(void)setExtendedAuthPasswordPrompt:(char)arg1 ;
-(void)setLegacyExchangeMode:(NSArray *)arg1 ;
-(void)setLegacyProposals:(NSArray *)arg1 ;
-(void)setSharedSecretKeychainItem:(NEKeychainItem *)arg1 ;
-(void)setUseExtendedAuthentication:(char)arg1 ;
-(char)useExtendedAuthentication;
-(SCNetworkInterfaceRef)createInterface;
-(void)migratePasswordsFromPreferences:(SCPreferencesRef)arg1 ;
-(NSData *)sharedSecretReference;
-(NSArray *)legacyProposals;
-(NSArray *)legacyExchangeMode;
-(char)extendedAuthPasswordPrompt;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)authenticationMethod;
-(NSString *)localIdentifier;
-(NSString *)remoteIdentifier;
-(void)setAuthenticationMethod:(long long)arg1 ;
-(id)copyLegacyDictionary;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NEKeychainItem *)sharedSecretKeychainItem;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(void)setRemoteIdentifier:(NSString *)arg1 ;
@end

