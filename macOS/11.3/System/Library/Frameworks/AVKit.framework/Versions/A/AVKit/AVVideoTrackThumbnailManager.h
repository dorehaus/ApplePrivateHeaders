/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVKit/AVKit-Structs.h>
@class AVIterableCache;

@interface AVVideoTrackThumbnailManager : NSObject {

	AVIterableCache* _cachedThumbnails;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)addThumbnailWithTime:(double)arg1 index:(unsigned long long)arg2 zoomFactor:(unsigned long long)arg3 ;
-(void)setImage:(CGImageRef)arg1 forTime:(double)arg2 ;
-(id)timesOfThumbnailsWithPlaceholderImage;
-(id)allThumbnails;
-(id)thumbnailsWithTimes:(id)arg1 ;
-(id)thumbnailWithTime:(double)arg1 ;
-(CGImageRef)_thumbnailImageClosestToTime:(double)arg1 ;
@end

