/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCCKDatabaseEncryptionDelegate, OS_dispatch_queue, OS_dispatch_group;
@class FCNetworkBehaviorMonitor, NSData, CKRecord, NFLazy, FCCKPrivateDatabaseSchema, NSObject, NSOperationQueue, NSArray, NSDate;

@interface FCCKPrivateDatabase : NSObject {

	char _encryptionEnabled;
	char _secureSubscriptionsEnabled;
	char _encryptionRequired;
	char _beganInitialStartUp;
	char _finishedInitialStartUp;
	char _activelyStartingUp;
	id<FCCKDatabaseEncryptionDelegate> _encryptionDelegate;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	NSData* _encryptionKey;
	NSData* _secureEncryptionKey;
	CKRecord* _sentinelRecord;
	NFLazy* _ckProperties;
	FCCKPrivateDatabaseSchema* _schema;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _serialOperationQueue;
	NSOperationQueue* _highPriorityOperationQueue;
	NSOperationQueue* _noPreflightOperationQueue;
	NSArray* _middleware;
	NSArray* _remainingStartUpMiddleware;
	NSArray* _operationMiddleware;
	NSArray* _recordMiddleware;
	NSObject*<OS_dispatch_group> _initialStartUpGroup;
	long long _startUpResult;
	unsigned long long _countOfFailedStartUpAttempts;
	NSDate* _dateOfLastFailedStartUpAttempt;
	NSArray* _zoneRestorationSources;
	NSArray* _zonePruningAssistants;

}
+(id)testingDatabase;
-(void)fetchChangesForRecordZoneID:(id)arg1 changeToken:(id)arg2 desiredKeys:(id)arg3 fetchAllChanges:(char)arg4 qualityOfService:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)fetchAllDatabaseChangesWithServerChangeToken:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
