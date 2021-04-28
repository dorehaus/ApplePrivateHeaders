/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLAccelerationStructureCommandEncoderSPI <MTLAccelerationStructureCommandEncoder>
@required
-(void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;
-(void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4;
-(void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4;
-(void)serializeAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
-(void)deserializeAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;
-(void)deserializeAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;
-(void)writeGeometrySizeOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;
-(void)writeGeometryOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 geometryBufferOffset:(unsigned long long)arg3;

@end

