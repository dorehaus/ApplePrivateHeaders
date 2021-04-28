/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;
#import <AVFCore/AVFCore-Structs.h>
@class NSDictionary;

@interface AVOutputSettingsAssistantInternal : NSObject {

	id<AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
	id<AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
	opaqueCMFormatDescriptionRef sourceVideoFormat;
	opaqueCMFormatDescriptionRef sourceAudioFormat;
	NSDictionary* videoEncoderSpecification;
	SCD_Struct_CM3 sourceVideoAverageFrameDuration;
	SCD_Struct_CM3 sourceVideoMinFrameDuration;

}
@end

