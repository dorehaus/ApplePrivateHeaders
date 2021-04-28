/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/Versions/A/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCPeerID, NSNetService, MCNearbyDiscoveryPeerConnection, NSMutableArray;

@interface MCNearbyDiscoveryPeer : NSObject {

	MCPeerID* _peerID;
	NSNetService* _netService;
	int _state;
	MCNearbyDiscoveryPeerConnection* _connection;
	MCNearbyDiscoveryPeerConnection* _trialConnection;
	NSMutableArray* _sendDataBuffer;

}

@property (nonatomic,retain) NSMutableArray * sendDataBuffer;                                //@synthesize sendDataBuffer=_sendDataBuffer - In the implementation block
@property (nonatomic,retain) MCNearbyDiscoveryPeerConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) MCPeerID * peerID;                                                //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) int state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                                      //@synthesize netService=_netService - In the implementation block
@property (nonatomic,retain) MCNearbyDiscoveryPeerConnection * trialConnection;              //@synthesize trialConnection=_trialConnection - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(void)invalidate;
-(MCNearbyDiscoveryPeerConnection *)connection;
-(int)state;
-(void)setConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(void)setState:(int)arg1 ;
-(void)closeConnection;
-(MCPeerID *)peerID;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(void)setNetService:(NSNetService *)arg1 ;
-(NSNetService *)netService;
-(id)stringForState:(int)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)attachConnection:(id)arg1 ;
-(void)flushDataBuffer;
-(id)initWithPeerID:(id)arg1 ;
-(MCNearbyDiscoveryPeerConnection *)trialConnection;
-(void)setTrialConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(NSMutableArray *)sendDataBuffer;
-(void)setSendDataBuffer:(NSMutableArray *)arg1 ;
@end
