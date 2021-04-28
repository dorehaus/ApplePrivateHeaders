/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MROrigamiAnimationPath : NSObject {

	id* _curves;
	double* _keyTimes;
	double* _values;
	long long _length;
	float _timeFirstAtRestValue;

}

@property (nonatomic,readonly) float timeFirstAtRestValue;              //@synthesize timeFirstAtRestValue=_timeFirstAtRestValue - In the implementation block
-(void)dealloc;
-(float)valueAtTime:(float)arg1 ;
-(id)initWithSwingType:(int)arg1 ;
-(float)timeFirstAtRestValue;
-(id)initWithControlPoints:(double*)arg1 keyTimes:(double*)arg2 values:(double*)arg3 length:(long long)arg4 ;
@end

