/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/Versions/A/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBModelObjectStorage.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CKShareParticipant, HMBShareInvitation, NSString, HMBShareUserID;

@interface HMBShareParticipant : HMFObject <HMBModelObjectStorage, NSCopying, NSSecureCoding> {

	NSUUID* _clientIdentifier;
	CKShareParticipant* _ckShareParticipant;
	HMBShareInvitation* _pendingInvitation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) CKShareParticipant * ckShareParticipant;              //@synthesize ckShareParticipant=_ckShareParticipant - In the implementation block
@property (copy) HMBShareInvitation * pendingInvitation;                        //@synthesize pendingInvitation=_pendingInvitation - In the implementation block
@property (copy,readonly) NSUUID * clientIdentifier;                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (copy,readonly) HMBShareUserID * cloudShareID; 
@property (readonly) char hasWriteAccess; 
@property (readonly) char hasAccepted; 
+(char)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)clientIdentifier;
-(id)attributeDescriptions;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(CKShareParticipant *)ckShareParticipant;
-(id)initWithCKShareParticipant:(id)arg1 clientIdentifier:(id)arg2 ;
-(char)hasAccepted;
-(HMBShareInvitation *)pendingInvitation;
-(void)setPendingInvitation:(HMBShareInvitation *)arg1 ;
-(HMBShareUserID *)cloudShareID;
-(char)hasWriteAccess;
@end

