/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPDevices.framework/Versions/A/AMPDevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DeviceClientProtocol.h>

@class NSXPCConnection;

@interface DeviceClient : NSObject <DeviceClientProtocol> {

	NSXPCConnection* _connectionToDiscoveryService;

}

@property (assign,nonatomic,__weak) NSXPCConnection * connectionToDiscoveryService;              //@synthesize connectionToDiscoveryService=_connectionToDiscoveryService - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(void)pairDeviceWithIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connectionToDiscoveryService;
-(void)setConnectionToDiscoveryService:(NSXPCConnection *)arg1 ;
@end

