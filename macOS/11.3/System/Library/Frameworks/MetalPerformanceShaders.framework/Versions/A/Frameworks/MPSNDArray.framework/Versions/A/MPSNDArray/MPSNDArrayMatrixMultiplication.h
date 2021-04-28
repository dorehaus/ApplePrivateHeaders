/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSNDArray.framework/Versions/A/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@class MPSMatrixMultiplication;

@interface MPSNDArrayMatrixMultiplication : MPSNDArrayMultiaryKernel {

	MPSMatrixMultiplication* _mmul;
	double _alpha;
	double _beta;

}

@property (assign,nonatomic) double alpha;              //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double beta;               //@synthesize beta=_beta - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
+(char)supportsPrefixForDevice:(MPSDevice*)arg1 ;
+(char)supportsPostfixForDevice:(MPSDevice*)arg1 ;
+(unsigned long long)expectedVirtualSourceCount;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(double)beta;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setBeta:(double)arg1 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(1)dimensionsNotToBeBroadcast;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2 ;
-(id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 kernel:(id)arg3 sourceState:(id)arg4 ;
@end

