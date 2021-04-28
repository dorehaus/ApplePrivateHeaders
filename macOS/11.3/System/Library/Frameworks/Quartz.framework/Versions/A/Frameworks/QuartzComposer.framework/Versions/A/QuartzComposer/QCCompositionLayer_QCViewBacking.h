/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCCompositionLayer.h>

@interface QCCompositionLayer_QCViewBacking : QCCompositionLayer {

	double _beginTimeOffset;
	double _pauseTime;
	CGColorRef _clearColor;
	SCD_Struct_QC41 _renderState;

}
-(char)canDrawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC40*)arg4 ;
-(void)drawInCGLContext:(CGLContextObject*)arg1 pixelFormat:(CGLPixelFormatObjectRef)arg2 forLayerTime:(double)arg3 displayTime:(const SCD_Struct_QC40*)arg4 ;
-(void)_setEraseColor:(CGColorRef)arg1 ;
-(void)_erase;
-(double)_beginTimeOffset;
-(char)_startRendering;
-(void)_stopRendering;
-(void)_pauseRendering;
-(void)_resumeRendering;
-(char)_isRendering;
-(char)_isPausedRendering;
@end

