/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/Versions/A/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTSponsorToApplicantRound1M2, OTApplicantToSponsorRound2M1, OTSupportOctagonMessage, OTSupportSOSMessage, OTSponsorToApplicantRound2M2;

@interface OTPairingMessage : PBCodable <NSCopying> {

	OTSponsorToApplicantRound1M2* _epoch;
	OTApplicantToSponsorRound2M1* _prepare;
	OTSupportOctagonMessage* _supportsOctagon;
	OTSupportSOSMessage* _supportsSOS;
	OTSponsorToApplicantRound2M2* _voucher;

}

@property (nonatomic,readonly) char hasEpoch; 
@property (nonatomic,retain) OTSponsorToApplicantRound1M2 * epoch;                   //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,readonly) char hasPrepare; 
@property (nonatomic,retain) OTApplicantToSponsorRound2M1 * prepare;                 //@synthesize prepare=_prepare - In the implementation block
@property (nonatomic,readonly) char hasVoucher; 
@property (nonatomic,retain) OTSponsorToApplicantRound2M2 * voucher;                 //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,readonly) char hasSupportsOctagon; 
@property (nonatomic,retain) OTSupportOctagonMessage * supportsOctagon;              //@synthesize supportsOctagon=_supportsOctagon - In the implementation block
@property (nonatomic,readonly) char hasSupportsSOS; 
@property (nonatomic,retain) OTSupportSOSMessage * supportsSOS;                      //@synthesize supportsSOS=_supportsSOS - In the implementation block
-(char)hasPrepare;
-(char)hasSupportsOctagon;
-(char)hasSupportsSOS;
-(void)setPrepare:(OTApplicantToSponsorRound2M1 *)arg1 ;
-(OTSupportOctagonMessage *)supportsOctagon;
-(void)setSupportsOctagon:(OTSupportOctagonMessage *)arg1 ;
-(OTSupportSOSMessage *)supportsSOS;
-(void)setSupportsSOS:(OTSupportSOSMessage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(OTSponsorToApplicantRound1M2 *)epoch;
-(void)setEpoch:(OTSponsorToApplicantRound1M2 *)arg1 ;
-(OTApplicantToSponsorRound2M1 *)prepare;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(OTSponsorToApplicantRound2M2 *)voucher;
-(void)setVoucher:(OTSponsorToApplicantRound2M2 *)arg1 ;
-(char)hasEpoch;
-(char)hasVoucher;
@end

