/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKArchiveRecordsOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKArchiveRecordsOperationInfo;

@interface CKArchiveRecordsOperation : CKDatabaseOperation <CKArchiveRecordsOperationCallbacks> {

	/*^block*/id _recordArchivedBlock;
	/*^block*/id _archiveRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrors;

}

@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                                //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,readonly) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKArchiveRecordsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * recordIDs;                                                                  //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                                                               //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
@property (nonatomic,copy) id archiveRecordsCompletionBlock;                                                     //@synthesize archiveRecordsCompletionBlock=_archiveRecordsCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(char)hasCKOperationCallbacksSet;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)recordArchivedBlock;
-(id)archiveRecordsCompletionBlock;
-(NSMutableDictionary *)perItemErrors;
-(void)setArchiveRecordsCompletionBlock:(id)arg1 ;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(void)handleRecordArchivalForRecordID:(id)arg1 error:(id)arg2 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
@end

