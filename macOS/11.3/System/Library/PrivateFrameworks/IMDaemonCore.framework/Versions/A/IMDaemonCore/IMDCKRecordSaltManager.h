/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface IMDCKRecordSaltManager : NSObject {

	NSString* _cachedSalt;
	NSObject*<OS_dispatch_queue> _ckQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;              //@synthesize ckQueue=_ckQueue - In the implementation block
@property (retain) NSString * cachedSalt;                                         //@synthesize cachedSalt=_cachedSalt - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_container;
-(void)_scheduleOperation:(id)arg1 ;
-(void)clearLocalSyncState;
-(NSString *)cachedSalt;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(void)setCachedSalt:(NSString *)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 forceFetch:(char)arg2 ;
-(id)_CKUtilitiesSharedInstance;
-(void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteDeDupeRecordZone;
@end

