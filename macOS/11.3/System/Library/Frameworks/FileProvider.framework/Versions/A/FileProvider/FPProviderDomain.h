/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FPItemCollection, NSString, NSArray, NSURL, NSProgress, NSFileProviderManager, NSFileProviderDomain, NSError;

@interface FPProviderDomain : NSObject <NSSecureCoding, NSCopying> {

	FPItemCollection* _itemCollection;
	char _keepLocalStorageUpToDate;
	char _readOnly;
	char _useFPFS;
	char _supportsEnumeration;
	char _isAvailableSystemWide;
	char _enabled;
	char _canDisable;
	char _usesUniqueItemIdentifiersAcrossDevices;
	char _supportsPickingFolders;
	char _needsAuthentication;
	char _allowsUserControlledEviction;
	char _appliesChangesAtomically;
	char _hidden;
	char _ejectable;
	char _shouldHideExtensionName;
	char _shouldHideDomainDisplayName;
	NSString* _identifier;
	NSString* _providerID;
	NSArray* _supportedFileTypes;
	NSString* _topLevelBundleIdentifier;
	NSURL* _extensionBundleURL;
	NSArray* _storageURLs;
	unsigned long long _disconnectionState;
	NSArray* _supportedSearchFilters;
	NSString* _personaIdentifier;
	NSProgress* _progress;
	NSFileProviderManager* _manager;
	NSString* _providerDisplayName;
	NSFileProviderDomain* _domain;
	NSString* _purposeIdentifier;
	NSString* _version;
	NSString* _spotlightMountPoint;

}

