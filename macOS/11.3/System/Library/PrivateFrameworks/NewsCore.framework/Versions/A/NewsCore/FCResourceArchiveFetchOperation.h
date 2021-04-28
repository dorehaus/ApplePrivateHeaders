/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSURL, NSURLSessionDownloadTask, NSArray;

@interface FCResourceArchiveFetchOperation : FCOperation {

	unsigned long long _maxConcurrentFetchCount;
	/*^block*/id _progressHandler;
	/*^block*/id _interestTokenHandler;
	/*^block*/id _archiveHandler;
	/*^block*/id _fetchCompletionHandler;
	NSURL* _archiveURL;
	id<FCContentContext> _context;
	NSURLSessionDownloadTask* _downloadTask;
	NSArray* _resultResources;

}

@property (assign,nonatomic) unsigned long long maxConcurrentFetchCount;              //@synthesize maxConcurrentFetchCount=_maxConcurrentFetchCount - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id interestTokenHandler;                                   //@synthesize interestTokenHandler=_interestTokenHandler - In the implementation block
@property (nonatomic,copy) id archiveHandler;                                         //@synthesize archiveHandler=_archiveHandler - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                 //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(void)performOperation;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)fetchCompletionHandler;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(unsigned long long)maxConcurrentFetchCount;
-(void)setMaxConcurrentFetchCount:(unsigned long long)arg1 ;
-(id)interestTokenHandler;
-(void)setInterestTokenHandler:(id)arg1 ;
-(id)archiveHandler;
-(void)setArchiveHandler:(id)arg1 ;
-(id)initWithArchiveURL:(id)arg1 context:(id)arg2 ;
@end

