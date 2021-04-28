/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKSyncRemoteKnowledgeStorage.h>

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;
@class _DKSyncCloudKitKnowledgeStorage;

@interface _DKSyncDownCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage> {

	_DKSyncCloudKitKnowledgeStorage* _common;
	id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;

}

@property (retain) _DKSyncCloudKitKnowledgeStorage * common;                             //@synthesize common=_common - In the implementation block
@property (retain) id<_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAvailable) char available; 
+(id)sharedInstance;
-(id)init;
-(id)name;
-(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)delegate;
-(void)setDelegate:(id<_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1 ;
-(void)start;
-(_DKSyncCloudKitKnowledgeStorage *)common;
-(char)isAvailable;
-(void)setFetchDelegate:(id)arg1 ;
-(long long)transportType;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)setHasAdditionsFlag:(char)arg1 forPeer:(id)arg2 ;
-(void)setHasDeletionsFlag:(char)arg1 forPeer:(id)arg2 ;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(char)arg6 completion:(/*^block*/id)arg7 ;
-(void)cancelOutstandingOperations;
-(char)hasAdditionsFlagForPeer:(id)arg1 ;
-(char)hasDeletionsFlagForPeer:(id)arg1 ;
-(void)clearPrewarmedFlag;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAvailable:(char)arg1 ;
-(void)setCommon:(_DKSyncCloudKitKnowledgeStorage *)arg1 ;
@end

