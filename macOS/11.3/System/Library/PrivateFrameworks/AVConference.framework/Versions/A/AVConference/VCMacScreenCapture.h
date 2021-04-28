/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoCapture.h>
#import <libobjc.A.dylib/VCVideoSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VCMacScreenCapture : VCVideoCapture <VCVideoSource> {

	opaque_pthread_mutex_t _screenCaptureLock;
	NSObject*<OS_dispatch_queue> _streamQueue;
	char _isPreviewing;
	char _isCapturing;
	int _captureWidth;
	int _captureHeight;
	int _captureFramerate;
	unsigned long long _lastOriginHIDEventTimestamp;
	opaqueCMSampleBufferRef _previousCompleteFrame;
	CGDisplayStreamRef _displayStream;
	OpaqueCMMemoryPoolRef _dirtyRectsMemoryPool;
	CFAllocatorRef _dirtyRectsArrayAllocator;

}

@property (retain) opaqueCMSampleBufferRef previousCompleteFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)setFrameRate:(int)arg1 ;
-(int)stop:(char)arg1 ;
-(int)startPreview;
-(char)isPreviewRunning;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 pixelFormat:(unsigned)arg5 screenDisplayID:(unsigned)arg6 withError:(int*)arg7 ;
-(opaqueCMSampleBufferRef)previousCompleteFrame;
-(CFArrayRef)newDirtyRectsWithUpdateRef:(CGDisplayStreamUpdateRef)arg1 ;
-(void)setOriginHIDEventTimestamp:(unsigned long long)arg1 onBuffer:(CVBufferRef)arg2 ;
-(void)setPreviousCompleteFrame:(opaqueCMSampleBufferRef)arg1 ;
-(int)_startCapture;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)copyColorInfo:(const _CFDictionary*)arg1 ;
-(int)configureCaptureWithToken:(VCVideoSourceToken)arg1 ;
-(char)isFrontCamera;
-(int)frameCount:(char)arg1 ;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3 ;
-(char)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2 ;
-(id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 withError:(int*)arg5 ;
@end

