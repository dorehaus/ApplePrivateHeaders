/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {

	NSMutableDictionary* _decompressionAttributes;
	char _useDefaultPixelBufferAttributes;
	NSMutableArray* _outputCodecTypes;

}
-(void)dealloc;
-(id)description;
-(id)init;
-(id)pixelBufferAttributes;
-(SCD_Struct_AV0)minFrameDuration;
-(long long)videoOrientation;
-(SCD_Struct_AV0)maxFrameDuration;
-(char)isVideoMirrored;
-(id)vtDecompressionProperties;
-(char)allowUpscaling;
-(void)resolveDecompressionAttributes:(id)arg1 ;
-(void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)arg1 ;
-(id)outputCodecTypes;
@end

