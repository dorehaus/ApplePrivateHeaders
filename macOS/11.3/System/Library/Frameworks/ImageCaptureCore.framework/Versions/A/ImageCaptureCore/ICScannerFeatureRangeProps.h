/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICScannerFeatureRangeProps : NSObject {

	double _currentValue;
	double _defaultValue;
	double _minValue;
	double _maxValue;
	double _stepSize;

}

@property (assign) double currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (assign) double defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign) double minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (assign) double maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (assign) double stepSize;                  //@synthesize stepSize=_stepSize - In the implementation block
-(double)getValidatedValue:(double)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)defaultValue;
-(void)setDefaultValue:(double)arg1 ;
-(double)currentValue;
-(double)stepSize;
-(void)setCurrentValue:(double)arg1 ;
-(void)setStepSize:(double)arg1 ;
@end

