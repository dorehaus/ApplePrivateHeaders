/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>
@required
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
-(SCD_Struct_MT63*)getStageInRegion;
-(char)hasBarrier;
-(id)getImageBlockSize;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1;
-(unsigned long long)getCommandType;
-(unsigned long long)getOptimizedStatus;

@end
