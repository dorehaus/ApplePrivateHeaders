/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchRecordZonesOperationCallbacks.h>

@class NSArray, NSMutableDictionary, CKFetchRecordZonesOperationInfo;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks> {

	char _isFetchAllRecordZonesOperation;
	char _ignorePCSFailures;
	/*^block*/id _fetchRecordZonesCompletionBlock;
	NSArray* _recordZoneIDs;
	NSMutableDictionary* _recordZonesByZoneID;
	NSMutableDictionary* _recordZoneErrors;

}

@property (nonatomic,readonly) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchRecordZonesOperationInfo * operationInfo; 
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;                                            //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                                               //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (assign,nonatomic) char isFetchAllRecordZonesOperation;                                                  //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) char ignorePCSFailures;                                                               //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                                                //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) id fetchRecordZonesCompletionBlock;                                                     //@synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock - In the implementation block
+(id)fetchAllRecordZonesOperation;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(id)init;
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(char)hasCKOperationCallbacksSet;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(NSMutableDictionary *)recordZoneErrors;
-(id)relevantZoneIDs;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(char)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(char)isFetchAllRecordZonesOperation;
-(char)ignorePCSFailures;
-(void)setIgnorePCSFailures:(char)arg1 ;
-(id)fetchRecordZonesCompletionBlock;
-(NSMutableDictionary *)recordZonesByZoneID;
-(void)handleFetchForRecordZoneID:(id)arg1 recordZone:(id)arg2 error:(id)arg3 ;
-(id)initWithRecordZoneIDs:(id)arg1 ;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
@end

