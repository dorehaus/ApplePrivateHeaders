/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLComputePipelineState <NSObject>
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) char supportIndirectCommandBuffers; 
@required
-(char)supportIndirectCommandBuffers;
-(id<MTLDevice>)device;
-(NSString *)label;
-(id)functionHandleWithFunction:(id)arg1;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id*)arg2;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg1;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(unsigned long long)threadExecutionWidth;
-(unsigned long long)staticThreadgroupMemoryLength;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT41)arg1;

@end

