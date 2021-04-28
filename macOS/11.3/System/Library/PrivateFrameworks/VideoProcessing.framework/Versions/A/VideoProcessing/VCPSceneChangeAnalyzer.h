/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class VCPSceneChangeSegment, NSMutableArray;

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {

	float _sceneDeltaBuffer[10];
	FrameBuffer* _frameBuffer;
	VCPSceneChangeSegment* _activeSegment;
	NSMutableArray* _sceneSegments;
	char _verbose;
	char _firstFrame;
	SCD_Struct_VC7 _frameTimeRange;
	char _currentStatus;
	char _isSegmentPoint;

}
-(id)init;
-(id)results;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(void)ComputeSceneDelta:(Frame*)arg1 ;
-(char)decideLensSwitchPoint:(Frame*)arg1 ;
-(void)PrintSegments;
-(int)finalizeAnalysisPass:(SCD_Struct_VC7)arg1 ;
-(char)isSegmentPoint;
@end

