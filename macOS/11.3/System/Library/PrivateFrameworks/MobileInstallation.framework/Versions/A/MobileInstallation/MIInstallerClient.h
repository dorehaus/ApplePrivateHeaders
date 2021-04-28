/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/Versions/A/MobileInstallation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileInstallation/MobileInstallation-Structs.h>
#import <MobileInstallation/MobileInstallerDelegateProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSError;

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol> {

	opaque_pthread_mutex_t _delegatesCompleteCondMutex;
	opaque_pthread_cond_t _delegatesCompleteCond;
	char _delegatesComplete;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progressBlock;
	/*^block*/id _appDictionaryEnumBlock;
	NSError* _delegatesCompleteError;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id progressBlock;                                  //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id appDictionaryEnumBlock;                         //@synthesize appDictionaryEnumBlock=_appDictionaryEnumBlock - In the implementation block
@property (assign,nonatomic) char delegatesComplete;                          //@synthesize delegatesComplete=_delegatesComplete - In the implementation block
@property (nonatomic,retain) NSError * delegatesCompleteError;                //@synthesize delegatesCompleteError=_delegatesCompleteError - In the implementation block
+(id)installerWithProgressBlock:(/*^block*/id)arg1 ;
+(id)installerWithAppDictionaryEnumerator:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)setTestMode:(id*)arg1 ;
-(void)reportProgress:(id)arg1 ;
-(void)_invalidateObject;
-(void)fetchInfoForAppWithBundleID:(id)arg1 wrapperURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dieForTesting;
-(void)delegateMessageDeliveryCompleteWithError:(id)arg1 ;
-(void)setAppDictionaryEnumBlock:(id)arg1 ;
-(void)installURL:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)uninstallIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lookupUninstalledWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearUninstalledIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enumerateInstalledAppsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchDiskUsageForIdentifiers:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)checkCapabilities:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInfoForFrameworkAtURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchInfoForContainerizedAppWithBundleID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSinfForLSWithIdentifier:(id)arg1 wrapperURL:(id)arg2 sinfData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateiTunesMetadataForLSWithIdentifier:(id)arg1 wrapperURL:(id)arg2 plistData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(id)arg4 failureSource:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)getAppMetadataForApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateAppDictionary:(id)arg1 error:(id)arg2 ;
-(void)setDelegatesComplete:(char)arg1 ;
-(id)appDictionaryEnumBlock;
-(char)delegatesComplete;
-(void)setDelegatesCompleteError:(NSError *)arg1 ;
-(NSError *)delegatesCompleteError;
-(id)_waitForPendingDelegateMessages;
-(void)fetchInstalledDeveloperAppsWithMountPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)pidForTesting;
-(char)endTestMode:(id*)arg1 ;
-(char)getTestModeEnabled:(char*)arg1 outError:(id*)arg2 ;
@end

