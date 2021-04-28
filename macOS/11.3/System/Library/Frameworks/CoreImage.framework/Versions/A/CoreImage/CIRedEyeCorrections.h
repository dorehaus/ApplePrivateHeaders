/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSArray* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSArray * inputCorrectionInfo; 
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(void)setDefaults;
-(id)outputImage;
-(char)_isIdentity;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSArray *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSArray *)arg1 ;
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
@end

