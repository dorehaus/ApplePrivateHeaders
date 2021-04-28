/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNDArray.framework/Versions/A/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSCore/MPSExternalPluginBase.h>
#import <MPSNDArray/MPSExternalNDArrayBinary.h>

@protocol MPSExternalNDArrayBinary <MPSExternalPluginBase>
@optional
-(unsigned long long)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 primaryBuffer:(id)arg5 primaryInfo:(const SCD_Struct_MP6*)arg6 secondaryBuffer:(id)arg7 secondaryInfo:(const SCD_Struct_MP6*)arg8 destinationBuffer:(id)arg9 destinationInfo:(const SCD_Struct_MP6*)arg10 predicationBuffer:(id)arg11 predicationOffset:(unsigned long long)arg12;

@end


@class NSString;

@interface MPSExternalNDArrayBinary : MPSExternalPluginBase <MPSExternalNDArrayBinary>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@end
