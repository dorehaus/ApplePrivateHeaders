/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetoothHandsFree.h>

@class IOBluetoothHandsFreeAudioGatewayExpansion;

@interface IOBluetoothHandsFreeAudioGateway : IOBluetoothHandsFree {

	char _indicatorMode;
	char _indicatorEventReporting;
	IOBluetoothHandsFreeAudioGatewayExpansion* _expansion;

}

@property (retain) IOBluetoothHandsFreeAudioGatewayExpansion * expansion;              //@synthesize expansion=_expansion - In the implementation block
@property (assign) char indicatorMode;                                                 //@synthesize indicatorMode=_indicatorMode - In the implementation block
@property (assign) char indicatorEventReporting;                                       //@synthesize indicatorEventReporting=_indicatorEventReporting - In the implementation block
+(id)localUUID;
+(id)deviceUUID;
-(char)dockState;
-(void)setDockState:(char)arg1 ;
-(void)setIsSiriActive:(char)arg1 ;
-(char)indicatorEventReporting;
-(void)createIndicator:(id)arg1 min:(int)arg2 max:(int)arg3 currentValue:(int)arg4 ;
-(void)handleSiriAppear;
-(void)handleSiriDisappear;
-(void)sendStatusMapping;
-(void)sendCurrentStatusValues;
-(void)processEventReporting:(id)arg1 ;
-(void)sendSupportedFeatures:(int)arg1 ;
-(void)processMicVolumeChange:(int)arg1 ;
-(void)processSpeakerVolumeChange:(int)arg1 ;
-(void)processAppleCommand:(id)arg1 ;
-(void)processAppleEvent:(id)arg1 ;
-(void)processIncomingData:(char*)arg1 length:(unsigned long long)arg2 ;
-(void)sendInputVolumePrivate:(id)arg1 ;
-(id)lastUpdatedInputVolume;
-(void)setLastUpdatedInputVolume:(id)arg1 ;
-(void)sendOutputVolumePrivate:(id)arg1 ;
-(void)setIndicatorMode:(char)arg1 ;
-(void)setIndicatorEventReporting:(char)arg1 ;
-(id)driverID;
-(void)sendInputVolume;
-(char)indicatorMode;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)vendorID;
-(unsigned)productID;
-(void)setVendorID:(unsigned)arg1 ;
-(void)setProductID:(unsigned)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(int)batteryLevel;
-(void)setBatteryLevel:(int)arg1 ;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(id)initWithDevice:(id)arg1 delegate:(id)arg2 ;
-(IOBluetoothHandsFreeAudioGatewayExpansion *)expansion;
-(void)setExpansion:(IOBluetoothHandsFreeAudioGatewayExpansion *)arg1 ;
-(void)sendOKResponse;
-(void)sendResponse:(id)arg1 withOK:(char)arg2 ;
-(void)processATCommand:(id)arg1 ;
-(void)setFCComplete:(id)arg1 ;
-(void)setIndicator:(id)arg1 value:(int)arg2 ;
-(char)isSiriActive;
-(void)sendOutputVolume;
@end

