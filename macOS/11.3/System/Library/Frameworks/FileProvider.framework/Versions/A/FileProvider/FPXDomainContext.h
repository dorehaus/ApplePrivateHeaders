/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFileProviderReplicatedExtension, OS_os_log;
@class NSFileProviderDomainVersion, NSDictionary, FPXExtensionContext, NSObject, NSFileProviderDomain, FPProviderDomain, FPSpotlightIndexer, NSFileProviderExtension, FPExtensionResponse;

@interface FPXDomainContext : NSObject {

	NSFileProviderDomainVersion* _lastKnownDomainVersion;
	NSDictionary* _lastKnownUserInfo;
	long long _sequenceNumber;
	int _selfPid;
	char _usesFPFS;
	unsigned long long _extensionCapabilities;
	FPXExtensionContext* _extensionContext;
	NSObject*<NSFileProviderReplicatedExtension> _vendorInstance;
	NSFileProviderDomain* _domain;
	FPProviderDomain* _providerDomain;
	NSObject*<OS_os_log> _log;
	FPSpotlightIndexer* _spotlightIndexer;

}

@property (nonatomic,__weak,readonly) FPXExtensionContext * extensionContext;                            //@synthesize extensionContext=_extensionContext - In the implementation block
@property (nonatomic,readonly) NSObject*<NSFileProviderReplicatedExtension> vendorInstance;              //@synthesize vendorInstance=_vendorInstance - In the implementation block
@property (nonatomic,readonly) NSFileProviderExtension * v2Instance; 
@property (nonatomic,readonly) NSFileProviderDomain * domain;                                            //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) FPProviderDomain * providerDomain;                                        //@synthesize providerDomain=_providerDomain - In the implementation block
@property (nonatomic,readonly) char usesFPFS;                                                            //@synthesize usesFPFS=_usesFPFS - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                   //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) NSFileProviderDomainVersion * domainVersion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) FPExtensionResponse * _currentResponse; 
@property (nonatomic,readonly) FPSpotlightIndexer * spotlightIndexer;                                    //@synthesize spotlightIndexer=_spotlightIndexer - In the implementation block
@property (nonatomic,readonly) unsigned long long extensionCapabilities;                                 //@synthesize extensionCapabilities=_extensionCapabilities - In the implementation block
-(NSFileProviderDomain *)domain;
-(NSDictionary *)userInfo;
-(void)invalidate;
-(FPXExtensionContext *)extensionContext;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSFileProviderDomainVersion *)domainVersion;
-(id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3 providerDomain:(id)arg4 domainVersion:(id)arg5 ;
-(FPSpotlightIndexer *)spotlightIndexer;
-(NSObject*<NSFileProviderReplicatedExtension>)vendorInstance;
-(NSFileProviderExtension *)v2Instance;
-(id)instanceWithPrivateSelector:(SEL)arg1 ;
-(void)prepareForDomainRemovalWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemIDFromVendorItemID:(id)arg1 ;
-(id)internalErrorFromVendorError:(id)arg1 ;
-(FPExtensionResponse *)_currentResponse;
-(id)itemFromVendorItem:(id)arg1 ;
-(char)usesFPFS;
-(FPProviderDomain *)providerDomain;
-(id)itemIDsFromVendorItemIDs:(id)arg1 ;
-(void)updateCapabilities;
-(unsigned long long)extensionCapabilities;
-(void)retrieveUserInfoFromExtension;
-(id)itemsFromVendorItems:(id)arg1 ;
@end

