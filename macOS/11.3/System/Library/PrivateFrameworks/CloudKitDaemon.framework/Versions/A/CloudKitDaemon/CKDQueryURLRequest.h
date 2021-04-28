/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSMutableArray, CKQuery, NSData, CKRecordZoneID, NSArray, NSSet, NSString;

@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	NSMutableArray* _queryResponses;
	char _shouldFetchAssetContent;
	CKQuery* _query;
	NSData* _cursor;
	unsigned long long _limit;
	CKRecordZoneID* _zoneID;
	NSArray* _requestedFields;
	NSSet* _desiredAssetKeys;
	/*^block*/id _recordsParsedBlock;
	NSData* _resultsCursor;
	NSMutableArray* _recordResponses;

}

@property (nonatomic,retain) NSMutableArray * queryResponses;               //@synthesize queryResponses=_queryResponses - In the implementation block
@property (nonatomic,retain) NSData * resultsCursor;                        //@synthesize resultsCursor=_resultsCursor - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordResponses;              //@synthesize recordResponses=_recordResponses - In the implementation block
@property (nonatomic,retain) CKQuery * query;                               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSData * cursor;                               //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                       //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSArray * requestedFields;                     //@synthesize requestedFields=_requestedFields - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                  //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                      //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,copy) id recordsParsedBlock;                           //@synthesize recordsParsedBlock=_recordsParsedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKQuery *)query;
-(void)setQuery:(CKQuery *)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(NSData *)cursor;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(char)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(void)setResultsCursor:(NSData *)arg1 ;
-(NSData *)resultsCursor;
-(void)setCursor:(NSData *)arg1 ;
-(NSArray *)requestedFields;
-(void)setRequestedFields:(NSArray *)arg1 ;
-(id)initWithOperation:(id)arg1 query:(id)arg2 cursor:(id)arg3 limit:(unsigned long long)arg4 requestedFields:(id)arg5 zoneID:(id)arg6 ;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(void)setRecordsParsedBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(char)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(char)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(void)requestDidComplete;
-(NSSet *)desiredAssetKeys;
-(id)recordsParsedBlock;
-(NSMutableArray *)queryResponses;
-(void)setQueryResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recordResponses;
-(void)setRecordResponses:(NSMutableArray *)arg1 ;
@end

