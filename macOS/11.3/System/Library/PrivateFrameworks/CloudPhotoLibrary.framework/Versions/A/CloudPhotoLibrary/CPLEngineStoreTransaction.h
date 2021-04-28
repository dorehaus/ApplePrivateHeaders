/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSThread, NSMutableArray, CPLTransaction, NSError, NSString, CPLEngineWriteTransactionBlocker;

@interface CPLEngineStoreTransaction : NSObject {

	NSThread* _currentThread;
	char _forWrite;
	NSMutableArray* _cleanupBlocks;
	CPLTransaction* _dirty;
	NSError* _error;
	NSString* _name;
	CPLEngineWriteTransactionBlocker* _blocker;

}

@property (nonatomic,retain) CPLEngineWriteTransactionBlocker * blocker;              //@synthesize blocker=_blocker - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)redactedDescription;
-(void)addCleanupBlock:(/*^block*/id)arg1 ;
-(NSError *)error;
-(void)setName:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(char)do:(/*^block*/id)arg1 ;
-(char)canWrite;
-(char)canRead;
-(void)_transactionDidFinish;
-(void)_transactionWillBeginOnThread:(id)arg1 ;
-(void)_releaseDirty;
-(id)initForWrite:(char)arg1 identifier:(id)arg2 description:(id)arg3 ;
-(char)_forWrite;
-(CPLEngineWriteTransactionBlocker *)blocker;
-(void)setBlocker:(CPLEngineWriteTransactionBlocker *)arg1 ;
@end

