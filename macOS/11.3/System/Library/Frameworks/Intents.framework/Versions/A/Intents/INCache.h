/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface INCache : NSObject {

	NSCache* _underlyingCache;

}

@property (nonatomic,readonly) NSCache * _cacheDictionary; 
+(id)sharedCache;
-(id)init;
-(id)_init;
-(NSCache *)_cacheDictionary;
-(void)addCacheableObject:(id)arg1 ;
-(void)removeCacheableObject:(id)arg1 ;
-(id)cacheableObjectForIdentifier:(id)arg1 ;
-(id)consumeCacheableObjectForIdentifier:(id)arg1 ;
-(void)removeAllCacheableObjects;
@end

