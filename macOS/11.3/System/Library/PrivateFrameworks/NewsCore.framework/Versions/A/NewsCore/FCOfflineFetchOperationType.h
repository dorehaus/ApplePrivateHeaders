/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCOfflineFetchOperationType
@property (assign,nonatomic) char cachedOnly; 
@property (nonatomic,copy) id progressHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> progressQueue; 
@property (nonatomic,copy) id archiveHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> archiveQueue; 
@property (nonatomic,copy) id fetchCompletionHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchCompletionQueue; 
@required
-(void)setProgressHandler:(/*^block*/id)arg1;
-(id)progressHandler;
-(char)cachedOnly;
-(void)setCachedOnly:(char)arg1;
-(void)setFetchCompletionHandler:(/*^block*/id)arg1;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)fetchCompletionQueue;
-(id)archiveHandler;
-(void)setArchiveHandler:(/*^block*/id)arg1;
-(NSObject*<OS_dispatch_queue>)archiveQueue;
-(NSObject*<OS_dispatch_queue>)progressQueue;
-(void)setProgressQueue:(id)arg1;
-(void)setArchiveQueue:(id)arg1;

@end

