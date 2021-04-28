/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL, NSUUID, NSArray, NSDictionary;

@interface FPDProviderDescriptor : NSObject <NSSecureCoding> {

	char _readonly;
	char _enabledByDefault;
	char _supportsEnumeration;
	char _defaultDomainVisible;
	char _shouldHideExtensionName;
	char _canToggleDomainVisibility;
	char _isAvailableSystemWide;
	char _usesUniqueItemIdentifiersAcrossDevices;
	char _supportsUnzippedPackages;
	char _hasExplicitExtensionStorageURLs;
	char _supportsPickingFolders;
	char _wantsFlattenedPackages;
	char _allowsUserControlledEviction;
	char _appliesChangesAtomically;
	char _owningApplicationIsManaged;
	NSString* _identifier;
	NSString* _localizedName;
	NSString* _topLevelBundleIdentifier;
	NSString* _bundleVersion;
	NSString* _extensionPointVersion;
	NSNumber* _downloadPipelineDepth;
	NSString* _purposeIdentifier;
	NSURL* _extensionBundleURL;
	NSUUID* _pluginUUID;
	NSArray* _supportedFileTypes;
	NSArray* _supportedSearchFilters;
	NSArray* _extensionStorageURLs;
	NSString* _documentGroupName;
	NSArray* _requestedExtendedAttributes;
	NSDictionary* _requestReasons;

}

