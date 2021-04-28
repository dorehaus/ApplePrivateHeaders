/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/Versions/A/HDRProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLBuffer, MTLTexture;
#import <HDRProcessing/HDRProcessing-Structs.h>
@class DMShader, DolbyVisionDM4;

@interface DolbyVisionDisplayManagement : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	DMShader* _displayManagementKernel;
	id<MTLBuffer> _config;
	id<MTLTexture> _inputYTexture;
	id<MTLTexture> _inputUVTexture;
	id<MTLTexture> _outputTexture;
	unsigned long long _inputProtectionOptions;
	unsigned long long _outputProtectionOptions;
	int _inputDmVersion;
	DolbyVisionDM4* _dm40;

}
-(id)initWithDevice:(id)arg1 ;
-(void)releaseResources;
-(id)initWithTmLutSize:(int)arg1 ;
-(void)setInputDmVersion:(int)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 Input:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD42*)arg4 ;
-(void)setupMetal;
-(void)setDisplayManagementConfigFromMetaData:(SCD_Struct_HD42*)arg1 config:(SCD_Struct_Do58*)arg2 hdrCtrl:(SCD_Struct_HD40*)arg3 tcCtrl:(ToneCurve_Control*)arg4 ;
-(void)setDisplayManagementConfigFromDictionary:(SCD_Struct_Do58*)arg1 hdrCtrl:(SCD_Struct_HD40*)arg2 tcCtrl:(ToneCurve_Control*)arg3 infoFrame:(SCD_Struct_HD23*)arg4 ;
-(id)getComputePipeLineStateForShader:(id)arg1 ;
-(void)setupTexturesWithInput:(IOSurfaceRef)arg1 Output:(IOSurfaceRef)arg2 ;
-(char)enableMSRandIOSTuning:(SCD_Struct_HD40*)arg1 ;
-(void)getToneCurves:(SCD_Struct_Do58*)arg1 tcCtrl:(ToneCurve_Control*)arg2 tmData:(TMData*)arg3 srcMinPQ:(float)arg4 srcMaxPQ:(float)arg5 tgtMinPQ:(float)arg6 tgtMaxPQ:(float)arg7 srcDiagSize:(float)arg8 dstDiagSize:(float)arg9 EDRFactor:(float)arg10 ambient:(float)arg11 nominalPQ:(float)arg12 useLCDPanel:(char)arg13 referenceDisplay:(BOOL)arg14 slopeScaled:(float*)arg15 c1:(float*)arg16 c2:(float*)arg17 c3:(float*)arg18 BrightAdjBySat2:(float*)arg19 ;
-(void)setConvertConfig:(SCD_Struct_Do58*)arg1 tcCtrl:(ToneCurve_Control*)arg2 hdrCtrl:(SCD_Struct_HD40*)arg3 auxData:(AuxData*)arg4 tmData:(TMData*)arg5 ;
-(void)setDisplayManagementToneMappingConfigFromMetaData:(SCD_Struct_HD42*)arg1 config:(SCD_Struct_Do58*)arg2 tcCtrl:(ToneCurve_Control*)arg3 hdrCtrl:(SCD_Struct_HD40*)arg4 auxData:(AuxData*)arg5 dpcParam:(DpcParam*)arg6 ;
-(void)setDisplayManagementToneMappingConfigFromDictionary:(SCD_Struct_Do58*)arg1 hdrCtrl:(SCD_Struct_HD40*)arg2 tcCtrl:(ToneCurve_Control*)arg3 infoFrame:(SCD_Struct_HD23*)arg4 ;
-(void)initToneCurveParams:(SCD_Struct_Do63*)arg1 srcMinPQ:(float)arg2 srcMaxPQ:(float)arg3 tgtMinPQ:(float)arg4 tgtMaxPQ:(float)arg5 srcCrushPQ:(float)arg6 srcMidPQ:(float)arg7 srcClipPQ:(float)arg8 srcDiagSize:(float)arg9 dstDiagSize:(float)arg10 EDRFactor:(float)arg11 ambient:(float)arg12 nominalPQ:(float)arg13 useLCDPanel:(char)arg14 noPCC:(BOOL)arg15 referenceDisplay:(BOOL)arg16 passThroughTM:(BOOL)arg17 slopeScaled:(float*)arg18 c1:(float*)arg19 c2:(float*)arg20 c3:(float*)arg21 BrightAdjBySat2:(float*)arg22 ;
-(void)getToneCurvesDM31:(SCD_Struct_Do63*)arg1 ;
-(void)getSat2Parameters:(SCD_Struct_Do58*)arg1 ;
-(void)getToneCurves:(SCD_Struct_Do63*)arg1 tcCtrl:(ToneCurve_Control*)arg2 tmData:(TMData*)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 Input:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD42*)arg4 tcControl:(ToneCurve_Control*)arg5 hdrControl:(SCD_Struct_HD40*)arg6 ;
@end

