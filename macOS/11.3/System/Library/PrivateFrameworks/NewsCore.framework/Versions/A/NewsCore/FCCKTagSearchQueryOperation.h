/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSString, CKQueryCursor, NSArray, NSError;

@interface FCCKTagSearchQueryOperation : FCOperation {

	FCCKContentDatabase* _database;
	unsigned long long _resultsLimit;
	NSString* _searchString;
	long long _tagType;
	CKQueryCursor* _cursor;
	NSArray* _desiredKeys;
	NSString* _locale;
	/*^block*/id _queryCompletionHandler;
	NSString* _tagTypeString;
	NSArray* _resultRecords;
	CKQueryCursor* _resultCursor;
	NSError* _resultError;

}
-(void)performOperation;
-(void)prepareOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
@end

