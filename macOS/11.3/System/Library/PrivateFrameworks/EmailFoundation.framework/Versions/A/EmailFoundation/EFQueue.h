/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFQueueingStrategy;
@class NSMutableArray, NSArray;

@interface EFQueue : NSObject {

	NSMutableArray* _buffer;
	id<EFQueueingStrategy> _strategy;

}

@property (nonatomic,readonly) NSMutableArray * buffer;                      //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<EFQueueingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObjects; 
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
+(id)bufferedQueueWithCapacity:(unsigned long long)arg1 batchHandler:(/*^block*/id)arg2 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(NSMutableArray *)buffer;
-(id)drain;
-(id)peek;
-(id)initWithStrategy:(id)arg1 ;
-(id<EFQueueingStrategy>)strategy;
-(void)enqueue:(id)arg1 ;
-(id)dequeue;
-(void)dequeueObject:(id)arg1 ;
-(void)enqueue:(id)arg1 replaceIfExists:(char)arg2 ;
@end

