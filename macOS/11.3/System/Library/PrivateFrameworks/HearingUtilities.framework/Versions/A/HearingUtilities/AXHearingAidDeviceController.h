/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/Versions/A/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/AXHADeviceControllerProtocol.h>

@protocol OS_dispatch_queue;
@class CBCentralManager, NSLock, NSObject, NSMutableArray, NSMutableDictionary, AXDispatchTimer, NSString;

@interface AXHearingAidDeviceController : NSObject <CBCentralManagerDelegate, AXHADeviceControllerProtocol> {

	CBCentralManager* _bluetoothManager;
	NSLock* _centralRequestsLock;
	char _isScanning;
	char _isResetting;
	NSObject*<OS_dispatch_queue> _bluetoothCentralQueue;
	NSMutableArray* _availableSearchBlocks;
	NSMutableArray* _connectedSearchBlocks;
	NSMutableArray* _updateDeviceBlocks;
	NSObject*<OS_dispatch_queue> _deviceUpdatesQueue;
	NSMutableDictionary* _deviceUpdatesDescription;
	AXDispatchTimer* _advertisingTimeoutTimer;
	NSMutableDictionary* _advertisingTimestamps;
	AXDispatchTimer* _availableDeviceTimer;
	char _shouldActiveScan;
	NSMutableArray* _availablePeripherals;
	NSMutableArray* _loadedDevices;
	NSMutableArray* _connectedDevices;
	NSMutableArray* centralRequestBlocks;
	NSMutableArray* _persistentDevices;

}

@property (nonatomic,retain) NSMutableArray * availablePeripherals;               //@synthesize availablePeripherals=_availablePeripherals - In the implementation block
@property (retain) NSMutableArray * loadedDevices;                                //@synthesize loadedDevices=_loadedDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedDevices;                   //@synthesize connectedDevices=_connectedDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * persistentDevices;                  //@synthesize persistentDevices=_persistentDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateDeviceBlocks;                 //@synthesize updateDeviceBlocks=_updateDeviceBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * centralRequestBlocks; 
@property (nonatomic,retain) NSMutableArray * availableSearchBlocks;              //@synthesize availableSearchBlocks=_availableSearchBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedSearchBlocks;              //@synthesize connectedSearchBlocks=_connectedSearchBlocks - In the implementation block
@property (assign,nonatomic) char shouldActiveScan;                               //@synthesize shouldActiveScan=_shouldActiveScan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(char)isConnected;
-(NSMutableArray *)connectedDevices;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(char)isScanning;
-(void)setConnectedDevices:(NSMutableArray *)arg1 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2 ;
-(void)stopSearching;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3 ;
-(void)setUpdateDeviceBlocks:(NSMutableArray *)arg1 ;
-(char)isPartiallyConnected;
-(id)valueForProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(id)hearingAidForDeviceID:(id)arg1 ;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2 ;
-(void)cancelPendingConnections;
-(NSMutableArray *)updateDeviceBlocks;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1 ;
-(void)stopPropertyUpdates;
-(void)searchForAvailableDevicesWithCompletion:(/*^block*/id)arg1 ;
-(char)isPartiallyPaired;
-(void)forgetDevice:(id)arg1 ;
-(void)disconnectFromHearingAidWithDeviceUUID:(id)arg1 ;
-(char)shouldActiveScan;
-(void)setShouldActiveScan:(char)arg1 ;
-(id)hearingAidsForUUID:(id)arg1 ;
-(NSMutableArray *)persistentDevices;
-(NSMutableArray *)availablePeripherals;
-(NSMutableArray *)loadedDevices;
-(NSMutableArray *)availableSearchBlocks;
-(NSMutableArray *)connectedSearchBlocks;
-(void)searchForAvailableDevices;
-(void)setAvailablePeripherals:(NSMutableArray *)arg1 ;
-(void)setLoadedDevices:(NSMutableArray *)arg1 ;
-(void)setCentralRequestBlocks:(NSMutableArray *)arg1 ;
-(void)setPersistentDevices:(NSMutableArray *)arg1 ;
-(void)pairedHearingAidsDidChange;
-(void)setAvailableSearchBlocks:(NSMutableArray *)arg1 ;
-(void)setConnectedSearchBlocks:(NSMutableArray *)arg1 ;
-(void)removeLoadedDevice:(id)arg1 ;
-(void)clearMissingHearingAids;
-(void)sendRequestToCentralManager:(/*^block*/id)arg1 ;
-(void)loadedDevicesDidChange;
-(void)disconnectFromPeripheral:(id)arg1 ;
-(id)hearingAidForPeripheral:(id)arg1 ;
-(NSMutableArray *)centralRequestBlocks;
-(void)addLoadedDevice:(id)arg1 ;
-(void)addAvailableDevice:(id)arg1 ;
-(void)addConnectedDevice:(id)arg1 ;
-(void)removeAvailableDevice:(id)arg1 ;
-(void)removeConnectedDevice:(id)arg1 ;
-(char)isBluetoothAvailable;
-(void)clearAvailableDevices;
-(void)clearConnectedDevices;
-(void)clearLoadedDevices;
-(void)connectToPeripheral:(id)arg1 ;
-(id)hearingAidsForPeripheral:(id)arg1 ;
-(void)deviceDidFinishLoading:(id)arg1 ;
-(void)searchForConnectedDevices;
-(void)resetConnectionToPeripheral:(id)arg1 ;
-(void)mergeDevice:(id)arg1 withDevice:(id)arg2 ;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2 ;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3 ;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2 ;
-(char)peripheralIsPaired:(id)arg1 ;
-(void)unpairPeripheralWithUUID:(id)arg1 ;
@end
