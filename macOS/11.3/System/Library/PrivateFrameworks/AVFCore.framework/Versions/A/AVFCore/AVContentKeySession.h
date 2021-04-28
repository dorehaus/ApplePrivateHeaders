/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVContentKeySessionInternal, AVContentKeyReportGroup, NSURL, NSString, NSData;

@interface AVContentKeySession : NSObject {

	AVContentKeySessionInternal* _session;

}

@property (getter=isInternal,nonatomic,readonly) char internal; 
@property (readonly) AVContentKeyReportGroup * defaultContentKeyGroup; 
@property (__weak,readonly) id<AVContentKeySessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) NSURL * storageURL; 
@property (readonly) NSString * keySystem; 
@property (readonly) NSData * contentProtectionSessionIdentifier; 
+(void)initialize;
+(id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3 ;
+(id)contentKeySessionWithKeySystem:(id)arg1 ;
+(OpaqueFigSecureStopManagerRef)copyDefaultSecureStopManagerForAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)_uniqueIDForCyptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id<AVContentKeySessionDelegate>)delegate;
-(void)setDelegate:(id<AVContentKeySessionDelegate>)arg1 ;
-(id)_internalQueue;
-(id)_weakReference;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(char)isInternal;
-(int)setAppIdentifier:(id)arg1 ;
-(NSURL *)storageURL;
-(id)_contentKeyGroups;
-(int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(OpaqueFigCustomURLHandler*)arg2 ;
-(void)expire;
-(void)_willDeallocOrFinalize;
-(char)hasProtector;
-(id)initWithStorageDirectoryAtURL:(id)arg1 ;
-(void)addStreamDataParser:(id)arg1 ;
-(void)removeStreamDataParser:(id)arg1 ;
-(id)streamDataParsers;
-(NSData *)contentProtectionSessionIdentifier;
-(NSString *)keySystem;
-(void)_setWeakReferenceForContentKeyRequest:(id)arg1 withCryptorUUID:(id)arg2 ;
-(void)contentKeyRequestDidProduceContentKey:(id)arg1 ;
-(void)_invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 synchronouslyWhenDelegateQueueIsNULL:(char)arg2 ;
-(void)_setContentKeyRequest:(id)arg1 forCryptorUUID:(id)arg2 cryptorKeyRequestID:(unsigned long long)arg3 ;
-(void)renewExpiringResponseDataForContentKeyRequest:(id)arg1 ;
-(char)clientCanReceivePersistableContentKeyRequest;
-(void)issueContentKeyRequestWithCustomURLHandler:(OpaqueFigCustomURLHandlerRef)arg1 identifier:(id)arg2 requestInfo:(CFDictionaryRef)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(char)arg5 ;
-(void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(char)arg4 ;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
-(void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(void)addContentKeyRecipient:(id)arg1 ;
-(void)removeContentKeyRecipient:(id)arg1 ;
-(id)contentKeyRecipients;
-(void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidatePersistableContentKey:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidateAllPersistableContentKeysForApp:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processContentKeyRequestInitializationData:(id)arg1 options:(id)arg2 ;
-(void)_handleSecureStopDidFinalizeRecordCallback;
-(void)_handleExternalProtectionStateChangedCallbackForCryptKeyIdentifier:(id)arg1 ;
-(id)_contentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)_removeContentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)_handleKeyResponseError:(id)arg1 forCryptorUUID:(id)arg2 andCryptorKeyRequestID:(unsigned long long)arg3 ;
-(void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg1 andCryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)_handleUpdateToPersistentKey:(id)arg1 forKeyIdentifier:(id)arg2 ;
-(void)_handleContentProtectionSessionIdentifierDidChange:(id)arg1 ;
-(void)issueContentKeyRequests:(id)arg1 forInitializationData:(id)arg2 ;
-(void)issueContentKeyRequest:(id)arg1 toDelegateWithCallbackSelector:(SEL)arg2 ;
-(void)issuePersistableContentKeyRequest:(id)arg1 ;
-(void)issueRenewableContentKeyRequest:(id)arg1 ;
-(void)issueContentKeyRequest:(id)arg1 ;
-(const OpaqueFigCPECryptorRef)copyCryptorForInitializationData:(id)arg1 ;
-(OpaqueFigCPECryptorRef)copyCryptorForCryptKeyAttributes:(id)arg1 ;
-(void)_sendFinishLoadingForPreloadedKeyRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 ;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(char)arg3 ;
-(id)issueContentKeyRequestForInitializationData:(id)arg1 ;
-(const OpaqueFigCPECryptorRef)createCryptorIfNecessaryForInitializationData:(id)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 error:(id*)arg3 ;
-(void)_handleRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 willHandleRequest:(char*)arg4 ;
-(AVContentKeyReportGroup *)defaultContentKeyGroup;
-(id)makeContentKeyGroup;
@end
