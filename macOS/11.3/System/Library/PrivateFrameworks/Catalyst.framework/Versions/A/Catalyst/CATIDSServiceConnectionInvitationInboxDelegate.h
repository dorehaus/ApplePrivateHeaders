/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATIDSServiceConnectionInvitationInboxDelegate
@required
-(void)connectionInvitationInbox:(id)arg1 rejectedInvitation:(id)arg2 connectionIdentifier:(id)arg3 appleID:(id)arg4 address:(id)arg5 error:(id)arg6;
-(void)connectionInvitationInbox:(id)arg1 wantsToAcceptInvitation:(id)arg2 connectionIdentifier:(id)arg3 destinationAddress:(id)arg4;
-(void)connectionInvitationInbox:(id)arg1 shouldConnectToAppleID:(id)arg2 connectionIdentifier:(id)arg3 userInfo:(id)arg4 responseHandler:(/*^block*/id)arg5;
-(void)connectionInvitationInbox:(id)arg1 foundConection:(id)arg2 senderAppleID:(id)arg3 senderAddress:(id)arg4 networkPowerAssertion:(id)arg5 userInfo:(id)arg6;
-(void)connectionInvitatioInbox:(id)arg1 timeoutOutForInvitation:(id)arg2 connectionIdentifier:(id)arg3 senderAppleID:(id)arg4 userInfo:(id)arg5;

@end

