/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVSampleBufferGeneratorInternal;

@interface AVSampleBufferGenerator : NSObject {

	AVSampleBufferGeneratorInternal* _generator;

}
+(void)initialize;
+(void)notifyOfDataReadyForSampleBuffer:(opaqueCMSampleBufferRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithAsset:(id)arg1 timebase:(OpaqueCMTimebaseRef)arg2 ;
-(opaqueCMSampleBufferRef)createSampleBufferForRequest:(id)arg1 ;
-(void)generateSampleBuffersForRequests:(id)arg1 sampleHandler:(/*^block*/id)arg2 ;
@end