@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * topLevelBundleIdentifier;                      //@synthesize topLevelBundleIdentifier=_topLevelBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSString * extensionPointVersion;                         //@synthesize extensionPointVersion=_extensionPointVersion - In the implementation block
@property (assign,nonatomic) char readonly;                                            //@synthesize readonly=_readonly - In the implementation block
@property (assign,nonatomic) char enabledByDefault;                                    //@synthesize enabledByDefault=_enabledByDefault - In the implementation block
@property (assign,nonatomic) char supportsEnumeration;                                 //@synthesize supportsEnumeration=_supportsEnumeration - In the implementation block
@property (assign,nonatomic) char defaultDomainVisible;                                //@synthesize defaultDomainVisible=_defaultDomainVisible - In the implementation block
@property (assign,nonatomic) char shouldHideExtensionName;                             //@synthesize shouldHideExtensionName=_shouldHideExtensionName - In the implementation block
@property (assign,nonatomic) char canToggleDomainVisibility;                           //@synthesize canToggleDomainVisibility=_canToggleDomainVisibility - In the implementation block
@property (assign,nonatomic) char isAvailableSystemWide;                               //@synthesize isAvailableSystemWide=_isAvailableSystemWide - In the implementation block
@property (assign,nonatomic) char usesUniqueItemIdentifiersAcrossDevices;              //@synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices - In the implementation block
@property (assign,nonatomic) char supportsUnzippedPackages;                            //@synthesize supportsUnzippedPackages=_supportsUnzippedPackages - In the implementation block
@property (assign,nonatomic) char hasExplicitExtensionStorageURLs;                     //@synthesize hasExplicitExtensionStorageURLs=_hasExplicitExtensionStorageURLs - In the implementation block
@property (assign,nonatomic) char supportsPickingFolders;                              //@synthesize supportsPickingFolders=_supportsPickingFolders - In the implementation block
@property (assign,nonatomic) char wantsFlattenedPackages;                              //@synthesize wantsFlattenedPackages=_wantsFlattenedPackages - In the implementation block
@property (assign,nonatomic) char allowsUserControlledEviction;                        //@synthesize allowsUserControlledEviction=_allowsUserControlledEviction - In the implementation block
@property (assign,nonatomic) char appliesChangesAtomically;                            //@synthesize appliesChangesAtomically=_appliesChangesAtomically - In the implementation block
@property (nonatomic,retain) NSNumber * downloadPipelineDepth;                         //@synthesize downloadPipelineDepth=_downloadPipelineDepth - In the implementation block
@property (assign,nonatomic) char owningApplicationIsManaged;                          //@synthesize owningApplicationIsManaged=_owningApplicationIsManaged - In the implementation block
@property (nonatomic,retain) NSString * purposeIdentifier;                             //@synthesize purposeIdentifier=_purposeIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * extensionBundleURL;                               //@synthesize extensionBundleURL=_extensionBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedFileTypes;                             //@synthesize supportedFileTypes=_supportedFileTypes - In the implementation block
@property (nonatomic,retain) NSArray * supportedSearchFilters;                         //@synthesize supportedSearchFilters=_supportedSearchFilters - In the implementation block
@property (nonatomic,retain) NSArray * extensionStorageURLs;                           //@synthesize extensionStorageURLs=_extensionStorageURLs - In the implementation block
@property (nonatomic,retain) NSString * documentGroupName;                             //@synthesize documentGroupName=_documentGroupName - In the implementation block
@property (nonatomic,retain) NSArray * requestedExtendedAttributes;                    //@synthesize requestedExtendedAttributes=_requestedExtendedAttributes - In the implementation block
@property (nonatomic,retain) NSUUID * pluginUUID;                                      //@synthesize pluginUUID=_pluginUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * requestReasons;                            //@synthesize requestReasons=_requestReasons - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSString *)bundleVersion;
-(char)enabledByDefault;
-(NSUUID *)pluginUUID;
-(void)setIdentifier:(NSString *)arg1 ;
-(char)readonly;
-(void)setPurposeIdentifier:(NSString *)arg1 ;
-(NSString *)purposeIdentifier;
-(NSURL *)extensionBundleURL;
-(NSArray *)supportedFileTypes;
-(void)setSupportedFileTypes:(NSArray *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(char)supportsPickingFolders;
-(NSString *)topLevelBundleIdentifier;
-(char)usesUniqueItemIdentifiersAcrossDevices;
-(char)supportsEnumeration;
-(void)setSupportsEnumeration:(char)arg1 ;
-(void)setTopLevelBundleIdentifier:(NSString *)arg1 ;
-(void)setExtensionBundleURL:(NSURL *)arg1 ;
-(char)isAvailableSystemWide;
-(void)setIsAvailableSystemWide:(char)arg1 ;
-(NSArray *)supportedSearchFilters;
-(void)setSupportedSearchFilters:(NSArray *)arg1 ;
-(void)setUsesUniqueItemIdentifiersAcrossDevices:(char)arg1 ;
-(void)setSupportsPickingFolders:(char)arg1 ;
-(char)allowsUserControlledEviction;
-(void)setAllowsUserControlledEviction:(char)arg1 ;
-(char)appliesChangesAtomically;
-(void)setAppliesChangesAtomically:(char)arg1 ;
-(char)shouldHideExtensionName;
-(void)setShouldHideExtensionName:(char)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)setReadonly:(char)arg1 ;
-(NSArray *)extensionStorageURLs;
-(void)setPluginUUID:(NSUUID *)arg1 ;
-(void)setEnabledByDefault:(char)arg1 ;
-(void)setWantsFlattenedPackages:(char)arg1 ;
-(void)setDefaultDomainVisible:(char)arg1 ;
-(void)setCanToggleDomainVisibility:(char)arg1 ;
-(void)setSupportsUnzippedPackages:(char)arg1 ;
-(void)setRequestedExtendedAttributes:(NSArray *)arg1 ;
-(NSArray *)requestedExtendedAttributes;
-(void)setHasExplicitExtensionStorageURLs:(char)arg1 ;
-(void)setDocumentGroupName:(NSString *)arg1 ;
-(void)setExtensionStorageURLs:(NSArray *)arg1 ;
-(void)setDownloadPipelineDepth:(NSNumber *)arg1 ;
-(id)localizedStringForInfoPlistValue:(id)arg1 ;
-(NSString *)extensionPointVersion;
-(void)setExtensionPointVersion:(NSString *)arg1 ;
-(char)defaultDomainVisible;
-(char)canToggleDomainVisibility;
-(char)supportsUnzippedPackages;
-(char)hasExplicitExtensionStorageURLs;
-(char)wantsFlattenedPackages;
-(NSNumber *)downloadPipelineDepth;
-(char)owningApplicationIsManaged;
-(void)setOwningApplicationIsManaged:(char)arg1 ;
-(NSString *)documentGroupName;
-(NSDictionary *)requestReasons;
-(void)setRequestReasons:(NSDictionary *)arg1 ;
@end
