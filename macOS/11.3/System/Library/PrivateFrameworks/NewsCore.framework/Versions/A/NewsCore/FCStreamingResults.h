/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCStreaming;
#import <NewsCore/NewsCore-Structs.h>
@class NSHashTable, NSMutableArray, FCAsyncSerialQueue;

@interface FCStreamingResults : NSObject {

	NSHashTable* _observers;
	id<FCStreaming> _underlyingStream;
	NSMutableArray* _results;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<FCStreaming> underlyingStream;              //@synthesize underlyingStream=_underlyingStream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (getter=isFinished,nonatomic,readonly) char finished; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSRange range; 
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)array;
-(FCAsyncSerialQueue *)serialQueue;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSMutableArray *)results;
-(NSRange)range;
-(id)initWithStream:(id)arg1 ;
-(char)isFinished;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id<FCStreaming>)underlyingStream;
-(id)initWithResults:(id)arg1 followedByStream:(id)arg2 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)objectsInRange:(NSRange)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end
