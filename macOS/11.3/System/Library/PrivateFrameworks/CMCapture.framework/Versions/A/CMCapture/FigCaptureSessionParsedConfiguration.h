/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FigCaptureSessionParsedMicSourceConfiguration;

@interface FigCaptureSessionParsedConfiguration : NSObject {

	char _empty;
	char _isMultiCamSession;
	NSArray* _parsedCameraSourceConfigurations;
	FigCaptureSessionParsedMicSourceConfiguration* _parsedMicSourceConfiguration;
	NSArray* _metadataSourceConfigurations;
	NSArray* _parsedPreviewSinkConfigurations;
	NSArray* _videoThumbnailSinkConfigurations;
	NSArray* _parsedStillImageSinkConfigurations;
	NSArray* _parsedVideoDataSinkConfigurations;
	NSArray* _parsedVisionDataSinkConfigurations;
	NSArray* _parsedDepthDataSinkConfigurations;
	NSArray* _parsedMetadataSinkConfigurations;
	NSArray* _parsedMovieFileSinkConfigurations;
	NSArray* _audioFileSinkConnectionConfigurations;
	NSArray* _audioDataSinkConnectionConfigurations;
	NSArray* _pointCloudDataSinkConnectionConfigurations;
	NSArray* _cameraCalibrationDataSinkConnectionConfigurations;

}

@property (nonatomic,readonly) char empty;                                                                                //@synthesize empty=_empty - In the implementation block
@property (getter=isMultiCamSession,nonatomic,readonly) char multiCamSession;                                             //@synthesize isMultiCamSession=_isMultiCamSession - In the implementation block
@property (nonatomic,readonly) NSArray * parsedCameraSourceConfigurations;                                                //@synthesize parsedCameraSourceConfigurations=_parsedCameraSourceConfigurations - In the implementation block
@property (nonatomic,readonly) FigCaptureSessionParsedMicSourceConfiguration * parsedMicSourceConfiguration;              //@synthesize parsedMicSourceConfiguration=_parsedMicSourceConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * metadataSourceConfigurations;                                                    //@synthesize metadataSourceConfigurations=_metadataSourceConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * parsedPreviewSinkConfigurations;                                                 //@synthesize parsedPreviewSinkConfigurations=_parsedPreviewSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoThumbnailSinkConfigurations;                                                //@synthesize videoThumbnailSinkConfigurations=_videoThumbnailSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * parsedStillImageSinkConfigurations;                                              //@synthesize parsedStillImageSinkConfigurations=_parsedStillImageSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * parsedVideoDataSinkConfigurations;                                               //@synthesize parsedVideoDataSinkConfigurations=_parsedVideoDataSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * parsedVisionDataSinkConfigurations;                                              //@synthesize parsedVisionDataSinkConfigurations=_parsedVisionDataSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * parsedDepthDataSinkConfigurations;                                               //@synthesize parsedDepthDataSinkConfigurations=_parsedDepthDataSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * parsedMetadataSinkConfigurations;                                                //@synthesize parsedMetadataSinkConfigurations=_parsedMetadataSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * parsedMovieFileSinkConfigurations;                                               //@synthesize parsedMovieFileSinkConfigurations=_parsedMovieFileSinkConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * audioFileSinkConnectionConfigurations;                                           //@synthesize audioFileSinkConnectionConfigurations=_audioFileSinkConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * audioDataSinkConnectionConfigurations;                                           //@synthesize audioDataSinkConnectionConfigurations=_audioDataSinkConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * pointCloudDataSinkConnectionConfigurations;                                      //@synthesize pointCloudDataSinkConnectionConfigurations=_pointCloudDataSinkConnectionConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * cameraCalibrationDataSinkConnectionConfigurations;                               //@synthesize cameraCalibrationDataSinkConnectionConfigurations=_cameraCalibrationDataSinkConnectionConfigurations - In the implementation block
+(void)initialize;
-(void)dealloc;
-(char)empty;
-(char)isMultiCamSession;
-(int)_parseConfiguration:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(char)arg2 restrictions:(id)arg3 ;
-(id)initWithSessionConfiguration:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(char)arg2 restrictions:(id)arg3 ;
-(NSArray *)parsedCameraSourceConfigurations;
-(FigCaptureSessionParsedMicSourceConfiguration *)parsedMicSourceConfiguration;
-(NSArray *)metadataSourceConfigurations;
-(NSArray *)parsedPreviewSinkConfigurations;
-(NSArray *)videoThumbnailSinkConfigurations;
-(NSArray *)parsedStillImageSinkConfigurations;
-(NSArray *)parsedVideoDataSinkConfigurations;
-(NSArray *)parsedVisionDataSinkConfigurations;
-(NSArray *)parsedDepthDataSinkConfigurations;
-(NSArray *)parsedMetadataSinkConfigurations;
-(NSArray *)parsedMovieFileSinkConfigurations;
-(NSArray *)audioFileSinkConnectionConfigurations;
-(NSArray *)audioDataSinkConnectionConfigurations;
-(NSArray *)pointCloudDataSinkConnectionConfigurations;
-(NSArray *)cameraCalibrationDataSinkConnectionConfigurations;
@end

