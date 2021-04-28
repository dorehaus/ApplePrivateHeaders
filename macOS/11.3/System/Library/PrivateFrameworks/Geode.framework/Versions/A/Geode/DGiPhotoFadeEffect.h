/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CIFilter;

@interface DGiPhotoFadeEffect : NSObject {

	CIFilter* _saturationFilter;
	CIFilter* _temperatureFilter;
	CIFilter* _exposureFilter;
	float _level;
	float _saturation;
	float _temperature;
	float _exposure;

}
-(id)init;
-(void)setLevel:(float)arg1 ;
-(void)resetValues;
-(id)processImage:(id)arg1 scale:(float)arg2 ;
-(void)setSaturation:(float)arg1 andTemperature:(float)arg2 andExposure:(float)arg3 ;
@end

