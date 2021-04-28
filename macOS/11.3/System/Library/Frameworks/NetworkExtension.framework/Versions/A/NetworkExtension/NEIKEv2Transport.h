/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEIKEv2PacketReceiver.h>

@protocol NEIKEv2PacketDelegate, OS_nw_connection, OS_dispatch_queue;
@class NWAddressEndpoint, NSObject, NWInterface, NSMutableArray, NSString;

@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver> {

	char _connected;
	char _cancelled;
	NWAddressEndpoint* _local;
	NWAddressEndpoint* _remote;
	unsigned long long _transportType;
	id<NEIKEv2PacketDelegate> _packetDelegate;
	NSObject*<OS_nw_connection> _connection;
	NWInterface* _interface;
	NSMutableArray* _connectedBlocks;
	NSObject*<OS_dispatch_queue> _receiveQueue;
	NSMutableArray* _clients;

}

@property (__weak) id<NEIKEv2PacketDelegate> packetDelegate;                //@synthesize packetDelegate=_packetDelegate - In the implementation block
@property (assign) unsigned long long transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (retain) NSObject*<OS_nw_connection> connection;                  //@synthesize connection=_connection - In the implementation block
@property (retain) NWAddressEndpoint * local;                               //@synthesize local=_local - In the implementation block
@property (retain) NWAddressEndpoint * remote;                              //@synthesize remote=_remote - In the implementation block
@property (retain) NWInterface * interface;                                 //@synthesize interface=_interface - In the implementation block
@property (readonly) unsigned short port; 
@property (nonatomic,retain) NSMutableArray * connectedBlocks;              //@synthesize connectedBlocks=_connectedBlocks - In the implementation block
@property (assign) char connected;                                          //@synthesize connected=_connected - In the implementation block
@property (assign) char cancelled;                                          //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> receiveQueue;               //@synthesize receiveQueue=_receiveQueue - In the implementation block
@property (retain) NSMutableArray * clients;                                //@synthesize clients=_clients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTransport:(unsigned long long)arg1 remote:(id)arg2 local:(id)arg3 localPort:(unsigned short)arg4 boundInterface:(id)arg5 queue:(id)arg6 socketGetBlock:(/*^block*/id)arg7 packetDelegate:(id)arg8 ;
+(id)createTransportWithConnection:(id)arg1 queue:(id)arg2 ;
+(id)stringForTransport:(unsigned long long)arg1 ;
+(char)checkAddress:(id)arg1 interface:(id)arg2 ;
+(id)copyExistingTransport:(unsigned long long)arg1 remote:(id)arg2 local:(id)arg3 localPort:(unsigned short)arg4 boundInterface:(id)arg5 packetDelegate:(id)arg6 ;
-(id<NEIKEv2PacketDelegate>)packetDelegate;
-(void)waitForTransport:(/*^block*/id)arg1 ;
-(void)setPacketDelegate:(id<NEIKEv2PacketDelegate>)arg1 ;
-(void)addClient:(id)arg1 wildcard:(char)arg2 delegate:(id)arg3 ;
-(void)cancelClient:(id)arg1 shouldInvalidate:(char)arg2 ;
-(void)disableWildcardForClient:(id)arg1 ;
-(char)sendData:(id)arg1 sendCompletionHandler:(/*^block*/id)arg2 ;
-(void)readOnConnection;
-(NSMutableArray *)connectedBlocks;
-(void)setConnectedBlocks:(NSMutableArray *)arg1 ;
-(void)callConnectedBlocks;
-(char)setupUDPConnectionToRemote:(id)arg1 local:(id)arg2 localPort:(unsigned short)arg3 socketGetBlock:(/*^block*/id)arg4 ;
-(void)receivePacketData:(id)arg1 ;
-(char)sendPacket:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(NSObject*<OS_nw_connection>)connection;
-(unsigned short)port;
-(void)setConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(char)cancelled;
-(NWAddressEndpoint *)remote;
-(void)setRemote:(NWAddressEndpoint *)arg1 ;
-(void)setCancelled:(char)arg1 ;
-(unsigned long long)transportType;
-(char)connected;
-(NSMutableArray *)clients;
-(NWInterface *)interface;
-(void)setConnected:(char)arg1 ;
-(NWAddressEndpoint *)local;
-(void)setLocal:(NWAddressEndpoint *)arg1 ;
-(void)setTransportType:(unsigned long long)arg1 ;
-(void)setInterface:(NWInterface *)arg1 ;
-(void)setClients:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)receiveQueue;
-(void)setReceiveQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

