/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLHeap.h>

@protocol MTLDevice;
@class MTLIOAccelResource, MTLIOAccelDevice, NSString;

@interface MTLIOAccelHeap : _MTLHeap {

	MTLIOAccelResource* _resource;
	MTLIOAccelDevice*<MTLDevice> _device;
	MTLRangeAllocator* _allocator;
	opaque_pthread_mutex_t _mutex;
	unsigned long long _size;

}

@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long usedSize; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long currentAllocatedSize; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) long long type; 
-(unsigned long long)size;
-(void)dealloc;
-(id<MTLDevice>)device;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)usedSize;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(unsigned long long)currentAllocatedSize;
-(void)deallocHeapSubResource;
-(id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(IOAccelNewResourceArgs*)arg4 argsSize:(unsigned)arg5 desc:(id)arg6 ;
-(id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(IOAccelNewResourceArgs*)arg4 argsSize:(unsigned)arg5 ;
-(id)newSubResourceWithLength:(unsigned long long)arg1 alignment:(unsigned long long)arg2 options:(unsigned long long)arg3 offset:(unsigned long long*)arg4 ;
-(void)unpinMemoryAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 ;
-(id)newSubResourceAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 alignment:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
@end

