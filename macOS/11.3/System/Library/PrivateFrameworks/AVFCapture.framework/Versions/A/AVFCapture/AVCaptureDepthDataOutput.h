/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>
#import <AVFCapture/AVCaptureDataOutputDelegateOverride.h>

@class AVCaptureDepthDataOutputInternal, NSString;

@interface AVCaptureDepthDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {

	AVCaptureDepthDataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureDepthDataOutputDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (assign,nonatomic) char alwaysDiscardsLateDepthData; 
@property (assign,getter=isFilteringEnabled,nonatomic) char filteringEnabled; 
@property (nonatomic,readonly) id delegateOverride; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateOverrideCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)new;
-(void)dealloc;
-(id)init;
-(id<AVCaptureDepthDataOutputDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_updateLocalQueue:(localQueueOpaqueRef)arg1 ;
-(void)_handleLocalQueueMessage:(FigLocalQueueMessage*)arg1 ;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)delegateOverride;
-(NSObject*<OS_dispatch_queue>)delegateOverrideCallbackQueue;
-(void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2 ;
-(id)connectionMediaTypes;
-(char)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(char)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(char)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(char)alwaysDiscardsLateDepthData;
-(char)isFilteringEnabled;
-(void)setFilteringEnabled:(char)arg1 ;
-(void)setDelegate:(id)arg1 callbackQueue:(id)arg2 ;
-(void)setAlwaysDiscardsLateDepthData:(char)arg1 ;
@end
