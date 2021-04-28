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

@class NSData, NSArray, NSNumber, NSString, NSDate, NSDictionary;

@interface ASDJobActivity : NSObject <NSCopying, NSSecureCoding> {

	char _cancelIfDuplicate;
	char _explicitContent;
	char _hasMessagesExtension;
	char _hasWatchApp;
	char _isAutomatic;
	char _isCompatibilityUpdate;
	char _isDeviceBasedVPP;
	char _isGameCenterEnabled;
	char _isInQueue;
	char _isFromStore;
	char _isPurchasedRedownload;
	char _isPendingApproval;
	char _isRestore;
	char _isShared;
	char _isTVTemplate;
	char _isUpdate;
	char _launchProhibited;
	char _softwareIconNeedsShine;
	char _thirtyTwoBitOnly;
	NSData* _appReceiptData;
	NSArray* _assets;
	NSNumber* _artistID;
	NSString* _artistName;
	NSNumber* _betaExternalVersionIdentifier;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _buyParams;
	NSString* _cancelDownloadURL;
	NSString* _clientID;
	NSString* _collectionName;
	NSNumber* _divertedTrackingID;
	NSNumber* _enableExtensions;
	NSNumber* _externalOrderKey;
	NSString* _genre;
	NSNumber* _genreID;
	NSNumber* _itemID;
	NSString* _kind;
	NSString* _messagesArtworkURL;
	NSDate* _purchaseDate;
	NSNumber* _purchaseID;
	NSString* _ratingLabel;
	NSNumber* _ratingRank;
	NSDate* _releaseDate;
	NSNumber* _storeAccountID;
	NSString* _storeAccountName;
	NSString* _storeCorrelationKey;
	NSDictionary* _storeDownloadInfo;
	NSString* _storeDownloadKey;
	NSString* _storefront;
	NSString* _storeTransactionID;
	NSNumber* _softwareVersionExternalIdentifier;
	NSString* _storeCohort;
	NSString* _thumbnailURL;
	NSString* _title;
	NSString* _variantID;
	NSNumber* _iAdAttribution;
	NSDate* _iAdConversionDate;
	NSDate* _iAdImpressionDate;
	NSNumber* _persistentID;

}

