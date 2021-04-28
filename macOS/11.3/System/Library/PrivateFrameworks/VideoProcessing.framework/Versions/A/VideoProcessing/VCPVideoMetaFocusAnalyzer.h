/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoMetaFocusSegment, NSMutableArray, NSArray;

@interface VCPVideoMetaFocusAnalyzer : NSObject {

	VCPVideoMetaFocusSegment* _activeSegment;
	NSMutableArray* _mutableResults;
	SCD_Struct_VC7 _frameTimeRange;

}

@property (nonatomic,retain,readonly) NSArray * results; 
-(id)init;
-(NSArray *)results;
-(int)finalizeAnalysis;
-(void)addSegmentToResults;
-(int)processFrameMetadata:(id)arg1 ;
@end

