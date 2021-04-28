/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATNetworkPowerPrimitives, CATIDSServiceConnectionInvitationOutboxDelegate;
@class NSMutableDictionary, NSMutableArray;

@interface CATIDSServiceConnectionInvitationOutbox : NSObject {

	id<CATNetworkPowerPrimitives> mNetworkPowerPrimitives;
	NSMutableDictionary* mInFlightInvitationRequestsByInvitationID;
	NSMutableArray* mInvitationRequestQueue;
	char mIsActive;
	id<CATIDSServiceConnectionInvitationOutboxDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATIDSServiceConnectionInvitationOutboxDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CATIDSServiceConnectionInvitationOutboxDelegate>)delegate;
-(void)setDelegate:(id<CATIDSServiceConnectionInvitationOutboxDelegate>)arg1 ;
-(void)resume;
-(void)suspend;
-(id)initWithNetworkPowerPrimitives:(id)arg1 ;
-(void)beginInvitationWithIdentifier:(id)arg1 appleID:(id)arg2 userInfo:(id)arg3 ;
-(void)cancelInvitationWithIdentifier:(id)arg1 ;
-(void)cancelAllInvitations;
-(void)receiveAcceptForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 ;
-(void)receiveRejectForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 error:(id)arg4 ;
-(void)serviceInvitationQueue;
@end
