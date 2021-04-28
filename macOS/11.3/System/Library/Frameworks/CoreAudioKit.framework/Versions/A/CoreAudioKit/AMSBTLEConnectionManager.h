/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol BTLEConnectionTable;
@class CBCentralManager, NSMutableArray, NSTimer, NSString;

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	CBCentralManager* centralManager;
	NSMutableArray* peripheralList;
	NSMutableArray* connectedBTPeripherals;
	NSMutableArray* connectedAMSPeripherals;
	NSTimer* refreshTimer;
	NSTimer* connectionTimer;
	id<BTLEConnectionTable> controller;
	long long centralState;
	char isAdvertising;
	char _checked32BitStatus;
	char _server32Bit;

}

@property (readonly) NSMutableArray * peripheralList; 
@property (assign) char checked32BitStatus;                         //@synthesize checked32BitStatus=_checked32BitStatus - In the implementation block
@property (assign) char server32Bit;                                //@synthesize server32Bit=_server32Bit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)startTimer;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(long long)bluetoothState;
-(void)stopScan;
-(void)startScan;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(unsigned)midiDeviceForUUID:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(id)initWithUIController:(id)arg1 ;
-(char)isLECapableHardware;
-(NSMutableArray *)peripheralList;
-(void)killTimer;
-(char)is32BitPlugin;
-(void)createPeripheralList;
-(char)checked32BitStatus;
-(void)setServer32Bit:(char)arg1 ;
-(void)setChecked32BitStatus:(char)arg1 ;
-(id)get32BitPluginList;
-(void)updateAdvertisingState:(id)arg1 ;
-(id)amsPeripheralForCBPeripheral:(id)arg1 ;
-(void)checkAlreadyConnectedPeripherals;
-(void)connectionTimerFired:(id)arg1 ;
-(char)peripheralIsConnectedCentral:(id)arg1 ;
-(void)setUIController:(id)arg1 ;
-(void)removeAMSPeripheralForCBPeripheral:(id)arg1 ;
-(char)server32Bit;
@end

