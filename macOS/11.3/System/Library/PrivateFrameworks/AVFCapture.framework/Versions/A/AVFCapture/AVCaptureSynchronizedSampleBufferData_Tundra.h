/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData_Tundra.h>

@class AVCaptureSynchronizedSampleBufferDataInternal_Tundra;

@interface AVCaptureSynchronizedSampleBufferData_Tundra : AVCaptureSynchronizedData_Tundra {

	AVCaptureSynchronizedSampleBufferDataInternal_Tundra* _internal;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) char sampleBufferWasDropped; 
@property (readonly) long long droppedReason; 
+(b)resolveClassMethod:;
+(b)resolveInstanceMethod:;
-(b)conformsToProtocol:(id)arg1 ;
-(b)isMemberOfClass:(Class)arg1 ;
-(b)isKindOfClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(char)sampleBufferWasDropped;
-(long long)droppedReason;
@end

