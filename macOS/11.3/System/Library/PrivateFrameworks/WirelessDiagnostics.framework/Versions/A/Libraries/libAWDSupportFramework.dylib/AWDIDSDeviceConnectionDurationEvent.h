/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSDeviceConnectionDurationEvent : PBCodable <NSCopying> {

	unsigned long long _clientInitToClientOpenSocketHandler;
	unsigned long long _clientInitToDaemonOpenSocket;
	unsigned long long _clientOpenSocketHandlerToIncomingFirstPacket;
	unsigned long long _connectionInitToIncomingFirstPacket;
	unsigned long long _daemonCompletionHandlerToClientOpenSocketCompletion;
	unsigned long long _daemonCompletionHandlerToIncomingFirstPacket;
	unsigned long long _daemonOpenSocketToDaemonCompletionHandler;
	unsigned long long _timestamp;
	NSString* _serviceName;
	char _success;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                                                              //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) char hasSuccess; 
@property (assign,nonatomic) char success;                                                                        //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) char hasClientInitToDaemonOpenSocket; 
@property (assign,nonatomic) unsigned long long clientInitToDaemonOpenSocket;                                     //@synthesize clientInitToDaemonOpenSocket=_clientInitToDaemonOpenSocket - In the implementation block
@property (assign,nonatomic) char hasClientInitToClientOpenSocketHandler; 
@property (assign,nonatomic) unsigned long long clientInitToClientOpenSocketHandler;                              //@synthesize clientInitToClientOpenSocketHandler=_clientInitToClientOpenSocketHandler - In the implementation block
@property (assign,nonatomic) char hasClientOpenSocketHandlerToIncomingFirstPacket; 
@property (assign,nonatomic) unsigned long long clientOpenSocketHandlerToIncomingFirstPacket;                     //@synthesize clientOpenSocketHandlerToIncomingFirstPacket=_clientOpenSocketHandlerToIncomingFirstPacket - In the implementation block
@property (assign,nonatomic) char hasDaemonOpenSocketToDaemonCompletionHandler; 
@property (assign,nonatomic) unsigned long long daemonOpenSocketToDaemonCompletionHandler;                        //@synthesize daemonOpenSocketToDaemonCompletionHandler=_daemonOpenSocketToDaemonCompletionHandler - In the implementation block
@property (assign,nonatomic) char hasDaemonCompletionHandlerToClientOpenSocketCompletion; 
@property (assign,nonatomic) unsigned long long daemonCompletionHandlerToClientOpenSocketCompletion;              //@synthesize daemonCompletionHandlerToClientOpenSocketCompletion=_daemonCompletionHandlerToClientOpenSocketCompletion - In the implementation block
@property (assign,nonatomic) char hasDaemonCompletionHandlerToIncomingFirstPacket; 
@property (assign,nonatomic) unsigned long long daemonCompletionHandlerToIncomingFirstPacket;                     //@synthesize daemonCompletionHandlerToIncomingFirstPacket=_daemonCompletionHandlerToIncomingFirstPacket - In the implementation block
@property (assign,nonatomic) char hasConnectionInitToIncomingFirstPacket; 
@property (assign,nonatomic) unsigned long long connectionInitToIncomingFirstPacket;                              //@synthesize connectionInitToIncomingFirstPacket=_connectionInitToIncomingFirstPacket - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)success;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setSuccess:(char)arg1 ;
-(char)hasServiceName;
-(char)hasSuccess;
-(void)setHasSuccess:(char)arg1 ;
-(void)setClientInitToDaemonOpenSocket:(unsigned long long)arg1 ;
-(void)setHasClientInitToDaemonOpenSocket:(char)arg1 ;
-(char)hasClientInitToDaemonOpenSocket;
-(void)setClientInitToClientOpenSocketHandler:(unsigned long long)arg1 ;
-(void)setHasClientInitToClientOpenSocketHandler:(char)arg1 ;
-(char)hasClientInitToClientOpenSocketHandler;
-(void)setClientOpenSocketHandlerToIncomingFirstPacket:(unsigned long long)arg1 ;
-(void)setHasClientOpenSocketHandlerToIncomingFirstPacket:(char)arg1 ;
-(char)hasClientOpenSocketHandlerToIncomingFirstPacket;
-(void)setDaemonOpenSocketToDaemonCompletionHandler:(unsigned long long)arg1 ;
-(void)setHasDaemonOpenSocketToDaemonCompletionHandler:(char)arg1 ;
-(char)hasDaemonOpenSocketToDaemonCompletionHandler;
-(void)setDaemonCompletionHandlerToClientOpenSocketCompletion:(unsigned long long)arg1 ;
-(void)setHasDaemonCompletionHandlerToClientOpenSocketCompletion:(char)arg1 ;
-(char)hasDaemonCompletionHandlerToClientOpenSocketCompletion;
-(void)setDaemonCompletionHandlerToIncomingFirstPacket:(unsigned long long)arg1 ;
-(void)setHasDaemonCompletionHandlerToIncomingFirstPacket:(char)arg1 ;
-(char)hasDaemonCompletionHandlerToIncomingFirstPacket;
-(void)setConnectionInitToIncomingFirstPacket:(unsigned long long)arg1 ;
-(void)setHasConnectionInitToIncomingFirstPacket:(char)arg1 ;
-(char)hasConnectionInitToIncomingFirstPacket;
-(unsigned long long)clientInitToDaemonOpenSocket;
-(unsigned long long)clientInitToClientOpenSocketHandler;
-(unsigned long long)clientOpenSocketHandlerToIncomingFirstPacket;
-(unsigned long long)daemonOpenSocketToDaemonCompletionHandler;
-(unsigned long long)daemonCompletionHandlerToClientOpenSocketCompletion;
-(unsigned long long)daemonCompletionHandlerToIncomingFirstPacket;
-(unsigned long long)connectionInitToIncomingFirstPacket;
@end
