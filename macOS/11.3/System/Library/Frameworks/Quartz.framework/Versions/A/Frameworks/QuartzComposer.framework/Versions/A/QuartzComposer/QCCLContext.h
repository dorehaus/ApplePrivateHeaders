/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCCache, NSString;

@interface QCCLContext : NSObject {

	cl_contextRef _context;
	unsigned long long* _deviceType;
	cl_device_id* _devices;
	cl_device_idRef _bestDevice;
	unsigned long long _deviceCount;
	char _isAccelerated;
	char _isAsynchronous;
	QCCache* _programCache;
	void** _unused[2];

}

@property (readonly) unsigned long long deviceType; 
@property (readonly) NSString * deviceName; 
@property (readonly) NSString * deviceVendor; 
@property (readonly) NSString * deviceVersion; 
@property (readonly) unsigned deviceMaxComputeUnits; 
@property (readonly) unsigned deviceMaxWorkItemDimensions; 
@property (readonly) unsigned long long deviceMaxWorkGroupSize; 
@property (readonly) unsigned deviceMaxReadImageArgs; 
@property (readonly) unsigned deviceMaxWriteImageArgs; 
@property (readonly) unsigned deviceMaxSamplers; 
@property (readonly) unsigned deviceMaxConstantsArgs; 
@property (readonly) unsigned long long deviceMaxConstantBufferSize; 
@property (readonly) unsigned long long deviceGlobalMemSize; 
@property (readonly) unsigned long long deviceLocalMemSize; 
@property (readonly) unsigned long long deviceImage2DMaxWidth; 
@property (readonly) unsigned long long deviceImage2DMaxHeight; 
@property (readonly) cl_contextRef context;                                       //@synthesize context=_context - In the implementation block
@property (readonly) char isAccelerated;                                          //@synthesize isAccelerated=_isAccelerated - In the implementation block
@property (readonly) char isAsynchronous;                                         //@synthesize isAsynchronous=_isAsynchronous - In the implementation block
@property (readonly) cl_device_id* devices;                                       //@synthesize devices=_devices - In the implementation block
@property (readonly) unsigned long long deviceCount;                              //@synthesize deviceCount=_deviceCount - In the implementation block
@property (readonly) CFArrayRef deviceNames; 
@property (assign) cl_device_idRef device; 
@property (readonly) cl_command_queueRef commandQueue; 
@property (readonly) cl_device_idRef bestDevice;                                  //@synthesize bestDevice=_bestDevice - In the implementation block
+(void)initialize;
-(void)finalize;
-(void)dealloc;
-(cl_device_idRef)device;
-(cl_command_queueRef)commandQueue;
-(char)isAsynchronous;
-(cl_contextRef)context;
-(unsigned long long)deviceType;
-(cl_device_id*)devices;
-(NSString *)deviceName;
-(unsigned long long)deviceCount;
-(void)setDevice:(cl_device_idRef)arg1 ;
-(NSString *)deviceVersion;
-(char)isAccelerated;
-(cl_device_idRef)bestDevice;
-(CFArrayRef)deviceNames;
-(unsigned long long)indexOfDevice:(cl_device_idRef)arg1 ;
-(id)initWithContext:(cl_contextRef)arg1 options:(id)arg2 ;
-(cl_programRef)newProgramWithSource:(id)arg1 error:(id*)arg2 ;
-(void)_releaseContextCache;
-(NSString *)deviceVendor;
-(unsigned)deviceMaxComputeUnits;
-(unsigned)deviceMaxWorkItemDimensions;
-(unsigned long long)deviceMaxWorkGroupSize;
-(unsigned)deviceMaxReadImageArgs;
-(unsigned)deviceMaxWriteImageArgs;
-(unsigned)deviceMaxSamplers;
-(unsigned)deviceMaxConstantsArgs;
-(unsigned long long)deviceMaxConstantBufferSize;
-(unsigned long long)deviceGlobalMemSize;
-(unsigned long long)deviceLocalMemSize;
-(unsigned long long)deviceImage2DMaxWidth;
-(unsigned long long)deviceImage2DMaxHeight;
@end

