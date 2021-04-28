/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@interface AVCaptureStillImageTransform : NSObject {

	opaqueCMSampleBufferRef _sourceBuffer;
	opaqueCMSampleBufferRef _resultBuffer;
	int _status;

}

@property (assign) int status;              //@synthesize status=_status - In the implementation block
+(id)transform;
-(void)dealloc;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setSourceBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)sourceBuffer;
-(void)setResultBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)resultBuffer;
@end
