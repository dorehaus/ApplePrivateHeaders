/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, NSURL;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding> {

	char _familyShared;
	char _firstParty;
	char _hasMessagesExtension;
	char _hasP3;
	char _hidden;
	char _hiddenFromSpringboard;
	char _is32BitOnly;
	char _isPreorder;
	char _isIOSBinaryMacOSAvailable;
	char _isIOSBinaryMacOSCompatible;
	char _isVerifiedForMacOS;
	char _requiresRosetta;
	char _runsOnIntel;
	char _runsOnAppleSilicon;
	char _supportsIPad;
	char _supportsIPhone;
	char _supportsLayeredImage;
	char _supportsMac;
	char _watchAppDeliveredIniOSApp;
	char _watchAppRunsIndependently;
	char _watchOnly;
	unsigned _mediaKind;
	unsigned _purchaseToken;
	NSString* _bundleID;
	NSString* _circularIconURLString;
	long long _contentRatingFlags;
	NSDate* _datePurchased;
	NSString* _developerName;
	long long _genreID;
	NSString* _genreName;
	NSString* _iconURLString;
	NSString* _longTitle;
	NSArray* _macAppRequiredCapabilities;
	NSString* _ovalIconURLString;
	NSURL* _preflightPackageURL;
	NSURL* _productURL;
	long long _purchaserDSID;
	NSString* _redownloadParams;
	NSArray* _requiredCapabilities;
	long long _storeItemID;
	NSString* _title;
	unsigned long long _lockerItemID;

}

