/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPerformance.framework/Versions/A/AccessibilityPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXPSignpostTestUtility : NSObject
+(id)parseSignpostsWithConfiguration:(id)arg1 expectedEventCount:(unsigned long long)arg2 parseToolPath:(id)arg3 ;
+(id)_parseSignpostsWithConfiguration:(id)arg1 parseToolPath:(id)arg2 ;
+(id)_parseSignpostsUsingToolWithConfiguration:(id)arg1 parseToolPath:(id)arg2 ;
+(id)_parseSignpostsWithConfiguration:(id)arg1 ;
+(id)_argumentsForConfiguration:(id)arg1 ;
+(id)_csvFromPerformanceTestResults:(id)arg1 includeCSVHeaders:(char)arg2 ;
+(id)filePathForAppDirectory;
+(void)_outputCSVForPerformanceTestResults:(id)arg1 includeCSVDelimiters:(char)arg2 includeTestInfo:(char)arg3 saveToFile:(id)arg4 ;
+(id)_timestampForLogging;
+(id)_machineModelForLogging;
+(id)parseSignpostsWithConfiguration:(id)arg1 expectedEventCount:(unsigned long long)arg2 useParseTool:(char)arg3 ;
+(id)csvFromPerformanceTestResults:(id)arg1 ;
+(void)outputCSVForPerformanceTestResults:(id)arg1 ;
@end

