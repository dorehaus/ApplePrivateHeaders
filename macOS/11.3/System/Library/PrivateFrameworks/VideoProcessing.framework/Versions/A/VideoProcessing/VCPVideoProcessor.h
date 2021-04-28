/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSURL, VCPVideoProcessorSession;

@interface VCPVideoProcessor : NSObject {

	NSURL* _url;
	VCPVideoProcessorSession* _session;
	atomic<bool> _canceled;
	/*^block*/id _progressHandler;

}

@property (copy) id progressHandler;              //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)cancel;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
-(char)removeRequest:(id)arg1 error:(id*)arg2 ;
-(char)analyzeWithStart:(SCD_Struct_VC6)arg1 andDuration:(SCD_Struct_VC6)arg2 error:(id*)arg3 ;
-(char)addRequest:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3 ;
-(char)_analyzeWithStart:(SCD_Struct_VC6)arg1 andDuration:(SCD_Struct_VC6)arg2 error:(id*)arg3 ;
@end
