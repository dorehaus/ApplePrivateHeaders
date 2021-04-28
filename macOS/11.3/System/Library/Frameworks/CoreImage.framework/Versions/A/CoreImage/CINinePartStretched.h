/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CINinePartStretched : CIFilter {

	CIImage* inputImage;
	CIVector* inputBreakpoint0;
	CIVector* inputBreakpoint1;
	CIVector* inputGrowAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputBreakpoint0; 
@property (nonatomic,retain) CIVector * inputBreakpoint1; 
@property (nonatomic,retain) CIVector * inputGrowAmount; 
+(id)customAttributes;
-(CIVector *)inputBreakpoint0;
-(void)setInputBreakpoint0:(CIVector *)arg1 ;
-(CIVector *)inputBreakpoint1;
-(void)setInputBreakpoint1:(CIVector *)arg1 ;
-(CIVector *)inputGrowAmount;
-(void)setInputGrowAmount:(CIVector *)arg1 ;
-(id)outputImage;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

