/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CIFlashTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputMaxStriationRadius;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputFadeThreshold;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputMaxStriationRadius; 
@property (nonatomic,retain) NSNumber * inputStriationStrength; 
@property (nonatomic,retain) NSNumber * inputStriationContrast; 
@property (nonatomic,retain) NSNumber * inputFadeThreshold; 
+(id)customAttributes;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(void)setInputExtent:(CIVector *)arg1 ;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)_geomKernel;
-(id)_colorKernel;
-(NSNumber *)inputMaxStriationRadius;
-(void)setInputMaxStriationRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputStriationStrength;
-(void)setInputStriationStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputStriationContrast;
-(void)setInputStriationContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputFadeThreshold;
-(void)setInputFadeThreshold:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputTime:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(CIColor *)inputColor;
-(NSNumber *)inputTime;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(CIVector *)inputCenter;
-(void)setInputColor:(CIColor *)arg1 ;
@end
