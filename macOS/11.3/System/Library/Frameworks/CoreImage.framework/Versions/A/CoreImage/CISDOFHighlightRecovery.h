/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CISDOFHighlightRecovery : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputApertureScaling;
	NSNumber* inputIterations;
	NSNumber* inputMaxBlur;
	CIVector* inputBlurRadius;
	CIVector* inputMaxIntensity;
	CIVector* inputMinIntensity;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSNumber * inputScale; 
@property (retain) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputIterations; 
@property (retain) NSNumber * inputMaxBlur; 
@property (retain) CIVector * inputBlurRadius; 
@property (retain) CIVector * inputMaxIntensity; 
@property (retain) CIVector * inputMinIntensity; 
+(id)customAttributes;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputIterations;
-(void)setInputIterations:(NSNumber *)arg1 ;
-(void)setInputBlurRadius:(CIVector *)arg1 ;
-(CIVector *)inputMaxIntensity;
-(void)setInputMaxIntensity:(CIVector *)arg1 ;
-(CIVector *)inputMinIntensity;
-(void)setInputMinIntensity:(CIVector *)arg1 ;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(CIVector *)inputBlurRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end
