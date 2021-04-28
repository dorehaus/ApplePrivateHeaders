/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {

	NSNumber* _accountID;
	NSString* _appleID;
	NSString* _bundleID;
	NSNumber* _cloudMatchStatus;
	char _isRestore;
	NSMutableDictionary* _properties;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * cloudItemID; 
@property (nonatomic,retain) NSNumber * cloudMatchStatus; 
@property (nonatomic,copy) NSString * downloadKind; 
@property (nonatomic,copy) NSString * podcastEpisodeGUID; 
@property (nonatomic,copy) NSString * storeAccountAppleID; 
@property (nonatomic,retain) NSNumber * storeAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (nonatomic,retain) NSNumber * storeItemID; 
@property (nonatomic,copy) NSString * storeSoftwareVersionID; 
@property (nonatomic,copy) NSString * installPath; 
@property (assign,getter=isDRMFree,nonatomic) char DRMFree; 
@property (nonatomic,copy) NSString * storeFlavor; 
@property (nonatomic,copy) NSString * videoDimensions; 
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)videoDimensions;
-(NSString *)storeFrontID;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setVideoDimensions:(NSString *)arg1 ;
-(NSNumber *)storeItemID;
-(NSNumber *)storeAccountID;
-(void)setStoreAccountID:(NSNumber *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(id)_initSSRestoreContentItem;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(void)setValue:(id)arg1 forAssetProperty:(id)arg2 ;
-(char)isEligibleForRestore:(id*)arg1 ;
-(id)_restoreKeyForAssetProperty:(id)arg1 ;
-(id)_restoreKeyForDownloadProperty:(id)arg1 ;
-(void)setStoreAccountAppleID:(NSString *)arg1 ;
-(void)setCloudMatchStatus:(NSNumber *)arg1 ;
-(id)initWithRestoreDownload:(id)arg1 ;
-(NSNumber *)cloudItemID;
-(NSNumber *)cloudMatchStatus;
-(id)copyRestoreDictionary;
-(NSString *)downloadKind;
-(char)isDRMFree;
-(NSString *)podcastEpisodeGUID;
-(void)setCloudItemID:(NSNumber *)arg1 ;
-(void)setDownloadKind:(NSString *)arg1 ;
-(void)setDRMFree:(char)arg1 ;
-(void)setPodcastEpisodeGUID:(NSString *)arg1 ;
-(void)setStoreFlavor:(NSString *)arg1 ;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(void)setStoreSoftwareVersionID:(NSString *)arg1 ;
-(void)setInstallPath:(NSString *)arg1 ;
-(NSString *)storeAccountAppleID;
-(NSString *)storeFlavor;
-(NSString *)storeSoftwareVersionID;
-(NSString *)installPath;
@end

