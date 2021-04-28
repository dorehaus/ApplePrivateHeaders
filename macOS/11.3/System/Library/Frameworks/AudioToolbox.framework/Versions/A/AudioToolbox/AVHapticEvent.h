/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVHapticPlayerParameterCurve;

@interface AVHapticEvent : NSObject <NSSecureCoding> {

	double _time;
	double _duration;
	unsigned long long _eventCategory;
	SCD_Union_AV11 _u;
	AVHapticPlayerFixedParameter _fixedParams[8];
	AVHapticPlayerParameterCurve* _paramCurve;
	long long _fixedParamCount;
	float _value;

}

@property (readonly) double time;                                                //@synthesize time=_time - In the implementation block
@property (readonly) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long eventCategory;                           //@synthesize eventCategory=_eventCategory - In the implementation block
@property (readonly) unsigned long long eventType; 
@property (readonly) unsigned long long paramType; 
@property (readonly) float value;                                                //@synthesize value=_value - In the implementation block
@property (readonly) AVHapticPlayerFixedParameter* fixedParams; 
@property (readonly) AVHapticPlayerParameterCurve * parameterCurve; 
@property (readonly) long long fixedParamCount;                                  //@synthesize fixedParamCount=_fixedParamCount - In the implementation block
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 ;
+(char)supportsSecureCoding;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 duration:(double)arg5 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3 ;
+(id)eventWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3 ;
+(id)eventWithParameterCurve:(id)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3 ;
-(id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 duration:(double)arg5 ;
-(id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3 ;
-(id)initWithParameterCurve:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)value;
-(double)duration;
-(double)time;
-(unsigned long long)paramType;
-(unsigned long long)eventType;
-(unsigned long long)eventCategory;
-(long long)fixedParamCount;
-(AVHapticPlayerFixedParameter*)fixedParams;
-(AVHapticPlayerParameterCurve *)parameterCurve;
@end

