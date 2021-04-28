/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWFigCaptureStream;

@interface BWDeferredMetadataCache : NSObject {

	OpaqueFigSimpleMutexRef _lock;
	BWFigCaptureStream* _stream;
	int _numberOfExpectedSampleBuffersForEachPTS;
	BWDeferredMetadataCacheEntry* _cache[5];

}

@property (assign,nonatomic) int numberOfExpectedSampleBuffersForEachPTS; 
-(void)dealloc;
-(void)flush;
-(id)initWithCaptureStream:(id)arg1 atomicTransactions:(char)arg2 ;
-(void)setNumberOfExpectedSampleBuffersForEachPTS:(int)arg1 ;
-(void)addMetadataAttachmentToSampleBuffer:(opaqueCMSampleBufferRef)arg1 withDutyCycleMetadataCache:(id)arg2 ;
-(int)numberOfExpectedSampleBuffersForEachPTS;
@end
