/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSDFPSCounterSample : NSObject {

	double _time;
	double _duration;

}

@property (nonatomic,readonly) double time;                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
+(id)sampleWithTime:(double)arg1 duration:(double)arg2 ;
-(double)duration;
-(double)time;
-(id)initWithTime:(double)arg1 duration:(double)arg2 ;
@end

