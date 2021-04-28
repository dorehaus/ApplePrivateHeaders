/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NWPBSendData : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NSData* _messageData;
	unsigned _receiveWindow;
	SCD_Struct_NW21 _has;

}

@property (nonatomic,readonly) char hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;               //@synthesize clientUUID=_clientUUID - In the implementation block
@property (nonatomic,readonly) char hasMessageData; 
@property (nonatomic,retain) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (assign,nonatomic) char hasReceiveWindow; 
@property (assign,nonatomic) unsigned receiveWindow;              //@synthesize receiveWindow=_receiveWindow - In the implementation block
-(char)hasClientUUID;
-(void)setReceiveWindow:(unsigned)arg1 ;
-(void)setHasReceiveWindow:(char)arg1 ;
-(char)hasReceiveWindow;
-(unsigned)receiveWindow;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMessageData:(NSData *)arg1 ;
-(NSData *)messageData;
-(char)hasMessageData;
-(NSString *)clientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
@end

