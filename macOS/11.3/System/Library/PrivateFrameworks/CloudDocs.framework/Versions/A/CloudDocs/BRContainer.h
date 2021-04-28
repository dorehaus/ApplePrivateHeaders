/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class BRMangledID, NSSet, NSDictionary, NSString, NSNumber, NSDate, NSData, NSPurgeableData, NSObject, NSURL;

@interface BRContainer : NSObject <NSSecureCoding> {

	BRMangledID* _mangledID;
	NSSet* _bundleIDs;
	NSDictionary* _bundleIDVersions;
	NSString* _localizedName;
	NSSet* _documentsTypes;
	NSSet* _exportedTypes;
	NSSet* _importedTypes;
	NSDictionary* _iconMetadata;
	NSDictionary* _iconURLs;
	NSNumber* _iconGeneratorVersion;
	char _isObservingOverQuota;
	char _isOverQuota;
	char _isCloudSyncTCCDisabled;
	char _isInInitialState;
	char _isInCloudDocsZone;
	NSNumber* _isDocumentScopePublicAsNumber;
	char _isObservingLastServerUpdate;
	NSDate* _lastServerUpdate;
	char _isObservingCurrentStatus;
	unsigned _currentStatus;
	NSData* _imageSandboxExtension;
	char _shouldUsePurgeableData;
	NSData* _dataRepresentation;
	NSPurgeableData* _purgeableDataRepresentation;
	NSObject*<OS_dispatch_queue> _observationSetupQueueForDefaultConnection;
	NSObject*<OS_dispatch_queue> _observationSetupQueueForSecondaryConnection;

}

