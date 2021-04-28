/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAssetsdDebugServiceProtocol <NSObject>
@required
-(void)statusWithReply:(/*^block*/id)arg1;
-(void)identifyAssetsWithInconsistentCloudState;
-(void)recoverAssetsInInconsistentCloudState;
-(void)resetDupesAnalysis;
-(void)rebuildAllThumbnails;
-(void)clearPrefetchState;
-(void)enqueuePrefetch;
-(void)updateSiriVocabulary;
-(void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)arg1 minimumFormat:(unsigned short)arg2 reply:(/*^block*/id)arg3;
-(void)momentGenerationStatusWithReply:(/*^block*/id)arg1;
-(void)rebuildMomentsDeletingExistingMoments:(char)arg1 reply:(/*^block*/id)arg2;
-(void)rebuildHighlightsDeletingExistingHighlights:(char)arg1 reply:(/*^block*/id)arg2;
-(void)dumpMetadataForMomentsToPath:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dumpMomentsMetadataToPath:(id)arg1 reply:(/*^block*/id)arg2;
-(void)deferredLogDumpWithFormat:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dropSearchIndexWithReply:(/*^block*/id)arg1;
-(void)setSearchIndexPaused:(char)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3;
-(void)rebuildSearchIndexWithReply:(/*^block*/id)arg1;
-(void)rebuildCloudFeedWithReply:(/*^block*/id)arg1;
-(void)getXPCTransactionStatusWithReply:(/*^block*/id)arg1;
-(void)getCPLStateWithReply:(/*^block*/id)arg1;
-(void)revertToOriginalWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)debugSidecarURLsWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)pruneAssetsWithUUID:(id)arg1 resourceTypes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)prefetchResourcesForMemories:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prefetchResourcesForHighlights:(id)arg1 reply:(/*^block*/id)arg2;
-(void)prefetchResourcesWithMode:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)processRecentHighlightsWithReply:(/*^block*/id)arg1;
-(void)processUnprocessedMomentLocationsWithReply:(/*^block*/id)arg1;
-(void)updateHighlightTitlesWithReply:(/*^block*/id)arg1;
-(void)cleanupEmptyHighlightsWithReply:(/*^block*/id)arg1;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(/*^block*/id)arg1;
-(void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(char)arg3 reply:(/*^block*/id)arg4;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 reply:(/*^block*/id)arg3;

@end

