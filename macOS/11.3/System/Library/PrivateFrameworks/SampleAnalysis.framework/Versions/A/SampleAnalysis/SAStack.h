/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/Versions/A/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, SATimestamp, NSMutableDictionary;

@interface SAStack : NSObject {

	char _omit;
	char _isMainThread;
	char _isTargetThread;
	char _isIdleWorkQueue;
	char _threadNameChanges;
	char _isProcessorIdleThread;
	char _isGlobalForcedIdleThread;
	int _minPriority;
	int _maxPriority;
	int _minBasePriority;
	int _maxBasePriority;
	unsigned long long _count;
	NSMutableArray* _dispatchQueues;
	NSMutableArray* _threadIds;
	NSString* _threadName;
	unsigned long long _firstSampleIndex;
	unsigned long long _lastSampleIndex;
	SATimestamp* _timeWhenFirstAttemptedToSample;
	unsigned long long _cpuTimeNs;
	unsigned long long _cpuInstructions;
	unsigned long long _cpuCycles;
	NSMutableArray* _rootFrames;
	NSMutableDictionary* _binaryImagesHitByTask;

}
@end

