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

@class OTEscrowAuthenticationInformation, OTCDPRecoveryInformation;

@interface OTICDPRecordContext : PBCodable <NSCopying> {

	OTEscrowAuthenticationInformation* _authInfo;
	OTCDPRecoveryInformation* _cdpInfo;

}

@property (nonatomic,readonly) char hasCdpInfo; 
@property (nonatomic,retain) OTCDPRecoveryInformation * cdpInfo;                        //@synthesize cdpInfo=_cdpInfo - In the implementation block
@property (nonatomic,readonly) char hasAuthInfo; 
@property (nonatomic,retain) OTEscrowAuthenticationInformation * authInfo;              //@synthesize authInfo=_authInfo - In the implementation block
-(char)hasCdpInfo;
-(char)hasAuthInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(OTEscrowAuthenticationInformation *)authInfo;
-(void)setAuthInfo:(OTEscrowAuthenticationInformation *)arg1 ;
-(OTCDPRecoveryInformation *)cdpInfo;
-(void)setCdpInfo:(OTCDPRecoveryInformation *)arg1 ;
@end

