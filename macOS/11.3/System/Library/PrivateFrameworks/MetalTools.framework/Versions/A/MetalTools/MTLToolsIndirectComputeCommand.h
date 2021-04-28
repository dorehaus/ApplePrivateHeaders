/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLIndirectComputeCommandSPI.h>

@class NSString;

@interface MTLToolsIndirectComputeCommand : MTLToolsObject <MTLIndirectComputeCommandSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setComputePipelineState:(id)arg1 ;
-(void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)concurrentDispatchThreadgroups:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)concurrentDispatchThreads:(SCD_Struct_MT0)arg1 threadsPerThreadgroup:(SCD_Struct_MT0)arg2 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setStageInRegion:(SCD_Struct_MT8)arg1 ;
-(void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_MT8)getStageInRegion;
-(char)hasBarrier;
-(id)getImageBlockSize;
-(void)setBarrier;
-(void)clearBarrier;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(void)reset;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)getCommandType;
-(unsigned long long)getOptimizedStatus;
@end

