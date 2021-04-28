/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/Versions/A/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBAncientEpoch, TPPBDispositionDisallowedMachineID, TPPBDispositionDuplicateMachineID, TPPBPolicyProhibits, TPPBUnknownMachineID;

@interface TPPBDisposition : PBCodable <NSCopying> {

	TPPBAncientEpoch* _ancientEpoch;
	TPPBDispositionDisallowedMachineID* _disallowedMachineID;
	TPPBDispositionDuplicateMachineID* _duplicateMachineID;
	TPPBPolicyProhibits* _policyProhibits;
	TPPBUnknownMachineID* _unknownMachineID;

}

@property (nonatomic,readonly) char hasAncientEpoch; 
@property (nonatomic,retain) TPPBAncientEpoch * ancientEpoch;                                       //@synthesize ancientEpoch=_ancientEpoch - In the implementation block
@property (nonatomic,readonly) char hasPolicyProhibits; 
@property (nonatomic,retain) TPPBPolicyProhibits * policyProhibits;                                 //@synthesize policyProhibits=_policyProhibits - In the implementation block
@property (nonatomic,readonly) char hasUnknownMachineID; 
@property (nonatomic,retain) TPPBUnknownMachineID * unknownMachineID;                               //@synthesize unknownMachineID=_unknownMachineID - In the implementation block
@property (nonatomic,readonly) char hasDuplicateMachineID; 
@property (nonatomic,retain) TPPBDispositionDuplicateMachineID * duplicateMachineID;                //@synthesize duplicateMachineID=_duplicateMachineID - In the implementation block
@property (nonatomic,readonly) char hasDisallowedMachineID; 
@property (nonatomic,retain) TPPBDispositionDisallowedMachineID * disallowedMachineID;              //@synthesize disallowedMachineID=_disallowedMachineID - In the implementation block
-(char)hasAncientEpoch;
-(char)hasPolicyProhibits;
-(char)hasUnknownMachineID;
-(char)hasDuplicateMachineID;
-(char)hasDisallowedMachineID;
-(TPPBAncientEpoch *)ancientEpoch;
-(void)setAncientEpoch:(TPPBAncientEpoch *)arg1 ;
-(TPPBPolicyProhibits *)policyProhibits;
-(void)setPolicyProhibits:(TPPBPolicyProhibits *)arg1 ;
-(TPPBUnknownMachineID *)unknownMachineID;
-(void)setUnknownMachineID:(TPPBUnknownMachineID *)arg1 ;
-(TPPBDispositionDuplicateMachineID *)duplicateMachineID;
-(void)setDuplicateMachineID:(TPPBDispositionDuplicateMachineID *)arg1 ;
-(TPPBDispositionDisallowedMachineID *)disallowedMachineID;
-(void)setDisallowedMachineID:(TPPBDispositionDisallowedMachineID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

