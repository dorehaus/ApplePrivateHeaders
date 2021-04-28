/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/ICNFIMAPFetchResponseHandler.h>
#import <libobjc.A.dylib/ICNFMCActivityTarget.h>

@protocol ICNFIMAPMessageDataSource;
@class _ICNFNonBoostingLock, ICNFIMAPGateway, ICNFIMAPMailbox, NSMutableArray, NSMutableIndexSet, NSMutableSet, ICNFMCInvocationQueue, NSArray, NSMutableDictionary, NSString;

@interface ICNFIMAPMailboxSyncEngine : NSObject <ICNFIMAPFetchResponseHandler, ICNFMCActivityTarget> {

	NSRange _rangeOfMessagesToFetchFlagsAndUidsForSyncing;
	_ICNFNonBoostingLock* _syncEngineLock;
	ICNFIMAPGateway* _gateway;
	id<ICNFIMAPMessageDataSource> _dataSource;
	ICNFIMAPMailbox* _IMAPMailbox;
	NSMutableArray* _auxiliaryLists;
	NSMutableIndexSet* _allNewUids;
	NSMutableIndexSet* _UIDsNeedingSkeletons;
	NSMutableIndexSet* _messageNumbersNeedingUIDs;
	NSMutableArray* _messageDetails;
	unsigned long long _fetchedMessagesCount;
	unsigned long long _maxSkeletonsToFetch;
	NSMutableIndexSet* _expungedUids;
	NSMutableSet* _activeOperations;
	long long _progressType;
	unsigned long long _progressTotal;
	char _isCheckingNewMail;
	ICNFMCInvocationQueue* _syncEngineQueue;
	NSMutableArray* _messagesNeedingAttachmentNames;
	NSArray* _messagesBeingRouted;
	NSMutableArray* _messagesAddedToDataSource;
	NSMutableArray* _uidsAddedToServer;
	NSMutableSet* _messageUIDsCachedDuringRouting;
	NSMutableDictionary* _labelsByRemoteId;
	/*^block*/id _compareByUid;
	unsigned _uidValidity;
	unsigned _localDataSourceUidNext;
	unsigned _newUidValidity;
	char _isReset;
	char _needToUpdateExists;
	char _newResponsesAvailable;
	char _automaticallyStartThread;
	char _dataSourceIsInboxOrAllMail;
	char _newMailReceivedInInbox;
	char _checkedForNewUids;
	char _fetchingDueToAllegedModificationSequenceChange;
	char _messagesNeedAttachmentNames;
	char _synchronizedOldMessages;
	char _connectionSupportsUIDPLUS;
	char _forceSyncOfAllMessages;
	unsigned _uidNext;
	unsigned long long _numMessagesOnServer;
	unsigned long long _computedHighestModificationSequence;

}

