/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class CUTWeakReference, NSObject, NSString;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol> {

	id _delegateContext;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;

}

@property (readonly) long long state;                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)state;
-(void)continuityDidUpdateStateToState:(long long)arg1 ;
-(void)continuityDidLosePeer:(id)arg1 ;
-(void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)continuityDidStartAdvertisingOfType:(long long)arg1 ;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1 ;
-(void)continuityDidStopAdvertisingOfType:(long long)arg1 withError:(id)arg2 ;
-(void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2 ;
-(void)continuityDidStartScanningForType:(long long)arg1 ;
-(void)continuityDidStopScanningForType:(long long)arg1 ;
-(void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2 ;
-(void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3 ;
-(void)_daemonDied:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(char)arg5 duplicates:(char)arg6 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(char)arg4 duplicates:(char)arg5 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)_handleReconnect;
@end

