/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNetworkOperation.h>

@class FCCKContentDatabase, CKQuery, CKQueryCursor, NSArray, NSDictionary, FCEdgeCacheHint;

@interface FCCKContentQueryOperation : FCNetworkOperation {

	int _networkEventType;
	FCCKContentDatabase* _database;
	CKQuery* _query;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _queryCompletionBlock;
	NSArray* _requestUUIDs;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCEdgeCacheHint* _edgeCacheHint;
	unsigned long long _queryPriority;
	NSArray* _networkEvents;
	CKQueryCursor* _resultCursor;

}
-(id)init;
-(void)performOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)throttleGroup;
@end
