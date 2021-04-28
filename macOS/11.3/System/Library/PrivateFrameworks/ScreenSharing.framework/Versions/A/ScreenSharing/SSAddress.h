/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSXPCConnection, IDSSession, NWDatagramConnection, NWConnectionManager, NSMutableSet, NSFileHandle, CNContactStore;

@interface SSAddress : NSObject <NSCopying> {

	char _isOSX_10OrLater;
	unsigned short port;
	int resolverStatus;
	NSString* resolverAccountName;
	NSString* _originalAddress;
	NSString* _embeddedUsername;
	NSString* _embeddedPassword;
	NSString* _hostname;
	NSString* _bonjourName;
	NSDictionary* _options;
	NSString* _remoteIPPort;
	NSXPCConnection* _xpcConnection;
	unsigned long long _multicastAddress;
	unsigned long long _multicastPort;
	unsigned long long _session;
	IDSSession* _idsSession;
	IDSSession* _idsSessionOSX_QR;
	NWDatagramConnection* _datagramConnection;
	NWConnectionManager* _datagramConnectionManager;
	NSMutableSet* _types;
	NSFileHandle* __socketHandle;
	CNContactStore* _cnStore;
	in6_addr _address;

}

@property (copy) NSString * originalAddress;                                     //@synthesize originalAddress=_originalAddress - In the implementation block
@property (retain) NSMutableSet * types;                                         //@synthesize types=_types - In the implementation block
@property (assign) char isOSX_10OrLater;                                         //@synthesize isOSX_10OrLater=_isOSX_10OrLater - In the implementation block
@property (copy) NSString * embeddedUsername;                                    //@synthesize embeddedUsername=_embeddedUsername - In the implementation block
@property (copy) NSString * embeddedPassword;                                    //@synthesize embeddedPassword=_embeddedPassword - In the implementation block
@property (copy) NSString * hostname;                                            //@synthesize hostname=_hostname - In the implementation block
@property (copy) NSString * bonjourName;                                         //@synthesize bonjourName=_bonjourName - In the implementation block
@property (copy) NSDictionary * options;                                         //@synthesize options=_options - In the implementation block
@property (assign) in6_addr address;                                             //@synthesize address=_address - In the implementation block
@property (assign) unsigned short port; 
@property (retain) NSFileHandle * _socketHandle;                                 //@synthesize _socketHandle=__socketHandle - In the implementation block
@property (assign) int socket; 
@property (copy) NSString * remoteIPPort;                                        //@synthesize remoteIPPort=_remoteIPPort - In the implementation block
@property (assign) unsigned long long multicastAddress;                          //@synthesize multicastAddress=_multicastAddress - In the implementation block
@property (assign) unsigned long long multicastPort;                             //@synthesize multicastPort=_multicastPort - In the implementation block
@property (assign) unsigned long long session;                                   //@synthesize session=_session - In the implementation block
@property (retain) IDSSession * idsSession;                                      //@synthesize idsSession=_idsSession - In the implementation block
@property (retain) IDSSession * idsSessionOSX_QR;                                //@synthesize idsSessionOSX_QR=_idsSessionOSX_QR - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;                              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NWDatagramConnection * datagramConnection;                    //@synthesize datagramConnection=_datagramConnection - In the implementation block
@property (retain) NWConnectionManager * datagramConnectionManager;              //@synthesize datagramConnectionManager=_datagramConnectionManager - In the implementation block
@property (retain) CNContactStore * cnStore;                                     //@synthesize cnStore=_cnStore - In the implementation block
@property (copy,readonly) NSString * connectionID; 
@property (copy,readonly) NSString * inviterName; 
@property (copy,readonly) NSString * invitationType; 
@property (retain,readonly) NSString * idsDestination; 
@property (readonly) char isPerson; 
@property (copy,readonly) NSString * abPersonID; 
@property (copy,readonly) NSString * appleID; 
@property (assign) int resolverStatus; 
@property (retain) NSString * resolverAccountName; 
@property (readonly) sockaddr_in6 sockaddr; 
@property (readonly) char isAppleIDAddress; 
@property (copy,readonly) NSString * displayString; 
+(id)addressWithNWDatagramConnection:(id)arg1 remoteIPPort:(id)arg2 fromAcceptedInvitationAtAddress:(id)arg3 ;
+(id)udpSocketAddressWithSocket:(int)arg1 remoteIPPort:(id)arg2 fromAcceptedInvitationAtAddress:(id)arg3 ;
+(id)stringFromIn6Addr:(in6_addr)arg1 port:(unsigned short)arg2 ;
+(id)addressFromString:(id)arg1 ;
+(id)newSSAddress;
+(id)ipv6AddressWithIn6Addr:(in6_addr)arg1 port:(unsigned short)arg2 resolvedFromAddress:(id)arg3 ;
+(id)appleIDAddressWithIDSSession:(id)arg1 osxSecondarySession:(id)arg2 fromAddress:(id)arg3 ;
+(id)udpSocketAddressWithSocketHandle:(id)arg1 remoteIPPort:(id)arg2 xpcConnection:(id)arg3 fromAcceptedInvitationAtAddress:(id)arg4 ;
+(id)optionsFromURL:(id)arg1 ;
+(id)ipv6AddressWithIn6Addr:(in6_addr)arg1 port:(unsigned short)arg2 ;
+(id)ipv6AddressWithIn6Addr:(in6_addr)arg1 port:(unsigned short)arg2 bonjourName:(id)arg3 resolvedFromAddress:(id)arg4 ;
+(id)appleIDAddressWithIDSSession:(id)arg1 fromAddress:(id)arg2 ;
+(id)addressWithNWDatagramConnection:(id)arg1 xpcConnection:(id)arg2 NWConnectionManager:(id)arg3 fromAcceptedInvitationAtAddress:(id)arg4 ;
+(id)udpSocketAddressWithSocket:(int)arg1 remoteIPPort:(id)arg2 ;
+(id)multicastUDPSocketAddressWithSocket:(int)arg1 remoteIPPort:(id)arg2 multicastAddress:(unsigned long long)arg3 multicastPort:(unsigned long long)arg4 session:(unsigned long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSMutableSet *)types;
-(unsigned short)port;
-(id)initWithString:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setPort:(unsigned short)arg1 ;
-(in6_addr)address;
-(int)socket;
-(void)setAddress:(in6_addr)arg1 ;
-(void)setTypes:(NSMutableSet *)arg1 ;
-(unsigned long long)session;
-(NSString *)connectionID;
-(NSString *)displayString;
-(NSString *)hostname;
-(void)setSession:(unsigned long long)arg1 ;
-(NSString *)idsDestination;
-(NSString *)appleID;
-(void)setSocket:(int)arg1 ;
-(NSString *)inviterName;
-(char)isPerson;
-(void)setHostname:(NSString *)arg1 ;
-(CNContactStore *)cnStore;
-(IDSSession *)idsSession;
-(void)setIdsSession:(IDSSession *)arg1 ;
-(id)initWithUDPSocket:(int)arg1 remoteIPPort:(id)arg2 multicastAddress:(unsigned long long)arg3 multicastPort:(unsigned long long)arg4 session:(unsigned long long)arg5 ;
-(void)setRemoteIPPort:(NSString *)arg1 ;
-(NSString *)remoteIPPort;
-(void)setIdsSessionOSX_QR:(IDSSession *)arg1 ;
-(void)setDatagramConnection:(NWDatagramConnection *)arg1 ;
-(void)setDatagramConnectionManager:(NWConnectionManager *)arg1 ;
-(NSString *)originalAddress;
-(IDSSession *)idsSessionOSX_QR;
-(NWConnectionManager *)datagramConnectionManager;
-(NWDatagramConnection *)datagramConnection;
-(id)canonicalURLWithStrippedUser:(char)arg1 passwordBullets:(char)arg2 ;
-(NSString *)embeddedUsername;
-(NSString *)embeddedPassword;
-(char)hasType:(int)arg1 ;
-(NSString *)abPersonID;
-(id)contactForABPersonID:(id)arg1 ;
-(char)isAppleIDAddress;
-(NSString *)invitationType;
-(int)resolverStatus;
-(NSString *)resolverAccountName;
-(id)addressCopy;
-(void)addAddressType:(int)arg1 ;
-(void)setBonjourName:(NSString *)arg1 ;
-(void)removeAllNonAppleIDTypes;
-(void)set_socketHandle:(NSFileHandle *)arg1 ;
-(void)setIsOSX_10OrLater:(char)arg1 ;
-(void)setOriginalAddress:(NSString *)arg1 ;
-(char)foundIPv6InString:(id)arg1 ;
-(void)setEmbeddedUsername:(NSString *)arg1 ;
-(void)setEmbeddedPassword:(NSString *)arg1 ;
-(char)foundBonjourInString:(id)arg1 ;
-(char)foundIPv4InString:(id)arg1 ;
-(char)hasAppleIDInvitationType;
-(char)foundPhoneNumber:(id)arg1 ;
-(NSString *)bonjourName;
-(unsigned long long)multicastAddress;
-(void)setMulticastAddress:(unsigned long long)arg1 ;
-(unsigned long long)multicastPort;
-(void)setMulticastPort:(unsigned long long)arg1 ;
-(void)setResolverAccountName:(NSString *)arg1 ;
-(void)setCnStore:(CNContactStore *)arg1 ;
-(NSFileHandle *)_socketHandle;
-(char)isOSX_10OrLater;
-(id)typeStrings;
-(char)isLinkLocalIPv6;
-(void)removeAddressType:(int)arg1 ;
-(void)removeAllAddressTypes;
-(sockaddr_in6)sockaddr;
-(void)setResolverStatus:(int)arg1 ;
@end