@property (nonatomic,copy) NSData * appReceiptData;                                   //@synthesize appReceiptData=_appReceiptData - In the implementation block
@property (nonatomic,copy) NSArray * assets;                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) NSNumber * artistID;                                       //@synthesize artistID=_artistID - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                     //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * betaExternalVersionIdentifier;                  //@synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                  //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * buyParams;                                      //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * cancelDownloadURL;                              //@synthesize cancelDownloadURL=_cancelDownloadURL - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) char cancelIfDuplicate;                                  //@synthesize cancelIfDuplicate=_cancelIfDuplicate - In the implementation block
@property (nonatomic,copy) NSString * collectionName;                                 //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy) NSNumber * divertedTrackingID;                             //@synthesize divertedTrackingID=_divertedTrackingID - In the implementation block
@property (nonatomic,copy) NSNumber * enableExtensions;                               //@synthesize enableExtensions=_enableExtensions - In the implementation block
@property (assign,nonatomic) char explicitContent;                                    //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSNumber * externalOrderKey;                               //@synthesize externalOrderKey=_externalOrderKey - In the implementation block
@property (nonatomic,copy) NSString * genre;                                          //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSNumber * genreID;                                        //@synthesize genreID=_genreID - In the implementation block
@property (assign,nonatomic) char hasMessagesExtension;                               //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (assign,nonatomic) char hasWatchApp;                                        //@synthesize hasWatchApp=_hasWatchApp - In the implementation block
@property (assign,nonatomic) char isAutomatic;                                        //@synthesize isAutomatic=_isAutomatic - In the implementation block
@property (assign,nonatomic) char isCompatibilityUpdate;                              //@synthesize isCompatibilityUpdate=_isCompatibilityUpdate - In the implementation block
@property (assign,nonatomic) char isDeviceBasedVPP;                                   //@synthesize isDeviceBasedVPP=_isDeviceBasedVPP - In the implementation block
@property (assign,nonatomic) char isGameCenterEnabled;                                //@synthesize isGameCenterEnabled=_isGameCenterEnabled - In the implementation block
@property (assign,nonatomic) char isInQueue;                                          //@synthesize isInQueue=_isInQueue - In the implementation block
@property (assign,nonatomic) char isFromStore;                                        //@synthesize isFromStore=_isFromStore - In the implementation block
@property (assign,nonatomic) char isPurchasedRedownload;                              //@synthesize isPurchasedRedownload=_isPurchasedRedownload - In the implementation block
@property (assign,nonatomic) char isPendingApproval;                                  //@synthesize isPendingApproval=_isPendingApproval - In the implementation block
@property (assign,nonatomic) char isRestore;                                          //@synthesize isRestore=_isRestore - In the implementation block
@property (assign,nonatomic) char isShared;                                           //@synthesize isShared=_isShared - In the implementation block
@property (assign,nonatomic) char isTVTemplate;                                       //@synthesize isTVTemplate=_isTVTemplate - In the implementation block
@property (assign,nonatomic) char isUpdate;                                           //@synthesize isUpdate=_isUpdate - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                         //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * kind;                                           //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) char launchProhibited;                                   //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (nonatomic,copy) NSString * messagesArtworkURL;                             //@synthesize messagesArtworkURL=_messagesArtworkURL - In the implementation block
@property (nonatomic,copy) NSDate * purchaseDate;                                     //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseID;                                     //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                    //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,copy) NSNumber * ratingRank;                                     //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,copy) NSDate * releaseDate;                                      //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) NSNumber * storeAccountID;                                 //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeAccountName;                               //@synthesize storeAccountName=_storeAccountName - In the implementation block
@property (nonatomic,copy) NSString * storeCorrelationKey;                            //@synthesize storeCorrelationKey=_storeCorrelationKey - In the implementation block
@property (nonatomic,copy) NSDictionary * storeDownloadInfo;                          //@synthesize storeDownloadInfo=_storeDownloadInfo - In the implementation block
@property (nonatomic,copy) NSString * storeDownloadKey;                               //@synthesize storeDownloadKey=_storeDownloadKey - In the implementation block
@property (nonatomic,copy) NSString * storefront;                                     //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,copy) NSString * storeTransactionID;                             //@synthesize storeTransactionID=_storeTransactionID - In the implementation block
@property (assign,nonatomic) char softwareIconNeedsShine;                             //@synthesize softwareIconNeedsShine=_softwareIconNeedsShine - In the implementation block
@property (nonatomic,copy) NSNumber * softwareVersionExternalIdentifier;              //@synthesize softwareVersionExternalIdentifier=_softwareVersionExternalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeCohort;                                    //@synthesize storeCohort=_storeCohort - In the implementation block
@property (nonatomic,copy) NSString * thumbnailURL;                                   //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (getter=is32BitOnly) char thirtyTwoBitOnly;                                 //@synthesize thirtyTwoBitOnly=_thirtyTwoBitOnly - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                      //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSNumber * iAdAttribution;                                 //@synthesize iAdAttribution=_iAdAttribution - In the implementation block
@property (nonatomic,copy) NSDate * iAdConversionDate;                                //@synthesize iAdConversionDate=_iAdConversionDate - In the implementation block
@property (nonatomic,copy) NSDate * iAdImpressionDate;                                //@synthesize iAdImpressionDate=_iAdImpressionDate - In the implementation block
@property (nonatomic,readonly) NSNumber * persistentID;                               //@synthesize persistentID=_persistentID - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSString *)storefront;
-(NSString *)ratingLabel;
-(NSNumber *)ratingRank;
-(char)isUpdate;
-(NSString *)genre;
-(NSNumber *)genreID;
-(NSNumber *)betaExternalVersionIdentifier;
-(char)isDeviceBasedVPP;
-(char)isGameCenterEnabled;
-(char)launchProhibited;
-(NSString *)bundleVersion;
-(NSString *)artistName;
-(NSString *)storeCohort;
-(NSString *)variantID;
-(char)isPurchasedRedownload;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)kind;
-(NSString *)title;
-(void)setKind:(NSString *)arg1 ;
-(NSNumber *)persistentID;
-(char)isShared;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(void)setIsUpdate:(char)arg1 ;
-(void)setThumbnailURL:(NSString *)arg1 ;
-(NSString *)thumbnailURL;
-(void)setGenre:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setStorefront:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(char)explicitContent;
-(void)setExplicitContent:(char)arg1 ;
-(NSDate *)purchaseDate;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(char)isAutomatic;
-(NSNumber *)artistID;
-(void)setArtistID:(NSNumber *)arg1 ;
-(void)setIsDeviceBasedVPP:(char)arg1 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)collectionName;
-(NSString *)cancelDownloadURL;
-(NSNumber *)storeAccountID;
-(void)setStoreAccountID:(NSNumber *)arg1 ;
-(void)setRatingRank:(NSNumber *)arg1 ;
-(void)setGenreID:(NSNumber *)arg1 ;
-(void)setIAdAttribution:(NSNumber *)arg1 ;
-(void)setIAdConversionDate:(NSDate *)arg1 ;
-(void)setIAdImpressionDate:(NSDate *)arg1 ;
-(void)setBetaExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setHasMessagesExtension:(char)arg1 ;
-(void)setLaunchProhibited:(char)arg1 ;
-(void)setSoftwareVersionExternalIdentifier:(NSNumber *)arg1 ;
-(void)setStoreCohort:(NSString *)arg1 ;
-(void)setVariantID:(NSString *)arg1 ;
-(NSNumber *)iAdAttribution;
-(NSDate *)iAdConversionDate;
-(NSDate *)iAdImpressionDate;
-(char)hasMessagesExtension;
-(NSNumber *)softwareVersionExternalIdentifier;
-(void)setCollectionName:(NSString *)arg1 ;
-(NSString *)storeAccountName;
-(NSString *)messagesArtworkURL;
-(void)setMessagesArtworkURL:(NSString *)arg1 ;
-(NSNumber *)purchaseID;
-(void)setPurchaseID:(NSNumber *)arg1 ;
-(char)isCompatibilityUpdate;
-(void)setIsCompatibilityUpdate:(char)arg1 ;
-(NSNumber *)externalOrderKey;
-(char)is32BitOnly;
-(NSString *)storeDownloadKey;
-(void)setStoreDownloadKey:(NSString *)arg1 ;
-(NSData *)appReceiptData;
-(void)setAppReceiptData:(NSData *)arg1 ;
-(void)setCancelDownloadURL:(NSString *)arg1 ;
-(char)cancelIfDuplicate;
-(void)setCancelIfDuplicate:(char)arg1 ;
-(NSNumber *)divertedTrackingID;
-(void)setDivertedTrackingID:(NSNumber *)arg1 ;
-(NSNumber *)enableExtensions;
-(void)setEnableExtensions:(NSNumber *)arg1 ;
-(void)setExternalOrderKey:(NSNumber *)arg1 ;
-(char)hasWatchApp;
-(void)setHasWatchApp:(char)arg1 ;
-(void)setIsAutomatic:(char)arg1 ;
-(void)setIsGameCenterEnabled:(char)arg1 ;
-(char)isInQueue;
-(void)setIsInQueue:(char)arg1 ;
-(char)isFromStore;
-(void)setIsFromStore:(char)arg1 ;
-(void)setIsPurchasedRedownload:(char)arg1 ;
-(char)isPendingApproval;
-(void)setIsPendingApproval:(char)arg1 ;
-(char)isRestore;
-(void)setIsRestore:(char)arg1 ;
-(void)setIsShared:(char)arg1 ;
-(char)isTVTemplate;
-(void)setIsTVTemplate:(char)arg1 ;
-(void)setStoreAccountName:(NSString *)arg1 ;
-(NSString *)storeCorrelationKey;
-(void)setStoreCorrelationKey:(NSString *)arg1 ;
-(NSDictionary *)storeDownloadInfo;
-(void)setStoreDownloadInfo:(NSDictionary *)arg1 ;
-(NSString *)storeTransactionID;
-(void)setStoreTransactionID:(NSString *)arg1 ;
-(char)softwareIconNeedsShine;
-(void)setSoftwareIconNeedsShine:(char)arg1 ;
-(void)setThirtyTwoBitOnly:(char)arg1 ;
@end
