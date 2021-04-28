/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/Versions/A/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSession.h>

@class TKSmartCardSlotEngine, NSXPCConnection;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {

	TKSmartCardSlotEngine* _slot;
	char _transmitting;
	char _valid;
	char _active;
	long long _endPolicy;
	NSXPCConnection* _connection;

}

@property (assign) char valid;                                                   //@synthesize valid=_valid - In the implementation block
@property (assign) char active;                                                  //@synthesize active=_active - In the implementation block
@property (assign) long long endPolicy;                                          //@synthesize endPolicy=_endPolicy - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)transmit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)terminateWithReply:(/*^block*/id)arg1 ;
-(id)initWithSlot:(id)arg1 connection:(id)arg2 ;
-(void)dealloc;
-(char)valid;
-(NSXPCConnection *)connection;
-(char)active;
-(void)setActive:(char)arg1 ;
-(long long)endPolicy;
-(void)setEndPolicy:(long long)arg1 ;
-(void)setValid:(char)arg1 ;
-(void)setSessionEndPolicy:(long long)arg1 ;
@end
