/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Mondrian/Mondrian-Structs.h>
@class NSObject, NSString, NSMutableDictionary;

@interface MOImageDiskCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialDiskSaveQueue;
	NSString* _diskCacheDirectory;
	NSMutableDictionary* _diskCacheDirectoryForURLs;
	char _useAsynchronousSerialDiskSaveQueue;
	unsigned long long _imageFormat;

}

@property (assign,nonatomic) char useAsynchronousSerialDiskSaveQueue;              //@synthesize useAsynchronousSerialDiskSaveQueue=_useAsynchronousSerialDiskSaveQueue - In the implementation block
@property (assign,nonatomic) unsigned long long imageFormat;                       //@synthesize imageFormat=_imageFormat - In the implementation block
+(unsigned long long)alignResolution:(unsigned long long)arg1 ;
+(unsigned long long)bestResolutionForSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidateMemoryCaches;
-(void)invalidateDiskCaches;
-(unsigned long long)imageFormat;
-(void)setImageFormat:(unsigned long long)arg1 ;
-(void)_didResignActiveNotification;
-(void)_willTerminateNotification;
-(id)initWithDiskCacheDirectory:(id)arg1 ;
-(id)_diskCacheDirectoryForURL:(id)arg1 ;
-(id)_diskCacheFilePathForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(id)_diskCacheResolutionsForURL:(id)arg1 ;
-(void)invalidateDiskCacheForURL:(id)arg1 ;
-(void)purgeDiskCache:(unsigned long long)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setImage:(CGImageRef)arg1 withResolution:(unsigned long long)arg2 forURL:(id)arg3 ;
-(CGImageRef)imageForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(char)hasImageForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(CGImageRef)imageFromBestDiskCacheForURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
-(CGImageRef)bestImageDiskCacheForURL:(id)arg1 ;
-(char)useAsynchronousSerialDiskSaveQueue;
-(void)setUseAsynchronousSerialDiskSaveQueue:(char)arg1 ;
@end

