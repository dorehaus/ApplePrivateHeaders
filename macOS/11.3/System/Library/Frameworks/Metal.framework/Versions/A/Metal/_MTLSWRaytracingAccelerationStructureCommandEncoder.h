/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLAccelerationStructureCommandEncoderSPI.h>

@protocol MTLDevice, MTLCommandBuffer, MTLComputeCommandEncoder;
@class _MTLCommandBuffer, NSString;

@interface _MTLSWRaytracingAccelerationStructureCommandEncoder : _MTLObjectWithLabel <MTLAccelerationStructureCommandEncoderSPI> {

	id<MTLDevice> _device;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	id<MTLComputeCommandEncoder> _computeEncoder;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)commandBuffer;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)endEncoding;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(char)arg3 ;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)buildAccelerationStructure:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4 ;
-(void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5 ;
-(void)copyAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2 ;
-(void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3 ;
-(void)copyAndCompactAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2 ;
-(void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3 ;
-(void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4 ;
-(void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4 ;
-(void)serializeAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 ;
-(void)deserializeAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 ;
-(void)deserializeAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4 ;
-(void)writeGeometrySizeOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3 ;
-(void)writeGeometryOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 geometryBufferOffset:(unsigned long long)arg3 ;
-(id)initWithCommandBuffer:(id)arg1 ;
@end

