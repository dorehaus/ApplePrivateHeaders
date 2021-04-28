/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNDArray.framework/Versions/A/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@interface MPSNDArrayBinaryKernel : MPSNDArrayMultiaryKernel

@property (nonatomic,readonly) SCD_Struct_MP4 primaryOffsets; 
@property (nonatomic,readonly) unsigned long long primaryEdgeMode; 
@property (nonatomic,readonly) SCD_Struct_MP5 primaryKernelSizes; 
@property (nonatomic,readonly) SCD_Struct_MP4 primaryStrides; 
@property (nonatomic,readonly) SCD_Struct_MP5 primaryDilationRates; 
@property (nonatomic,readonly) SCD_Struct_MP4 secondaryOffsets; 
@property (nonatomic,readonly) unsigned long long secondaryEdgeMode; 
@property (nonatomic,readonly) SCD_Struct_MP5 secondaryKernelSizes; 
@property (nonatomic,readonly) SCD_Struct_MP4 secondaryStrides; 
@property (nonatomic,readonly) SCD_Struct_MP5 secondaryDilationRates; 
+(unsigned long long)expectedVirtualSourceCount;
-(id)initWithDevice:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)primaryEdgeMode;
-(unsigned long long)secondaryEdgeMode;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 destinationArray:(id)arg4 ;
-(SCD_Struct_MP4)primaryOffsets;
-(SCD_Struct_MP4)secondaryOffsets;
-(SCD_Struct_MP5)primaryKernelSizes;
-(SCD_Struct_MP5)secondaryKernelSizes;
-(SCD_Struct_MP4)primaryStrides;
-(SCD_Struct_MP4)secondaryStrides;
-(SCD_Struct_MP5)primaryDilationRates;
-(SCD_Struct_MP5)secondaryDilationRates;
-(id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id*)arg4 outputStateIsTemporary:(char)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id)arg4 destinationArray:(id)arg5 ;
@end
