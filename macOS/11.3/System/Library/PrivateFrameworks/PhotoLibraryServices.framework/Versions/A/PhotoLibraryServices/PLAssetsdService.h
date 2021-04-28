/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdServiceProtocol.h>

@class PLAssetsdInnerService, NSXPCConnection, PLPhotoLibraryBundleController, PLPhotoLibraryBundle, PLPhotoLibrary, PLAssetsdConnectionAuthorization, PLAssetsdCPLResourceDownloader, NSURL, PLCacheMetricsCollectorServerShell, PLLibraryServicesManager, NSString;

@interface PLAssetsdService : NSObject <PLAssetsdServiceProtocol> {

	PLAssetsdInnerService* _innerLibraryService;
	PLAssetsdInnerService* _innerLibraryInternalService;
	PLAssetsdInnerService* _innerSystemLibraryURLReadOnlyService;
	PLAssetsdInnerService* _innerLibraryManagementService;
	PLAssetsdInnerService* _innerPhotoKitService;
	PLAssetsdInnerService* _innerPhotoKitAddService;
	PLAssetsdInnerService* _innerResourceAvailabilityService;
	PLAssetsdInnerService* _innerResourceService;
	PLAssetsdInnerService* _innerResourceWriteOnlyService;
	PLAssetsdInnerService* _innerResourceInternalService;
	PLAssetsdInnerService* _innerCloudService;
	PLAssetsdInnerService* _innerCloudInternalService;
	PLAssetsdInnerService* _innerMigrationService;
	PLAssetsdInnerService* _innerSyncService;
	PLAssetsdInnerService* _innerNotificationService;
	PLAssetsdInnerService* _innerDemoService;
	PLAssetsdInnerService* _innerDiagnosticsService;
	PLAssetsdInnerService* _innerDebugService;
	PLAssetsdInnerService* _innerPrivacySupportService;
	char _readyForDaemonJobs;
	NSXPCConnection* _connection;
	int _remotePID;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibrary* _photoLibrary;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLAssetsdCPLResourceDownloader* _resourceDownloader;
	NSURL* _libraryURL;
	PLCacheMetricsCollectorServerShell* _cacheMetricsShellObject;

}

