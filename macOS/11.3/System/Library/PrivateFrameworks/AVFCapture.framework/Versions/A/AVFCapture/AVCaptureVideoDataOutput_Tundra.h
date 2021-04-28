/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput_Tundra.h>

@class AVCaptureVideoDataOutputInternal_Tundra, NSDictionary, NSArray;

@interface AVCaptureVideoDataOutput_Tundra : AVCaptureOutput_Tundra {

	AVCaptureVideoDataOutputInternal_Tundra* _internal;

}

@property (nonatomic,readonly) id<AVCaptureVideoDataOutputSampleBufferDelegate_Tundra> sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSArray * availableVideoCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
@property (assign,nonatomic) SCD_Struct_AV0 minFrameDuration; 
@property (assign,nonatomic) char alwaysDiscardsLateVideoFrames; 
@property (assign,nonatomic) char automaticallyConfiguresOutputBufferDimensions; 
@property (assign,nonatomic) char deliversPreviewSizedOutputBuffers; 
+(b)resolveClassMethod:;
+(b)resolveInstanceMethod:;
+(void)initialize;
+(id)new;
-(b)conformsToProtocol:(id)arg1 ;
-(b)isMemberOfClass:(Class)arg1 ;
-(b)isKindOfClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SCD_Struct_AV0)minFrameDuration;
-(NSDictionary *)videoSettings;
-(void)removeConnection:(id)arg1 ;
-(char)alwaysDiscardsLateVideoFrames;
-(char)automaticallyConfiguresOutputBufferDimensions;
-(char)deliversPreviewSizedOutputBuffers;
-(NSArray *)availableVideoCVPixelFormatTypes;
-(NSArray *)availableVideoCodecTypes;
-(id)supportedAssetWriterOutputFileTypes;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(id<AVCaptureVideoDataOutputSampleBufferDelegate_Tundra>)sampleBufferDelegate;
-(NSObject*<OS_dispatch_queue>)sampleBufferCallbackQueue;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
-(id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)availableVideoCodecTypesForAssetWriterWithOutputFileType:(id)arg1 ;
-(id)recommendedVideoSettingsForVideoCodecType:(id)arg1 assetWriterOutputFileType:(id)arg2 ;
-(void)setMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)setAlwaysDiscardsLateVideoFrames:(char)arg1 ;
-(void)setAutomaticallyConfiguresOutputBufferDimensions:(char)arg1 ;
-(void)setDeliversPreviewSizedOutputBuffers:(char)arg1 ;
-(id)connectionMediaTypes;
-(char)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(char)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2 ;
-(void)_updateCompressorNodesForConnection:(id)arg1 ;
-(void)_updateVideoDecompressorNodeForConnection:(id)arg1 ;
-(void)_updateVideoFrameRateGovernorNodeForConnection:(id)arg1 ;
-(id)outputGraphNodeDescriptionForConnection:(id)arg1 ;
-(char)supportsVideoMirroringForConnection:(id)arg1 ;
-(char)supportsVideoOrientationForConnection:(id)arg1 ;
-(char)supportsVideoFieldModeForConnection:(id)arg1 ;
-(char)supportsVideoMinFrameDurationForConnection:(id)arg1 ;
-(char)supportsVideoMaxFrameDurationForConnection:(id)arg1 ;
-(void)_render:(id)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
@end

