/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSArray;

@interface VCPPhotosQuickFaceIdentificationLibraryProcessingTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSArray* _photoLibraries;
	atomic<bool> _started;
	atomic<bool> _cancel;

}
+(char)_concurrentFaceProcessing;
+(id)taskWithPhotoLibraries:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(int)run;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(char)run:(id*)arg1 ;
-(float)resourceRequirement;
-(id)initWithPhotoLibraries:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)_analyzeAsset:(id)arg1 withManager:(id)arg2 ;
@end
