/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>
#import <libobjc.A.dylib/CKDOperationPipelining.h>

@protocol OS_dispatch_group;
@class NSString, CKQuery, CKQueryCursor, NSSet, CKRecordZoneID, CKDRecordFetchAggregator, NSObject, NSMutableArray, NSDictionary;

@interface CKDQueryOperation : CKDDatabaseOperation <CKDOperationPipelining> {

	char _shouldFetchAssetContent;
	char _fetchAllResults;
	char _hasCalledQueryCursorUpdatedBlock;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	CKQueryCursor* _resultsCursor;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCursorUpdatedBlock;
	NSSet* _desiredKeySet;
	CKRecordZoneID* _zoneID;
	CKDRecordFetchAggregator* _recordFetcher;
	NSObject*<OS_dispatch_group> _fetchRecordsGroup;
	unsigned long long _numRequestsSent;
	NSMutableArray* _requestInfos;
	NSDictionary* _assetTransferOptionsByKey;

}

@property (nonatomic,retain) NSSet * desiredKeySet;                                                   //@synthesize desiredKeySet=_desiredKeySet - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                                            //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                                                 //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) CKDRecordFetchAggregator * recordFetcher;                                //@synthesize recordFetcher=_recordFetcher - In the implementation block
@property (nonatomic,retain) CKQueryCursor * resultsCursor;                                           //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (assign,nonatomic) char fetchAllResults;                                                    //@synthesize fetchAllResults=_fetchAllResults - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchRecordsGroup;                          //@synthesize fetchRecordsGroup=_fetchRecordsGroup - In the implementation block
@property (assign,nonatomic) unsigned long long numRequestsSent;                                      //@synthesize numRequestsSent=_numRequestsSent - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestInfos;                                           //@synthesize requestInfos=_requestInfos - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByKey;                                //@synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey - In the implementation block
@property (assign,nonatomic) char hasCalledQueryCursorUpdatedBlock;                                   //@synthesize hasCalledQueryCursorUpdatedBlock=_hasCalledQueryCursorUpdatedBlock - In the implementation block
@property (nonatomic,retain) id<CKQueryOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKQuery * query;                                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) CKQueryCursor * cursor;                                                //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) unsigned long long resultsLimit;                                       //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                                     //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id queryCursorUpdatedBlock;                                                //@synthesize queryCursorUpdatedBlock=_queryCursorUpdatedBlock - In the implementation block
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKQuery *)query;
-(int)operationType;
-(CKQueryCursor *)cursor;
-(void)main;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)relevantZoneIDs;
-(unsigned long long)resultsLimit;
-(id)recordFetchedBlock;
-(char)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(void)setResultsCursor:(CKQueryCursor *)arg1 ;
-(CKQueryCursor *)resultsCursor;
-(NSDictionary *)assetTransferOptionsByKey;
-(void)setAssetTransferOptionsByKey:(NSDictionary *)arg1 ;
-(char)fetchAllResults;
-(void)setFetchAllResults:(char)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setQueryCursorUpdatedBlock:(id)arg1 ;
-(NSString *)pipeliningDescription;
-(NSObject*<OS_dispatch_group>)fetchRecordsGroup;
-(id)queryCursorUpdatedBlock;
-(void)setHasCalledQueryCursorUpdatedBlock:(char)arg1 ;
-(CKDRecordFetchAggregator *)recordFetcher;
-(char)hasCalledQueryCursorUpdatedBlock;
-(id)_wrapError:(id)arg1 format:(id)arg2 ;
-(NSSet *)desiredKeySet;
-(NSMutableArray *)requestInfos;
-(unsigned long long)numRequestsSent;
-(void)setNumRequestsSent:(unsigned long long)arg1 ;
-(void)_sendQueryRequestWithCursor:(id)arg1 previousRequestSchedulerInfo:(id)arg2 ;
-(void)_handleQueryRequestFinishedWithSchedulerInfo:(id)arg1 ;
-(void)_handleRecordResponses:(id)arg1 perRequestSchedulerInfo:(id)arg2 ;
-(void)setRecordFetcher:(CKDRecordFetchAggregator *)arg1 ;
-(void)setDesiredKeySet:(NSSet *)arg1 ;
-(void)setFetchRecordsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRequestInfos:(NSMutableArray *)arg1 ;
@end

