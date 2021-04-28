/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSArray, NSPort, NSInputStream, NSOutputStream, NSString, NSData;

@interface MCSocket : NSObject <NSStreamDelegate> {

	NSArray* _clientCertificates;
	char _useSSL;
	char _disableEphemeralDiffieHellmanCiphers;
	char _scheduledForBytesToArrive;
	unsigned long long _identifier;
	long long _activityType;
	double _connectTimeout;
	double _readWriteTimeout;
	NSArray* _trustedCertificates;
	NSPort* _wakeupPort;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	/*^block*/id _bytesAvailableHandler;

}

@property (nonatomic,readonly) NSPort * wakeupPort;                         //@synthesize wakeupPort=_wakeupPort - In the implementation block
@property (retain) NSInputStream * inputStream;                             //@synthesize inputStream=_inputStream - In the implementation block
@property (retain) NSOutputStream * outputStream;                           //@synthesize outputStream=_outputStream - In the implementation block
@property (copy) id bytesAvailableHandler;                                  //@synthesize bytesAvailableHandler=_bytesAvailableHandler - In the implementation block
@property (assign) char scheduledForBytesToArrive;                          //@synthesize scheduledForBytesToArrive=_scheduledForBytesToArrive - In the implementation block
@property (readonly) unsigned long long identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign) long long activityType;                                  //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) double connectTimeout;                         //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign,nonatomic) double readWriteTimeout;                       //@synthesize readWriteTimeout=_readWriteTimeout - In the implementation block
@property (nonatomic,readonly) char isExpensive; 
@property (nonatomic,copy,readonly) NSString * securityLevel; 
@property (nonatomic,readonly) unsigned cipherKeyLength; 
@property (nonatomic,readonly) char isReadable; 
@property (nonatomic,readonly) char isWritable; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,copy,readonly) NSString * remoteHostname; 
@property (nonatomic,readonly) long long remotePortNumber; 
@property (nonatomic,copy,readonly) NSData * sourceIPAddress; 
@property (nonatomic,copy,readonly) NSString * sourceHostname; 
@property (copy) NSArray * trustedCertificates;                             //@synthesize trustedCertificates=_trustedCertificates - In the implementation block
@property (assign) char disableEphemeralDiffieHellmanCiphers;               //@synthesize disableEphemeralDiffieHellmanCiphers=_disableEphemeralDiffieHellmanCiphers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)dealloc;
-(id)init;
-(char)isValid;
-(void)close;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(unsigned long long)identifier;
-(long long)activityType;
-(NSOutputStream *)outputStream;
-(NSString *)securityLevel;
-(void)setActivityType:(long long)arg1 ;
-(SecTrustRef)serverTrust;
-(NSInputStream *)inputStream;
-(char)isWritable;
-(char)isReadable;
-(void)setClientIdentity:(SecIdentityRef)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(char)isExpensive;
-(char)setUsesSSL:(char)arg1 ;
-(long long)remotePortNumber;
-(id)bytesAvailableHandler;
-(void)setBytesAvailableHandler:(id)arg1 ;
-(char)disableEphemeralDiffieHellmanCiphers;
-(void)setDisableEphemeralDiffieHellmanCiphers:(char)arg1 ;
-(NSString *)remoteHostname;
-(NSArray *)trustedCertificates;
-(void)setConnectTimeout:(double)arg1 ;
-(double)connectTimeout;
-(void)setReadWriteTimeout:(double)arg1 ;
-(double)readWriteTimeout;
-(void)registerForBytesToArriveWithHandler:(/*^block*/id)arg1 ;
-(void)unregisterForBytesToArrive;
-(unsigned)cipherKeyLength;
-(char)connectToHost:(id)arg1 withPort:(long long)arg2 isBackground:(char)arg3 ;
-(void)setTrustedCertificates:(NSArray *)arg1 ;
-(long long)readBytes:(void*)arg1 maxLength:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)writeBytes:(const void*)arg1 maxLength:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)_setSSLStreamProperties:(char)arg1 ;
-(id)_waitForSecurityLayerNegotiationStreamsAreScheduled:(char)arg1 ;
-(char)_setupStreamsWithHostname:(id)arg1 port:(long long)arg2 needToEstablishInternetConnection:(char*)arg3 useSSL:(char*)arg4 isBackground:(char)arg5 error:(id*)arg6 ;
-(NSPort *)wakeupPort;
-(void)_unscheduleInputStreamFromMainRunLoopIfNecessary;
-(char)_handleReadWriteErrorOnStream:(id)arg1 timedOut:(char)arg2 logDetails:(id)arg3 error:(id*)arg4 ;
-(void)_scheduleInputStreamInMainRunLoopIfNecessary;
-(char)scheduledForBytesToArrive;
-(void)setScheduledForBytesToArrive:(char)arg1 ;
-(NSData *)sourceIPAddress;
-(void)_cancelLookupForHost:(CFHostRef)arg1 infoType:(int)arg2 ;
-(NSString *)sourceHostname;
@end

