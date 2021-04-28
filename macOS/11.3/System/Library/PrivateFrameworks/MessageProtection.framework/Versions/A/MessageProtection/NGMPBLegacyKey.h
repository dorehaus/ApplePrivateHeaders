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

@interface NGMPBLegacyKey : PBCodable <NSCopying> {

	NSData* _encryptionKey;
	NSData* _signingKey;

}

@property (nonatomic,retain) NSData * encryptionKey;              //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) NSData * signingKey;                 //@synthesize signingKey=_signingKey - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)encryptionKey;
-(NSData *)signingKey;
-(void)setSigningKey:(NSData *)arg1 ;
@end
