/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPeripheralDelegate <NSObject>
@optional
-(void)peripheralDidUpdateName:(id)arg1;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2;
-(void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
-(void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
-(void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
-(void)peripheral:(id)arg1 didWriteValueForDescriptor:(id)arg2 error:(id)arg3;
-(void)peripheralIsReadyToSendWriteWithoutResponse:(id)arg1;
-(void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;

@end

