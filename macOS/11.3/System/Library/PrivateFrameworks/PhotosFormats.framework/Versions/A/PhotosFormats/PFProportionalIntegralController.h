/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PFProportionalIntegralController : NSObject {

	char _outputReady;
	long long _setPoint;
	long long _integralError;
	long long _integralErrorMin;
	long long _integralErrorMax;
	double _proportionalGain;
	double _integralGain;
	long long _output;
	long long _outputMin;
	long long _outputMax;
	NSMutableArray* _statistics;

}

@property (assign) long long setPoint;                       //@synthesize setPoint=_setPoint - In the implementation block
@property (assign) long long integralError;                  //@synthesize integralError=_integralError - In the implementation block
@property (assign) long long integralErrorMin;               //@synthesize integralErrorMin=_integralErrorMin - In the implementation block
@property (assign) long long integralErrorMax;               //@synthesize integralErrorMax=_integralErrorMax - In the implementation block
@property (assign) double proportionalGain;                  //@synthesize proportionalGain=_proportionalGain - In the implementation block
@property (assign) double integralGain;                      //@synthesize integralGain=_integralGain - In the implementation block
@property (assign) long long output;                         //@synthesize output=_output - In the implementation block
@property (assign) long long outputMin;                      //@synthesize outputMin=_outputMin - In the implementation block
@property (assign) long long outputMax;                      //@synthesize outputMax=_outputMax - In the implementation block
@property (retain) NSMutableArray * statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (assign) char outputReady;                         //@synthesize outputReady=_outputReady - In the implementation block
-(NSMutableArray *)statistics;
-(void)setStatistics:(NSMutableArray *)arg1 ;
-(long long)output;
-(void)setOutput:(long long)arg1 ;
-(long long)setPoint;
-(long long)integralError;
-(long long)integralErrorMin;
-(long long)integralErrorMax;
-(double)proportionalGain;
-(double)integralGain;
-(long long)outputMin;
-(long long)outputMax;
-(char)outputReady;
-(id)initWithSetPoint:(long long)arg1 ;
-(void)updateWithTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3 ;
-(void)addStatisticsSampleForTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3 ;
-(void)enumerateStatisticsMeasurementsWithHandler:(/*^block*/id)arg1 ;
-(id)statisticsDescription;
-(void)setSetPoint:(long long)arg1 ;
-(void)setIntegralError:(long long)arg1 ;
-(void)setIntegralErrorMin:(long long)arg1 ;
-(void)setIntegralErrorMax:(long long)arg1 ;
-(void)setProportionalGain:(double)arg1 ;
-(void)setIntegralGain:(double)arg1 ;
-(void)setOutputMin:(long long)arg1 ;
-(void)setOutputMax:(long long)arg1 ;
-(void)setOutputReady:(char)arg1 ;
@end
