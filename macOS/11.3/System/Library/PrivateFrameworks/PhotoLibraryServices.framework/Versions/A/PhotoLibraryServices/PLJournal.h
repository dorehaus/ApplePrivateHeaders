/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLJournalFile, NSURL, NSDictionary;

@interface PLJournal : NSObject {

	PLJournalFile* _snapshotJournal;
	PLJournalFile* _changeJournal;
	unsigned char _snapshotMode;
	NSURL* _baseURL;
	Class _payloadClass;
	PLJournalFile* _pendingSnapshotJournal;
	PLJournalFile* _pendingChangeJournal;
	PLJournalFile* _prepareMarker;

}

@property (nonatomic,readonly) PLJournalFile * pendingSnapshotJournal;              //@synthesize pendingSnapshotJournal=_pendingSnapshotJournal - In the implementation block
@property (nonatomic,readonly) PLJournalFile * pendingChangeJournal;                //@synthesize pendingChangeJournal=_pendingChangeJournal - In the implementation block
@property (nonatomic,readonly) PLJournalFile * prepareMarker;                       //@synthesize prepareMarker=_prepareMarker - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                     //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) PLJournalFile * snapshotJournal; 
@property (nonatomic,readonly) PLJournalFile * changeJournal; 
@property (nonatomic,readonly) Class payloadClass;                                  //@synthesize payloadClass=_payloadClass - In the implementation block
+(char)snapshotFinishMarkerExistsForBaseURL:(id)arg1 ;
+(id)metadataURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 pending:(char)arg3 ;
+(id)journalURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 journalType:(id)arg3 ;
+(id)snapshotFinishMarkerURLForBaseURL:(id)arg1 ;
+(char)createSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2 ;
+(char)removeSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2 ;
+(char)recoverJournalsIfNecessaryForBaseURL:(id)arg1 payloadClasses:(id)arg2 error:(id*)arg3 ;
+(char)createSnapshotsForBaseURL:(id)arg1 payloadClasses:(id)arg2 snapshotJournalBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
+(char)appendSnapshotsForBaseURL:(id)arg1 payloadClasses:(id)arg2 snapshotJournalBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
+(char)_performSnapshotsForBaseURL:(id)arg1 snapshotMode:(unsigned char)arg2 payloadClasses:(id)arg3 snapshotJournalBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
+(char)_finishFullSnapshotForBaseURL:(id)arg1 snapshotSucceeded:(char)arg2 snapshotMode:(unsigned char)arg3 journals:(id)arg4 error:(id*)arg5 ;
-(NSURL *)baseURL;
-(NSDictionary *)metadata;
-(char)createSnapshotUsingNextPayloadBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)enumeratePayloadsUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)appendChangeEntries:(id)arg1 error:(id*)arg2 ;
-(id)initWithBaseURL:(id)arg1 payloadClass:(Class)arg2 ;
-(Class)payloadClass;
-(char)appendSnapshotUsingNextEntryBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)enumerateEntriesUsingBlock:(/*^block*/id)arg1 decodePayload:(char)arg2 error:(id*)arg3 ;
-(PLJournalFile *)pendingSnapshotJournal;
-(PLJournalFile *)pendingChangeJournal;
-(PLJournalFile *)prepareMarker;
-(PLJournalFile *)snapshotJournal;
-(PLJournalFile *)changeJournal;
-(void)removeMetadata;
-(id)metadataURLPending:(char)arg1 ;
-(char)_removeMetadataPending:(char)arg1 error:(id*)arg2 ;
-(char)_replaceMetadataWithPendingMetadataError:(id*)arg1 ;
-(id)_readMetadataPending:(char)arg1 ;
-(char)_updateMetadataWithMetadata:(id)arg1 replace:(char)arg2 pending:(char)arg3 error:(id*)arg4 ;
-(char)removeJournalFilesWithError:(id*)arg1 ;
-(char)_isPendingJournalAuthoritative;
-(char)_recoverJournalWithError:(id*)arg1 ;
-(char)_prepareForSnapshotWithMode:(unsigned char)arg1 error:(id*)arg2 ;
-(char)_finishSnapshotWithMode:(unsigned char)arg1 snapshotSuccess:(char)arg2 error:(id*)arg3 ;
-(char)_performSnapshotWithMode:(unsigned char)arg1 usingNextEntryBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)prepareForCreateSnapshotWithError:(id*)arg1 ;
-(char)finishCreateSnapshot:(char)arg1 error:(id*)arg2 ;
-(char)coalesceChangesToSnapshotWithError:(id*)arg1 ;
-(char)snapshotJournalFileSize:(unsigned long long*)arg1 changeJournalFileSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned long long)countOfInsertEntriesWithError:(id*)arg1 ;
-(unsigned long long)currentPayloadVersionWithError:(id*)arg1 ;
-(id)_payloadTooNewErrorWithPayloadVersion:(long long)arg1 ;
-(char)appendUpdatePayloadWithPayloadID:(id)arg1 attributes:(id)arg2 error:(id*)arg3 ;
@end

