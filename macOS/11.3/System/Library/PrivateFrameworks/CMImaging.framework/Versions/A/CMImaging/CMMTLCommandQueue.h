/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMImaging.framework/Versions/A/CMImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@protocol MTLCommandQueue;
@class NSMutableDictionary, CMMTLDevice, InterceptConfig, NSString;

@interface CMMTLCommandQueue : NSObject <MTLCommandQueueSPI> {

	CMMTLDevice* _cmDevice;
	id<MTLCommandQueue> _commandQueue;
	InterceptConfig* _interceptConfig;

}

@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosLevel; 
@property (readonly) NSObject*<OS_dispatch_queue> commitQueue; 
@property (readonly) char commitSynchronously; 
@property (readonly) NSObject*<OS_dispatch_queue> completionQueue; 
@property (readonly) char disableCrossQueueHazardTracking; 
@property (assign) char skipRender; 
@property (assign) char executionEnabled; 
@property (readonly) char isOpenGLQueue; 
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) char StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
@property (assign,getter=numRequestedCounters,nonatomic) unsigned long long numRequestedCounters; 
@property (assign,getter=numInternalSampleCounters,nonatomic) unsigned long long numInternalSampleCounters; 
@property (getter=counterInfo,retain) NSMutableDictionary * counterInfo; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCMMTLDevice:(id)arg1 ;
-(id)initWithCMMTLDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2 ;
-(id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<MTLDevice>)device;
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
@end

