/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/AppleBluetoothHIDDevice.h>

@class NSString, NSNumber;

@interface AppleBluetoothHIDDeviceGen2 : AppleBluetoothHIDDevice {

	unsigned _eventService;
	unsigned _eventServiceInterestNotification;
	NSString* _driverClass;
	NSString* _addressString;
	NSString* _manufacturer;
	NSString* _product;
	NSNumber* _locationID;
	NSString* _transport;
	unsigned short _versionNumber;
	float _batteryPercent;
	unsigned char _batteryStatusFlags;
	float _lowBatteryPercentThreshold;
	float _criticalLowBatteryPercentThreshold;

}
+(id)withEventService:(unsigned)arg1 ;
+(id)withBluetoothDevice:(id)arg1 ;
-(id)initWithEventService:(unsigned)arg1 ;
-(char)_setEventService:(unsigned)arg1 ;
-(void)closeDownEventServiceServices;
-(void)closeDownServices;
-(void)cacheProperties;
-(IOHIDDeviceInterface*)hidDeviceInterface;
-(id)deviceNameFromHardware;
-(char)factoryDefault;
-(void)handleInterestNotificationForService:(unsigned)arg1 type:(unsigned)arg2 argument:(void*)arg3 ;
-(id)driverClass;
-(char)representsEventService:(unsigned)arg1 ;
-(char)batteryDangerouslyLow;
-(void)dealloc;
-(id)name;
-(unsigned short)version;
-(BluetoothDeviceAddress*)address;
-(void)clearProperties;
-(unsigned)objectID;
-(unsigned short)vendorID;
-(unsigned short)productID;
-(id)product;
-(int)setDeviceName:(id)arg1 ;
-(id)addressString;
-(id)manufacturer;
-(id)transport;
-(char)isCharging;
-(float)batteryPercent;
-(int)getMaxDeviceNameLength;
-(char)connectedOverUSB;
-(char)isTrackpadDevice;
-(unsigned short)vendorIDSource;
-(char)isKeyboardDevice;
-(char)batteryLow;
-(int)userMode;
-(unsigned)hidDevice;
-(id)initWithBluetoothDevice:(id)arg1 ;
-(char)setUserMode:(int)arg1 ;
-(char)isMouseDevice;
-(char)fullFactoryDefault;
-(id)bluetoothDevice;
-(unsigned short)primaryUsage;
-(unsigned short)primaryUsagePage;
-(unsigned)classOfDevice;
-(char)recantConnection;
-(char)suspendDevice:(char)arg1 ;
@end

