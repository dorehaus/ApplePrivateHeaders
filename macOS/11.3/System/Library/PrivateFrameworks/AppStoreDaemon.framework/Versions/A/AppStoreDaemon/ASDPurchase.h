/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSNumber, NSDictionary;

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _buyParameters;
	char _createsJobs;
	char _displaysOnLockScreen;
	char _forceWatchInstall;
	char _isDSIDLess;
	char _isUpdate;
	char _isBackgroundUpdate;
	char _isRedownload;
	char _shouldCancelForInstalledBundleItems;
	char _expectsIOSAppOnMac;
	char _installUniversalVariant;
	char _isCompatibilityUpdate;
	char _isRefresh;
	char _sendGUID;
	NSString* _bundleID;
	NSNumber* _itemID;
	NSString* _itemName;
	NSString* _vendorName;
	NSDictionary* _additionalHeaders;
	NSNumber* _accountIdentifier;
	NSString* _affiliateIdentifier;
	NSString* _bagKey;
	long long _extensionsToEnable;
	NSArray* _gratisIdentifiers;
	NSString* _referrerName;
	NSString* _referrerURL;
	long long _softwarePlatform;
	long long _purchaseID;
	NSArray* _requiredCapabilities;
	NSString* _preflightURLString;
	NSString* _clientID;
	NSNumber* _ownerDSID;
	NSNumber* _purchaserDSID;

}

@property (assign,nonatomic) char expectsIOSAppOnMac;                                                      //@synthesize expectsIOSAppOnMac=_expectsIOSAppOnMac - In the implementation block
@property (assign,nonatomic) char installUniversalVariant;                                                 //@synthesize installUniversalVariant=_installUniversalVariant - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                                            //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) char isCompatibilityUpdate;                                                   //@synthesize isCompatibilityUpdate=_isCompatibilityUpdate - In the implementation block
@property (assign,nonatomic) char isRefresh;                                                               //@synthesize isRefresh=_isRefresh - In the implementation block
@property (nonatomic,copy) NSNumber * ownerDSID;                                                           //@synthesize ownerDSID=_ownerDSID - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserDSID;                                                       //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (assign,nonatomic) char sendGUID;                                                                //@synthesize sendGUID=_sendGUID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * buyParameters; 
@property (nonatomic,copy) NSNumber * itemID;                                                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                                            //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                                          //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHeaders;                                               //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                                                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * affiliateIdentifier;                                                 //@synthesize affiliateIdentifier=_affiliateIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                                                              //@synthesize bagKey=_bagKey - In the implementation block
@property (assign,nonatomic) char createsJobs;                                                             //@synthesize createsJobs=_createsJobs - In the implementation block
@property (assign,nonatomic) char displaysOnLockScreen;                                                    //@synthesize displaysOnLockScreen=_displaysOnLockScreen - In the implementation block
@property (assign) long long extensionsToEnable;                                                           //@synthesize extensionsToEnable=_extensionsToEnable - In the implementation block
@property (assign,nonatomic) char forceWatchInstall;                                                       //@synthesize forceWatchInstall=_forceWatchInstall - In the implementation block
@property (nonatomic,copy) NSArray * gratisIdentifiers;                                                    //@synthesize gratisIdentifiers=_gratisIdentifiers - In the implementation block
@property (assign,getter=isIOSBinaryMacOSCompatible,nonatomic) char iOSBinaryMacOSCompatible; 
@property (assign,nonatomic) char isDSIDLess;                                                              //@synthesize isDSIDLess=_isDSIDLess - In the implementation block
@property (assign,nonatomic) char isUpdate;                                                                //@synthesize isUpdate=_isUpdate - In the implementation block
@property (assign,nonatomic) char isBackgroundUpdate;                                                      //@synthesize isBackgroundUpdate=_isBackgroundUpdate - In the implementation block
@property (nonatomic,copy) NSString * referrerName;                                                        //@synthesize referrerName=_referrerName - In the implementation block
@property (nonatomic,copy) NSString * referrerURL;                                                         //@synthesize referrerURL=_referrerURL - In the implementation block
@property (assign,nonatomic) char isRedownload;                                                            //@synthesize isRedownload=_isRedownload - In the implementation block
@property (assign,nonatomic) long long softwarePlatform;                                                   //@synthesize softwarePlatform=_softwarePlatform - In the implementation block
@property (assign) long long purchaseID;                                                                   //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSArray * requiredCapabilities;                                                 //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (assign,nonatomic) char shouldCancelForInstalledBundleItems;                                     //@synthesize shouldCancelForInstalledBundleItems=_shouldCancelForInstalledBundleItems - In the implementation block
@property (copy) NSString * preflightURLString;                                                            //@synthesize preflightURLString=_preflightURLString - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSNumber *)purchaserDSID;
-(char)isUpdate;
-(NSString *)referrerURL;
-(void)setReferrerURL:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(void)setIsUpdate:(char)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(NSString *)bagKey;
-(NSArray *)requiredCapabilities;
-(long long)softwarePlatform;
-(void)setSoftwarePlatform:(long long)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)buyParameters;
-(NSDictionary *)additionalHeaders;
-(void)setAdditionalHeaders:(NSDictionary *)arg1 ;
-(char)isRefresh;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setIsRedownload:(char)arg1 ;
-(char)isRedownload;
-(char)isIOSBinaryMacOSCompatible;
-(void)setIOSBinaryMacOSCompatible:(char)arg1 ;
-(void)appendValue:(id)arg1 forBuyParameter:(id)arg2 ;
-(id)firstValueForBuyParameter:(id)arg1 ;
-(NSString *)affiliateIdentifier;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(char)createsJobs;
-(void)setCreatesJobs:(char)arg1 ;
-(char)displaysOnLockScreen;
-(void)setDisplaysOnLockScreen:(char)arg1 ;
-(long long)extensionsToEnable;
-(void)setExtensionsToEnable:(long long)arg1 ;
-(char)forceWatchInstall;
-(void)setForceWatchInstall:(char)arg1 ;
-(NSArray *)gratisIdentifiers;
-(void)setGratisIdentifiers:(NSArray *)arg1 ;
-(char)isDSIDLess;
-(void)setIsDSIDLess:(char)arg1 ;
-(char)isBackgroundUpdate;
-(void)setIsBackgroundUpdate:(char)arg1 ;
-(NSString *)referrerName;
-(void)setReferrerName:(NSString *)arg1 ;
-(long long)purchaseID;
-(void)setPurchaseID:(long long)arg1 ;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(char)shouldCancelForInstalledBundleItems;
-(void)setShouldCancelForInstalledBundleItems:(char)arg1 ;
-(NSString *)preflightURLString;
-(void)setPreflightURLString:(NSString *)arg1 ;
-(char)expectsIOSAppOnMac;
-(void)setExpectsIOSAppOnMac:(char)arg1 ;
-(char)installUniversalVariant;
-(void)setInstallUniversalVariant:(char)arg1 ;
-(char)isCompatibilityUpdate;
-(void)setIsCompatibilityUpdate:(char)arg1 ;
-(void)setIsRefresh:(char)arg1 ;
-(NSNumber *)ownerDSID;
-(void)setOwnerDSID:(NSNumber *)arg1 ;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(char)sendGUID;
-(void)setSendGUID:(char)arg1 ;
@end
