/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ABAccountComparer : NSObject {

	NSDictionary* _accountConfigurationsByIdentifier;

}

@property (retain) NSDictionary * accountConfigurationsByIdentifier;              //@synthesize accountConfigurationsByIdentifier=_accountConfigurationsByIdentifier - In the implementation block
+(id)os_log;
+(id)comparisonKeys;
+(id)iCloudDomains;
-(id)existingAccountIdentifierForConfiguration:(id)arg1 ;
-(id)initWithAccountConfigurationsByIdentifier:(id)arg1 ;
-(char)isExistingConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2 ;
-(char)isServerPortConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2 ;
-(char)isUseSSLConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2 ;
-(char)isExistingValue:(id)arg1 equivalentToProposedValue:(id)arg2 forConfigKey:(id)arg3 ;
-(char)isUsername:(id)arg1 equivalentToUsername:(id)arg2 ;
-(char)isHost:(id)arg1 equivalentToHost:(id)arg2 ;
-(char)isiCloudUsername:(id)arg1 equivalentToUserName:(id)arg2 ;
-(id)usernameByStrippingDomain:(id)arg1 ;
-(unsigned long long)effectiveServerPortForConfiguration:(id)arg1 ;
-(void)setConfiguration:(id)arg1 forIdentifier:(id)arg2 ;
-(NSDictionary *)accountConfigurationsByIdentifier;
-(void)setAccountConfigurationsByIdentifier:(NSDictionary *)arg1 ;
@end

