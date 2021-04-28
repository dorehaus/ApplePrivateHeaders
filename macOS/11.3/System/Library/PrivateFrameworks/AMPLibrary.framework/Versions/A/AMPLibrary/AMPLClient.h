/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPLibrary.framework/Versions/A/AMPLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMPLClientProtocol, AMPLMediaAppClientEventsProtocol;
@class NSString, NSXPCConnection;

@interface AMPLClient : NSObject {

	char _registered;
	char _mediaDomainsOpened;
	char _lostConnection;
	unsigned _clientID;
	NSString* _clientName;
	unsigned long long _mediaDomains;
	unsigned long long _mediaDomainsPersistentID;
	unsigned long long _persistentMachineID;
	id<AMPLClientProtocol> _reconnectionDelegate;
	id<AMPLMediaAppClientEventsProtocol> _libraryEventsDelegate;
	NSXPCConnection* _connectionToService;
	unsigned long long _clientType;

}

@property (assign,nonatomic,__weak) id<AMPLClientProtocol> reconnectionDelegate;                             //@synthesize reconnectionDelegate=_reconnectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AMPLMediaAppClientEventsProtocol> libraryEventsDelegate;              //@synthesize libraryEventsDelegate=_libraryEventsDelegate - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connectionToService;                                          //@synthesize connectionToService=_connectionToService - In the implementation block
@property (assign,nonatomic) unsigned long long clientType;                                                  //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) char mediaDomainsOpened;                                                        //@synthesize mediaDomainsOpened=_mediaDomainsOpened - In the implementation block
@property (assign,nonatomic) char lostConnection;                                                            //@synthesize lostConnection=_lostConnection - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaDomains;                                              //@synthesize mediaDomains=_mediaDomains - In the implementation block
@property (nonatomic,readonly) char registered;                                                              //@synthesize registered=_registered - In the implementation block
@property (nonatomic,readonly) unsigned clientID;                                                            //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaDomainsPersistentID;                                  //@synthesize mediaDomainsPersistentID=_mediaDomainsPersistentID - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentMachineID;                                       //@synthesize persistentMachineID=_persistentMachineID - In the implementation block
-(id)init;
-(void)invalidate;
-(NSString *)clientName;
-(char)registered;
-(void)connect;
-(unsigned)clientID;
-(unsigned long long)clientType;
-(void)setClientType:(unsigned long long)arg1 ;
-(void)setMediaDomainsOpened:(char)arg1 ;
-(void)onConnectionLost:(char)arg1 ;
-(char)isRegistered:(id*)arg1 ;
-(id)ensureConnectedToService;
-(void)cleanupConnectionToService;
-(id)initWithType:(unsigned long long)arg1 andClientInfo:(id)arg2 withMediaDomains:(unsigned long long)arg3 ;
-(void)clientIDRegistered:(unsigned)arg1 ;
-(void)setPersistentMachineID:(unsigned long long)arg1 ;
-(void)mediaDomainsOpened:(id)arg1 ;
-(void)closeMediaDomains:(/*^block*/id)arg1 ;
-(id)remoteRegisteredObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(unsigned long long)mediaDomains;
-(char)mediaDomainsOpened;
-(unsigned long long)mediaDomainsPersistentID;
-(unsigned long long)persistentMachineID;
-(id<AMPLClientProtocol>)reconnectionDelegate;
-(void)setReconnectionDelegate:(id<AMPLClientProtocol>)arg1 ;
-(id<AMPLMediaAppClientEventsProtocol>)libraryEventsDelegate;
-(void)setLibraryEventsDelegate:(id<AMPLMediaAppClientEventsProtocol>)arg1 ;
-(NSXPCConnection *)connectionToService;
-(void)setConnectionToService:(NSXPCConnection *)arg1 ;
-(char)lostConnection;
-(void)setLostConnection:(char)arg1 ;
@end

