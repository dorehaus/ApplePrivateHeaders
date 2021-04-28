/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SSDownloadMetadata, SSDownloadStatus, NSNumber, NSString, NSURL;

@interface SSDownload : NSObject <NSSecureCoding> {

	char _needsPreInstallValidation;
	char _installAfterLogout;
	char _didAutoUpdate;
	char _skipAssetDownloadIfNotAlreadyOnDisk;
	char _needsDisplayInDock;
	char _isInServerQueue;
	NSArray* _assets;
	SSDownloadMetadata* _metadata;
	SSDownloadStatus* _status;
	unsigned long long _downloadType;
	NSNumber* _accountDSID;
	NSString* _cancelURLString;
	NSString* _installPath;
	NSURL* _relaunchAppWithBundleURL;

}

@property (nonatomic,copy) NSArray * assets;                              //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) SSDownloadMetadata * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) SSDownloadStatus * status;                   //@synthesize status=_status - In the implementation block
@property (assign) unsigned long long downloadType;                       //@synthesize downloadType=_downloadType - In the implementation block
@property (assign) char needsDisplayInDock;                               //@synthesize needsDisplayInDock=_needsDisplayInDock - In the implementation block
@property (assign) char isInServerQueue;                                  //@synthesize isInServerQueue=_isInServerQueue - In the implementation block
@property (assign) char installAfterLogout;                               //@synthesize installAfterLogout=_installAfterLogout - In the implementation block
@property (copy) NSNumber * accountDSID;                                  //@synthesize accountDSID=_accountDSID - In the implementation block
@property (copy) NSString * cancelURLString;                              //@synthesize cancelURLString=_cancelURLString - In the implementation block
@property (copy) NSString * customDownloadPath; 
@property (assign) char skipInstallPhase; 
@property (assign) char didAutoUpdate;                                    //@synthesize didAutoUpdate=_didAutoUpdate - In the implementation block
@property (copy) NSString * installPath;                                  //@synthesize installPath=_installPath - In the implementation block
@property (copy) NSURL * relaunchAppWithBundleURL;                        //@synthesize relaunchAppWithBundleURL=_relaunchAppWithBundleURL - In the implementation block
@property (assign) char skipAssetDownloadIfNotAlreadyOnDisk;              //@synthesize skipAssetDownloadIfNotAlreadyOnDisk=_skipAssetDownloadIfNotAlreadyOnDisk - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)resume;
-(void)pause;
-(SSDownloadStatus *)status;
-(void)cancel;
-(SSDownloadMetadata *)metadata;
-(void)setMetadata:(SSDownloadMetadata *)arg1 ;
-(void)setStatus:(SSDownloadStatus *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(void)setAccountDSID:(NSNumber *)arg1 ;
-(NSNumber *)accountDSID;
-(void)setInstallPath:(NSString *)arg1 ;
-(NSString *)installPath;
-(id)primaryAsset;
-(unsigned long long)downloadType;
-(NSString *)customDownloadPath;
-(void)setCustomDownloadPath:(NSString *)arg1 ;
-(void)setUseUniqueDownloadFolder:(char)arg1 ;
-(char)skipInstallPhase;
-(void)setSkipInstallPhase:(char)arg1 ;
-(id)initWithAssets:(id)arg1 metadata:(id)arg2 ;
-(void)setCancelURLString:(NSString *)arg1 ;
-(void)setIsInServerQueue:(char)arg1 ;
-(void)cancelWithPrompt:(char)arg1 storeClient:(id)arg2 ;
-(void)pauseWithStoreClient:(id)arg1 ;
-(void)resumeWithStoreClient:(id)arg1 ;
-(void)cancelWithPrompt:(char)arg1 ;
-(void)cancelWithStoreClient:(id)arg1 ;
-(void)setDownloadType:(unsigned long long)arg1 ;
-(char)installAfterLogout;
-(void)setInstallAfterLogout:(char)arg1 ;
-(NSString *)cancelURLString;
-(char)didAutoUpdate;
-(void)setDidAutoUpdate:(char)arg1 ;
-(NSURL *)relaunchAppWithBundleURL;
-(void)setRelaunchAppWithBundleURL:(NSURL *)arg1 ;
-(char)skipAssetDownloadIfNotAlreadyOnDisk;
-(void)setSkipAssetDownloadIfNotAlreadyOnDisk:(char)arg1 ;
-(char)needsDisplayInDock;
-(void)setNeedsDisplayInDock:(char)arg1 ;
-(char)isInServerQueue;
@end
