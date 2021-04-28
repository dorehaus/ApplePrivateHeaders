/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CINoiseReduction : CIFilter {

	CIImage* inputImage;
	NSNumber* inputNoiseLevel;
	NSNumber* inputSharpness;

}
+(id)customAttributes;
-(id)_CINoiseReduction;
-(id)outputImage;
@end

