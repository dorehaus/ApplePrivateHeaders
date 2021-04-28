/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying> {

	long long _settingsID;
	unsigned long long _userInitiatedCaptureTime;
	int _torchMode;
	int _flashMode;
	char _autoRedEyeReductionEnabled;
	int _digitalFlashMode;
	int _qualityPrioritization;
	int _HDRMode;
	char _autoOriginalPhotoDeliveryEnabled;
	char _autoSpatialOverCaptureEnabled;
	char _autoDeferredProcessingEnabled;
	unsigned _rawOutputFormat;

}

@property (nonatomic,readonly) long long settingsID;                                                                       //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiatedCaptureTime;                                                //@synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime - In the implementation block
@property (assign,nonatomic) int torchMode;                                                                                //@synthesize torchMode=_torchMode - In the implementation block
@property (assign,nonatomic) int flashMode;                                                                                //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) char autoRedEyeReductionEnabled;                                                              //@synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) int digitalFlashMode;                                                                         //@synthesize digitalFlashMode=_digitalFlashMode - In the implementation block
@property (assign,nonatomic) int qualityPrioritization;                                                                    //@synthesize qualityPrioritization=_qualityPrioritization - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                                                  //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,getter=isAutoOriginalPhotoDeliveryEnabled,nonatomic) char autoOriginalPhotoDeliveryEnabled;              //@synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled - In the implementation block
@property (assign,getter=isAutoSpatialOverCaptureEnabled,nonatomic) char autoSpatialOverCaptureEnabled;                    //@synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled - In the implementation block
@property (assign,getter=isAutoDeferredProcessingEnabled,nonatomic) char autoDeferredProcessingEnabled;                    //@synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled - In the implementation block
@property (assign,nonatomic) unsigned rawOutputFormat;                                                                     //@synthesize rawOutputFormat=_rawOutputFormat - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)settingsID;
-(void)setFlashMode:(int)arg1 ;
-(void)setTorchMode:(int)arg1 ;
-(void)setDigitalFlashMode:(int)arg1 ;
-(void)setHDRMode:(int)arg1 ;
-(int)torchMode;
-(int)flashMode;
-(int)digitalFlashMode;
-(int)HDRMode;
-(unsigned long long)userInitiatedCaptureTime;
-(void)setAutoRedEyeReductionEnabled:(char)arg1 ;
-(char)isAutoOriginalPhotoDeliveryEnabled;
-(void)setAutoOriginalPhotoDeliveryEnabled:(char)arg1 ;
-(char)isAutoSpatialOverCaptureEnabled;
-(void)setAutoSpatialOverCaptureEnabled:(char)arg1 ;
-(char)isAutoDeferredProcessingEnabled;
-(void)setAutoDeferredProcessingEnabled:(char)arg1 ;
-(unsigned)rawOutputFormat;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(char)autoRedEyeReductionEnabled;
-(void)setQualityPrioritization:(int)arg1 ;
-(int)qualityPrioritization;
-(id)initWithSettingsID:(long long)arg1 userInitiatedCaptureTime:(unsigned long long)arg2 ;
@end

