/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafeEjectGPU.framework/Versions/A/SafeEjectGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <SafeEjectGPU/SafeEjectGPU-Structs.h>
@class NSObject, NSMutableArray, NSArray;

@interface GpuAppMetrics : NSObject {

	double fStartTime;
	double fLastFlushTime;
	NSObject*<OS_dispatch_queue> fQueue;
	IONotificationPortRef fDeviceNotifyPort;
	NSMutableArray* _fAppsArray;
	NSObject*<OS_dispatch_source> fSampleTimer;
	NSObject*<OS_dispatch_source> fFlushTimer;

}

@property (retain) NSArray * fAppsArray;              //@synthesize fAppsArray=_fAppsArray - In the implementation block
-(void)dealloc;
-(void)considerFlushToCoreAnalytics:(char)arg1 ;
-(void)flushToCoreAnalytics;
-(void)daemonExit;
-(id)initWithSampleBlock:(/*^block*/id)arg1 ;
-(NSArray *)fAppsArray;
-(void)setFAppsArray:(NSArray *)arg1 ;
@end
