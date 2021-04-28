/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TBCoreDataSource, TBDataSource, NSOperationQueue;

@interface TBDataSourceMediator : NSObject {

	TBCoreDataSource* _local;
	TBDataSource* _remote;
	NSOperationQueue* _fetchQueue;

}

@property (nonatomic,retain) TBCoreDataSource * local;                   //@synthesize local=_local - In the implementation block
@property (nonatomic,retain) TBDataSource * remote;                      //@synthesize remote=_remote - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fetchQueue;              //@synthesize fetchQueue=_fetchQueue - In the implementation block
-(TBDataSource *)remote;
-(void)setRemote:(TBDataSource *)arg1 ;
-(TBCoreDataSource *)local;
-(void)setLocal:(TBCoreDataSource *)arg1 ;
-(void)executeFetchRequest:(id)arg1 ;
-(NSOperationQueue *)fetchQueue;
-(void)setFetchQueue:(NSOperationQueue *)arg1 ;
-(void)removeAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithLocalStoreDescriptor:(id)arg1 remoteStore:(id)arg2 ;
-(id)initWithLocalStoreDescriptor:(id)arg1 ;
-(void)removeWithFetchRequest:(id)arg1 ;
@end

