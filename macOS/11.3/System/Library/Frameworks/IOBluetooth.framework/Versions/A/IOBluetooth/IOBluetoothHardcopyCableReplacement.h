/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetooth/HardcopyCableReplacement.h>

@class IOBluetoothDevice, IOBluetoothL2CAPChannel, NSString;

@interface IOBluetoothHardcopyCableReplacement : HardcopyCableReplacement {

	IOBluetoothDevice* printer;
	IOBluetoothL2CAPChannel* command;
	IOBluetoothL2CAPChannel* data;
	unsigned short commandChannel;
	unsigned short dataChannel;
	char dataChannelIsOpen;
	char commandChannelIsOpen;
	char* mBufferForOutgoingData;
	unsigned mReadPointerInBuffer;
	unsigned mWritePointerInBuffer;
	NSString* stringFor1284ID;

}

@property (retain) IOBluetoothDevice * printer; 
@property (copy) NSString * printer1284ID; 
@property (readonly) char isConnected; 
+(id)deviceHCRPServiceRecord:(id)arg1 ;
+(id)getPrinter1284ID:(id)arg1 ;
+(int)getControlChannelL2CAPPSM:(unsigned short*)arg1 from:(id)arg2 ;
+(int)getDataChannelL2CAPPSM:(unsigned short*)arg1 from:(id)arg2 ;
+(id)getRawPrinter1284ID:(id)arg1 ;
-(int)openTransportConnection;
-(unsigned short)transportConnectionMaximumTransferUnit;
-(int)writeOnTransport:(void*)arg1 length:(unsigned)arg2 blocking:(char)arg3 numberOfWrittenBytes:(unsigned long long*)arg4 ;
-(int)transportSendPDU:(char*)arg1 ;
-(int)writeOnTransportBlocking:(void*)arg1 length:(unsigned)arg2 numberOfWrittenBytes:(unsigned long long*)arg3 ;
-(int)writeOnTransportNonBlocking:(void*)arg1 length:(unsigned)arg2 numberOfWrittenBytes:(unsigned long long*)arg3 ;
-(int)reallocBufferForOutgoingDataForMore:(void*)arg1 length:(unsigned)arg2 ;
-(void)printerDisconnected:(id)arg1 forDevice:(id)arg2 ;
-(id)deviceHCRPServiceRecord;
-(void)setPrinter1284ID:(NSString *)arg1 ;
-(int)startOpenForL2CAPTransports:(id)arg1 ;
-(NSString *)printer1284ID;
-(void)finalize;
-(void)dealloc;
-(char)isConnected;
-(IOBluetoothDevice *)printer;
-(void)setPrinter:(IOBluetoothDevice *)arg1 ;
-(void)connectionComplete:(id)arg1 status:(int)arg2 ;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(int)closeTransportConnection;
-(void)l2capChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3 ;
-(void)l2capChannelOpenComplete:(id)arg1 status:(int)arg2 ;
-(void)l2capChannelClosed:(id)arg1 ;
-(void)l2capChannelWriteComplete:(id)arg1 refcon:(void*)arg2 status:(int)arg3 ;
@end

