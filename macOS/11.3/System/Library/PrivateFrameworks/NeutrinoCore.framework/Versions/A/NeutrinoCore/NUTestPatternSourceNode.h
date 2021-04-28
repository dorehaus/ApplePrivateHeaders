/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@interface NUTestPatternSourceNode : NUSourceNode {

	SCD_Struct_NU8 _size;
	long long _orientation;
	SCD_Struct_NU8 _scale;

}
-(id)initWithSettings:(id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(long long)sourceOrientation;
-(char)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU8)pixelSizeWithSourceOptions:(id)arg1 ;
-(char)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithSize:(SCD_Struct_NU8)arg1 orientation:(long long)arg2 ;
-(id)initWithSize:(SCD_Struct_NU8)arg1 orientation:(long long)arg2 scale:(SCD_Struct_NU8)arg3 ;
@end

