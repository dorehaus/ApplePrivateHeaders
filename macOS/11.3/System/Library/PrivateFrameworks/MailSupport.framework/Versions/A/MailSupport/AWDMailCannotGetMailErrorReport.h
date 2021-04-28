/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDMailError;

@interface AWDMailCannotGetMailErrorReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _hostname;
	AWDMailError* _mailError;
	int _protocol;
	int _provider;
	NSString* _serverInfo;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasHostname; 
@property (nonatomic,retain) NSString * hostname;                       //@synthesize hostname=_hostname - In the implementation block
@property (assign,nonatomic) char hasProtocol; 
@property (assign,nonatomic) int protocol;                              //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) char hasProvider; 
@property (assign,nonatomic) int provider;                              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) char hasMailError; 
@property (nonatomic,retain) AWDMailError * mailError;                  //@synthesize mailError=_mailError - In the implementation block
@property (nonatomic,readonly) char hasServerInfo; 
@property (nonatomic,retain) NSString * serverInfo;                     //@synthesize serverInfo=_serverInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)protocol;
-(id)dictionaryRepresentation;
-(int)provider;
-(unsigned long long)timestamp;
-(void)setProvider:(int)arg1 ;
-(void)setProtocol:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)hostname;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasProvider;
-(void)setServerInfo:(NSString *)arg1 ;
-(char)hasServerInfo;
-(NSString *)serverInfo;
-(void)setHostname:(NSString *)arg1 ;
-(char)hasHostname;
-(void)setHasProvider:(char)arg1 ;
-(id)providerAsString:(int)arg1 ;
-(int)StringAsProvider:(id)arg1 ;
-(char)hasProtocol;
-(void)setMailError:(AWDMailError *)arg1 ;
-(void)setHasProtocol:(char)arg1 ;
-(id)protocolAsString:(int)arg1 ;
-(int)StringAsProtocol:(id)arg1 ;
-(char)hasMailError;
-(AWDMailError *)mailError;
@end

