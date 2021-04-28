/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMImaging.framework/Versions/A/CMImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, NSMutableDictionary;


@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property (getter=getListIndex,nonatomic,readonly) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long globalTraceObjectID; 
@property (assign,nonatomic) char sharedIndirectionTable; 
@optional
-(void)commitAndHold;
-(char)commitAndWaitUntilSubmitted;
-(id)debugCommandEncoder;
-(double)GPUStartTime;
-(double)GPUEndTime;
-(unsigned long long)globalTraceObjectID;
-(double)kernelStartTime;
-(double)kernelEndTime;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned long long)arg2;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned long long)arg3;
-(id)videoCommandEncoder;
-(unsigned long long)getListIndex;
-(void)setResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
-(void)dropResourceGroups:(const id*)arg1 count:(unsigned long long)arg2;
-(void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
-(void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id*)arg2 count:(unsigned long long)arg3;
-(void)setProtectionOptions:(unsigned long long)arg1;
-(unsigned long long)protectionOptions;
-(void)doCorruptCBSPI:(int)arg1;

@required
-(char)sharedIndirectionTable;
-(void)setSharedIndirectionTable:(char)arg1;
-(void)addPurgedResource:(id)arg1;
-(void)addPurgedHeap:(id)arg1;
-(char)isProfilingEnabled;
-(void)setProfilingEnabled:(char)arg1;
-(NSDictionary *)profilingResults;
-(NSMutableDictionary *)userDictionary;

@end

