/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBOuterMessage : PBCodable <NSCopying> {

	NSData* _encryptedPayload;
	NSData* _ephemeralPubKey;
	NSData* _keyValidator;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * encryptedPayload;              //@synthesize encryptedPayload=_encryptedPayload - In the implementation block
@property (nonatomic,retain) NSData * ephemeralPubKey;               //@synthesize ephemeralPubKey=_ephemeralPubKey - In the implementation block
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) char hasKeyValidator; 
@property (nonatomic,retain) NSData * keyValidator;                  //@synthesize keyValidator=_keyValidator - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)encryptedPayload;
-(void)setEncryptedPayload:(NSData *)arg1 ;
-(void)setEphemeralPubKey:(NSData *)arg1 ;
-(void)setKeyValidator:(NSData *)arg1 ;
-(NSData *)ephemeralPubKey;
-(NSData *)keyValidator;
-(char)hasKeyValidator;
@end

