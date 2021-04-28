/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BluetoothUIServer : NSObject
+(id)sanatizeDictionary:(id)arg1 ;
+(id)sanatizeArray:(id)arg1 ;
+(void)displayNotification:(id)arg1 description:(id)arg2 ;
+(void)showiCloudPairing:(id)arg1 ;
+(void)switchAudio:(id)arg1 ;
+(void)showFCTime:(int)arg1 ;
+(void)launchApplication:(id)arg1 ;
+(void)pair:(id)arg1 ;
+(void)avrcp:(unsigned char)arg1 ;
+(void)displaySystemNotification:(int)arg1 arguments:(id)arg2 ;
+(void)hidConnectionComplete:(id)arg1 ;
+(void)removePrinterForDevice:(id)arg1 ;
+(void)showBluetoothError;
+(void)handleInsecuredDevice:(id)arg1 ;
+(void)pairSSPWithNumericComparison:(id)arg1 number:(id)arg2 ;
+(void)pairSSPWithJustWorks:(id)arg1 ;
+(void)pairSSPWithPasskey:(id)arg1 number:(id)arg2 ;
+(void)proximityTriggerCancel:(id)arg1 ;
+(void)proximityTrigger:(id)arg1 advertisementData:(id)arg2 ;
+(void)pairSMPWithJustWorks:(id)arg1 ;
+(void)pairSMPWithPasskeyInput:(id)arg1 ;
+(void)pairSMPWithNumericComparison:(id)arg1 number:(id)arg2 sc:(char)arg3 ;
+(void)killSMPWindow:(id)arg1 ;
+(void)showiCloudUnPairing:(id)arg1 ;
+(void)dismissUSBAlerts;
+(void)usbPairingConfirmation:(id)arg1 ;
+(void)usbPairingComplete:(id)arg1 forDeviceAddressString:(id)arg2 ;
+(void)trustedPairingComplete:(id)arg1 ;
+(void)removeNotificationForDevice:(id)arg1 ;
@end

