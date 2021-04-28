/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/Versions/A/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMExerciseMinuteInternal;

@interface CMExerciseMinute : NSObject {

	CMExerciseMinuteInternal* _internal;

}

@property (nonatomic,readonly) CMExerciseMinuteInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(id)maxExerciseMinuteDataEntries;
+(char)isExerciseMinuteAvailable;
-(void)dealloc;
-(id)init;
-(CMExerciseMinuteInternal *)_internal;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

