/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/Versions/A/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface IMAVController : NSObject {

	char _blockMultipleIncomingInvitations;
	char _blockOutgoingInvitationsDuringCall;
	char _blockIncomingInvitationsDuringCall;
	NSMutableArray* _delegates;

}

@property (nonatomic,retain) NSMutableArray * _delegates;                          //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) char _ready; 
@property (nonatomic,readonly) char hasActiveConference; 
@property (nonatomic,readonly) char hasRunningConference; 
@property (nonatomic,readonly) unsigned overallChatState; 
@property (nonatomic,readonly) char cameraCapable; 
@property (nonatomic,readonly) char microphoneCapable; 
@property (nonatomic,readonly) char cameraConnected; 
@property (nonatomic,readonly) char microphoneConnected; 
@property (assign,nonatomic) char blockMultipleIncomingInvitations;                //@synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations - In the implementation block
@property (assign,nonatomic) char blockIncomingInvitationsDuringCall;              //@synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall - In the implementation block
@property (assign,nonatomic) char blockOutgoingInvitationsDuringCall;              //@synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall - In the implementation block
@property (nonatomic,readonly) NSArray * delegates; 
@property (assign,nonatomic) id<IMAVControllerDelegate> delegate; 
+(id)sharedInstance;
-(id)init;
-(id<IMAVControllerDelegate>)delegate;
-(void)setDelegate:(id<IMAVControllerDelegate>)arg1 ;
-(char)_ready;
-(NSMutableArray *)_delegates;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)delegates;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(char)blockMultipleIncomingInvitations;
-(char)blockIncomingInvitationsDuringCall;
-(char)hasRunningConference;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5 ;
-(char)cameraCapable;
-(char)_shouldRunConferences;
-(char)_shouldRunACConferences;
-(char)_shouldObserveConferences;
-(void)pushCachedVCCapsToDaemon;
-(void)_dumpCaps;
-(void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4 reason:(id)arg5 ;
-(void)updateActiveConference;
-(char)microphoneCapable;
-(unsigned)overallChatState;
-(void)setBlockIncomingInvitationsDuringCall:(char)arg1 ;
-(void)setBlockMultipleIncomingInvitations:(char)arg1 ;
-(void)setBlockOutgoingInvitationsDuringCall:(char)arg1 ;
-(id)vcResponseInfoWithSessionID:(unsigned)arg1 ;
-(char)hasActiveConference;
-(char)cameraConnected;
-(char)microphoneConnected;
-(void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2 ;
-(void)setHasRunningConference:(char)arg1 ;
-(void)setHasActiveConference:(char)arg1 ;
-(void)_receivedPendingACRequests;
-(void)_receivedPendingVCRequests;
-(void)setupIMAVController;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 conferenceID:(id)arg4 ;
-(void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2 ;
-(void)requestPendingVCInvitations;
-(void)requestPendingACInvitations;
-(void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1 ;
-(void)set_delegates:(NSMutableArray *)arg1 ;
-(char)blockOutgoingInvitationsDuringCall;
@end
