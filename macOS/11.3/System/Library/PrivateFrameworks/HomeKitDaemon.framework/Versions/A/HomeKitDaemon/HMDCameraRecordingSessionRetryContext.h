/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HMDCameraRecordingSessionRetryContext : NSObject {

	double _retryInterval;
	NSDictionary* _homePresenceByPairingIdentity;
	double _maxRetryInterval;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) double maxRetryInterval;                                   //@synthesize maxRetryInterval=_maxRetryInterval - In the implementation block
@property (assign) double retryInterval;                                        //@synthesize retryInterval=_retryInterval - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity;              //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(NSDictionary *)homePresenceByPairingIdentity;
-(id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 preferences:(id)arg3 ;
-(double)maxRetryInterval;
-(id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
-(void)computeNextRetryInterval;
@end

