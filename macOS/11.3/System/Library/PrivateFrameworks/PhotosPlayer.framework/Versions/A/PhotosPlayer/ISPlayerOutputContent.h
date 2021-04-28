/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject {

	char _photoIsOriginal;
	int _photoEXIFOrientation;
	CGImageRef _photo;
	ISWrappedAVPlayer* _videoPlayer;
	CGSize _videoSize;

}

@property (nonatomic,readonly) CGImageRef photo;                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) char photoIsOriginal;                         //@synthesize photoIsOriginal=_photoIsOriginal - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                     //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                             //@synthesize videoSize=_videoSize - In the implementation block
-(void)dealloc;
-(id)description;
-(CGImageRef)photo;
-(ISWrappedAVPlayer *)videoPlayer;
-(int)photoEXIFOrientation;
-(id)initWithPhoto:(CGImageRef)arg1 photoIsOriginal:(char)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(CGSize)arg5 ;
-(char)photoIsOriginal;
-(CGSize)videoSize;
@end

