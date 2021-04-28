/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CISparseRendererPreFiltering : CIFilter {

	CIImage* inputImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputApertureScaling;
	NSNumber* inputScale;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (copy) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputScale; 
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)_kernel:(char)arg1 ;
-(id)outputImage:(id)arg1 horizontal:(char)arg2 width:(double)arg3 ;
-(void)dumpImage:(id)arg1 extent:(CGRect)arg2 prefixFilename:(id)arg3 ;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

