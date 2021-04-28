/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableArray;

@interface MPMediaEntityCache : NSObject {

	id<MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
	char _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
	opaque_pthread_rwlock_t _rwlock;
	os_unfair_lock_s _entityCacheMapLock;
	NSObject*<OS_dispatch_queue> _deallocLaterQueue;
	CFDictionaryRef _concreteEntitiesByDataProviderEntityClass;
	NSMutableArray* _entityTemporaryReferences;

}
-(id)itemWithIdentifier:(long long)arg1 ;
-(id)initWithMediaLibraryDataProvider:(id)arg1 ;
-(id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(/*^block*/id)arg2 ;
-(id)collectionWithIdentifier:(long long)arg1 grouping:(long long)arg2 loadEntityBlock:(/*^block*/id)arg3 ;
-(void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(char)arg3 ;
-(void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 ;
-(id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(long long)arg2 collectionGroupingType:(long long)arg3 loadEntityBlock:(/*^block*/id)arg4 ;
-(map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity> *__weak>>>*)_entityMapForDataProviderEntityClass:(Class)arg1 ;
-(void)_clearSomeGlobalEntityTemporaryReferences;
-(void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)arg1 block:(/*^block*/id)arg2 ;
-(void)_performWithSharedAccessForDataProviderEntityClass:(Class)arg1 block:(/*^block*/id)arg2 ;
@end

