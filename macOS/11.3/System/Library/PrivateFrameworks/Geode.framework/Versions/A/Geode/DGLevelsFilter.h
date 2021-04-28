/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, IPAColorProfile;

@interface DGLevelsFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputBlackSrcRGB;
	NSNumber* inputBlackDstRGB;
	NSNumber* inputShadowSrcRGB;
	NSNumber* inputShadowDstRGB;
	NSNumber* inputMidSrcRGB;
	NSNumber* inputMidDstRGB;
	NSNumber* inputHilightSrcRGB;
	NSNumber* inputHilightDstRGB;
	NSNumber* inputWhiteSrcRGB;
	NSNumber* inputWhiteDstRGB;
	NSNumber* inputBlackSrcRed;
	NSNumber* inputBlackDstRed;
	NSNumber* inputShadowSrcRed;
	NSNumber* inputShadowDstRed;
	NSNumber* inputMidSrcRed;
	NSNumber* inputMidDstRed;
	NSNumber* inputHilightSrcRed;
	NSNumber* inputHilightDstRed;
	NSNumber* inputWhiteSrcRed;
	NSNumber* inputWhiteDstRed;
	NSNumber* inputBlackSrcGreen;
	NSNumber* inputBlackDstGreen;
	NSNumber* inputShadowSrcGreen;
	NSNumber* inputShadowDstGreen;
	NSNumber* inputMidSrcGreen;
	NSNumber* inputMidDstGreen;
	NSNumber* inputHilightSrcGreen;
	NSNumber* inputHilightDstGreen;
	NSNumber* inputWhiteSrcGreen;
	NSNumber* inputWhiteDstGreen;
	NSNumber* inputBlackSrcBlue;
	NSNumber* inputBlackDstBlue;
	NSNumber* inputShadowSrcBlue;
	NSNumber* inputShadowDstBlue;
	NSNumber* inputMidSrcBlue;
	NSNumber* inputMidDstBlue;
	NSNumber* inputHilightSrcBlue;
	NSNumber* inputHilightDstBlue;
	NSNumber* inputWhiteSrcBlue;
	NSNumber* inputWhiteDstBlue;
	NSNumber* inputMode;
	IPAColorProfile* _inputWorkingColorProfile;

}

@property (nonatomic,retain) IPAColorProfile * inputWorkingColorProfile;              //@synthesize inputWorkingColorProfile=_inputWorkingColorProfile - In the implementation block
+(void)initialize;
+(id)filterWithName:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)defaultValueForKey:(id)arg1 ;
-(void)setDefaults;
-(id)outputImage;
-(id)customAttributes;
-(double)floatValueForKey:(id)arg1 defaultValue:(double)arg2 ;
-(CGRect)regionOf:(long long)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)_customAttributesForKey:(id)arg1 ;
-(double)floatValueForKey:(id)arg1 defaultValue:(double)arg2 clearIfNotDefault:(char*)arg3 ;
-(IPAColorProfile *)inputWorkingColorProfile;
-(char)_key:(id)arg1 containsString:(id)arg2 ;
-(id)outputImageiPhotoMode;
-(void)setInputWorkingColorProfile:(IPAColorProfile *)arg1 ;
@end

