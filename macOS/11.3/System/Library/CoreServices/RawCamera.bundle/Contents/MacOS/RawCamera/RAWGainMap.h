/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, CIVector, NSNumber;

@interface RAWGainMap : RAWFilter {

	CIImage* inputImage;
	NSData* inputGainMapData;
	CIVector* inputGainMapApplyRegion;
	CIVector* inputGainMapSize;
	NSNumber* inputGainMapRowPitch;
	NSNumber* inputGainMapColPitch;
	NSNumber* inputGainMapNumPlanes;
	NSNumber* inputGainMapExecute;
	id inputColorSpace;
	CIImage* _gainMapImg;

}
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDefaults;
-(id)outputImage;
-(id)makeMapSampler;
@end
