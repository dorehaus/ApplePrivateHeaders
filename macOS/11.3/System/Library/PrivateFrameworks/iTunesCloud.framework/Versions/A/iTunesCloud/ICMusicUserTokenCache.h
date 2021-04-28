/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicUserTokenCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _cachedUserTokens;

}
+(id)sharedCache;
+(void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_decodeDeveloperTokenPart:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(void)_loadPersistedCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)getCachedUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1 ;
-(void)_persistCache;
-(void)_postLocalChangeNotification;
@end

