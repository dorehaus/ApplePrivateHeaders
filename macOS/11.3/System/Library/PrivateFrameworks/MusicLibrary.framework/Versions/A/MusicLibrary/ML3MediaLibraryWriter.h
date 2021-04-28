/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ML3MediaLibraryWriterDelegate, OS_dispatch_queue;
@class NSTimer, NSObject, NSMutableDictionary, NSOperationQueue;

@interface ML3MediaLibraryWriter : NSObject {

	NSTimer* _watchdogTimer;
	char _suspended;
	id<ML3MediaLibraryWriterDelegate> _delegate;
	double _transactionTimeout;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _transactionMap;
	NSOperationQueue* _databaseOperationQueue;
	NSOperationQueue* _databaseOperationSerialQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * transactionMap;                         //@synthesize transactionMap=_transactionMap - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * databaseOperationQueue;                    //@synthesize databaseOperationQueue=_databaseOperationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * databaseOperationSerialQueue;              //@synthesize databaseOperationSerialQueue=_databaseOperationSerialQueue - In the implementation block
@property (assign,nonatomic,__weak) id<ML3MediaLibraryWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double transactionTimeout;                                      //@synthesize transactionTimeout=_transactionTimeout - In the implementation block
@property (assign,getter=isSuspended,nonatomic) char suspended;                              //@synthesize suspended=_suspended - In the implementation block
+(id)writerErrorWithCode:(long long)arg1 description:(id)arg2 ;
+(id)writerErrorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id<ML3MediaLibraryWriterDelegate>)delegate;
-(void)setDelegate:(id<ML3MediaLibraryWriterDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)reset;
-(void)setSuspended:(char)arg1 ;
-(char)isSuspended;
-(void)_watchdogTimerFired:(id)arg1 ;
-(id)beginTransactionForLibrary:(id)arg1 withClient:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)endTransaction:(id)arg1 shouldCommit:(char)arg2 error:(id*)arg3 ;
-(void)_setupWatchdogTimer;
-(void)_tearDownWatchdogTimer;
-(void)cancelAllActiveTransactions;
-(id)_createNewTransactionForLibrary:(id)arg1 fromClient:(id)arg2 readOnly:(char)arg3 ;
-(void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(char)arg2 ;
-(id)_transactionForIdentifier:(id)arg1 ;
-(char)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id*)arg4 ;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id*)arg5 ;
-(id)_allDatabaseOperations;
-(void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(char)arg1 ;
-(void)_registerTransaction:(id)arg1 ;
-(void)_unregisterTransaction:(id)arg1 ;
-(void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(char)arg2 ;
-(char)_shouldWatchdogTransaction:(id)arg1 ;
-(void)setTransactionTimeout:(double)arg1 ;
-(char)executeUntrustedUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id*)arg4 ;
-(id)executeUntrustedQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id*)arg5 ;
-(void)performDatabaseOperation:(unsigned long long)arg1 onLibrary:(id)arg2 withAttributes:(id)arg3 options:(id)arg4 fromClient:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelActiveTransactionForClient:(id)arg1 ;
-(void)cancelAllActiveDatabaseOperationsForClient:(id)arg1 waitUntilFinished:(char)arg2 ;
-(double)transactionTimeout;
-(NSMutableDictionary *)transactionMap;
-(NSOperationQueue *)databaseOperationQueue;
-(NSOperationQueue *)databaseOperationSerialQueue;
@end

