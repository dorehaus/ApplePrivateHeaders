/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface SearchUIImageCache : NSObject {

	NSCache* _imageCache;

}

@property (retain) NSCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedCache;
+(id)cachedTlkImageForSFImage:(id)arg1 ;
+(void)cacheTLKImage:(id)arg1 forSFImage:(id)arg2 ;
-(id)init;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)arg1 ;
-(void)appIconImageDidChange:(id)arg1 ;
-(void)dateDidChange;
@end
