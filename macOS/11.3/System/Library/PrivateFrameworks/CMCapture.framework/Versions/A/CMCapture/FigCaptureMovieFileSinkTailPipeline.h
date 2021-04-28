/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCapturePipeline.h>

@protocol BWNodeBackPressureSource, BWMRCSceneObserver;
@class BWPixelTransferNode, FigCaptureVISPipeline, BWVideoCompressorNode, BWBackPressureNode, BWQuickTimeMovieFileSinkNode;

@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline {

	BWPixelTransferNode* _scalerNode;
	FigCaptureVISPipeline* _visPipeline;
	BWVideoCompressorNode* _videoCompressorNode;
	BWVideoCompressorNode* _sdofCompressorNode;
	BWBackPressureNode* _irisIntermediateJPEGDecompressionBackPressureNode;
	BWBackPressureNode* _visBackPressureNode;
	BWBackPressureNode* _irisSDOFVISBackPressureNode;
	BWQuickTimeMovieFileSinkNode* _movieFileSinkNode;
	id<BWNodeBackPressureSource> _visBackPressureSourceNode;
	unsigned long long _tailIndex;
	int _visBackPressureExtraRetainedBufferCount;
	int _videoStabilizationType;
	char _offlineVISEnabled;
	char _recording;
	char _sceneClassifierSuspended;
	id<BWMRCSceneObserver> _mrcSceneObserver;

}

@property (assign,setter=setMRCSceneObserver:,nonatomic) id<BWMRCSceneObserver> mrcSceneObserver;              //@synthesize mrcSceneObserver=_mrcSceneObserver - In the implementation block
@property (nonatomic,readonly) BWQuickTimeMovieFileSinkNode * movieFileSinkNode;                               //@synthesize movieFileSinkNode=_movieFileSinkNode - In the implementation block
@property (nonatomic,readonly) BWVideoCompressorNode * videoCompressorNode;                                    //@synthesize videoCompressorNode=_videoCompressorNode - In the implementation block
@property (nonatomic,readonly) BWVideoCompressorNode * sdofCompressorNode;                                     //@synthesize sdofCompressorNode=_sdofCompressorNode - In the implementation block
@property (nonatomic,readonly) FigCaptureVISPipeline * visPipeline;                                            //@synthesize visPipeline=_visPipeline - In the implementation block
@property (nonatomic,readonly) CGRect irisVISCleanOutputRectForCLAP; 
@property (nonatomic,readonly) SCD_Struct_BW12 offlineVISDimensions; 
@property (assign,nonatomic) char recording;                                                                   //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) char sceneClassifierSuspended;                                                    //@synthesize sceneClassifierSuspended=_sceneClassifierSuspended - In the implementation block
-(void)dealloc;
-(char)recording;
-(void)setRecording:(char)arg1 ;
-(id<BWMRCSceneObserver>)mrcSceneObserver;
-(void)setMRCSceneObserver:(id)arg1 ;
-(int)_buildFaceDetectionNode:(id)arg1 parentPipeline:(id)arg2 objectDetectionSourceOutput:(id)arg3 faceDetectionNodeOut:(id*)arg4 ;
-(void)setSceneClassifierSuspended:(char)arg1 ;
-(char)sceneClassifierSuspended;
-(FigCaptureVISPipeline *)visPipeline;
-(int)_buildMovieFileSinkTailPipeline:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8 ;
-(id)_appendBackPressureNodeToPreviousVideoOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 pipelineStage:(id)arg4 nodeName:(id)arg5 backPressureNodeOut:(id*)arg6 ;
-(id)initWithConfiguration:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8 ;
-(void)setUpBackPressureSemaphoresWithIrisIntermediateJPEGPhotoDecompressorNode:(id)arg1 videoDefringingNode:(id)arg2 ;
-(CGRect)irisVISCleanOutputRectForCLAP;
-(SCD_Struct_BW12)offlineVISDimensions;
-(BWQuickTimeMovieFileSinkNode *)movieFileSinkNode;
-(BWVideoCompressorNode *)videoCompressorNode;
-(BWVideoCompressorNode *)sdofCompressorNode;
@end

