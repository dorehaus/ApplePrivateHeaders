/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMediaDataRequesterConsumer.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal.h>
#import <AVFCore/AVQueuedSampleBufferRendering.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {

	AVSampleBufferAudioRendererInternal* _audioRendererInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) NSString * audioOutputDeviceUniqueID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) char readyForMoreMediaData; 
@property (nonatomic,readonly) char hasSufficientMediaDataForReliablePlaybackStart; 
+(id)sampleBufferAudioRenderer;
-(void)dealloc;
-(id)init;
-(NSError *)error;
-(float)volume;
-(long long)status;
-(OpaqueCMTimebaseRef)timebase;
-(void)flush;
-(void)setVolume:(float)arg1 ;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(NSString *)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(char)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)stopRequestingMediaData;
-(id)scheduledAudioParameters;
-(int)_initializeTimebase;
-(char)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(int)_installNotificationHandlers;
-(void)_uninstallNotificationHandlers;
-(void)_transitionToStatus:(long long)arg1 error:(id)arg2 ;
-(void)_transitionToFailedStatusWithOSStatus:(int)arg1 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)hasSufficientMediaDataForReliablePlaybackStart;
-(void)_triggerMediaRequestCallback;
-(void)_wasFlushedAutomaticallyAtTime:(SCD_Struct_CM3)arg1 ;
-(void)setScheduledAudioParameters:(id)arg1 ;
-(void)flushFromSourceTime:(SCD_Struct_CM3)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
