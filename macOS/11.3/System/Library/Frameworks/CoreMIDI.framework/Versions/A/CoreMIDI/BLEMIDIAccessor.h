/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/Versions/A/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLEMIDIAccessor : NSObject
+(unsigned)midiDeviceForUUID:(id)arg1 ;
+(unsigned)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(char)arg2 isRemotePeripheral:(char)arg3 ;
+(unsigned)nullDevice;
+(unsigned)localPeripheral;
+(id)localPeripheralName;
+(id)uuidForMIDIDevice:(unsigned)arg1 ;
+(id)nameForMIDIDevice:(unsigned)arg1 ;
+(char)deviceIsRemotePeripheral:(unsigned)arg1 ;
+(char)deviceIsLocalPeripheral:(unsigned)arg1 ;
+(char)deviceIsNullDevice:(unsigned)arg1 ;
+(char)deviceIsOnline:(unsigned)arg1 ;
+(char)uuidIsForgettable:(id)arg1 ;
+(unsigned short)timeStampOffset:(unsigned long long)arg1 ;
+(unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(char)arg3 ;
+(unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
+(void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char*)arg2 timeStampByte:(char*)arg3 ;
+(void)logEvent:(char*)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 intoBuffer:(char*)arg4 ;
@end

