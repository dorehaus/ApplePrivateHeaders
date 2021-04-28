/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSObject, NSURL, NSString, NSAppearance;

@interface WBSStartPageBackgroundManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _imageSavingQueue;
	NSURL* _imageURL;
	RetainPtr<CGImage *>* _prefetchedImage;
	RetainPtr<CGImage *>* _prefetchedImageThumbnail;
	NSURL* _prefetchedImageURL;
	NSString* _lastPrefetchedFilePath;
	Aq _prefetchingCoalescingDelay;
	double _prefetchedImageLuminance;
	NSAppearance* _appearance;
	RetainPtr<CGImage *>* _image;

}

@property (nonatomic,readonly) RetainPtr<CGImage *>* image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) RetainPtr<CGImage *>* prefetchedImageThumbnail; 
@property (nonatomic,copy,readonly) NSString * prefetchedImageName; 
+(id)defaultManager;
+(void)warmUp;
-(id)init;
-(RetainPtr<CGImage *>*)image;
-(void)clearImage;
-(id)appearanceIfImageExists:(char)arg1 ;
-(void)clearPrefetchedImage;
-(void)processImage;
-(void)cacheImageFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)appearanceForImage:(RetainPtr<CGImage *>*)arg1 ;
-(void)prefetchImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)prefetchedImageName;
-(RetainPtr<CGImage *>*)prefetchedImageThumbnail;
-(id)appearanceForLuminance:(double)arg1 ;
-(void)commitImage:(RetainPtr<CGImage *>*)arg1 lumainance:(double)arg2 ;
-(void)prefetchImage:(id)arg1 luminance:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setImage:(RetainPtr<CGImage *>*)arg1 withAppearance:(id)arg2 ;
-(void)_processImage;
-(void)_commitImage:(RetainPtr<CGImage *>*)arg1 appearanceName:(id)arg2 ;
-(void)_clearPrefetchedImage;
-(void)_saveImage:(RetainPtr<CGImage *>*)arg1 appearance:(id)arg2 ;
-(void)_updateThumbnailIfNeeded;
-(void)_prefetchImage:(id)arg1 luminance:(double)arg2 completion:(/*^block*/id)arg3 withNanoSecondDelay:(long long)arg4 ;
-(void)computeLuminanceAndCommitImage:(RetainPtr<CGImage *>*)arg1 ;
@end

