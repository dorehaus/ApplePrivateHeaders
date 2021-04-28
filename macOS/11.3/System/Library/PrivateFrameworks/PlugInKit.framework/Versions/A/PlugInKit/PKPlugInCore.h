/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary, NSUUID, NSData, NSDate;

@interface PKPlugInCore : NSObject {

	NSString* _identifier;
	NSString* _originalIdentifier;
	NSURL* _url;
	NSURL* _containingUrl;
	NSString* _containingBundleIdentifier;
	char _onSystemVolume;
	NSDictionary* _bundleInfoDictionary;
	NSDictionary* _plugInDictionary;
	NSDictionary* _entitlements;
	unsigned long long _hubProtocolVersion;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _localizedContainingName;
	NSDictionary* _localizedFileProviderActionNames;
	NSDictionary* _annotations;
	long long _lastModified;
	NSUUID* _uuid;
	NSData* _cdhash;
	NSString* _requirement;
	NSURL* _dataContainerURL;
	unsigned _extensionPointPlatform;
	BOOL _isRBManaged;
	NSUUID* _discoveryInstanceUUID;
	unsigned long long _annotationTimestamp;

}

@property (retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * originalIdentifier;                                  //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (retain) NSURL * url;                                                    //@synthesize url=_url - In the implementation block
@property (retain) NSDictionary * bundleInfoDictionary;                            //@synthesize bundleInfoDictionary=_bundleInfoDictionary - In the implementation block
@property (retain) NSDictionary * plugInDictionary;                                //@synthesize plugInDictionary=_plugInDictionary - In the implementation block
@property (retain) NSDictionary * entitlements;                                    //@synthesize entitlements=_entitlements - In the implementation block
@property (retain) NSDictionary * annotations;                                     //@synthesize annotations=_annotations - In the implementation block
@property (copy) NSURL * containingUrl;                                            //@synthesize containingUrl=_containingUrl - In the implementation block
@property (copy) NSString * containingBundleIdentifier;                            //@synthesize containingBundleIdentifier=_containingBundleIdentifier - In the implementation block
@property (readonly) char oldStyle; 
@property (readonly) NSString * path; 
@property (readonly) NSString * containingPath; 
@property (assign) char onSystemVolume;                                            //@synthesize onSystemVolume=_onSystemVolume - In the implementation block
@property (readonly) NSUUID * discoveryInstanceUUID;                               //@synthesize discoveryInstanceUUID=_discoveryInstanceUUID - In the implementation block
@property (readonly) NSDictionary * attributes; 
@property (readonly) NSString * version; 
@property (readonly) id protocolSpec; 
@property (readonly) NSString * principalSpec; 
@property (assign) unsigned long long hubProtocolVersion;                          //@synthesize hubProtocolVersion=_hubProtocolVersion - In the implementation block
@property (readonly) NSString * sdkSpec; 
@property (readonly) NSString * localizedName;                                     //@synthesize localizedName=_localizedName - In the implementation block
@property (readonly) NSString * localizedShortName;                                //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (retain) NSString * localizedContainingName;                             //@synthesize localizedContainingName=_localizedContainingName - In the implementation block
@property (readonly) NSDictionary * localizedFileProviderActionNames;              //@synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames - In the implementation block
@property (assign) long long lastModified;                                         //@synthesize lastModified=_lastModified - In the implementation block
@property (readonly) NSDate * timestamp; 
@property (retain) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSData * cdhash;                                                //@synthesize cdhash=_cdhash - In the implementation block
@property (retain) NSString * requirement;                                         //@synthesize requirement=_requirement - In the implementation block
@property (readonly) NSString * embeddedCodePath; 
@property (readonly) id embeddedProtocolSpec; 
@property (readonly) BOOL isAppExtension; 
@property (readonly) BOOL isMultiplexed; 
@property (readonly) BOOL isHybrid; 
@property (readonly) BOOL isDedicated; 
@property (readonly) BOOL isData; 
@property (assign) BOOL isRBManaged;                                               //@synthesize isRBManaged=_isRBManaged - In the implementation block
@property (readonly) unsigned extensionPointPlatform;                              //@synthesize extensionPointPlatform=_extensionPointPlatform - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                           //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,readonly) NSString * bootInstance; 
@property (assign,nonatomic) unsigned long long annotationTimestamp;               //@synthesize annotationTimestamp=_annotationTimestamp - In the implementation block
+(id)readSDKDictionary:(id)arg1 forPlatform:(unsigned)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)identifier;
-(NSString *)path;
-(NSString *)version;
-(NSURL *)dataContainerURL;
-(NSDictionary *)entitlements;
-(NSString *)localizedName;
-(NSString *)localizedShortName;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)originalIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(NSDate *)timestamp;
-(NSDictionary *)bundleInfoDictionary;
-(NSString *)requirement;
-(NSURL *)containingUrl;
-(NSDictionary *)annotations;
-(void)setAnnotations:(NSDictionary *)arg1 ;
-(NSString *)containingBundleIdentifier;
-(char)useBundle:(id)arg1 error:(id*)arg2 ;
-(void)localizedInfoDictionaryForKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isAppExtension;
-(id)attribute:(id)arg1 ;
-(NSDictionary *)localizedFileProviderActionNames;
-(long long)lastModified;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(NSString *)localizedContainingName;
-(id)initWithForm:(id)arg1 ;
-(id)export:(id*)arg1 ;
-(BOOL)isData;
-(char)oldStyle;
-(NSDictionary *)plugInDictionary;
-(NSString *)containingPath;
-(void)setLastModified:(long long)arg1 ;
-(char)onSystemVolume;
-(void)setRequirement:(NSString *)arg1 ;
-(id)infoKey:(id)arg1 ;
-(id)initWithName:(id)arg1 extensionPointPlatform:(unsigned)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7 ;
-(id)diagnose;
-(id)pluginKey:(id)arg1 ;
-(BOOL)isRBManaged;
-(void)setIsRBManaged:(BOOL)arg1 ;
-(NSUUID *)discoveryInstanceUUID;
-(BOOL)isHybrid;
-(BOOL)isDedicated;
-(BOOL)setupWithName:(id)arg1 extensionPointPlatform:(unsigned)arg2 url:(id)arg3 bundleInfo:(id)arg4 uuid:(id)arg5 discoveryInstanceUUID:(id)arg6 extensionPointCache:(id)arg7 ;
-(BOOL)setupWithForm:(id)arg1 ;
-(id)normalizeInfoDictionary:(id)arg1 ;
-(id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2 ;
-(char)setDictionaries:(id)arg1 ;
-(void)canonicalize;
-(id)newPlugInKitDictionaryFrom:(id)arg1 ;
-(id)newAttributesFrom:(id)arg1 ;
-(void)setHubProtocolVersion:(unsigned long long)arg1 ;
-(void)setOriginalIdentifier:(NSString *)arg1 ;
-(void)setCdhash:(NSData *)arg1 ;
-(void)setContainingUrl:(NSURL *)arg1 ;
-(void)setContainingBundleIdentifier:(NSString *)arg1 ;
-(void)setOnSystemVolume:(char)arg1 ;
-(void)setLocalizedContainingName:(NSString *)arg1 ;
-(void)setPlugInDictionary:(NSDictionary *)arg1 ;
-(unsigned)extensionPointPlatform;
-(id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2 ;
-(id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2 ;
-(id)sdkOnlyKeyPaths;
-(id)mergeSharedResources:(id)arg1 into:(id)arg2 ;
-(id)mergeProxyPass:(id)arg1 into:(id)arg2 ;
-(unsigned long long)hubProtocolVersion;
-(id)protocolSpec;
-(unsigned long long)annotationTimestamp;
-(NSString *)bootInstance;
-(void)setAnnotationTimestamp:(unsigned long long)arg1 ;
-(void)_loadLocalizedNames;
-(void)_loadLocalizedFileProviderActionNames;
-(id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2 ;
-(id)newMultiplesFrom:(id)arg1 ;
-(void)updateFromForm:(id)arg1 ;
-(void)setAnnotation:(id)arg1 value:(id)arg2 ;
-(NSString *)principalSpec;
-(NSString *)sdkSpec;
-(NSString *)embeddedCodePath;
-(id)embeddedProtocolSpec;
-(BOOL)isMultiplexed;
-(id)augmentInterface:(id)arg1 ;
-(void)setBundleInfoDictionary:(NSDictionary *)arg1 ;
-(NSData *)cdhash;
@end
