/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {

	BWMotionSampleRingBuffer* _motionDataRingBuffer;
	OpaqueFigSimpleMutexRef _ringMutex;
	char _stationary;
	char _newMotionDataAvailable;
	char _robustMethodEnabled;
	char _motionMetadataStatusChecked;

}

@property (getter=isStationary,nonatomic,readonly) char stationary; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(char)isStationary;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_detectIfStationary;
@end
