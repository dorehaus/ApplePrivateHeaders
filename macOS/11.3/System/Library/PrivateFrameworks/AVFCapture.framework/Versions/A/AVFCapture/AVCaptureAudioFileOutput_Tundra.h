/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureFileOutput_Tundra.h>

@class AVCaptureAudioFileOutputInternal_Tundra, NSArray, NSDictionary;

@interface AVCaptureAudioFileOutput_Tundra : AVCaptureFileOutput_Tundra {

	AVCaptureAudioFileOutputInternal_Tundra* _internal;

}

@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) NSDictionary * audioSettings; 
+(b)resolveClassMethod:;
+(b)resolveInstanceMethod:;
+(void)initialize;
+(id)new;
+(id)availableOutputFileTypes;
+(id)_avMetadataToID3Metadata:(id)arg1 ;
-(b)conformsToProtocol:(id)arg1 ;
-(b)isMemberOfClass:(Class)arg1 ;
-(b)isKindOfClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(id)init;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)stopRecording;
-(char)isRecording;
-(NSDictionary *)audioSettings;
-(void)removeConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(id)connectionMediaTypes;
-(id)outputFileURL;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(char)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)startRecordingToOutputFileURL:(id)arg1 outputFileType:(id)arg2 recordingDelegate:(id)arg3 ;
-(id)stopError;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(id)notReadyError;
-(void)graphWillStartForSession:(id)arg1 ;
-(void)graphWillStopForSession:(id)arg1 error:(id)arg2 ;
-(id)_stopError;
-(void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)connectionGraphNodeForConnection:(id)arg1 ;
-(char)setEnabled:(char)arg1 forConnection:(id)arg2 ;
-(char)addOutputUnitsForConnection:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(unsigned)connectionUnitInputNumberForConnection:(id)arg1 ;
-(char)getAudioSplitterNode:(int*)arg1 andAudioMixerNode:(int*)arg2 forConnection:(id)arg3 ;
-(void)_updateCompressorNodesForConnection:(id)arg1 ;
-(id)_activeConnections;
-(void)_startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)_setStopError:(id)arg1 ;
-(void)_handleCanceledOperations:(id)arg1 ;
-(id)_noDataConnections;
-(void)_forciblyStopFileWritingForRunningRecordingOperation;
-(SCD_Struct_AV0)_syncTime;
-(void)_startFileControlCallbackTimeoutTimer;
-(void)_refreshRecordingState;
-(void)_setPaused:(char)arg1 ;
-(id)_runningRecordingOperationDescriptor;
-(void)_fileControlCallbackTimeout:(id)arg1 ;
-(void)_cancelAllOperations;
-(void)_addActiveConnection:(id)arg1 ;
-(unsigned)_fileWriterUnitElementForConnection:(id)arg1 ;
-(void)_removeActiveConnection:(id)arg1 ;
-(void)_setNoDataConnections:(id)arg1 ;
-(void)_cancelFileControlCallbackTimeoutTimer;
-(char)_removeRunningRecordingOperationDescriptorEqualTo:(id)arg1 ;
-(void)_stopFileWritingForConnection:(id)arg1 fileControlToken:(OpaqueFileWritingControlTokenRef)arg2 runningRecordingOperationDescriptor:(id)arg3 stopWritingFlags:(unsigned)arg4 stopError:(id)arg5 ;
-(void)_setRunningRecordingOperationDescriptor:(id)arg1 ;
-(void)_startFileWritingForConnection:(id)arg1 fileControlToken:(OpaqueFileWritingControlTokenRef)arg2 runningRecordingOperationDescriptor:(id)arg3 ;
-(void)_operationFailed:(id)arg1 ;
-(SCD_Struct_AV0)recordedDuration;
-(long long)recordedFileSize;
-(void)_controlFileWritingForConnection:(id)arg1 busNumber:(unsigned)arg2 fileControlToken:(OpaqueFileWritingControlTokenRef)arg3 ;
-(void)_filesCompleted:(id)arg1 ;
-(int)_compressorDidRenderConnection:(id)arg1 busNumber:(unsigned)arg2 processHints:(unsigned*)arg3 sampleBuffer:(opaqueCMSampleBuffer*)arg4 ;
@end

