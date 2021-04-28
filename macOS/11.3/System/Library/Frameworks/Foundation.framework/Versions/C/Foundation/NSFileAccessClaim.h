/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSXPCConnection, NSString, NSMutableArray, NSError, NSMutableOrderedSet, NSMutableSet, NSCountedSet, NSMutableDictionary, NSFileAccessProcessManager, NSObject, NSArray;

@interface NSFileAccessClaim : NSObject <NSSecureCoding> {

	NSXPCConnection* _client;
	NSString* _claimID;
	NSString* _purposeIDOrNil;
	char _cameFromSuperarbiter;
	unsigned long long _blockageCount;
	char _didWait;
	char _isRevoked;
	NSMutableArray* _claimerBlockageReasons;
	NSError* _claimerError;
	NSMutableOrderedSet* _pendingClaims;
	NSMutableSet* _blockingClaims;
	NSCountedSet* _blockingReactorIDs;
	NSMutableArray* _providerCancellationProcedures;
	NSMutableDictionary* _reacquisitionProceduresByPresenterID;
	NSMutableArray* _revocationProcedures;
	NSMutableArray* _devaluationProcedures;
	NSMutableArray* _finishingProcedures;
	NSFileAccessProcessManager* _processManager;
	NSObject*<OS_dispatch_semaphore> _claimerWaiter;
	char _hasInvokedClaimer;
	char _shouldEnableMaterializationDuringAccessorBlock;
	id _claimerOrNil;
	/*^block*/id _serverClaimerOrNil;
	NSMutableArray* _sandboxTokens;
	NSObject*<OS_dispatch_queue> _arbiterQueue;
	id _originatingReactorQueueID;
	NSMutableDictionary* _fileHandlesForEvictionProtection;

}

@property (readonly) NSObject*<OS_dispatch_semaphore> claimerWaiter;                 //@synthesize claimerWaiter=_claimerWaiter - In the implementation block
@property (copy,readonly) NSArray * allURLs; 
@property (assign) char shouldEnableMaterializationDuringAccessorBlock;              //@synthesize shouldEnableMaterializationDuringAccessorBlock=_shouldEnableMaterializationDuringAccessorBlock - In the implementation block
+(char)supportsSecureCoding;
+(char)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapNewWriting:(char)arg3 ofItemAtLocation:(id)arg4 options:(unsigned long long)arg5 ;
+(char)canNewWriteOfItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapExistingWriteOfItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)block;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)finished;
-(void)cancelled;
-(id)client;
-(id)claimID;
-(void)setClaimerError:(id)arg1 ;
-(void)unblockClaimerForReason:(id)arg1 ;
-(id)purposeID;
-(char)shouldBeRevokedPriorToInvokingAccessor;
-(void)protectFilesAgainstEviction;
-(char)shouldEnableMaterializationDuringAccessorBlock;
-(char)cameFromSuperarbiter;
-(void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3 ;
-(NSArray *)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(char)claimerInvokingIsBlockedByReactorWithID:(id)arg1 ;
-(void)blockClaimerForReason:(id)arg1 ;
-(void)whenDevaluedPerformProcedure:(/*^block*/id)arg1 ;
-(void)removePendingClaims:(id)arg1 ;
-(char)isBlockedByClaimWithPurposeID:(id)arg1 ;
-(void)givePriorityToClaim:(id)arg1 ;
-(char)shouldCancelInsteadOfWaiting;
-(void)addPendingClaim:(id)arg1 ;
-(void)scheduleBlockedClaim:(id)arg1 ;
-(void)unblock;
-(char)shouldMakeProviderProvideItemAtLocation:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)addBlockingReactorID:(id)arg1 ;
-(void)removeBlockingReactorID:(id)arg1 ;
-(id)claimerError;
-(char)isRevoked;
-(void)setShouldEnableMaterializationDuringAccessorBlock:(char)arg1 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg1 options:(unsigned long long*)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)ensureProvidersOfItemsAtReadingLocations:(id)arg1 writingLocations:(id)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(/*^block*/id)arg2 ;
-(id)pendingClaims;
-(void)whenFinishedPerformProcedure:(/*^block*/id)arg1 ;
-(char)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)devalueSelf;
-(char)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2 ;
-(char)shouldWritingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2 ;
-(char)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1 ;
-(id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3 ;
-(int)clientProcessIdentifier;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)prepareClaimForGrantingWithArbiterQueue:(id)arg1 ;
-(void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(/*^block*/id)arg3 ;
-(void)setCameFromSuperarbiter;
-(void)startObservingClientState;
-(char)didWait;
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)whenRevokedPerformProcedure:(/*^block*/id)arg1 ;
-(void)evaluateNewClaim:(id)arg1 ;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)makeProvidersProvideItemsForReadingLocations:(id)arg1 options:(unsigned long long*)arg2 andWritingLocationsIfNecessary:(id)arg3 options:(unsigned long long*)arg4 thenContinue:(/*^block*/id)arg5 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(char)arg2 relinquishUsingProcedureGetter:(/*^block*/id)arg3 ;
-(char)canAccessLocations:(id)arg1 forReading:(char)arg2 error:(id*)arg3 ;
-(void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)revoked;
-(void)devalueOldClaim:(id)arg1 ;
-(char)isGranted;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(char)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 andIfSoThenReevaluateSelf:(/*^block*/id)arg3 ;
-(id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2 ;
-(void)disavowed;
-(void)_protectIfNecessaryFileAtURL:(id)arg1 withOptions:(unsigned long long)arg2 forReading:(char)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)claimerWaiter;
@end

