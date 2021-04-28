/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WPAWDLDelegate.h>
#import <libobjc.A.dylib/WPNearbyDelegate.h>
#import <libobjc.A.dylib/WPPairingDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, WPAWDL, WPNearby, WPPairing, NSString;

@interface SFBLEClient : NSObject <WPAWDLDelegate, WPNearbyDelegate, WPPairingDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _wpAirDropDelegates;
	WPAWDL* _wpAirDrop;
	NSMutableSet* _wpNearbyDelegates;
	WPNearby* _wpNearby;
	NSMutableSet* _wpPairingDelegates;
	WPPairing* _wpPairing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3 ;
-(id)addAirDropDelegate:(id)arg1 ;
-(void)removeAirDropDelegate:(id)arg1 ;
-(id)addPairingDelegate:(id)arg1 ;
-(void)removePairingDelegate:(id)arg1 ;
-(id)init;
-(void)awdlDidUpdateState:(id)arg1 ;
-(void)awdlStartedAdvertising:(id)arg1 ;
-(void)awdlAdvertisingPending:(id)arg1 ;
-(void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)awdlStartedScanning:(id)arg1 ;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3 ;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5 ;
-(void)pairingStartedScanning:(id)arg1 ;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)pairingStoppedScanning:(id)arg1 ;
-(void)pairingDidUpdateState:(id)arg1 ;
-(void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3 ;
-(void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2 ;
-(void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2 ;
-(void)nearby:(id)arg1 didStopAdvertisingType:(long long)arg2 withError:(id)arg3 ;
-(void)nearby:(id)arg1 didStartScanningForType:(long long)arg2 ;
-(void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5 ;
-(void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4 ;
-(void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4 ;
-(void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3 ;
-(void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3 ;
-(void)nearbyDidChangeBluetoothBandwidthState:(id)arg1 ;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(id)addNearbyDelegate:(id)arg1 ;
-(void)removeNearbyDelegate:(id)arg1 ;
@end

