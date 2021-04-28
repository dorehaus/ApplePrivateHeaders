/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PISmartBlackAndWhiteHDR : CIFilter {

	CIImage* inputImage;
	NSNumber* inputStrength;
	NSNumber* inputNeutralGamma;
	NSNumber* inputTone;
	NSNumber* inputHue;
	NSNumber* inputGrain;
	NSNumber* inputSeed;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputStrength; 
@property (nonatomic,copy) NSNumber * inputNeutralGamma; 
@property (nonatomic,copy) NSNumber * inputTone; 
@property (nonatomic,copy) NSNumber * inputHue; 
@property (nonatomic,copy) NSNumber * inputGrain; 
@property (nonatomic,copy) NSNumber * inputSeed; 
@property (nonatomic,copy) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputHue;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputStrength;
-(NSNumber *)inputScaleFactor;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputNeutralGamma;
-(NSNumber *)inputTone;
-(NSNumber *)inputGrain;
-(NSNumber *)inputSeed;
-(void)getNonNormalizedSettings:(SCD_Struct_PI17*)arg1 ;
-(float*)createHueArray;
-(id)hueArrayImage:(float*)arg1 ;
-(id)smartBlackWhiteKernel;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(void)setInputTone:(NSNumber *)arg1 ;
-(void)setInputHue:(NSNumber *)arg1 ;
-(void)setInputGrain:(NSNumber *)arg1 ;
-(void)setInputSeed:(NSNumber *)arg1 ;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
@end
