/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForAccountsIntentExport.h>

@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>

@property (copy,readonly) INSpeakableString * accountNickname; 
@property (readonly) long long accountType; 
@property (copy,readonly) INSpeakableString * organizationName; 
@property (readonly) long long requestedBalanceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setAccountType:(long long)arg1 ;
-(long long)accountType;
-(INSpeakableString *)organizationName;
-(void)setOrganizationName:(INSpeakableString *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INSpeakableString *)accountNickname;
-(void)setAccountNickname:(INSpeakableString *)arg1 ;
-(long long)requestedBalanceType;
-(void)setRequestedBalanceType:(long long)arg1 ;
-(id)initWithAccountNickname:(id)arg1 accountType:(long long)arg2 organizationName:(id)arg3 requestedBalanceType:(long long)arg4 ;
@end

