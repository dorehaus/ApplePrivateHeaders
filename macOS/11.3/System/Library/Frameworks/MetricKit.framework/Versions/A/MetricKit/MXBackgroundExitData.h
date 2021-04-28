/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetricKit.framework/Versions/A/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MXBackgroundExitData : NSObject <NSSecureCoding> {

	unsigned long long _cumulativeNormalAppExitCount;
	unsigned long long _cumulativeMemoryResourceLimitExitCount;
	unsigned long long _cumulativeCPUResourceLimitExitCount;
	unsigned long long _cumulativeMemoryPressureExitCount;
	unsigned long long _cumulativeBadAccessExitCount;
	unsigned long long _cumulativeAbnormalExitCount;
	unsigned long long _cumulativeIllegalInstructionExitCount;
	unsigned long long _cumulativeAppWatchdogExitCount;
	unsigned long long _cumulativeSuspendedWithLockedFileExitCount;
	unsigned long long _cumulativeBackgroundTaskAssertionTimeoutExitCount;
	unsigned long long _cumulativeBackgroundFetchCompletionTimeoutExitCount;
	unsigned long long _cumulativeBackgroundURLSessionCompletionTimeoutExitCount;

}

@property (readonly) unsigned long long cumulativeBackgroundFetchCompletionTimeoutExitCount;                   //@synthesize cumulativeBackgroundFetchCompletionTimeoutExitCount=_cumulativeBackgroundFetchCompletionTimeoutExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeBackgroundURLSessionCompletionTimeoutExitCount;              //@synthesize cumulativeBackgroundURLSessionCompletionTimeoutExitCount=_cumulativeBackgroundURLSessionCompletionTimeoutExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeNormalAppExitCount;                                          //@synthesize cumulativeNormalAppExitCount=_cumulativeNormalAppExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeMemoryResourceLimitExitCount;                                //@synthesize cumulativeMemoryResourceLimitExitCount=_cumulativeMemoryResourceLimitExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeCPUResourceLimitExitCount;                                   //@synthesize cumulativeCPUResourceLimitExitCount=_cumulativeCPUResourceLimitExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeMemoryPressureExitCount;                                     //@synthesize cumulativeMemoryPressureExitCount=_cumulativeMemoryPressureExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeBadAccessExitCount;                                          //@synthesize cumulativeBadAccessExitCount=_cumulativeBadAccessExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeAbnormalExitCount;                                           //@synthesize cumulativeAbnormalExitCount=_cumulativeAbnormalExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeIllegalInstructionExitCount;                                 //@synthesize cumulativeIllegalInstructionExitCount=_cumulativeIllegalInstructionExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeAppWatchdogExitCount;                                        //@synthesize cumulativeAppWatchdogExitCount=_cumulativeAppWatchdogExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeSuspendedWithLockedFileExitCount;                            //@synthesize cumulativeSuspendedWithLockedFileExitCount=_cumulativeSuspendedWithLockedFileExitCount - In the implementation block
@property (readonly) unsigned long long cumulativeBackgroundTaskAssertionTimeoutExitCount;                     //@synthesize cumulativeBackgroundTaskAssertionTimeoutExitCount=_cumulativeBackgroundTaskAssertionTimeoutExitCount - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(unsigned long long)cumulativeNormalAppExitCount;
-(unsigned long long)cumulativeMemoryResourceLimitExitCount;
-(unsigned long long)cumulativeBadAccessExitCount;
-(unsigned long long)cumulativeAbnormalExitCount;
-(unsigned long long)cumulativeIllegalInstructionExitCount;
-(unsigned long long)cumulativeAppWatchdogExitCount;
-(unsigned long long)cumulativeCPUResourceLimitExitCount;
-(id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 badAccessExitCount:(id)arg4 abnormalExitCount:(id)arg5 illegalInstructionExitCount:(id)arg6 appWatchDogExitCount:(id)arg7 cumulativeSuspendedWithLockedFileExitCount:(id)arg8 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg9 ;
-(id)initWithNormalAppExitCount:(id)arg1 memoryResourceLimitExitCount:(id)arg2 cpuResourceLimitExitCount:(id)arg3 memoryPressureExitCount:(id)arg4 badAccessExitCount:(id)arg5 abnormalExitCount:(id)arg6 illegalInstructionExitCount:(id)arg7 appWatchDogExitCount:(id)arg8 cumulativeSuspendedWithLockedFileExitCount:(id)arg9 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)arg10 ;
-(id)initWithNormalAppExitCount:(unsigned long long)arg1 memoryResourceLimitExitCount:(unsigned long long)arg2 cpuResourceLimitExitCount:(unsigned long long)arg3 memoryPressureExitCount:(unsigned long long)arg4 badAccessExitCount:(unsigned long long)arg5 abnormalExitCount:(unsigned long long)arg6 illegalInstructionExitCount:(unsigned long long)arg7 appWatchDogExitCount:(unsigned long long)arg8 cumulativeSuspendedWithLockedFileExitCount:(unsigned long long)arg9 cumulativeBackgroundTaskAssertionTimeoutExitCount:(unsigned long long)arg10 cumulativeBackgroundURLSessionCompletionTimeoutExitCount:(unsigned long long)arg11 cumulativeBackgroundFetchCompletionTimeoutExitCount:(unsigned long long)arg12 ;
-(unsigned long long)cumulativeMemoryPressureExitCount;
-(unsigned long long)cumulativeSuspendedWithLockedFileExitCount;
-(unsigned long long)cumulativeBackgroundTaskAssertionTimeoutExitCount;
-(unsigned long long)cumulativeBackgroundFetchCompletionTimeoutExitCount;
-(unsigned long long)cumulativeBackgroundURLSessionCompletionTimeoutExitCount;
@end

