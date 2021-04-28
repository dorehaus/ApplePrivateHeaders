/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMaskedVariableBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputMask;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMask; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(id)_kernelD2;
-(id)downTwo:(id)arg1 ;
-(id)upCubic:(id)arg1 scale:(float)arg2 ;
-(id)_kernelCombine;
-(id)outputImage;
-(char)_isIdentity;
-(CIImage *)inputMask;
-(void)setInputMask:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
@end
