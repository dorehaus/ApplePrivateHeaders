/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSMutableDictionary, NSRecursiveLock;

@interface OFLRUCache : NSObject {

	unsigned long long _numberOfSlots;
	NSMutableDictionary* _cacheDictionary;
	NSRecursiveLock* _recursiveLock;
	OFLRUCacheList* _leastRecentUsedList;
	NSMutableDictionary* _leastRecentUsedDictionary;

}

@property (assign,nonatomic) unsigned long long numberOfSlots;                   //@synthesize numberOfSlots=_numberOfSlots - In the implementation block
@property (nonatomic,readonly) unsigned long long currentUsedSlots; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(char)writeToURL:(id)arg1 ;
-(unsigned long long)numberOfSlots;
-(unsigned long long)currentUsedSlots;
-(void)_promoteListElement:(OFLRUCacheListElement*)arg1 ;
-(void)_removeListElement:(OFLRUCacheListElement*)arg1 ;
-(void)setNumberOfSlots:(unsigned long long)arg1 ;
-(void)evictSlots:(unsigned long long)arg1 ;
-(char)loadFromURL:(id)arg1 ;
@end

