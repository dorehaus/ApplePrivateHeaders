/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCapturePhotoSettings.h>

@class AVCapturePhotoBracketSettingsInternal, NSArray;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {

	AVCapturePhotoBracketSettingsInternal* _bracketSettingsInternal;

}

@property (nonatomic,readonly) NSArray * bracketedSettings; 
@property (assign,getter=isLensStabilizationEnabled,nonatomic) char lensStabilizationEnabled; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 bracketedSettings:(id)arg3 ;
+(id)photoBracketSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 bracketedSettings:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(void)setAutoRedEyeReductionEnabled:(char)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(char)arg1 ;
-(void)setAutoVirtualDeviceFusionEnabled:(char)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(char)arg1 ;
-(void)setLivePhotoMovieFileURL:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(id)arg1 ;
-(NSArray *)bracketedSettings;
-(char)isLensStabilizationEnabled;
-(void)setLensStabilizationEnabled:(char)arg1 ;
-(void)setEV0PhotoDeliveryEnabled:(char)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned)arg3 rawFileType:(id)arg4 bracketedSettings:(id)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7 ;
@end

