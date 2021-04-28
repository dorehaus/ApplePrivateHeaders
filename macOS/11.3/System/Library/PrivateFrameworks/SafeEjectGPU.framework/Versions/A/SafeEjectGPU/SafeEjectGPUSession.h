/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafeEjectGPU.framework/Versions/A/SafeEjectGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafeEjectGPU/SafeEjectGPU-Structs.h>
@class NSObject, NSString, NSMutableArray;

@interface SafeEjectGPUSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	GPUWranglerGPURef _gpu;
	unsigned long long _gpuid;
	unsigned long long _registryID;
	NSString* _name;
	NSString* _enclosureName;
	NSString* _location;
	unsigned long long _enclosureRegistryID;
	unsigned long long _locationNumber;
	unsigned long long _maxTransferRate;
	BOOL _removable;
	BOOL _discrete;
	BOOL _integrated;
	NSMutableArray* _limboArray;
	NSObject*<OS_dispatch_queue> _limboQueue;
	BOOL _inLimbo;
	BOOL _exportDictionary;

}
+(BOOL)relaunchPIDOnGPU:(int)arg1 gpuids:(id)arg2 ;
+(BOOL)relaunchPID:(int)arg1 ;
+(BOOL)launchOnGPU:(id)arg1 gpuids:(id)arg2 ;
-(unsigned long long)finalize;
-(void)dealloc;
-(id)dictionary;
-(unsigned long long)status;
-(unsigned long long)cancel;
-(unsigned long long)_status;
-(id)apps;
-(void)getEnclosureInfo;
-(id)prettifiedDeviceName:(id)arg1 ;
-(unsigned long long)_initiate;
-(void)drainLimbo;
-(unsigned long long)_relaunch;
-(id)initWithGPU:(GPUWranglerGPURef)arg1 andQueue:(id)arg2 ;
-(unsigned long long)initiate;
-(unsigned long long)relaunch;
-(id)appsByPID;
-(float)getPercentUtilization;
@end

