/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKUserIdentityLookupInfo, CKDeviceToDeviceShareInvitationToken;

@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	NSString* _participantHandle;
	CKUserIdentityLookupInfo* _lookupInfo;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;

}

@property (nonatomic,copy) NSString * participantHandle;                                          //@synthesize participantHandle=_participantHandle - In the implementation block
@property (nonatomic,retain) CKUserIdentityLookupInfo * lookupInfo;                               //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (nonatomic,retain) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(void)setLookupInfo:(CKUserIdentityLookupInfo *)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)invitationToken;
-(void)setInvitationToken:(CKDeviceToDeviceShareInvitationToken *)arg1 ;
-(id)initWithParticipant:(id)arg1 ;
-(NSString *)participantHandle;
-(id)invitationTokenData;
-(id)lookupInfoData;
-(void)setParticipantHandle:(NSString *)arg1 ;
@end