@property (nonatomic,retain) NSProgress * progress;                                      //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSFileProviderManager * manager;                          //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSString * providerDisplayName;                             //@synthesize providerDisplayName=_providerDisplayName - In the implementation block
@property (nonatomic,retain) NSFileProviderDomain * domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) char readOnly;                            //@synthesize readOnly=_readOnly - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                                //@synthesize hidden=_hidden - In the implementation block
@property (assign,getter=isEjectable,nonatomic) char ejectable;                          //@synthesize ejectable=_ejectable - In the implementation block
@property (nonatomic,retain) NSArray * supportedSearchFilters;                           //@synthesize supportedSearchFilters=_supportedSearchFilters - In the implementation block
@property (assign,nonatomic) char needsAuthentication;                                   //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign,getter=isUsingFPFS,nonatomic) char useFPFS;                            //@synthesize useFPFS=_useFPFS - In the implementation block
@property (nonatomic,retain) NSURL * extensionBundleURL;                                 //@synthesize extensionBundleURL=_extensionBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedFileTypes;                               //@synthesize supportedFileTypes=_supportedFileTypes - In the implementation block
@property (nonatomic,retain) NSString * purposeIdentifier;                               //@synthesize purposeIdentifier=_purposeIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * storageURLs;                                      //@synthesize storageURLs=_storageURLs - In the implementation block
@property (nonatomic,retain) NSString * version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * topLevelBundleIdentifier;                        //@synthesize topLevelBundleIdentifier=_topLevelBundleIdentifier - In the implementation block
@property (assign,nonatomic) char shouldHideExtensionName;                               //@synthesize shouldHideExtensionName=_shouldHideExtensionName - In the implementation block
@property (assign,nonatomic) char shouldHideDomainDisplayName;                           //@synthesize shouldHideDomainDisplayName=_shouldHideDomainDisplayName - In the implementation block
@property (assign,nonatomic) char canDisable;                                            //@synthesize canDisable=_canDisable - In the implementation block
@property (assign,nonatomic) char supportsEnumeration;                                   //@synthesize supportsEnumeration=_supportsEnumeration - In the implementation block
@property (assign,nonatomic) char isAvailableSystemWide;                                 //@synthesize isAvailableSystemWide=_isAvailableSystemWide - In the implementation block
@property (assign,nonatomic) char supportsPickingFolders;                                //@synthesize supportsPickingFolders=_supportsPickingFolders - In the implementation block
@property (assign,nonatomic) unsigned long long disconnectionState;                      //@synthesize disconnectionState=_disconnectionState - In the implementation block
@property (assign,nonatomic) char usesUniqueItemIdentifiersAcrossDevices;                //@synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices - In the implementation block
@property (readonly) NSString * spotlightMountPoint;                                     //@synthesize spotlightMountPoint=_spotlightMountPoint - In the implementation block
@property (assign,nonatomic) char allowsUserControlledEviction;                          //@synthesize allowsUserControlledEviction=_allowsUserControlledEviction - In the implementation block
@property (assign,nonatomic) char appliesChangesAtomically;                              //@synthesize appliesChangesAtomically=_appliesChangesAtomically - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerID;                                    //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,readonly) NSString * domainDisplayName; 
@property (nonatomic,readonly) NSString * domainFullDisplayName; 
@property (nonatomic,readonly) NSString * iCloudAccountIdentifier; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
@property (nonatomic,readonly) NSString * containingBundleIdentifier; 
@property (nonatomic,readonly) NSString * extensionBundleIdentifier; 
@property (nonatomic,readonly) char isConnectedToAppExtension; 
@property (nonatomic,readonly) NSString * disconnectionReason; 
@property (nonatomic,readonly) NSString * localizedDisconnectionBannerText; 
@property (nonatomic,readonly) char canDisconnect; 
@property (nonatomic,readonly) unsigned long long testingModes; 
@property (nonatomic,readonly) char containsPhotos; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) char isiCloudDriveProvider; 
@property (nonatomic,readonly) char isMainiCloudDriveDomain; 
@property (nonatomic,copy) NSString * personaIdentifier;                                 //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
+(char)supportsSecureCoding;
+(id)beginMonitoringProviderDomainChangesWithHandler:(/*^block*/id)arg1 ;
+(void)endMonitoringProviderDomainChanges:(id)arg1 ;
+(id)providerDomainForURL:(id)arg1 error:(id*)arg2 ;
+(id)providerDomainForItem:(id)arg1 error:(id*)arg2 ;
+(void)_t_discardCache;
+(void)fetchProviderDomainWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchProviderDomainForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)providerDomainWithID:(id)arg1 error:(id*)arg2 ;
+(void)removeDomainWithID:(id)arg1 mode:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)providerDomainsWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(char)isEmpty;
-(NSFileProviderDomain *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(NSError *)error;
-(void)setEnabled:(char)arg1 ;
-(NSString *)identifier;
-(id)bundleURL;
-(char)isEnabled;
-(NSString *)version;
-(id)localizedName;
-(NSFileProviderManager *)manager;
-(id)providerIdentifier;
-(void)setVersion:(NSString *)arg1 ;
-(NSProgress *)progress;
-(void)setPurposeIdentifier:(NSString *)arg1 ;
-(NSString *)purposeIdentifier;
-(char)isReadOnly;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSArray *)storageURLs;
-(char)needsAuthentication;
-(char)isMainiCloudDriveDomain;
-(unsigned long long)disconnectionState;
-(NSString *)domainFullDisplayName;
-(NSURL *)extensionBundleURL;
-(void)setDomain:(NSFileProviderDomain *)arg1 ;
-(NSString *)personaIdentifier;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(NSArray *)supportedFileTypes;
-(void)setSupportedFileTypes:(NSArray *)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(void)setReadOnly:(char)arg1 ;
-(NSString *)providerID;
-(char)isUsingFPFS;
-(char)supportsPickingFolders;
-(NSString *)topLevelBundleIdentifier;
-(char)isiCloudDriveProvider;
-(char)usesUniqueItemIdentifiersAcrossDevices;
-(NSString *)providerDisplayName;
-(id)localizedTitleForSortDescriptor:(id)arg1 ;
-(id)storageURL;
-(unsigned long long)testingModes;
-(NSString *)domainDisplayName;
-(char)containsPhotos;
-(id)initWithProviderID:(id)arg1 domain:(id)arg2 ;
-(NSString *)containingBundleIdentifier;
-(char)canDisconnect;
-(NSString *)iCloudAccountIdentifier;
-(NSString *)disconnectionReason;
-(char)isConnectedToAppExtension;
-(NSString *)localizedDisconnectionBannerText;
-(void)setEnabled:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUseFPFS:(char)arg1 ;
-(char)supportsEnumeration;
-(void)setSupportsEnumeration:(char)arg1 ;
-(void)setTopLevelBundleIdentifier:(NSString *)arg1 ;
-(void)setExtensionBundleURL:(NSURL *)arg1 ;
-(void)setStorageURLs:(NSArray *)arg1 ;
-(char)isAvailableSystemWide;
-(void)setIsAvailableSystemWide:(char)arg1 ;
-(void)setDisconnectionState:(unsigned long long)arg1 ;
-(char)canDisable;
-(void)setCanDisable:(char)arg1 ;
-(NSArray *)supportedSearchFilters;
-(void)setSupportedSearchFilters:(NSArray *)arg1 ;
-(void)setUsesUniqueItemIdentifiersAcrossDevices:(char)arg1 ;
-(void)setSupportsPickingFolders:(char)arg1 ;
-(void)setNeedsAuthentication:(char)arg1 ;
-(char)allowsUserControlledEviction;
-(void)setAllowsUserControlledEviction:(char)arg1 ;
-(char)appliesChangesAtomically;
-(void)setAppliesChangesAtomically:(char)arg1 ;
-(void)setProviderDisplayName:(NSString *)arg1 ;
-(char)isEjectable;
-(void)setEjectable:(char)arg1 ;
-(char)shouldHideExtensionName;
-(void)setShouldHideExtensionName:(char)arg1 ;
-(char)shouldHideDomainDisplayName;
-(void)setShouldHideDomainDisplayName:(char)arg1 ;
-(NSString *)spotlightMountPoint;
@end