@property (assign) char messageListIsSynchronized;                                      //@synthesize synchronizedOldMessages=_synchronizedOldMessages - In the implementation block
@property (assign) unsigned long long numberOfMessagesOnServer;                         //@synthesize numMessagesOnServer=_numMessagesOnServer - In the implementation block
@property (assign) unsigned long long computedHighestModificationSequence;              //@synthesize computedHighestModificationSequence=_computedHighestModificationSequence - In the implementation block
@property (assign) unsigned uidNext;                                                    //@synthesize uidNext=_uidNext - In the implementation block
@property (assign) char connectionSupportsUIDPLUS;                                      //@synthesize connectionSupportsUIDPLUS=_connectionSupportsUIDPLUS - In the implementation block
@property (assign) char forceSyncOfAllMessages;                                         //@synthesize forceSyncOfAllMessages=_forceSyncOfAllMessages - In the implementation block
@property (nonatomic,copy,readonly) id compareByUid; 
@property (copy,readonly) NSArray * messagesBeingAdded; 
@property (nonatomic,copy,readonly) NSString * stateStringForDiagnostics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)reset;
-(char)isReset;
-(id)initWithDataSource:(id)arg1 ;
-(char)_hasPendingChanges;
-(void)setUidValidity:(unsigned)arg1 ;
-(void)setComputedHighestModificationSequence:(unsigned long long)arg1 ;
-(NSString *)stateStringForDiagnostics;
-(unsigned)uidNext;
-(void)setUidNext:(unsigned)arg1 ;
-(unsigned long long)computedHighestModificationSequence;
-(id)_gmailLabelsForNames:(id)arg1 ;
-(char)handleResponse:(id)arg1 forOperation:(id)arg2 ;
-(void)invalidateDataSource;
-(void)uidsWereCompactedFromDataSource:(id)arg1 ;
-(void)messagesWereAddedToDataSource:(id)arg1 ;
-(void)updateCountOfMessagesOnServerFromIMAPMailbox:(id)arg1 fromIDLE:(char)arg2 ;
-(void)responsesWereAddedToIMAPMailbox:(id)arg1 ;
-(void)setGatewayFromIMAPMailbox:(id)arg1 ;
-(void)setAutomaticallyStartsBackgroundThread:(char)arg1 ;
-(char)messageListIsSynchronized;
-(void)runSynchronouslyWithMessages:(id)arg1 ;
-(void)newUIDsWereAddedToServer:(id)arg1 ;
-(NSArray *)messagesBeingAdded;
-(char)_setGateway:(id)arg1 ;
-(unsigned long long)numberOfMessagesOnServer;
-(void)_resetClearingGateway:(char)arg1 clearingDataSource:(char)arg2 ;
-(void)_notifyBackgroundFetchCompletedWithLogMessage:(id)arg1 ;
-(void)setNumberOfMessagesOnServer:(unsigned long long)arg1 ;
-(void)setForceSyncOfAllMessages:(char)arg1 ;
-(void)setMessageListIsSynchronized:(char)arg1 ;
-(void)setConnectionSupportsUIDPLUS:(char)arg1 ;
-(void)_startNewThreadIfNeeded;
-(void)_setupForNewIMAPMailbox:(id)arg1 andGateway:(id)arg2 ;
-(char)_shouldContinueSyncingWithMonitor:(id)arg1 ;
-(long long)_cachePolicyForAccount:(id)arg1 ;
-(id)_getAuxiliaryListForType:(unsigned long long)arg1 ;
-(id)_getObjectWithSameUidAsObject:(id)arg1 inArray:(id)arg2 insertIndex:(unsigned long long*)arg3 ;
-(id)_getKnownMessageDetailsForUid:(unsigned)arg1 ;
-(void)_addItem:(id)arg1 toAuxiliaryList:(unsigned long long)arg2 ;
-(void)_removeMessagesOrDetailsFromDataSource:(id)arg1 ;
-(void)_goWithMessages:(id)arg1 ;
-(char)_dataSourcePersistentIDType;
-(void)_resizeMessageDetails;
-(id)_persistedMessageForDetails:(id)arg1 ;
-(void)_goWithMessagesIfNeeded:(id)arg1 ;
-(id)compareByUid;
-(id)_getKnownMessageDetailsForNumber:(unsigned long long)arg1 ;
-(char)_syncChangedMessagesOnly;
-(void)_addDetails:(id)arg1 forMessageNumber:(unsigned long long)arg2 ;
-(void)_updateFlagChanges:(id*)arg1 withDetails:(id)arg2 previousFlags:(unsigned)arg3 ;
-(void)_pushFlags:(id)arg1 forPersistentIDs:(id)arg2 toDataSource:(id)arg3 withMonitor:(id)arg4 ;
-(void)_processAttachmentNames;
-(char)forceSyncOfAllMessages;
-(void)_setAuxiliaryList:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)_handleNewUIDsAddedToServer:(id)arg1 ;
-(void)_handleMessagesWereAddedToPersistence:(id)arg1 withMonitor:(id)arg2 ;
-(id)_copyDataSource;
-(void)_updatePendingChangesWithMonitor:(id)arg1 ;
-(char)_processResponsesWithMonitor:(id)arg1 ;
-(char)_getNewMessageSkeletonsWithMonitor:(id)arg1 messagesFromOpen:(id*)arg2 ;
-(char)_handleRoutedUidsWithMonitor:(id)arg1 ;
-(char)_fetchUidsFlagsAndLabelsWithMonitor:(id)arg1 ;
-(char)_syncWithDataSourceWithMonitor:(id)arg1 messagesFromOpen:(id)arg2 ;
-(char)_cacheMessagesWithMonitor:(id)arg1 ;
-(char)_cacheAttachmentsWithMonitor:(id)arg1 ;
-(char)_handleInvitationMessagesWithMonitor:(id)arg1 ;
-(char)_shouldContinueSyncingWithGateway;
-(id)_copyIMAPMailbox;
-(void)_handleFetchResponse:(id)arg1 withMonitor:(id)arg2 message:(id*)arg3 flagsChanges:(id*)arg4 labels:(id*)arg5 ;
-(void)_doUidStoreUpdate:(id)arg1 ;
-(void)_updateCountOfMessagesOnServerIfNecessary;
-(void)_discardSyncProgressSoFar;
-(void)_removeUidFromAuxiliaryLists:(id)arg1 ;
-(void)_pushLabels:(id)arg1 toDataSource:(id)arg2 withMonitor:(id)arg3 ;
-(void)_mergeItems:(id)arg1 intoAuxiliaryList:(unsigned long long)arg2 ;
-(void)_pushFlags:(id)arg1 toDataSource:(id)arg2 withMonitor:(id)arg3 ;
-(id)_checkOutGateway;
-(id)_newOperationFromUIDsNeedingSkeletons:(unsigned long long)arg1 ;
-(char)connectionSupportsUIDPLUS;
-(char)_placeholderDetailsExist;
-(char)_recoverFromErrorInDownload:(id)arg1 uid:(unsigned)arg2 cacheList:(id)arg3 atIndex:(unsigned long long)arg4 downloadCache:(id)arg5 ;
-(void)_setAttachmentNamesForMessage:(id)arg1 ;
-(char)_handleFailedFetchResponseForOperation:(id)arg1 ;
-(void)_setupFakeResponseToOperation:(id)arg1 messageNumber:(unsigned long long)arg2 ;
-(id)suffixArrayOfArray:(id)arg1 ofLength:(unsigned long long)arg2 fullLength:(unsigned long long*)arg3 ;
-(void)requestCheckingNewMail;
-(void)boostActiveOperationsTo:(long long)arg1 ;
@end
