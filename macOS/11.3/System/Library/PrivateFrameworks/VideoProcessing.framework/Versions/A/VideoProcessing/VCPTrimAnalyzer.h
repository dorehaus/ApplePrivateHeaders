/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPActionAnalyzer, NSMutableArray, VCPSegment;

@interface VCPTrimAnalyzer : NSObject {

	VCPActionAnalyzer* _actionAnalyzer;
	NSMutableArray* _internalResults;
	SCD_Struct_VC7 _bestTrimTimeRange;
	float _curationThreshold;
	char _verbose;
	SCD_Struct_VC6 _inTrimStart;
	SCD_Struct_VC6 _inTrimEnd;
	char _firstFrame;
	VCPSegment* _activeSegment;
	SCD_Struct_VC6 _captureTime;
	char _ready;

}
-(id)init;
-(char)isReady;
-(void)printSegments:(id)arg1 ;
-(int)prepareTrimmingWithTrimStart:(SCD_Struct_VC6)arg1 andTrimEnd:(SCD_Struct_VC6)arg2 ;
-(int)analyzeFrameWithTimeRange:(SCD_Struct_VC7)arg1 analysisData:(id)arg2 ;
-(char)shouldCutAt:(SCD_Struct_VC6)arg1 stillPTS:(SCD_Struct_VC6)arg2 withCut:(char)arg3 ;
-(void)generateCurationSegment;
-(int)generateInterestingTrimBasedOnCaptureTime:(SCD_Struct_VC6)arg1 ;
-(void)updateCurationThreshold;
-(float)calculateCandidateScoreWithRangeAdjust:(int)arg1 endIdx:(int)arg2 candidateTimeRange:(SCD_Struct_VC7*)arg3 captureTime:(SCD_Struct_VC6)arg4 ;
-(char)isCurated:(float)arg1 ;
-(char)isTimestampSkipable:(SCD_Struct_VC6)arg1 ;
-(char)checkTrimAt:(SCD_Struct_VC6)arg1 captureTime:(SCD_Struct_VC6)arg2 ;
-(int)finalizeWithDestructiveTrimStart:(SCD_Struct_VC6)arg1 trimEnd:(SCD_Struct_VC6)arg2 andCaptureTime:(SCD_Struct_VC6)arg3 ;
-(SCD_Struct_VC7)bestTrimTimeRange;
@end

