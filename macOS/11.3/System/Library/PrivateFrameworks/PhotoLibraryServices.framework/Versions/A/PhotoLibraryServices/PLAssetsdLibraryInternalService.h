/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdLibraryInternalServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdLibraryInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryInternalServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setWidgetTimelineGeneratedForDisplaySize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAssetCountsWithReply:(/*^block*/id)arg1 ;
-(void)reloadMomentGenerationOptions;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(SCD_Struct_PL33)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getLibrarySizesFromDB:(char)arg1 reply:(/*^block*/id)arg2 ;
-(void)getSizeOfResourcesToUploadByCPLWithReply:(/*^block*/id)arg1 ;
-(void)updateAssetLocationDataWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)repairMemoriesWithUUIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getSearchIndexProgressWithReply:(/*^block*/id)arg1 ;
-(void)waitForSearchIndexExistenceWithReply:(/*^block*/id)arg1 ;
-(void)applySearchIndexUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setAssetKeywords:(id)arg1 forAssetUUID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)invalidateReverseLocationDataOnAllAssetsWithReply:(/*^block*/id)arg1 ;
-(void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getBackgroundJobServiceStateWithReply:(/*^block*/id)arg1 ;
-(void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(/*^block*/id)arg1 ;
-(void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
-(void)invalidateBehavioralScoreOnAllAssetsWithReply:(/*^block*/id)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 ;
@end

