/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIInnerShadowFilterLocal : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRadius;
	CIColor* inputColor;

}
+(id)filterWithName:(id)arg1 ;
-(id)outputImage;
-(id)customAttributes;
@end

