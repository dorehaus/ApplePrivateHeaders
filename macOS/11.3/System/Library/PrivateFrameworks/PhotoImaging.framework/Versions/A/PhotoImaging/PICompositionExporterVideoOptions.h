/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NSString;

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions {

	char _increaseBitRateIfNecessary;
	char _preserveSourceColorSpace;
	char _bypassOutputSettingsIfNoComposition;
	char _applyVideoOrientationAsMetadata;
	char _requireHardwareEncoder;
	/*^block*/id _metadataProcessor;
	NSString* _videoCodecType;

}

@property (copy) id metadataProcessor;                                              //@synthesize metadataProcessor=_metadataProcessor - In the implementation block
@property (assign,nonatomic) char increaseBitRateIfNecessary;                       //@synthesize increaseBitRateIfNecessary=_increaseBitRateIfNecessary - In the implementation block
@property (nonatomic,copy) NSString * videoCodecType;                               //@synthesize videoCodecType=_videoCodecType - In the implementation block
@property (assign,nonatomic) char preserveSourceColorSpace;                         //@synthesize preserveSourceColorSpace=_preserveSourceColorSpace - In the implementation block
@property (assign,nonatomic) char bypassOutputSettingsIfNoComposition;              //@synthesize bypassOutputSettingsIfNoComposition=_bypassOutputSettingsIfNoComposition - In the implementation block
@property (assign,nonatomic) char applyVideoOrientationAsMetadata;                  //@synthesize applyVideoOrientationAsMetadata=_applyVideoOrientationAsMetadata - In the implementation block
@property (assign,nonatomic) char requireHardwareEncoder;                           //@synthesize requireHardwareEncoder=_requireHardwareEncoder - In the implementation block
-(id)description;
-(id)init;
-(NSString *)videoCodecType;
-(void)setVideoCodecType:(NSString *)arg1 ;
-(char)bypassOutputSettingsIfNoComposition;
-(void)setBypassOutputSettingsIfNoComposition:(char)arg1 ;
-(char)requireHardwareEncoder;
-(void)setRequireHardwareEncoder:(char)arg1 ;
-(id)metadataProcessor;
-(void)setMetadataProcessor:(id)arg1 ;
-(char)increaseBitRateIfNecessary;
-(void)setIncreaseBitRateIfNecessary:(char)arg1 ;
-(char)preserveSourceColorSpace;
-(void)setPreserveSourceColorSpace:(char)arg1 ;
-(char)applyVideoOrientationAsMetadata;
-(void)setApplyVideoOrientationAsMetadata:(char)arg1 ;
@end

