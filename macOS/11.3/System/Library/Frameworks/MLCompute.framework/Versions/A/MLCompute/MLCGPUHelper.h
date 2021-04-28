/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MLCompute/MLCompute-Structs.h>
@interface MLCGPUHelper : NSObject
+(id)allocateMPSImageBatchForTensor:(id)arg1 commandBuffer:(id)arg2 kernel:(id)arg3 batchSize:(unsigned long long)arg4 heapAllocator:(id)arg5 imageBatchIsTemporary:(char)arg6 ;
+(void)copyMTLBufferToMPSImageBatch:(id)arg1 commandBuffer:(id)arg2 sourceMTLBuffer:(id)arg3 destinationImageBatch:(id)arg4 MLCDataType:(int)arg5 ;
+(void)synchronizeResource:(id)arg1 commandBuffer:(id)arg2 ;
+(unsigned long long)mtlStorageMode;
+(unsigned long long)mtlResourceOptions;
+(unsigned long long)mpsAliasingStrategy;
+(void)didModifyRange:(NSRange)arg1 buffer:(id)arg2 ;
+(void)concatChannelsForwardWithParams:(ConcatImageParams)arg1 sourceImageBatch:(id)arg2 resultImageBatch:(id)arg3 commandBuffer:(id)arg4 device:(id)arg5 deviceIndex:(unsigned long long)arg6 ;
+(void)copyMPSImageBatchToMatrixBatch:(id)arg1 commandBuffer:(id)arg2 sourceImageBatch:(id)arg3 destinationMatrixBatch:(id)arg4 ;
+(void)copyMatrixBatchToMPSImageBatch:(id)arg1 commandBuffer:(id)arg2 sourceMatrixBatch:(id)arg3 destinationImageBatch:(id)arg4 ;
+(void)copyMPSImageBatchToMTLBuffer:(id)arg1 commandBuffer:(id)arg2 sourceImageBatch:(id)arg3 destinationMTLBuffer:(id)arg4 MLCDataType:(int)arg5 ;
+(id)allocateTemporaryMPSImageBatchForTensor:(id)arg1 commandBuffer:(id)arg2 kernel:(id)arg3 batchSize:(unsigned long long)arg4 ;
+(id)allocateAndCopyToTemporaryMPSImageBatchForTensor:(id)arg1 commandBuffer:(id)arg2 batchSize:(unsigned long long)arg3 copyingKernel:(id)arg4 sourceMTLBuffer:(id)arg5 MLCDataType:(int)arg6 heapAllocator:(id)arg7 ;
@end

