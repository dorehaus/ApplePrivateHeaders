/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFUnfairLock, NSMutableDictionary, NSArray, NSDictionary;

@interface FCThreadSafeMutableDictionary : NSObject {

	NFUnfairLock* _lock;
	NSMutableDictionary* _dictionary;

}

@property (readonly) unsigned long long count; 
@property (readonly) char isEmpty; 
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,copy,readonly) NSArray * allValues; 
@property (nonatomic,copy,readonly) NSDictionary * readOnlyDictionary; 
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(char)isEmpty;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allKeys;
-(NSArray *)allValues;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(NSDictionary *)readOnlyDictionary;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
@end
