/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class BWAudioSourceNode, BWFanOutNode, BWZoomCommandHandler;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {

	BWAudioSourceNode* _sourceNode;
	BWFanOutNode* _splitterNodesByMicSourcePosition[3];
	unsigned _nextOutputIndexByMicSourcePosition[3];
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) BWAudioSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(void)dealloc;
-(OpaqueCMClockRef)clock;
-(int)_buildMicSourcePipelineWithConfiguration:(id)arg1 graph:(id)arg2 renderDelegate:(id)arg3 isMultiCamSession:(char)arg4 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 renderDelegate:(id)arg4 isMultiCamSession:(char)arg5 ;
-(id)nextOutputForMicSourcePosition:(int)arg1 ;
-(BWAudioSourceNode *)sourceNode;
@end

