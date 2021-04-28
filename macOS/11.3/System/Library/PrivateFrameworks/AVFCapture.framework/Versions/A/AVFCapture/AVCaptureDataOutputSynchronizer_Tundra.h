/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureVideoDataOutputSampleBufferDelegate_Tundra.h>
#import <AVFCapture/AVCaptureAudioDataOutputSampleBufferDelegate_Tundra.h>
#import <AVFCapture/AVCaptureMetadataOutputObjectsDelegate_Tundra.h>
#import <AVFCapture/AVCaptureDepthDataOutputDelegate_Tundra.h>

@class AVCaptureDataOutputSynchronizerInternal_Tundra, NSArray, NSString;

@interface AVCaptureDataOutputSynchronizer_Tundra : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate_Tundra, AVCaptureAudioDataOutputSampleBufferDelegate_Tundra, AVCaptureMetadataOutputObjectsDelegate_Tundra, AVCaptureDepthDataOutputDelegate_Tundra> {

	AVCaptureDataOutputSynchronizerInternal_Tundra* _internal;

}

@property (retain,readonly) NSArray * dataOutputs; 
@property (nonatomic,readonly) id<AVCaptureDataOutputSynchronizerDelegate_Tundra> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id<AVCaptureDataOutputSynchronizerDelegate_Tundra>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)dataOutputs;
-(id)initWithDataOutputs:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
@end

