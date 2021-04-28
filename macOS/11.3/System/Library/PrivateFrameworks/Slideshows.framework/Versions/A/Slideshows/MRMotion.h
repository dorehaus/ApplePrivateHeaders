/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MRMotion : NSObject {

	NSString* _key;
	double _startValue;
	double _value;
	double _startTime;
	double _duration;
	double _easeIn;
	double _easeOut;

}

@property (readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double startValue;              //@synthesize startValue=_startValue - In the implementation block
@property (readonly) double value;                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double startTime;               //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (readonly) double easeIn;                          //@synthesize easeIn=_easeIn - In the implementation block
@property (readonly) double easeOut;                         //@synthesize easeOut=_easeOut - In the implementation block
-(void)dealloc;
-(double)value;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSString *)key;
-(double)duration;
-(void)setStartValue:(double)arg1 ;
-(double)valueAtTime:(double)arg1 ;
-(double)startValue;
-(double)easeIn;
-(double)easeOut;
-(id)initWithKey:(id)arg1 value:(double)arg2 duration:(double)arg3 easeIn:(double)arg4 easeOut:(double)arg5 ;
@end

