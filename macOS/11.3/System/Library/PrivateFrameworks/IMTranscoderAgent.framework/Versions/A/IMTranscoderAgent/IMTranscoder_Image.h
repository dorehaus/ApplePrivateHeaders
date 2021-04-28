/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/Versions/A/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_Image : IMTranscoder {

	char _stripImageMetadata;
	double _overrideJPEGCompressionQuality;

}

@property (assign,nonatomic) double overrideJPEGCompressionQuality;              //@synthesize overrideJPEGCompressionQuality=_overrideJPEGCompressionQuality - In the implementation block
@property (assign,nonatomic) char stripImageMetadata;                            //@synthesize stripImageMetadata=_stripImageMetadata - In the implementation block
+(id)supportedUTIs;
+(id)excludedUTIs;
+(id)findOrientationFromProperties:(id)arg1 ;
+(id)findLargerDimensionFromImage:(CGImageSourceRef)arg1 withProperties:(id)arg2 toWidth:(id*)arg3 toHeight:(id*)arg4 ;
+(char)_canConvertPNGToJPEG:(CGImageRef)arg1 ;
+(char)_imageContainsTranslucentPixels:(CGImageRef)arg1 ;
-(long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)stripImageMetadata;
-(void)setStripImageMetadata:(char)arg1 ;
-(char)_isHEIFImageFormat:(CFStringRef)arg1 ;
-(char)_isWebPImageFormat:(CFStringRef)arg1 ;
-(char)_isWideGamutImage:(CGImageSourceRef)arg1 ;
-(id)copyImagePropertiesFrom:(CGImageSourceRef)arg1 frameCount:(unsigned long long)arg2 withProps:(id)arg3 inFormat:(CFStringRef)arg4 outFormat:(CFStringRef)arg5 ;
-(id)copyFramePropertiesFrom:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 inFormat:(CFStringRef)arg3 outFormat:(CFStringRef)arg4 ;
-(void)_setWideGamutProperties:(id)arg1 scaledImage:(CGImageRef)arg2 ;
-(void)copyAuxiliaryImagesFromImageSource:(CGImageSourceRef)arg1 toDestination:(CGImageDestinationRef)arg2 fromImageAtIndex:(unsigned long long)arg3 scaleFactor:(double)arg4 ;
-(id)_writeImageData:(id)arg1 inFormat:(CFStringRef)arg2 sourceURL:(id)arg3 ;
-(double)overrideJPEGCompressionQuality;
-(id)_newGeneratedImage:(CGImageSourceRef)arg1 sourceWidth:(id)arg2 sourceHeight:(id)arg3 sourceLength:(unsigned long long)arg4 sourceProps:(id)arg5 target:(long long)arg6 hardwareEncoder:(id)arg7 inFormat:(CFStringRef)arg8 fromFormat:(CFStringRef)arg9 withMaxLength:(unsigned long long)arg10 withMaxCount:(unsigned long long)arg11 withCompressionQuality:(double)arg12 enforceMaxes:(char)arg13 subsampling:(int)arg14 ;
-(id)_checkAndSaveImageData:(id)arg1 sourceURL:(id)arg2 inFormat:(CFStringRef)arg3 withMaxByteSize:(unsigned long long)arg4 actualSize:(unsigned long long*)arg5 usedLengthIndex:(int*)arg6 currentIndex:(int)arg7 ;
-(id)_copyWideGamutImage:(CGImageSourceRef)arg1 sourceURL:(id)arg2 inFormat:(CFStringRef)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 telemetry:(id)arg7 ;
-(id)_writeHEIFImage:(CGImageSourceRef)arg1 sourceURL:(id)arg2 inFormat:(CFStringRef)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 startingLengthIndex:(int)arg7 usedLengthIndex:(int*)arg8 telemetry:(id)arg9 ;
-(id)_writeImage:(CGImageSourceRef)arg1 sourceURL:(id)arg2 target:(long long)arg3 hardwareEncoder:(id)arg4 inFormat:(CFStringRef)arg5 fromFormat:(CFStringRef)arg6 withMaxByteSize:(unsigned long long)arg7 maxDimension:(unsigned long long)arg8 actualSize:(unsigned long long*)arg9 startingLengthIndex:(int)arg10 usedLengthIndex:(int*)arg11 estimator:(id)arg12 telemetry:(id)arg13 ;
-(unsigned long long)_getImageWidth:(CGImageSourceRef)arg1 ;
-(void)setOverrideJPEGCompressionQuality:(double)arg1 ;
-(id)_writeRepresentationsForImage:(CGImageSourceRef)arg1 target:(long long)arg2 sourceURL:(id)arg3 sizes:(id)arg4 maxDimension:(unsigned long long)arg5 srcUTI:(CFStringRef)arg6 inFormat:(CFStringRef)arg7 estimator:(id)arg8 telemetry:(id)arg9 ;
-(id)_getScaleFactorArray:(id)arg1 transferURL:(id)arg2 outputURLs:(id)arg3 ;
@end

