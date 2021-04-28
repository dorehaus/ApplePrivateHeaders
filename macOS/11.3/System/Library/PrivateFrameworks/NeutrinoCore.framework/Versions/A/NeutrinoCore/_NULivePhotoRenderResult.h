/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NULivePhotoRenderResult.h>

@class AVAsset, AVVideoComposition, NUImageGeometry, NSString;

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult> {

	AVAsset* _video;
	AVVideoComposition* _videoComposition;
	CGImageRef _photo;
	NUImageGeometry* _videoGeometry;
	SCD_Struct_NU7 _photoTime;

}

@property (retain) AVAsset * video;                                    //@synthesize video=_video - In the implementation block
@property (retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (retain) CGImageRef photo;                                   //@synthesize photo=_photo - In the implementation block
@property (assign) SCD_Struct_NU7 photoTime;                           //@synthesize photoTime=_photoTime - In the implementation block
@property (retain) NUImageGeometry * videoGeometry;                    //@synthesize videoGeometry=_videoGeometry - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setPhoto:(CGImageRef)arg1 ;
-(CGImageRef)photo;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(AVAsset *)video;
-(void)setVideo:(AVAsset *)arg1 ;
-(SCD_Struct_NU7)photoTime;
-(void)setVideoGeometry:(NUImageGeometry *)arg1 ;
-(void)setPhotoTime:(SCD_Struct_NU7)arg1 ;
-(NUImageGeometry *)videoGeometry;
@end