@property (nonatomic,readonly) NSURL * libraryURL;                                                        //@synthesize libraryURL=_libraryURL - In the implementation block
@property (nonatomic,readonly) PLLibraryServicesManager * libraryServicesManager; 
@property (nonatomic,readonly) char isPhotosClient; 
@property (nonatomic,readonly) PLCacheMetricsCollectorServerShell * cacheMetricsShellObject;              //@synthesize cacheMetricsShellObject=_cacheMetricsShellObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSURL *)libraryURL;
-(id)_photoLibrary;
-(void)handleInterruption;
-(PLLibraryServicesManager *)libraryServicesManager;
-(void)getLibraryServiceWithReply:(/*^block*/id)arg1 ;
-(void)getLibraryInternalServiceWithReply:(/*^block*/id)arg1 ;
-(void)getSystemLibraryURLReadOnlyServiceWithReply:(/*^block*/id)arg1 ;
-(void)getLibraryManagementServiceWithReply:(/*^block*/id)arg1 ;
-(void)getPrivacySupportServiceWithReply:(/*^block*/id)arg1 ;
-(void)getPhotoKitServiceWithReply:(/*^block*/id)arg1 ;
-(void)getPhotoKitAddServiceWithReply:(/*^block*/id)arg1 ;
-(void)getResourceAvailabilityServiceWithReply:(/*^block*/id)arg1 ;
-(void)getResourceServiceWithReply:(/*^block*/id)arg1 ;
-(void)getResourceWriteOnlyServiceWithReply:(/*^block*/id)arg1 ;
-(void)getResourceInternalServiceWithReply:(/*^block*/id)arg1 ;
-(void)getCloudServiceWithReply:(/*^block*/id)arg1 ;
-(void)getCloudInternalServiceWithReply:(/*^block*/id)arg1 ;
-(void)getMigrationServiceWithReply:(/*^block*/id)arg1 ;
-(void)getSyncServiceWithReply:(/*^block*/id)arg1 ;
-(void)getNotificationServiceWithReply:(/*^block*/id)arg1 ;
-(void)getDemoServiceWithReply:(/*^block*/id)arg1 ;
-(void)getDiagnosticsServiceWithReply:(/*^block*/id)arg1 ;
-(void)getDebugServiceWithReply:(/*^block*/id)arg1 ;
-(void)runDaemonJob:(id)arg1 isSerial:(char)arg2 ;
-(void)runDaemonJob:(id)arg1 isSerial:(char)arg2 withReply:(/*^block*/id)arg3 ;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 clientOptions:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)handleInvalidation;
-(id)clientDebugDescription;
-(id)resourceDownloader;
-(char)isPhotosClient;
-(PLCacheMetricsCollectorServerShell *)cacheMetricsShellObject;
-(id)initWithConnection:(id)arg1 libraryBundleController:(id)arg2 ;
-(void)logStatus;
-(id)serviceContextWithSelector:(SEL)arg1 ;
-(long long)requiredStateForLibraryService;
-(id)permissionsForLibraryService;
-(id)newLibraryService;
-(long long)requiredStateForLibraryInternalService;
-(id)permissionsForLibraryInternalService;
-(id)newLibraryInternalService;
-(long long)requiredStateForSystemLibraryURLReadOnlyService;
-(id)permissionsForSystemLibraryURLReadOnlyService;
-(id)newSystemLibraryURLReadOnlyService;
-(long long)requiredStateForPrivacySupportService;
-(id)permissionsForPrivacySupportService;
-(id)newPrivacySupportService;
-(long long)requiredStateForLibraryManagementService;
-(id)permissionsForLibraryManagementService;
-(id)newLibraryManagementService;
-(long long)requiredStateForPhotoKitService;
-(id)permissionsForPhotoKitService;
-(id)newPhotoKitService;
-(long long)requiredStateForPhotoKitAddService;
-(id)permissionsForPhotoKitAddService;
-(id)newPhotoKitAddService;
-(long long)requiredStateForResourceAvailabilityService;
-(id)permissionsForResourceAvailabilityService;
-(id)newResourceAvailabilityService;
-(long long)requiredStateForResourceService;
-(id)permissionsForResourceService;
-(id)newResourceService;
-(long long)requiredStateForResourceWriteOnlyService;
-(id)permissionsForResourceWriteOnlyService;
-(id)newResourceWriteOnlyService;
-(long long)requiredStateForResourceInternalService;
-(id)permissionsForResourceInternalService;
-(id)newResourceInternalService;
-(long long)requiredStateForCloudService;
-(id)permissionsForCloudService;
-(id)newCloudService;
-(long long)requiredStateForCloudInternalService;
-(id)permissionsForCloudInternalService;
-(id)newCloudInternalService;
-(long long)requiredStateForMigrationService;
-(id)permissionsForMigrationService;
-(id)newMigrationService;
-(long long)requiredStateForSyncService;
-(id)permissionsForSyncService;
-(id)newSyncService;
-(long long)requiredStateForNotificationService;
-(id)permissionsForNotificationService;
-(id)newNotificationService;
-(long long)requiredStateForDemoService;
-(id)permissionsForDemoService;
-(id)newDemoService;
-(long long)requiredStateForDiagnosticsService;
-(id)permissionsForDiagnosticsService;
-(id)newDiagnosticsService;
-(long long)requiredStateForDebugService;
-(id)permissionsForDebugService;
-(id)newDebugService;
-(id)_waitForLibraryServicesForDaemonJob;
-(char)_prepareToRunDaemonJob:(id)arg1 error:(id*)arg2 ;
-(void)invalidateConnectionWithReason:(id)arg1 ;
@end

