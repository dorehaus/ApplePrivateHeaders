/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject {

	AVOutputSettingsAssistantInternal* _internal;

}

@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSString * outputFileType; 
+(id)_allOutputSettingsPresets;
+(id)baseSettingsProviderForPreset:(id)arg1 ;
+(id)videoSettingsAdjusterForPreset:(id)arg1 ;
+(id)videoEncoderCapabilities;
+(char)validatesSourceVideoMinFrameDuration;
+(id)availableOutputSettingsPresets;
+(id)outputSettingsAssistantWithPreset:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)videoEncoderSpecification;
-(NSDictionary *)audioSettings;
-(NSDictionary *)videoSettings;
-(NSString *)outputFileType;
-(const opaqueCMFormatDescriptionRef)sourceVideoFormat;
-(const opaqueCMFormatDescriptionRef)sourceAudioFormat;
-(SCD_Struct_CM3)sourceVideoAverageFrameDuration;
-(SCD_Struct_CM3)sourceVideoMinFrameDuration;
-(id)initWithPreset:(id)arg1 ;
-(void)setSourceAudioFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoAverageFrameDuration:(SCD_Struct_CM3)arg1 ;
-(void)setSourceVideoMinFrameDuration:(SCD_Struct_CM3)arg1 ;
-(void)setVideoEncoderSpecification:(id)arg1 ;
@end

