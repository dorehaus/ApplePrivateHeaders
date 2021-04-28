/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVAssetCache.h>

@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {

	AVManagedAssetCacheInternal* _priv;

}
+(id)assetCacheWithURL:(id)arg1 ;
+(id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)allKeys;
-(id)URL;
-(long long)maxSize;
-(void)setMaxSize:(long long)arg1 ;
-(char)isProgressiveDownloadCacheEnabled;
-(char)isHTTPLiveStreamingCacheEnabled;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(char)isPlayableOffline;
-(long long)maxEntrySize;
-(long long)currentSize;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(id)initWithURL:(id)arg1 enableCRABSCache:(char)arg2 enableHLSCache:(char)arg3 ;
-(void)setMaxEntrySize:(long long)arg1 ;
@end

