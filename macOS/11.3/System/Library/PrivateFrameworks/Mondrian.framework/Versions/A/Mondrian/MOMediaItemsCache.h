/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MOLRUCache;

@interface MOMediaItemsCache : NSObject {

	long long _memoryStatus;
	id _memoryPressureMonitor;
	MOLRUCache* _mediaItemsCache;
	unsigned long long _minCacheCount;
	unsigned long long _maxCacheCount;

}

@property (assign,nonatomic) unsigned long long minCacheCount;              //@synthesize minCacheCount=_minCacheCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxCacheCount;              //@synthesize maxCacheCount=_maxCacheCount - In the implementation block
-(void)dealloc;
-(id)init;
-(id)mediaItemAtIndexPath:(id)arg1 ;
-(void)_memoryPressureHandler;
-(void)setMinCacheCount:(unsigned long long)arg1 ;
-(void)setMaxCacheCount:(unsigned long long)arg1 ;
-(unsigned long long)minCacheCount;
-(unsigned long long)maxCacheCount;
-(void)setMediaItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)removeMediaItemAtIndexPath:(id)arg1 ;
-(void)removeAllMediaItems;
@end

