/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVCaptureFileOutputDelegateWrapper.h>

@class NSString, NSURL, NSArray, AVMomentCaptureMovieRecordingResolvedSettings;

@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper {

	NSString* _videoCodecType;
	NSURL* _spatialOverCaptureMovieFileURL;
	NSArray* _spatialOverCaptureMovieMetadata;
	AVMomentCaptureMovieRecordingResolvedSettings* _resolvedSettings;
	char _didFinishWritingMovieCallbackFired;
	char _didFinishWritingSpatialOverCaptureMovieCallbackFired;

}

@property (readonly) NSString * videoCodecType;                                                             //@synthesize videoCodecType=_videoCodecType - In the implementation block
@property (readonly) NSURL * spatialOverCaptureMovieFileURL;                                                //@synthesize spatialOverCaptureMovieFileURL=_spatialOverCaptureMovieFileURL - In the implementation block
@property (readonly) NSArray * spatialOverCaptureMovieMetadata;                                             //@synthesize spatialOverCaptureMovieMetadata=_spatialOverCaptureMovieMetadata - In the implementation block
@property (nonatomic,retain) AVMomentCaptureMovieRecordingResolvedSettings * resolvedSettings;              //@synthesize resolvedSettings=_resolvedSettings - In the implementation block
@property (assign,nonatomic) char didFinishWritingMovieCallbackFired;                                       //@synthesize didFinishWritingMovieCallbackFired=_didFinishWritingMovieCallbackFired - In the implementation block
@property (assign,nonatomic) char didFinishWritingSpatialOverCaptureMovieCallbackFired;                     //@synthesize didFinishWritingSpatialOverCaptureMovieCallbackFired=_didFinishWritingSpatialOverCaptureMovieCallbackFired - In the implementation block
+(id)wrapperWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(void)dealloc;
-(NSString *)videoCodecType;
-(AVMomentCaptureMovieRecordingResolvedSettings *)resolvedSettings;
-(void)setResolvedSettings:(AVMomentCaptureMovieRecordingResolvedSettings *)arg1 ;
-(NSURL *)spatialOverCaptureMovieFileURL;
-(void)setDidFinishWritingSpatialOverCaptureMovieCallbackFired:(char)arg1 ;
-(void)setDidFinishWritingMovieCallbackFired:(char)arg1 ;
-(char)didFinishWritingMovieCallbackFired;
-(char)didFinishWritingSpatialOverCaptureMovieCallbackFired;
-(NSArray *)spatialOverCaptureMovieMetadata;
-(id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
@end

