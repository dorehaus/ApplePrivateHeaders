/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSubcredentialProvisioningLocalDeviceConfiguration.h>

@class PKAppletSubcredentialSharingSession, PKAppletSubcredentialSharingInvitation, PKAppletSubcredentialSharingInvitationMetadata, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptInvitationConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {

	char _declineRelatedInvitations;
	PKAppletSubcredentialSharingSession* _session;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKAppletSubcredentialSharingInvitationMetadata* _metadata;
	PKPaymentWebService* _remoteDeviceWebService;

}

@property (nonatomic,__weak,readonly) PKAppletSubcredentialSharingSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;                    //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) char declineRelatedInvitations;                                         //@synthesize declineRelatedInvitations=_declineRelatedInvitations - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * remoteDeviceWebService;                           //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
-(id)description;
-(PKAppletSubcredentialSharingSession *)session;
-(PKAppletSubcredentialSharingInvitationMetadata *)metadata;
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(PKPaymentWebService *)remoteDeviceWebService;
-(id)transitionTable;
-(long long)startingState;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 declineRelatedInvitations:(char)arg4 localDeviceWebService:(id)arg5 remoteDeviceWebService:(id)arg6 ;
-(id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 webService:(id)arg4 ;
-(char)declineRelatedInvitations;
@end

