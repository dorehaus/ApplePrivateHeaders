/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPInterAssetAnalyzer : NSObject
+(CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2 ;
+(char)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2 ;
-(id)init;
-(int)_generateLastFrameDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 ;
-(CVBufferRef)_getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 andPixelFormat:(int)arg3 ;
-(int)computeDistance:(float*)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(int)computeDistance:(float*)arg1 withDescriptorClass:(id)arg2 fromAsset:(id)arg3 toAsset:(id)arg4 ;
-(int)generateDistanceDescriptor:(id*)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 withResources:(id)arg4 lastFrame:(char)arg5 ;
@end

