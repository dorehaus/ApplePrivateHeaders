/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKAssetRepairSchedulerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class CKContainer, CKUploadRequestConfiguration, NSURL, NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet, NSSet;

@interface CKAssetRepairScheduler : NSObject {

	id<CKAssetRepairSchedulerDelegate> _delegate;
	CKContainer* _container;
	CKUploadRequestConfiguration* _repairContainerOverrides;
	NSURL* _temporaryAssetDirectory;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _requestOperationQueue;
	NSOperationQueue* _uploadOperationQueue;
	NSObject*<OS_dispatch_source> _uploadPendingRequestTimer;
	NSObject*<OS_dispatch_source> _uploadSuspensionTimer;
	NSMutableDictionary* _remainingAssetsToRequestCallbacks;
	NSMutableDictionary* _assetCache;
	NSMutableSet* _confirmedMissingAssets;
	NSMutableSet* _assetsBeingRequested;
	NSMutableSet* _assetsBeingUploaded;
	NSMutableDictionary* _retryCountForAssets;

}

@property (assign,nonatomic,__weak) CKContainer * container;                                       //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) CKUploadRequestConfiguration * repairContainerOverrides;                //@synthesize repairContainerOverrides=_repairContainerOverrides - In the implementation block
@property (nonatomic,copy) NSURL * temporaryAssetDirectory;                                        //@synthesize temporaryAssetDirectory=_temporaryAssetDirectory - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                           //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                           //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * requestOperationQueue;                             //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * uploadOperationQueue;                              //@synthesize uploadOperationQueue=_uploadOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> uploadPendingRequestTimer;              //@synthesize uploadPendingRequestTimer=_uploadPendingRequestTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> uploadSuspensionTimer;                  //@synthesize uploadSuspensionTimer=_uploadSuspensionTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remainingAssetsToRequestCallbacks;              //@synthesize remainingAssetsToRequestCallbacks=_remainingAssetsToRequestCallbacks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetCache;                                     //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,readonly) NSSet * remainingAssets; 
@property (nonatomic,readonly) NSSet * confirmedAvailableAssets; 
@property (nonatomic,retain) NSMutableSet * confirmedMissingAssets;                                //@synthesize confirmedMissingAssets=_confirmedMissingAssets - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetsBeingRequested;                                  //@synthesize assetsBeingRequested=_assetsBeingRequested - In the implementation block
@property (nonatomic,retain) NSMutableSet * assetsBeingUploaded;                                   //@synthesize assetsBeingUploaded=_assetsBeingUploaded - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryCountForAssets;                            //@synthesize retryCountForAssets=_retryCountForAssets - In the implementation block
@property (__weak) id<CKAssetRepairSchedulerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
+(double)requestTimeout;
+(long long)repairBatchSizeLimit;
+(long long)assetSizeEstimate;
+(id)nameForEvent:(long long)arg1 ;
+(long long)estimatedSizeForAssetOrPackage:(id)arg1 ;
+(long long)repairBatchCountLimit;
+(long long)cacheCountLimit;
+(long long)cacheSizeLimit;
+(double)defaultSuspensionTime;
+(long long)repairRetryCount;
+(long long)canCopyFromFileURL:(id)arg1 toDirectoryURL:(id)arg2 ;
+(long long)packageSizeEstimate;
+(unsigned long long)remainingCapacityAtURL:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)diskSpaceBuffer;
-(void)dealloc;
-(id<CKAssetRepairSchedulerDelegate>)delegate;
-(void)setDelegate:(id<CKAssetRepairSchedulerDelegate>)arg1 ;
-(CKContainer *)container;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)cancelAllOperations;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ;
-(CKUploadRequestConfiguration *)repairContainerOverrides;
-(void)setRepairContainerOverrides:(CKUploadRequestConfiguration *)arg1 ;
-(void)removeUploadRequestWithRecordID:(id)arg1 ;
-(char)hasPendingWork;
-(void)addUploadRequestsWithMetadata:(id)arg1 requestBlocks:(id)arg2 ;
-(void)clearAssetCache;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSOperationQueue *)uploadOperationQueue;
-(NSMutableDictionary *)remainingAssetsToRequestCallbacks;
-(void)tickle;
-(NSSet *)remainingAssets;
-(id)allRemainingRequestableAssets;
-(NSMutableDictionary *)retryCountForAssets;
-(NSMutableSet *)assetsBeingRequested;
-(NSOperationQueue *)requestOperationQueue;
-(NSMutableSet *)assetsBeingUploaded;
-(NSMutableDictionary *)assetCache;
-(void)respondToEvent:(long long)arg1 withObject:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)uploadPendingRequestTimer;
-(void)setUploadPendingRequestTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)allRemainingUploadableAssets;
-(unsigned long long)cacheSize;
-(unsigned long long)cacheCount;
-(void)scheduleRequestsWithMaxCount:(long long)arg1 ;
-(void)scheduleUploadBatch;
-(NSObject*<OS_dispatch_source>)uploadSuspensionTimer;
-(void)setUploadSuspensionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableSet *)confirmedMissingAssets;
-(void)scheduleClearAssetCache;
-(void)cacheAsset:(id)arg1 withMetadata:(id)arg2 ;
-(void)removeAssetFromCacheWithMetadata:(id)arg1 ;
-(NSURL *)temporaryAssetDirectory;
-(id)clonedAsset:(id)arg1 withError:(id*)arg2 ;
-(NSSet *)confirmedAvailableAssets;
-(void)setTemporaryAssetDirectory:(NSURL *)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequestOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setUploadOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setRemainingAssetsToRequestCallbacks:(NSMutableDictionary *)arg1 ;
-(void)setAssetCache:(NSMutableDictionary *)arg1 ;
-(void)setConfirmedMissingAssets:(NSMutableSet *)arg1 ;
-(void)setAssetsBeingRequested:(NSMutableSet *)arg1 ;
-(void)setAssetsBeingUploaded:(NSMutableSet *)arg1 ;
-(void)setRetryCountForAssets:(NSMutableDictionary *)arg1 ;
@end

