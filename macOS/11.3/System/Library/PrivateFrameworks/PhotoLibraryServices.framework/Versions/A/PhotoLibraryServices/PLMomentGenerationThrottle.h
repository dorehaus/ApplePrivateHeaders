/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLMomentGenerationThrottleTimeProvider;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLMomentGenerationThrottle : NSObject {

	char _canDelayAnyQOS;
	/*^block*/id _targetBlock;
	NSString* _name;
	id<PLMomentGenerationThrottleTimeProvider> _timeProvider;
	char _singleThreaded;
	atomic_flag _shouldRunAgain;
	atomic_flag _isExecutingOrConsideringExecution;
	double _lastRunDuration;
	double _lastRunEndTime;
	double _nextExpectedRun;

}
-(void)update;
-(char)isIdle;
-(id)initWithName:(id)arg1 canDelayAnyQOS:(char)arg2 singleThreadedMode:(char)arg3 timeProvider:(id)arg4 target:(/*^block*/id)arg5 ;
@end

