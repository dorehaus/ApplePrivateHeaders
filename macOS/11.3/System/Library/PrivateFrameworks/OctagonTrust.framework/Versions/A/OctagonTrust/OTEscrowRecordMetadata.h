/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/Versions/A/OctagonTrust
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, OTEscrowRecordMetadataClientMetadata;

@interface OTEscrowRecordMetadata : PBCodable <NSCopying> {

	unsigned long long _secureBackupTimestamp;
	unsigned long long _secureBackupUsesMultipleIcscs;
	NSData* _backupKeybagDigest;
	NSString* _bottleId;
	NSString* _bottleValidity;
	OTEscrowRecordMetadataClientMetadata* _clientMetadata;
	NSData* _escrowedSpki;
	NSData* _peerInfo;
	NSString* _serial;
	SCD_Struct_OT1 _has;

}

@property (nonatomic,readonly) char hasBackupKeybagDigest; 
@property (nonatomic,retain) NSData * backupKeybagDigest;                                        //@synthesize backupKeybagDigest=_backupKeybagDigest - In the implementation block
@property (nonatomic,readonly) char hasClientMetadata; 
@property (nonatomic,retain) OTEscrowRecordMetadataClientMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (assign,nonatomic) char hasSecureBackupUsesMultipleIcscs; 
@property (assign,nonatomic) unsigned long long secureBackupUsesMultipleIcscs;                   //@synthesize secureBackupUsesMultipleIcscs=_secureBackupUsesMultipleIcscs - In the implementation block
@property (nonatomic,readonly) char hasBottleId; 
@property (nonatomic,retain) NSString * bottleId;                                                //@synthesize bottleId=_bottleId - In the implementation block
@property (assign,nonatomic) char hasSecureBackupTimestamp; 
@property (assign,nonatomic) unsigned long long secureBackupTimestamp;                           //@synthesize secureBackupTimestamp=_secureBackupTimestamp - In the implementation block
@property (nonatomic,readonly) char hasEscrowedSpki; 
@property (nonatomic,retain) NSData * escrowedSpki;                                              //@synthesize escrowedSpki=_escrowedSpki - In the implementation block
@property (nonatomic,readonly) char hasPeerInfo; 
@property (nonatomic,retain) NSData * peerInfo;                                                  //@synthesize peerInfo=_peerInfo - In the implementation block
@property (nonatomic,readonly) char hasBottleValidity; 
@property (nonatomic,retain) NSString * bottleValidity;                                          //@synthesize bottleValidity=_bottleValidity - In the implementation block
@property (nonatomic,readonly) char hasSerial; 
@property (nonatomic,retain) NSString * serial;                                                  //@synthesize serial=_serial - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)serial;
-(NSData *)peerInfo;
-(OTEscrowRecordMetadataClientMetadata *)clientMetadata;
-(void)setClientMetadata:(OTEscrowRecordMetadataClientMetadata *)arg1 ;
-(char)hasClientMetadata;
-(void)setSerial:(NSString *)arg1 ;
-(void)setPeerInfo:(NSData *)arg1 ;
-(unsigned long long)secureBackupUsesMultipleIcscs;
-(NSData *)escrowedSpki;
-(unsigned long long)secureBackupTimestamp;
-(NSData *)backupKeybagDigest;
-(void)setBackupKeybagDigest:(NSData *)arg1 ;
-(void)setSecureBackupUsesMultipleIcscs:(unsigned long long)arg1 ;
-(void)setBottleId:(NSString *)arg1 ;
-(void)setEscrowedSpki:(NSData *)arg1 ;
-(void)setSecureBackupTimestamp:(unsigned long long)arg1 ;
-(char)hasBackupKeybagDigest;
-(void)setHasSecureBackupUsesMultipleIcscs:(char)arg1 ;
-(char)hasSecureBackupUsesMultipleIcscs;
-(char)hasBottleId;
-(void)setHasSecureBackupTimestamp:(char)arg1 ;
-(char)hasSecureBackupTimestamp;
-(char)hasEscrowedSpki;
-(char)hasPeerInfo;
-(char)hasBottleValidity;
-(char)hasSerial;
-(NSString *)bottleId;
-(NSString *)bottleValidity;
-(void)setBottleValidity:(NSString *)arg1 ;
@end

