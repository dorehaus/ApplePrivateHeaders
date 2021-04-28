/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLResource.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@protocol MTLDevice;
@class MTLIOAccelDevice, NSString;

@interface MTLIOAccelResource : _MTLResource <MTLResourceSPI> {

	MTLIOAccelResource* _res;
	MTLIOAccelResource* next;
	MTLIOAccelResource* prev;
	unsigned long long uniqueId;
	MTLIOAccelDevice*<MTLDevice> weakDevice;

}

@property (readonly) IOAccelResourceRef resourceRef; 
@property (nonatomic,readonly) void* virtualAddress; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned resourceID; 
@property (nonatomic,readonly) unsigned long long resourceSize; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocationID; 
@property (__weak,readonly) MTLIOAccelDevice*<MTLDevice> weakDevice; 
@property (assign) int responsibleProcess; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(unsigned long long)storageMode;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)makeAliasable;
-(char)isAliasable;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)resourceOptions;
-(id<MTLHeap>)heap;
-(unsigned long long)heapOffset;
-(unsigned long long)allocatedSize;
-(unsigned long long)protectionOptions;
-(unsigned long long)unfilteredResourceOptions;
-(char)isPurgeable;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(unsigned long long)allocationID;
-(char)doesAliasResource:(id)arg1 ;
-(char)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(char)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(char)isComplete;
-(void)waitUntilComplete;
-(char)isWriteComplete;
-(void*)virtualAddress;
-(unsigned long long)resourceSize;
-(id)initWithResource:(id)arg1 ;
-(IOAccelResourceRef)resourceRef;
-(id)retainedLabel;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOAccelNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(MTLIOAccelDevice*<MTLDevice>)weakDevice;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(id)initStandinWithDevice:(id)arg1 ;
-(CFArrayRef)copyAnnotations;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(unsigned)resourceID;
-(id)initWithDevice:(id)arg1 remoteStorageResource:(id)arg2 options:(unsigned long long)arg3 args:(IOAccelNewResourceArgs*)arg4 argsSize:(unsigned)arg5 ;
-(id)initMemoryless:(id)arg1 descriptor:(id)arg2 ;
-(void)releaseStrongDevice;
@end
