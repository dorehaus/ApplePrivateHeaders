/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSDisplayTiming.h>

@interface _NSDisplayTiming : NSDisplayTiming {

	unsigned long long _offset;
	unsigned long long _interval;
	unsigned long long _submissionDelta;
	unsigned long long _wakeUpDelta;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)interval;
-(id)initWithAnchorTime:(unsigned long long)arg1 interval:(unsigned long long)arg2 submissionDelta:(unsigned long long)arg3 wakeUpDelta:(unsigned long long)arg4 ;
-(unsigned long long)presentationTimeAfterTime:(unsigned long long)arg1 ;
-(unsigned long long)submissionDeadlineForPresentationTime:(unsigned long long)arg1 ;
-(unsigned long long)presentationTimeForSubmissionDeadline:(unsigned long long)arg1 ;
-(unsigned long long)submissionDeadlineAfterTime:(unsigned long long)arg1 ;
-(unsigned long long)wakeUpTimeAfterTime:(unsigned long long)arg1 ;
-(unsigned long long)submissionDeadlineForWakeUpTime:(unsigned long long)arg1 ;
-(unsigned long long)presentationTimeForWakeUpTime:(unsigned long long)arg1 ;
@end
