/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIFastBilateralSolver : CIFilter {

	CIImage* inputImage;
	CIImage* inputDisparityImage;
	CIImage* inputConfidenceMapImage;
	NSNumber* inputMaxNumVertices;
	NSNumber* inputSigmaS;
	NSNumber* inputSigmaRLuma;
	NSNumber* inputSigmaRChroma;
	NSNumber* inputLambda;
	NSNumber* inputMaxNumIterations;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputDisparityImage; 
@property (retain) CIImage * inputConfidenceMapImage; 
@property (nonatomic,copy) NSNumber * inputMaxNumVertices; 
@property (nonatomic,copy) NSNumber * inputSigmaS; 
@property (nonatomic,copy) NSNumber * inputSigmaRLuma; 
@property (nonatomic,copy) NSNumber * inputSigmaRChroma; 
@property (nonatomic,copy) NSNumber * inputLambda; 
@property (nonatomic,copy) NSNumber * inputMaxNumIterations; 
+(id)customAttributes;
-(CIImage *)inputDisparityImage;
-(void)setInputDisparityImage:(CIImage *)arg1 ;
-(CIImage *)inputConfidenceMapImage;
-(void)setInputConfidenceMapImage:(CIImage *)arg1 ;
-(NSNumber *)inputMaxNumVertices;
-(void)setInputMaxNumVertices:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaS;
-(void)setInputSigmaS:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRLuma;
-(void)setInputSigmaRLuma:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRChroma;
-(void)setInputSigmaRChroma:(NSNumber *)arg1 ;
-(NSNumber *)inputLambda;
-(void)setInputLambda:(NSNumber *)arg1 ;
-(NSNumber *)inputMaxNumIterations;
-(void)setInputMaxNumIterations:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end
