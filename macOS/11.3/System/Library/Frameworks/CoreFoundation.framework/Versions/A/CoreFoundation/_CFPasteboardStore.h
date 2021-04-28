/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject, _CFPasteboardCache, _CFPasteboardClientInstanceID;

@interface _CFPasteboardStore : NSObject {

	CFStringRef _name;
	NSObject*<OS_dispatch_queue> _queue;
	_CFPasteboardCache* _cache;
	unsigned char _restrictSandboxExtension;
	int _allowedSandboxExtensionPID;
	SCD_Struct_CF21 _allowedSandboxExtensionAuditToken;
	_CFPasteboardClientInstanceID* _owner;
	unsigned char _ownerHasPendingChanges;
	CFDictionaryRef _clientInstancesByUUID;
	CFSetRef _clientInstancesWithCacheInfoForCurrentGeneration;
	NSObject*<OS_dispatch_source> _expirationTimer;

}
+(void)_removePasteboardWithName:(CFStringRef)arg1 ;
+(CFArrayRef)copyAllPasteboards;
+(id)pasteboardStoreWithName:(CFStringRef)arg1 createIfNecessary:(char)arg2 ;
+(CFStringRef)dumpAllClients;
-(void)dealloc;
-(id)description;
-(id)_initWithName:(const CFStringRef)arg1 ;
-(id)_onqueue_cacheForGeneration:(long long)arg1 ;
-(long long)_onqueue_nextGenerationCount;
-(void)_onqueue_clearGenerationSpecificData;
-(void)_onqueue_invalidateCachesWithCurrentGeneration;
-(void)_onqueue_beginGenerationWithNewOwner:(const CFUUIDRef)arg1 ;
-(void)_onqueue_handleExpirationTimer;
-(void)_onqueue_invalidateCurrentGenerationCacheEntries:(const CFArrayRef)arg1 inResponseToMessage:(id)arg2 ;
-(void)_onqueue_noteMessageSenderNeedsCacheInvalidation:(id)arg1 ;
-(void)flushOwnerChangesIfNecessaryInResponseToMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_handleNewEntries:(CFArrayRef)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(char*)arg3 ;
-(int)analyzeSandboxExtensionEntry:(id)arg1 destinedForClient:(id)arg2 ;
-(id)reissueSandboxExtensionFromEntry:(id)arg1 toClient:(id)arg2 error:(int*)arg3 ;
-(id)filterDataFromEntry:(id)arg1 inResponseToMessage:(id)arg2 error:(int*)arg3 ;
-(void)requestDataForGeneration:(unsigned long long)arg1 itemIdentifier:(unsigned long long)arg2 flavor:(CFStringRef)arg3 inResponseToMessage:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleDeadClientWithUUID:(CFUUIDRef)arg1 allowPasteboardDeletion:(char)arg2 ;
-(void)performBarrier:(/*^block*/id)arg1 ;
-(void)handleBeginGeneration:(id)arg1 ;
-(void)handleMakeGenerationLocal:(id)arg1 ;
-(void)handleSetExpirationDate:(id)arg1 ;
-(void)handleNotifyHasEntries:(id)arg1 ;
-(void)handleGetCounts:(id)arg1 ;
-(void)handleRegisterEntries:(id)arg1 ;
-(void)handleSetDataFlags:(id)arg1 ;
-(void)handleRequestData:(id)arg1 ;
-(void)handleResolvePromises:(id)arg1 ;
-(void)resolveAllPromisesOwnedByProcessWithIdentifier:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRefreshCache:(id)arg1 ;
-(void)handleCreate:(id)arg1 ;
-(void)handleRelease:(id)arg1 ;
-(void)handleUniquePromiseFile:(id)arg1 ;
-(void)handleRestrictExtension:(id)arg1 ;
-(void)handleAllowExtensionProcess:(id)arg1 ;
@end
