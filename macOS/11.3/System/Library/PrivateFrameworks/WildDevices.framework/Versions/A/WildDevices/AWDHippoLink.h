/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WildDevices.framework/Versions/A/WildDevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AWDHippoTransportProtocol, OS_dispatch_queue, AWDProcessorProtocol;
@class NSString, NSMutableDictionary, NSObject;

@interface AWDHippoLink : NSObject {

	NSString* _transportIdName;
	id<AWDHippoTransportProtocol> _transport;
	NSMutableDictionary* _channels;
	NSObject*<OS_dispatch_queue> _receiveQueue;
	NSObject*<OS_dispatch_queue> _transmitQueue;
	id<AWDProcessorProtocol> _processor;
	int _linkType;
	NSString* _linkName;
	unsigned long long _deviceTypeID;
	NSString* _instanceID;

}

@property (readonly) NSString * linkName;                          //@synthesize linkName=_linkName - In the implementation block
@property (readonly) int linkType;                                 //@synthesize linkType=_linkType - In the implementation block
@property (readonly) unsigned long long deviceTypeID;              //@synthesize deviceTypeID=_deviceTypeID - In the implementation block
@property (readonly) NSString * instanceID;                        //@synthesize instanceID=_instanceID - In the implementation block
+(void)initialize;
-(void)terminate;
-(void)setInstanceID:(NSString *)arg1 ;
-(NSString *)instanceID;
-(int)linkType;
-(void)writeRawData:(id)arg1 ;
-(id)processor;
-(Class)classForChannel:(unsigned short)arg1 ;
-(void)addChannelForPort:(unsigned short)arg1 ;
-(void)processData:(id)arg1 forPort:(unsigned short)arg2 ;
-(void)serviceReceive:(id)arg1 ;
-(void)handleNewChannel:(id)arg1 ;
-(id)initWithSerialDevPath:(id)arg1 baudRate:(int)arg2 type:(int)arg3 ;
-(id)getChannelForPort:(unsigned short)arg1 ;
-(id)getChannels;
-(void)removeChannel:(id)arg1 ;
-(void)writeData:(id)arg1 forChannel:(id)arg2 ;
-(void)setDeviceTypeID:(unsigned long long)arg1 ;
-(NSString *)linkName;
-(unsigned long long)deviceTypeID;
@end

