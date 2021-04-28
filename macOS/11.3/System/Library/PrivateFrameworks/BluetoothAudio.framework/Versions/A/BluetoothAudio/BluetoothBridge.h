/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BluetoothAudio.framework/Versions/A/BluetoothAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <BluetoothAudio/BluetoothAudio-Structs.h>
@class NSObject, SFDeviceDiscovery;

@interface BluetoothBridge : NSObject {

	NSObject*<OS_dispatch_semaphore> _connectedSemaphore;
	NSObject*<OS_dispatch_semaphore> _disconnectedSemaphore;
	char _targetUserSession;
	OpaqueFigEndpointManagerRef _manager;
	SFDeviceDiscovery* _deviceDiscovery;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) OpaqueFigEndpointManagerRef manager;              //@synthesize manager=_manager - In the implementation block
@property (retain) SFDeviceDiscovery * deviceDiscovery;                        //@synthesize deviceDiscovery=_deviceDiscovery - In the implementation block
@property (assign) char targetUserSession;                                     //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
+(id)sharedBluetoothBridge;
-(void)dealloc;
-(id)init;
-(OpaqueFigEndpointManagerRef)manager;
-(void)setManager:(OpaqueFigEndpointManagerRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)targetUserSession;
-(void)setTargetUserSession:(char)arg1 ;
-(void)deviceConnected:(id)arg1 ;
-(void)removeListeners;
-(void)deviceDisconnected:(id)arg1 ;
-(char)isPaired:(id)arg1 ;
-(void)addListeners;
-(unsigned char)supportedFormats:(id)arg1 ;
-(id)addressFromDevice:(id)arg1 ;
-(id)nameFromDevice:(id)arg1 ;
-(char)isConnected:(id)arg1 ;
-(CFDictionaryRef)descriptionWithAddress:(id)arg1 name:(id)arg2 supportedFormats:(unsigned char)arg3 deviceClassMinor:(unsigned)arg4 vendorID:(unsigned short)arg5 productID:(unsigned short)arg6 connected:(char)arg7 listeningMode:(unsigned char)arg8 supportedListeningModes:(unsigned char)arg9 ;
-(void)hostControllerPoweredOff:(id)arg1 ;
-(void)deviceDestroyed:(id)arg1 ;
-(void)deviceNameChange:(id)arg1 ;
-(void)deviceListeningModeChanged:(id)arg1 ;
-(void)audioDeviceCreated:(id)arg1 ;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)stopLEScanning;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
-(id)deviceFromAddress:(id)arg1 ;
-(CFDictionaryRef)descriptionWithDevice:(id)arg1 ;
-(void)descriptionAddNearby:(CFDictionaryRef)arg1 nearby:(char)arg2 batterySingle:(double)arg3 batteryLeft:(double)arg4 batteryRight:(double)arg5 batteryCase:(double)arg6 ;
-(char)isAppleAudioDevice:(id)arg1 ;
-(id)deviceFromAddressString:(id)arg1 ;
-(id)listeningModeToString:(unsigned)arg1 ;
-(void)startLEScanning;
-(char)isAudioDevice:(id)arg1 ;
-(void)connectToAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disconnectFromAddress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setListeningModeForDevice:(id)arg1 listeningMode:(unsigned char)arg2 ;
@end

