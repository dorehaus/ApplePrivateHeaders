/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/WPNearbyDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, CURetrier, SFBLEData, NSMutableArray, WPNearby, NSObject, SFBLEDevice, NSString;

@interface SFBLEConnection : NSObject <WPNearbyDelegate> {

	char _acceptor;
	char _activateCalled;
	NSMutableSet* _clients;
	char _connected;
	char _connecting;
	double _connectStartTime;
	CURetrier* _connectRetrier;
	SFBLEData* _currentData;
	NSMutableArray* _dataSendQueue;
	char _invalidateCalled;
	WPNearby* _wpNearby;
	LogCategory* _ucat;
	char _bleEncrypted;
	char _latencyCritical;
	char _lePipeCapable;
	unsigned _sessionFlags;
	/*^block*/id _bluetoothBandwidthChangedHandler;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _connectionStateChangedHandler;
	/*^block*/id _dataHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	SFBLEDevice* _peerDevice;

}

@property (assign,nonatomic) char bleEncrypted;                                       //@synthesize bleEncrypted=_bleEncrypted - In the implementation block
@property (assign,nonatomic) char latencyCritical;                                    //@synthesize latencyCritical=_latencyCritical - In the implementation block
@property (assign,nonatomic) char lePipeCapable;                                      //@synthesize lePipeCapable=_lePipeCapable - In the implementation block
@property (nonatomic,retain) SFBLEDevice * peerDevice;                                //@synthesize peerDevice=_peerDevice - In the implementation block
@property (assign,nonatomic) char acceptor;                                           //@synthesize acceptor=_acceptor - In the implementation block
@property (nonatomic,copy) id bluetoothBandwidthChangedHandler;                       //@synthesize bluetoothBandwidthChangedHandler=_bluetoothBandwidthChangedHandler - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,copy) id connectionStateChangedHandler;                          //@synthesize connectionStateChangedHandler=_connectionStateChangedHandler - In the implementation block
@property (nonatomic,copy) id dataHandler;                                            //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned sessionFlags;                                   //@synthesize sessionFlags=_sessionFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_processQueuedData;
-(void)_cleanupQueuedData:(int)arg1 ;
-(id)bluetoothBandwidthChangedHandler;
-(void)setBluetoothBandwidthChangedHandler:(id)arg1 ;
-(id)connectionStateChangedHandler;
-(void)setConnectionStateChangedHandler:(id)arg1 ;
-(char)bleEncrypted;
-(char)latencyCritical;
-(char)lePipeCapable;
-(void)dealloc;
-(NSString *)description;
-(void)_activate;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)addClient:(id)arg1 ;
-(char)removeClient:(id)arg1 ;
-(void)activate;
-(id)invalidationHandler;
-(long long)connectionState;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(SFBLEDevice *)peerDevice;
-(void)setPeerDevice:(SFBLEDevice *)arg1 ;
-(void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4 ;
-(void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4 ;
-(void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3 ;
-(void)nearbyDidChangeBluetoothBandwidthState:(id)arg1 ;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(void)sendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_connectIfNeeded;
-(void)setAcceptor:(char)arg1 ;
-(char)acceptor;
-(unsigned)sessionFlags;
-(id)initWithDevice:(id)arg1 acceptor:(char)arg2 ;
-(void)activateDirect;
-(void)setSessionFlags:(unsigned)arg1 ;
-(void)setBleEncrypted:(char)arg1 ;
-(void)setLatencyCritical:(char)arg1 ;
-(void)setLePipeCapable:(char)arg1 ;
-(void)sendDataDirect:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

