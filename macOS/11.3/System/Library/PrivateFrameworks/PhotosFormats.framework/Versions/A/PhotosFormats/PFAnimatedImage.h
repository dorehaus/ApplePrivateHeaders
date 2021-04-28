/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class PFFrameCache;

@interface PFAnimatedImage : NSObject {

	CGImageSourceRef _imageSource;
	double* _frameDelayTimes;
	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	PFFrameCache* _frameCache;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) PFFrameCache * frameCache;                  //@synthesize frameCache=_frameCache - In the implementation block
@property (assign,nonatomic) long long cacheStrategy; 
@property (nonatomic,readonly) unsigned long long frameCount;              //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;               //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                           //@synthesize pixelSize=_pixelSize - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(double)duration;
-(unsigned long long)frameCount;
-(CGSize)pixelSize;
-(unsigned long long)loopCount;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(char)arg3 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(PFFrameCache *)frameCache;
-(long long)cacheStrategy;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithData:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(char)arg3 ;
-(double)frameDelayAtIndex:(unsigned long long)arg1 ;
-(void)setCacheStrategy:(long long)arg1 ;
-(void)_preloadDelayTimes;
@end

