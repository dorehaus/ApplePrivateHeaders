/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PAPerfLoggingIntervalTransitionEvent : NSObject {

	double _transitionTimeInSec;
	NSString* _startTransitionCauseIntervalType;
	int _transitionType;
	NSDictionary* _context;

}

@property (readonly) double transitionTimeInSec;                        //@synthesize transitionTimeInSec=_transitionTimeInSec - In the implementation block
@property (readonly) NSString * transitioningIntervalType;              //@synthesize startTransitionCauseIntervalType=_startTransitionCauseIntervalType - In the implementation block
@property (readonly) int transitionType;                                //@synthesize transitionType=_transitionType - In the implementation block
@property (readonly) NSString * transitionTypeString; 
@property (readonly) NSDictionary * context;                            //@synthesize context=_context - In the implementation block
+(id)stringForTransitionTimeline:(id)arg1 withStartTimeInSec:(double)arg2 andEndTimeInSec:(double)arg3 ;
-(double)transitionTimeInSec;
-(NSString *)transitioningIntervalType;
-(NSString *)transitionTypeString;
-(id)initWithTransitionType:(int)arg1 ofIntervalType:(id)arg2 atTimestamp:(double)arg3 withContext:(id)arg4 ;
-(id)_stringForTransitionWithOperationStartTimeInSec:(double)arg1 andPreviousEventTimeInSec:(double)arg2 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(NSDictionary *)context;
-(int)transitionType;
@end
