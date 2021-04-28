/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, AVAsset, NSArray, NSDictionary;

@interface NUVideoSourceNode : NUSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	char _loaded;
	NSURL* _URL;
	AVAsset* _asset;
	SCD_Struct_NU7 _duration;
	SCD_Struct_NU8 _size;
	SCD_Struct_NU9 _cleanAperture;
	long long _orientation;
	NSArray* _metadata;
	NSDictionary* _colorProperties;
	SCD_Struct_NU7 _livePhotoKeyFrameTime;

}

@property (readonly) SCD_Struct_NU9 cleanAperture; 
@property (readonly) SCD_Struct_NU7 duration; 
@property (readonly) char isHDR; 
-(SCD_Struct_NU7)duration;
-(id)initWithSettings:(id)arg1 ;
-(char)load:(out id*)arg1 ;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
-(char)isHDR;
-(SCD_Struct_NU9)cleanAperture;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)sourceOptionsForSettings:(id)arg1 error:(out id*)arg2 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(long long)sourceOrientation;
-(char)shouldCacheNodeForPipelineState:(id)arg1 ;
-(char)_load:(out id*)arg1 ;
-(id)asset:(out id*)arg1 ;
-(SCD_Struct_NU8)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(char)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)_settingsForPipelineState:(id)arg1 ownedFrame:(char)arg2 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(char)requiresVideoComposition;
-(char)requiresAudioMix;
@end

