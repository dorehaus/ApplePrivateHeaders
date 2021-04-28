/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPProtectionInfo, CKDPShareIdentifier;

@interface CKDPShareAcceptRequest : PBRequest <NSCopying> {

	NSString* _etag;
	NSString* _participantId;
	CKDPProtectionInfo* _protectionInfo;
	CKDPProtectionInfo* _publicKey;
	int _publicKeyVersion;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShareIdentifier* _shareId;
	char _acceptedInProcess;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                    //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                  //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;                //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
@property (nonatomic,readonly) char hasPublicKey; 
@property (nonatomic,retain) CKDPProtectionInfo * publicKey;                   //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) char hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;              //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) char hasParticipantId; 
@property (nonatomic,retain) NSString * participantId;                         //@synthesize participantId=_participantId - In the implementation block
@property (assign,nonatomic) char hasPublicKeyVersion; 
@property (assign,nonatomic) int publicKeyVersion;                             //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (assign,nonatomic) char hasAcceptedInProcess; 
@property (assign,nonatomic) char acceptedInProcess;                           //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
+(id)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(CKDPProtectionInfo *)publicKey;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(int)publicKeyVersion;
-(void)setPublicKeyVersion:(int)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(char)acceptedInProcess;
-(void)setAcceptedInProcess:(char)arg1 ;
-(char)hasEtag;
-(void)setPublicKey:(CKDPProtectionInfo *)arg1 ;
-(NSString *)participantId;
-(void)setParticipantId:(NSString *)arg1 ;
-(char)hasProtectionInfo;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(char)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(char)hasSelfAddedPcs;
-(char)hasPublicKey;
-(char)hasParticipantId;
-(void)setHasPublicKeyVersion:(char)arg1 ;
-(char)hasPublicKeyVersion;
-(void)setHasAcceptedInProcess:(char)arg1 ;
-(char)hasAcceptedInProcess;
-(CKDPProtectionInfo *)selfAddedPcs;
@end
