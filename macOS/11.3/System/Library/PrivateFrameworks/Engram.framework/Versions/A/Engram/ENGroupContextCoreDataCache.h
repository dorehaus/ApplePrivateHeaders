/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Versions/A/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ENGroupContextCacheMiddleware.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPersistentContainer, NSString;

@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware> {

	NSObject*<OS_dispatch_queue> _queue;
	NSPersistentContainer* _container;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSPersistentContainer *)container;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setContainer:(NSPersistentContainer *)arg1 ;
-(long long)middlewareCacheCostForContext:(id)arg1 ;
-(void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 fetchAllKnownGroups:(/*^block*/id)arg2 ;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 containerURL:(id)arg2 queue:(id)arg3 ;
-(void)_groupFromCypher:(id)arg1 groupID:(id)arg2 applicationData:(id)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initOnDiskCacheWithContainerURL:(id)arg1 Queue:(id)arg2 ;
-(id)initInMemoryCacheWithQueue:(id)arg1 ;
@end

