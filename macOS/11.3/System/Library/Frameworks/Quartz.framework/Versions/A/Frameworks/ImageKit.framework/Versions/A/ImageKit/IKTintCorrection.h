/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface IKTintCorrection : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPower;

}
+(void)registerFilter;
+(id)filterWithName:(id)arg1 ;
-(id)init;
-(id)outputImage;
-(id)customAttributes;
-(char)_isIdentity;
@end