@property (copy) NSString * bundleID;                                               //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * circularIconURLString;                                  //@synthesize circularIconURLString=_circularIconURLString - In the implementation block
@property (assign) long long contentRatingFlags;                                    //@synthesize contentRatingFlags=_contentRatingFlags - In the implementation block
@property (copy) NSDate * datePurchased;                                            //@synthesize datePurchased=_datePurchased - In the implementation block
@property (copy) NSString * developerName;                                          //@synthesize developerName=_developerName - In the implementation block
@property (getter=isFamilyShared) char familyShared;                                //@synthesize familyShared=_familyShared - In the implementation block
@property (getter=isFirstParty) char firstParty;                                    //@synthesize firstParty=_firstParty - In the implementation block
@property (assign) long long genreID;                                               //@synthesize genreID=_genreID - In the implementation block
@property (copy) NSString * genreName;                                              //@synthesize genreName=_genreName - In the implementation block
@property (assign) char hasMessagesExtension;                                       //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (assign) char hasP3;                                                      //@synthesize hasP3=_hasP3 - In the implementation block
@property (getter=isHidden) char hidden;                                            //@synthesize hidden=_hidden - In the implementation block
@property (getter=isHiddenFromSpringboard) char hiddenFromSpringboard;              //@synthesize hiddenFromSpringboard=_hiddenFromSpringboard - In the implementation block
@property (copy) NSString * iconURLString;                                          //@synthesize iconURLString=_iconURLString - In the implementation block
@property (assign) char is32BitOnly;                                                //@synthesize is32BitOnly=_is32BitOnly - In the implementation block
@property (assign) char isPreorder;                                                 //@synthesize isPreorder=_isPreorder - In the implementation block
@property (copy) NSString * longTitle;                                              //@synthesize longTitle=_longTitle - In the implementation block
@property (copy) NSArray * macAppRequiredCapabilities;                              //@synthesize macAppRequiredCapabilities=_macAppRequiredCapabilities - In the implementation block
@property (assign) unsigned mediaKind;                                              //@synthesize mediaKind=_mediaKind - In the implementation block
@property (assign) char isIOSBinaryMacOSAvailable;                                  //@synthesize isIOSBinaryMacOSAvailable=_isIOSBinaryMacOSAvailable - In the implementation block
@property (assign) char isIOSBinaryMacOSCompatible;                                 //@synthesize isIOSBinaryMacOSCompatible=_isIOSBinaryMacOSCompatible - In the implementation block
@property (assign) char isVerifiedForMacOS;                                         //@synthesize isVerifiedForMacOS=_isVerifiedForMacOS - In the implementation block
@property (assign) char runsOnIntel;                                                //@synthesize runsOnIntel=_runsOnIntel - In the implementation block
@property (assign) char runsOnAppleSilicon;                                         //@synthesize runsOnAppleSilicon=_runsOnAppleSilicon - In the implementation block
@property (assign) char requiresRosetta;                                            //@synthesize requiresRosetta=_requiresRosetta - In the implementation block
@property (copy) NSString * ovalIconURLString;                                      //@synthesize ovalIconURLString=_ovalIconURLString - In the implementation block
@property (copy) NSURL * preflightPackageURL;                                       //@synthesize preflightPackageURL=_preflightPackageURL - In the implementation block
@property (copy) NSURL * productURL;                                                //@synthesize productURL=_productURL - In the implementation block
@property (assign) long long purchaserDSID;                                         //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (copy) NSString * redownloadParams;                                       //@synthesize redownloadParams=_redownloadParams - In the implementation block
@property (copy) NSArray * requiredCapabilities;                                    //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (assign) long long storeItemID;                                           //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign) char supportsIPad;                                               //@synthesize supportsIPad=_supportsIPad - In the implementation block
@property (assign) char supportsIPhone;                                             //@synthesize supportsIPhone=_supportsIPhone - In the implementation block
@property (assign) char supportsLayeredImage;                                       //@synthesize supportsLayeredImage=_supportsLayeredImage - In the implementation block
@property (assign) char supportsMac;                                                //@synthesize supportsMac=_supportsMac - In the implementation block
@property (copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (assign) char watchAppDeliveredIniOSApp;                                  //@synthesize watchAppDeliveredIniOSApp=_watchAppDeliveredIniOSApp - In the implementation block
@property (assign) char watchAppRunsIndependently;                                  //@synthesize watchAppRunsIndependently=_watchAppRunsIndependently - In the implementation block
@property (assign) char watchOnly;                                                  //@synthesize watchOnly=_watchOnly - In the implementation block
@property (assign) unsigned purchaseToken;                                          //@synthesize purchaseToken=_purchaseToken - In the implementation block
@property (assign) unsigned long long lockerItemID;                                 //@synthesize lockerItemID=_lockerItemID - In the implementation block
@property (readonly) char hasAnyMacOSCompatibleIOSVersion; 
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(long long)purchaserDSID;
-(long long)genreID;
-(char)watchOnly;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setDeveloperName:(NSString *)arg1 ;
-(NSString *)developerName;
-(char)isFirstParty;
-(NSString *)iconURLString;
-(NSArray *)requiredCapabilities;
-(NSDate *)datePurchased;
-(void)setDatePurchased:(NSDate *)arg1 ;
-(void)setFirstParty:(char)arg1 ;
-(NSString *)genreName;
-(char)isPreorder;
-(unsigned)mediaKind;
-(long long)storeItemID;
-(void)setGenreName:(NSString *)arg1 ;
-(void)setIsPreorder:(char)arg1 ;
-(void)setStoreItemID:(long long)arg1 ;
-(void)setGenreID:(long long)arg1 ;
-(void)setHasMessagesExtension:(char)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(char)hasMessagesExtension;
-(NSString *)redownloadParams;
-(NSURL *)preflightPackageURL;
-(void)setPreflightPackageURL:(NSURL *)arg1 ;
-(char)isIOSBinaryMacOSCompatible;
-(void)setIsIOSBinaryMacOSCompatible:(char)arg1 ;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(void)setPurchaserDSID:(long long)arg1 ;
-(char)requiresRosetta;
-(char)runsOnIntel;
-(char)runsOnAppleSilicon;
-(char)isFamilyShared;
-(void)setRunsOnAppleSilicon:(char)arg1 ;
-(void)setRunsOnIntel:(char)arg1 ;
-(NSString *)circularIconURLString;
-(long long)contentRatingFlags;
-(char)isHiddenFromSpringboard;
-(char)is32BitOnly;
-(NSString *)longTitle;
-(NSString *)ovalIconURLString;
-(NSURL *)productURL;
-(NSArray *)macAppRequiredCapabilities;
-(char)isVerifiedForMacOS;
-(char)supportsIPad;
-(char)supportsIPhone;
-(char)watchAppDeliveredIniOSApp;
-(char)watchAppRunsIndependently;
-(char)supportsLayeredImage;
-(char)hasP3;
-(char)isIOSBinaryMacOSAvailable;
-(int)_bitfieldForBooleanProperties;
-(void)_setBooleanPropertiesForBitfield:(int)arg1 ;
-(char)hasAnyMacOSCompatibleIOSVersion;
-(void)setCircularIconURLString:(NSString *)arg1 ;
-(void)setContentRatingFlags:(long long)arg1 ;
-(void)setFamilyShared:(char)arg1 ;
-(void)setHasP3:(char)arg1 ;
-(void)setHiddenFromSpringboard:(char)arg1 ;
-(void)setIconURLString:(NSString *)arg1 ;
-(void)setIs32BitOnly:(char)arg1 ;
-(void)setIsIOSBinaryMacOSAvailable:(char)arg1 ;
-(void)setIsVerifiedForMacOS:(char)arg1 ;
-(void)setLongTitle:(NSString *)arg1 ;
-(void)setMacAppRequiredCapabilities:(NSArray *)arg1 ;
-(void)setMediaKind:(unsigned)arg1 ;
-(void)setRequiresRosetta:(char)arg1 ;
-(void)setOvalIconURLString:(NSString *)arg1 ;
-(void)setProductURL:(NSURL *)arg1 ;
-(void)setSupportsIPad:(char)arg1 ;
-(void)setSupportsIPhone:(char)arg1 ;
-(void)setSupportsLayeredImage:(char)arg1 ;
-(char)supportsMac;
-(void)setSupportsMac:(char)arg1 ;
-(void)setWatchAppDeliveredIniOSApp:(char)arg1 ;
-(void)setWatchAppRunsIndependently:(char)arg1 ;
-(void)setWatchOnly:(char)arg1 ;
-(unsigned)purchaseToken;
-(void)setPurchaseToken:(unsigned)arg1 ;
-(unsigned long long)lockerItemID;
-(void)setLockerItemID:(unsigned long long)arg1 ;
@end

