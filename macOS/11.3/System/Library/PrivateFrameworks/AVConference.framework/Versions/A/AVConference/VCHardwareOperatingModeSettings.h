/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VCHardwareOperatingModeSettings : NSObject {

	unsigned _usageMode;
	int _avcOperatingMode;
	char _supportVCPDecoderHEVC;
	char _supportVCPEncoderHEVC;
	char _vcpInitializedForHEVC;
	NSString* _featureListStringHEVC;
	NSString* _featureListStringH264;
	unsigned _tilesPerVideoFrame;

}

@property (nonatomic,readonly) unsigned usageMode;                            //@synthesize usageMode=_usageMode - In the implementation block
@property (nonatomic,readonly) char supportVCPDecoderHEVC;                    //@synthesize supportVCPDecoderHEVC=_supportVCPDecoderHEVC - In the implementation block
@property (nonatomic,readonly) char supportVCPEncoderHEVC;                    //@synthesize supportVCPEncoderHEVC=_supportVCPEncoderHEVC - In the implementation block
@property (nonatomic,readonly) char vcpInitializedForHEVC;                    //@synthesize vcpInitializedForHEVC=_vcpInitializedForHEVC - In the implementation block
@property (nonatomic,readonly) NSString * featureListStringHEVC;              //@synthesize featureListStringHEVC=_featureListStringHEVC - In the implementation block
@property (nonatomic,readonly) NSString * featureListStringH264;              //@synthesize featureListStringH264=_featureListStringH264 - In the implementation block
@property (nonatomic,readonly) unsigned tilesPerVideoFrame;                   //@synthesize tilesPerVideoFrame=_tilesPerVideoFrame - In the implementation block
+(unsigned)encoderUsageTypeWithOperatingMode:(int)arg1 ;
-(void)dealloc;
-(id)initWithMode:(int)arg1 ;
-(char)vcpSupportsHEVCEncoder;
-(unsigned)tilesPerVideoFrame;
-(void)featureListString;
-(char)vcpSupportsHEVCDecoder;
-(unsigned)numTilesPerVideoFrameForHDRMode:(unsigned long long)arg1 ;
-(void)vcpCodecGetPropertiesForID:(int)arg1 block:(/*^block*/id)arg2 ;
-(unsigned)usageMode;
-(char)supportVCPDecoderHEVC;
-(char)supportVCPEncoderHEVC;
-(char)vcpInitializedForHEVC;
-(NSString *)featureListStringHEVC;
-(NSString *)featureListStringH264;
@end

