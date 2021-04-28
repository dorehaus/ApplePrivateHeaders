/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMorphologyRectangle : CIFilter {

	CIImage* inputImage;
	NSNumber* inputWidth;
	NSNumber* inputHeight;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputHeight; 
+(id)customAttributes;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(BOOL)_doMinimum;
-(id)outputImage;
-(void)setInputHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputHeight;
-(char)_isIdentity;
-(CIImage *)inputImage;
-(NSNumber *)inputWidth;
-(void)setInputImage:(CIImage *)arg1 ;
@end
