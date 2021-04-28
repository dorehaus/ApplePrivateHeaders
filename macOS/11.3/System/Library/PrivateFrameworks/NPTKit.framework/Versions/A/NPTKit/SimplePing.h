/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/Versions/A/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_source, SimplePingDelegate;
@class NSObject, NSString, NSData;

@interface SimplePing : NSObject <NSCopying> {

	NSObject*<OS_dispatch_source> timeoutTimer;
	char _nextSequenceNumberHasWrapped;
	unsigned short _identifier;
	unsigned short _nextSequenceNumber;
	NSString* _hostName;
	id<SimplePingDelegate> _delegate;
	long long _addressStyle;
	NSData* _hostAddress;
	CFHostRef _host;
	CFSocketRef _socket;

}

@property (nonatomic,copy) NSData * hostAddress;                                  //@synthesize hostAddress=_hostAddress - In the implementation block
@property (assign,nonatomic) unsigned short nextSequenceNumber;                   //@synthesize nextSequenceNumber=_nextSequenceNumber - In the implementation block
@property (assign,nonatomic) char nextSequenceNumberHasWrapped;                   //@synthesize nextSequenceNumberHasWrapped=_nextSequenceNumberHasWrapped - In the implementation block
@property (nonatomic,retain) CFHostRef host;                                      //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) CFSocketRef socket;                                  //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostName;                          //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic,__weak) id<SimplePingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long addressStyle;                              //@synthesize addressStyle=_addressStyle - In the implementation block
@property (nonatomic,readonly) unsigned char hostAddressFamily; 
@property (nonatomic,readonly) unsigned short identifier;                         //@synthesize identifier=_identifier - In the implementation block
+(unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<SimplePingDelegate>)delegate;
-(void)setDelegate:(id<SimplePingDelegate>)arg1 ;
-(CFHostRef)host;
-(unsigned short)identifier;
-(void)setHost:(CFHostRef)arg1 ;
-(void)start;
-(void)stop;
-(NSString *)hostName;
-(CFSocketRef)socket;
-(void)readData;
-(void)setSocket:(CFSocketRef)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(unsigned short)nextSequenceNumber;
-(id)initWithHostName:(id)arg1 ;
-(void)setAddressStyle:(long long)arg1 ;
-(void)sendPingWithData:(id)arg1 ;
-(NSData *)hostAddress;
-(void)timeOutHandler:(id)arg1 sequenceNumber:(unsigned short)arg2 ;
-(unsigned char)hostAddressFamily;
-(id)pingPacketWithType:(unsigned char)arg1 payload:(id)arg2 requiresChecksum:(char)arg3 ;
-(void)setupTimer:(id)arg1 currentSequenceNumber:(unsigned short)arg2 ;
-(void)setNextSequenceNumber:(unsigned short)arg1 ;
-(void)setNextSequenceNumberHasWrapped:(char)arg1 ;
-(char)nextSequenceNumberHasWrapped;
-(char)validateSequenceNumber:(unsigned short)arg1 ;
-(char)validatePing4ResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2 ;
-(char)validatePing6ResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2 ;
-(char)validatePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short*)arg2 ;
-(long long)addressStyle;
-(void)setHostAddress:(NSData *)arg1 ;
-(void)stopHostResolution;
-(void)startWithHostAddress;
-(void)didFailWithHostStreamError:(SCD_Struct_Si3)arg1 ;
-(void)stopSocket;
-(void)hostResolutionDone;
@end

