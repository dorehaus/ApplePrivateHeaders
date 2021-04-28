/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOUSBHost.framework/Versions/A/IOUSBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOUSBHost/IOUSBHost-Structs.h>
#import <IOUSBHost/IOUSBHostIOSource.h>

@class NSData, NSMutableSet;

@interface IOUSBHostPipe : IOUSBHostIOSource {

	char _streamsEnabled;
	NSData* _originalDescriptorsCache;
	NSData* _currentDescriptorsCache;
	NSMutableSet* _invalidDescriptorCache;

}

@property (retain) NSData * originalDescriptorsCache;                                      //@synthesize originalDescriptorsCache=_originalDescriptorsCache - In the implementation block
@property (retain) NSData * currentDescriptorsCache;                                       //@synthesize currentDescriptorsCache=_currentDescriptorsCache - In the implementation block
@property (retain) NSMutableSet * invalidDescriptorCache;                                  //@synthesize invalidDescriptorCache=_invalidDescriptorCache - In the implementation block
@property (assign) char streamsEnabled;                                                    //@synthesize streamsEnabled=_streamsEnabled - In the implementation block
@property (readonly) const IOUSBHostIOSourceDescriptors* originalDescriptors; 
@property (readonly) const IOUSBHostIOSourceDescriptors* descriptors; 
@property (readonly) double idleTimeout; 
-(id)initWithHostInterface:(id)arg1 endpointAddress:(unsigned long long)arg2 ioConnection:(unsigned)arg3 ioNotificationPortRef:(IONotificationPortRef)arg4 deviceAddress:(unsigned long long)arg5 ;
-(char)abortWithOption:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)abortWithError:(id*)arg1 ;
-(double)idleTimeout;
-(char)setIdleTimeout:(double)arg1 error:(id*)arg2 ;
-(void)setStreamsEnabled:(char)arg1 ;
-(void)setInvalidDescriptorCache:(NSMutableSet *)arg1 ;
-(NSMutableSet *)invalidDescriptorCache;
-(const IOUSBHostIOSourceDescriptors*)ioSourceDescriptorsWithOption:(unsigned long long)arg1 ;
-(NSData *)originalDescriptorsCache;
-(NSData *)currentDescriptorsCache;
-(void)setOriginalDescriptorsCache:(NSData *)arg1 ;
-(void)setCurrentDescriptorsCache:(NSData *)arg1 ;
-(char)sendControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 completionTimeout:(double)arg4 error:(id*)arg5 ;
-(char)enqueueControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 completionTimeout:(double)arg3 error:(id*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(char)streamsEnabled;
-(const IOUSBHostIOSourceDescriptors*)descriptors;
-(const IOUSBHostIOSourceDescriptors*)originalDescriptors;
-(char)adjustPipeWithDescriptors:(const IOUSBHostIOSourceDescriptors*)arg1 error:(id*)arg2 ;
-(char)clearStallWithError:(id*)arg1 ;
-(char)sendControlRequest:(IOUSBDeviceRequest)arg1 error:(id*)arg2 ;
-(char)sendControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 error:(id*)arg4 ;
-(char)enqueueControlRequest:(IOUSBDeviceRequest)arg1 error:(id*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)enqueueControlRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 error:(id*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)sendIORequestWithData:(id)arg1 bytesTransferred:(unsigned long long*)arg2 completionTimeout:(double)arg3 error:(id*)arg4 ;
-(char)enqueueIORequestWithData:(id)arg1 completionTimeout:(double)arg2 error:(id*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)sendIORequestWithData:(id)arg1 frameList:(IOUSBHostIsochronousFrame*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)enqueueIORequestWithData:(id)arg1 frameList:(IOUSBHostIsochronousFrame*)arg2 frameListCount:(unsigned long long)arg3 firstFrameNumber:(unsigned long long)arg4 error:(id*)arg5 completionHandler:(/*^block*/id)arg6 ;
-(char)enableStreamsWithError:(id*)arg1 ;
-(char)disableStreamsWithError:(id*)arg1 ;
-(id)copyStreamWithStreamID:(unsigned long long)arg1 error:(id*)arg2 ;
@end

