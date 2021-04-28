/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVSampleBufferVideoOutputInternal;

@interface AVSampleBufferVideoOutput : NSObject {

	AVSampleBufferVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVSampleBufferVideoOutputPullDelegate> outputDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(void)dealloc;
-(id)init;
-(id)_weakReference;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(char)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(char)arg2 withExceptionReason:(id*)arg3 ;
-(CVBufferRef)_copyPixelBufferForItemTimeWithOptions:(SCD_Struct_CM3)arg1 itemTimeForDisplay:(SCD_Struct_CM3*)arg2 options:(unsigned)arg3 ;
-(CVBufferRef)copyPixelBufferForSourceTime:(SCD_Struct_CM3)arg1 sourceTimeForDisplay:(SCD_Struct_CM3*)arg2 ;
-(void)setOutputDelegate:(id)arg1 queue:(id)arg2 ;
-(id<AVSampleBufferVideoOutputPullDelegate>)outputDelegate;
-(char)hasNewPixelBufferForSourceTime:(SCD_Struct_CM3)arg1 ;
-(CVBufferRef)copyLastPixelBuffer:(SCD_Struct_CM3*)arg1 ;
-(char)_configureWithVideoQueue:(OpaqueFigVideoQueueRef)arg1 ;
-(void)_resetLastImageTime;
-(void)_dispatchOutputSequenceWasFlushed;
@end

