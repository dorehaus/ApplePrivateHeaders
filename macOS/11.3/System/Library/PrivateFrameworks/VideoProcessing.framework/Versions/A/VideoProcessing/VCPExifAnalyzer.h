/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface VCPExifAnalyzer : NSObject {

	NSDictionary* _properties;
	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _results;

}
-(CGAffineTransform)transformUprightAboutTopLeft:(unsigned)arg1 ;
-(int)addFaceResults:(id)arg1 flags:(unsigned long long*)arg2 ;
-(id)initWithProperties:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(int)analyzeAsset:(unsigned long long*)arg1 results:(id*)arg2 ;
@end

