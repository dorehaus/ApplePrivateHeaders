/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/WBSFeatureAvailability.h>

@protocol OS_dispatch_queue;
@class NSObject, STManagementState, OTClique;

@interface FeatureAvailability : WBSFeatureAvailability {

	NSObject*<OS_dispatch_queue> _internalQueue;
	STManagementState* _managementState;
	NSObject*<OS_dispatch_queue> _screenTimeUserStateQueue;
	OTClique* _keychainClique;
	char _threadUnsafeUserSignedIntoICloud;
	char _threadUnsafeSafariSyncEnabled;
	char _threadUnsafeUserUsingManagedAppleID;
	char _applePayAvailable;
	long long _cachedScreenTimeUserState;

}

@property (getter=isUserSignedIntoICloud) char userSignedIntoICloud;                    //@synthesize threadUnsafeUserSignedIntoICloud=_threadUnsafeUserSignedIntoICloud - In the implementation block
@property (getter=isSafariSyncEnabled) char safariSyncEnabled;                          //@synthesize threadUnsafeSafariSyncEnabled=_threadUnsafeSafariSyncEnabled - In the implementation block
@property (getter=isUserUsingManagedAppleID) char userUsingManagedAppleID;              //@synthesize threadUnsafeUserUsingManagedAppleID=_threadUnsafeUserUsingManagedAppleID - In the implementation block
@property (getter=isApplePayAvailable) char applePayAvailable;                          //@synthesize applePayAvailable=_applePayAvailable - In the implementation block
@property (assign) long long cachedScreenTimeUserState;                                 //@synthesize cachedScreenTimeUserState=_cachedScreenTimeUserState - In the implementation block
+(id)_sharedInstance;
+(char)_shouldShowChineseFeatures;
+(char)_shouldShowRussianFeatures;
+(char)wantsAggressiveKeychainCredentialCaching;
+(char)isKeychainSyncEnabled;
+(char)isAirDropPasswordsAvailable;
+(void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(/*^block*/id)arg1 ;
+(char)isPasswordAutoFillEnabled;
+(char)isAddressBookAutoFillEnabled;
+(char)isCreditCardAutoFillEnabled;
+(char)isScreenTimeUserRestricted;
+(char)safariIsInRecoverySystem;
+(void)startMonitoringForAvailabilityChanges;
+(char)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+(char)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+(char)isMiscellaneousFormsAutoFillEnabled;
+(char)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+(char)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+(char)isTouchIDToAutoFillEnabledInUserDefaults;
+(char)isUserAllowedToEditCreditCardInformation;
+(char)isUserSignedIntoICloud;
+(char)isSafariSyncEnabled;
+(void)executeBlockAfterScreenTimeUserStateDetermined:(/*^block*/id)arg1 ;
+(char)isNewExtensionBannerEnabled;
+(char)isCloudTabsAvailable;
+(char)isUserUsingManagedAppleID;
+(char)isApplePayAvailable;
+(char)_hasSecureEnclaveCoprocessor;
+(char)isPerSitePopUpBlockingPreferenceAvailable;
+(char)supportsCVV;
-(id)init;
-(char)isKeychainSyncEnabled;
-(char)isUserSignedIntoICloud;
-(char)isSafariSyncEnabled;
-(char)isUserUsingManagedAppleID;
-(char)isApplePayAvailable;
-(void)setCachedScreenTimeUserState:(long long)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_accountsDidChangeOnInternalQueue;
-(void)_updateApplePayAvailability;
-(void)_accountsDidChange;
-(void)setUserSignedIntoICloud:(char)arg1 ;
-(void)setSafariSyncEnabled:(char)arg1 ;
-(void)setUserUsingManagedAppleID:(char)arg1 ;
-(void)_updateKeychainSyncingStatus;
-(void)setApplePayAvailable:(char)arg1 ;
-(long long)cachedScreenTimeUserState;
-(void)isScreenTimeUserRestrictedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_executeBlockAfterScreenTimeUserStateDetermined:(/*^block*/id)arg1 ;
@end
