/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCTransportSession.h>

@class VCDatagramChannelIDS, NSString;

@interface VCTransportSessionIDS : VCTransportSession {

	VCDatagramChannelIDS* _datagramChannel;
	int _socket;
	NSString* _destination;
	char _requireEncryptionInfo;
	char _isIDSDCEventUsageErrorReported;

}

@property (assign,nonatomic) int socket;                        //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy) NSString * destination;              //@synthesize destination=_destination - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(int)socket;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(void)setSocket:(int)arg1 ;
-(void)startMKMRecoveryForParticipantIDs:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(id)arg2 ;
-(id)initWithCallID:(unsigned)arg1 requireEncryptionInfo:(char)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 ;
-(void)dispatchedProcessDatagramChannelEventInfo:(id)arg1 ;
-(void)handleLinkConnectedWithInfo:(id)arg1 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg1 ;
-(void)handleDefaultLinkUpdatedWithInfo:(id)arg1 ;
-(void)handlePreConnectionDataReceived:(id)arg1 ;
-(void)handleRATChanged:(id)arg1 ;
-(void)handleCellularMTUChanged:(id)arg1 ;
-(void)handleChannelInfoReport:(id)arg1 ;
-(void)handleIDSEncryptionInfoEvent:(id)arg1 ;
-(void)handleIDSMembershipChangeInfoEvent:(id)arg1 ;
-(void)handleSessionInfoResponse:(id)arg1 ;
-(void)handleProbingResponse:(id)arg1 ;
-(void)handleCellularSoMaskChanged:(id)arg1 ;
-(void)processDatagramChannelEventInfo:(id)arg1 ;
-(unsigned)remoteDeviceVersionIDS;
-(void)cleanupDatagramChannel;
-(void)setPiggybackBlobPreference;
-(int)onStart;
-(void)onStop;
-(void)setConnectionSetupTime;
-(void)setQuickRelayServerProvider:(int)arg1 ;
-(id)datagramChannel;
-(char)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)setConnectionSetupPiggybackBlob:(id)arg1 ;
-(id)connectionSetupPiggybackBlob;
@end

