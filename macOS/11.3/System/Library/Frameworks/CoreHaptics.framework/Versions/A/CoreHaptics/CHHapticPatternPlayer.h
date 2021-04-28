/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHHapticPatternPlayer <NSObject>
@property (assign) char isMuted; 
@required
-(void)setIsMuted:(char)arg1;
-(char)isMuted;
-(char)startAtTime:(double)arg1 error:(id*)arg2;
-(char)stopAtTime:(double)arg1 error:(id*)arg2;
-(char)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
-(char)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
-(char)cancelAndReturnError:(id*)arg1;

@end

