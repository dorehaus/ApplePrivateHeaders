/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, SSVURLCacheConfiguration;

@interface SSVURLCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	CFURLStorageSessionRef _cacheStorageSession;
	SSVURLCacheConfiguration* _configuration;
	CFURLCacheRef _urlCache;

}
-(void)dealloc;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(void)removeAllCachedResponses;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)configureRequest:(id)arg1 ;
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 cachedResponse:(id*)arg2 ;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 userInfo:(id)arg3 ;
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 ;
-(void)loadMemoryCacheFromDisk;
-(void)saveMemoryCacheToDisk;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 ;
@end
