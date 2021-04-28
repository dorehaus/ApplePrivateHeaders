/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface IPAPhotoEffectFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputEffectNumber;
	NSNumber* inputEffectVersion;

}
+(void)initialize;
+(id)filterWithName:(id)arg1 ;
-(id)outputImage;
-(id)customAttributes;
-(char)_isValidEffectVersion:(int)arg1 ;
@end