@property (readonly) NSDate * lastServerUpdate; 
@property (readonly) unsigned currentStatus; 
@property (retain) NSDate * lastServerUpdate; 
@property (assign) unsigned currentStatus; 
@property (getter=isOverQuota,readonly) char overQuota; 
@property (getter=isOverQuota) char overQuota; 
@property (assign,nonatomic) char isCloudSyncTCCDisabled;                     //@synthesize isCloudSyncTCCDisabled=_isCloudSyncTCCDisabled - In the implementation block
@property (assign,nonatomic) char isInInitialState;                           //@synthesize isInInitialState=_isInInitialState - In the implementation block
@property (assign,nonatomic) char isInCloudDocsZone;                          //@synthesize isInCloudDocsZone=_isInCloudDocsZone - In the implementation block
@property (nonatomic,copy,readonly) NSSet * bundleIdentifiers; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) char isDocumentScopePublic; 
@property (nonatomic,readonly) NSString * supportedFolderLevels; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURL * documentsURL; 
@property (nonatomic,readonly) NSURL * trashURL; 
@property (nonatomic,readonly) NSSet * documentsTypes; 
@property (nonatomic,readonly) NSSet * exportedTypes; 
@property (nonatomic,readonly) NSSet * importedTypes; 
+(void)initialize;
+(char)supportsSecureCoding;
+(char)canMoveFilesWithoutDownloadingFromContainer:(id)arg1 toContainer:(id)arg2 ;
+(id)documentContainers;
+(id)documentsContainersInBackupHomeAtURL:(id)arg1 error:(id*)arg2 ;
+(id)allContainersByContainerID;
+(char)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2 ;
+(id)containerForMangledID:(id)arg1 ;
+(id)classesForDecoding;
+(id)localizedNameForDefaultCloudDocsContainer;
+(id)localizedNameForDesktopContainer;
+(id)localizedNameForDocumentsContainer;
+(id)allContainers;
+(id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)_bundleIDVersionsWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)_bundleIDsWithProperties:(id)arg1 ;
+(id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2 preferredLanguages:(id)arg3 ;
+(id)_documentsTypesWithProperties:(id)arg1 ;
+(id)_exportedTypesWithProperties:(id)arg1 ;
+(id)_importedTypesWithProperties:(id)arg1 ;
+(id)_iconMetadataWithProperties:(id)arg1 ;
+(id)_iconGeneratorVersionWithProperties:(id)arg1 ;
+(id)allContainersBlockIfNeeded:(char)arg1 ;
+(void)forceRefreshContainers:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)postContainerListUpdateNotification;
+(id)_containerRepositoryURLForMangledID:(id)arg1 ;
+(id)containersRepositoryURL;
+(id)_URLForPlistOfMangledID:(id)arg1 ;
+(id)bundleIdentifiersEnumeratorForProperties:(id)arg1 ;
+(id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3 ;
+(id)_sanitizedContainerFallbackNameForMangledID:(id)arg1 ;
+(id)_pathForIconName:(id)arg1 mangledID:(id)arg2 ;
+(void)forceRefreshAllContainersWithCompletion:(/*^block*/id)arg1 ;
+(id)_iconURLsWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)containerInRepositoryURL:(id)arg1 createIfMissing:(char)arg2 error:(id*)arg3 ;
+(id)containerInRepositoryURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForItemAtURL:(id)arg1 error:(id*)arg2 ;
+(void)_generateOSXIconsForMangledID:(id)arg1 usingBundle:(CFBundleRef)arg2 generatedIcons:(id)arg3 ;
+(char)isDocumentScopePublicWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3 ;
+(id)propertiesForMangledID:(id)arg1 usingBundle:(CFBundleRef)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4 ;
+(void)unregisterCurrentProcessAsPriorityHint;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSSet *)importedTypes;
-(NSSet *)exportedTypes;
-(NSString *)localizedName;
-(NSURL *)url;
-(id)icon;
-(unsigned)currentStatus;
-(id)shortDescription;
-(NSURL *)trashURL;
-(NSURL *)documentsURL;
-(char)isInInitialState;
-(NSDate *)lastServerUpdate;
-(char)isDocumentScopePublic;
-(NSSet *)bundleIdentifiers;
-(id)imageRepresentationsAvailable;
-(id)trashRestoreStringForURL:(id)arg1 ;
-(id)localizedNameWithPreferredLanguages:(id)arg1 ;
-(char)containsExcludedDocumentsOnTheFSWithExcludedButPreservedFilename:(id)arg1 excludedButPreservedExtensions:(id)arg2 andStampUploadedAppWithXattr:(char)arg3 ;
-(id)initWithMangledID:(id)arg1 ;
-(void)_replaceDataRepresentationWithData:(id)arg1 ;
-(id)_pathForPlist;
-(void)accessDataRepresentationInBlock:(/*^block*/id)arg1 ;
-(id)_containerRepositoryURL;
-(void)accessPropertiesInBlock:(/*^block*/id)arg1 ;
-(id)computedProperties;
-(id)iconMetadata;
-(id)_imageDataForSize:(CGSize)arg1 scale:(long long)arg2 isiOSIcon:(char*)arg3 shouldTransformToAppIcon:(char*)arg4 ;
-(id)_pathForIconName:(id)arg1 ;
-(id)iconGeneratorVersion;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 ;
-(void)_performWhileAccessingSecurityScopedContainer:(/*^block*/id)arg1 ;
-(char)isInCloudDocsZone;
-(id)initWithDocsOrDesktopContainerID:(id)arg1 ;
-(id)initWithMangledID:(id)arg1 dataRepresentation:(id)arg2 ;
-(id)bundleIDVersions;
-(NSString *)supportedFolderLevels;
-(NSSet *)documentsTypes;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 isiOSIcon:(char*)arg3 ;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 shouldTransformToAppIcon:(char*)arg3 ;
-(void)forceRefreshWithCompletion:(/*^block*/id)arg1 ;
-(char)isCloudSyncTCCDisabled;
-(void)setIsCloudSyncTCCDisabled:(char)arg1 ;
-(void)setIsInInitialState:(char)arg1 ;
-(void)setIsInCloudDocsZone:(char)arg1 ;
-(void)setLastServerUpdate:(NSDate *)arg1 ;
-(void)setCurrentStatus:(unsigned)arg1 ;
-(void)setOverQuota:(char)arg1 ;
-(char)deleteAllContentsOnClientAndServer:(id*)arg1 ;
-(char)isOverQuota;
-(char)_updateMetadataOnDiskWithProperties:(id)arg1 ;
-(id)versionNumberForBundleIdentifier:(id)arg1 ;
-(char)hasIconWithName:(id)arg1 ;
-(id)iconURLs;
-(id)bestFittingImageDataForSize:(CGSize)arg1 shouldTransformToAppIcon:(char*)arg2 ;
-(id)copyDataRepresentation;
-(char)updateMetadataWithExtractorProperties:(id)arg1 iconPaths:(id)arg2 bundleID:(id)arg3 ;
-(char)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2 ;
-(char)registerCurrentProcessAsPriorityHintWithError:(id*)arg1 ;
@end

