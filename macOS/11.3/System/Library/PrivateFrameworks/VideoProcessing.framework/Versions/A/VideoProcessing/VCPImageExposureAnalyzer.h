/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageExposureAnalyzer : VCPImageAnalyzer {

	float _exposureScore;

}

@property (nonatomic,readonly) float exposureScore;              //@synthesize exposureScore=_exposureScore - In the implementation block
-(float)exposureScore;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(float)computeRegionNoise:(char*)arg1 blockTextureness:(char*)arg2 average:(char*)arg3 width:(int)arg4 height:(int)arg5 stride:(long long)arg6 ;
-(float)computeNoiseLevel:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 textureness:(char*)arg5 ;
@end

