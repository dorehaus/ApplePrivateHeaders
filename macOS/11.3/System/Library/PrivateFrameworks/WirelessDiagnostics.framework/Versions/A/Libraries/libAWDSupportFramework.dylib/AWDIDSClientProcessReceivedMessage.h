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

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {

	unsigned long long _deltaTime;
	unsigned long long _payloadSize;
	unsigned long long _priority;
	unsigned long long _qos;
	unsigned long long _threadPriority;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasService; 
@property (nonatomic,retain) NSString * service;                             //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) char hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;                 //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) char hasQos; 
@property (assign,nonatomic) unsigned long long qos;                         //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) char hasThreadPriority; 
@property (assign,nonatomic) unsigned long long threadPriority;              //@synthesize threadPriority=_threadPriority - In the implementation block
@property (assign,nonatomic) char hasDeltaTime; 
@property (assign,nonatomic) unsigned long long deltaTime;                   //@synthesize deltaTime=_deltaTime - In the implementation block
@property (assign,nonatomic) char hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                    //@synthesize priority=_priority - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)threadPriority;
-(void)setThreadPriority:(unsigned long long)arg1 ;
-(unsigned long long)qos;
-(unsigned long long)timestamp;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(NSString *)service;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(char)hasTimestamp;
-(void)setQos:(unsigned long long)arg1 ;
-(unsigned long long)payloadSize;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasPriority;
-(void)setHasPriority:(char)arg1 ;
-(char)hasService;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(char)arg1 ;
-(char)hasPayloadSize;
-(void)setHasQos:(char)arg1 ;
-(char)hasQos;
-(void)setHasThreadPriority:(char)arg1 ;
-(char)hasThreadPriority;
-(void)setDeltaTime:(unsigned long long)arg1 ;
-(void)setHasDeltaTime:(char)arg1 ;
-(char)hasDeltaTime;
-(unsigned long long)deltaTime;
@end

