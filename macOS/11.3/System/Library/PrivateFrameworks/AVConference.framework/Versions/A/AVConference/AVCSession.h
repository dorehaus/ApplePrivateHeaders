/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVCSessionParticipantDelegate.h>
#import <AVConference/AVCSessionParticipantControlProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, AVCSessionParticipant, AVCSessionConfiguration, NSString, NSObject, VCXPCClientShared, NSDictionary, NSData, NSArray;

@interface AVCSession : NSObject <AVCSessionParticipantDelegate, AVCSessionParticipantControlProtocol> {

	NSMutableDictionary* _remoteParticipants;
	NSMutableDictionary* _participantsToAdd;
	AVCSessionParticipant* _localParticipant;
	AVCSessionConfiguration* _configuration;
	NSString* _transportToken;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	VCXPCClientShared* _connection;
	long long _sessionToken;
	NSDictionary* _capabilities;
	NSString* _uuid;
	NSData* _frequencyLevels;
	int _activeConfigurationCount;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                           //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCSessionConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateNotificationQueue;              //@synthesize delegateNotificationQueue=_delegateNotificationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * remoteParticipantsMap;                         //@synthesize remoteParticipants=_remoteParticipants - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * participantsToAdd;                             //@synthesize participantsToAdd=_participantsToAdd - In the implementation block
@property (nonatomic,readonly) AVCSessionParticipant * localParticipant;                            //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,readonly) VCXPCClientShared * xpcConnection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) long long sessionToken;                                              //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSArray * remoteParticipants; 
@property (assign,nonatomic) id<AVCSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSData * negotiationData; 
@property (assign,getter=isAudioMuted,nonatomic) char audioMuted; 
@property (assign,getter=isAudioEnabled,nonatomic) char audioEnabled; 
@property (assign,getter=isVideoEnabled,nonatomic) char videoEnabled; 
@property (assign,getter=isAudioPaused,nonatomic) char audioPaused; 
@property (assign,getter=isVideoPaused,nonatomic) char videoPaused; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) NSData * frequencyLevels;                                            //@synthesize frequencyLevels=_frequencyLevels - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(id<AVCSessionDelegate>)delegate;
-(void)setDelegate:(id<AVCSessionDelegate>)arg1 ;
-(NSString *)uuid;
-(VCXPCClientShared *)xpcConnection;
-(float)volume;
-(void)start;
-(void)stop;
-(AVCSessionConfiguration *)configuration;
-(void)setVolume:(float)arg1 ;
-(void)setConfiguration:(AVCSessionConfiguration *)arg1 ;
-(NSDictionary *)capabilities;
-(void)updateConfiguration:(id)arg1 ;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(void)addParticipant:(id)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(long long)sessionToken;
-(void)setAudioEnabled:(char)arg1 ;
-(char)isAudioEnabled;
-(void)addParticipants:(id)arg1 ;
-(void)stopWithError:(id)arg1 ;
-(char)isVideoEnabled;
-(void)setVideoEnabled:(char)arg1 ;
-(char)isVideoPaused;
-(void)setVideoPaused:(char)arg1 ;
-(void)removeParticipants:(id)arg1 ;
-(char)isAudioPaused;
-(void)registerBlocksForNotifications;
-(NSObject*<OS_dispatch_queue>)delegateNotificationQueue;
-(AVCSessionParticipant *)localParticipant;
-(void)setAudioPaused:(char)arg1 ;
-(void)setAudioMuted:(char)arg1 ;
-(NSArray *)remoteParticipants;
-(void)participant:(id)arg1 audioEnabled:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)participant:(id)arg1 videoEnabled:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)participant:(id)arg1 audioPaused:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)participant:(id)arg1 videoPaused:(char)arg2 didSucceed:(char)arg3 error:(id)arg4 ;
-(void)deregisterFromNotifications;
-(void)setupNotificationQueue:(id)arg1 ;
-(id)newNSErrorWithErrorDictionary:(id)arg1 ;
-(void)participant:(id)arg1 mediaPrioritiesDidChange:(id)arg2 ;
-(NSData *)negotiationData;
-(char)isAudioMuted;
-(NSData *)frequencyLevels;
-(id)initPrivateWithTransportToken:(id)arg1 configuration:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(char)validateParticipantToAdd:(id)arg1 ;
-(char)validateParticipantToRemove:(id)arg1 ;
-(void)validateParticipantConfiguration;
-(NSMutableDictionary *)remoteParticipantsMap;
-(NSMutableDictionary *)participantsToAdd;
-(id)initWithTransportToken:(id)arg1 configuration:(id)arg2 negotiationData:(id)arg3 delegate:(id)arg4 queue:(id)arg5 ;
-(id)initWithTransportToken:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(void)beginParticipantConfiguration;
-(void)endParticipantConfiguration;
-(void)participant:(id)arg1 frequencyLevelsDidChange:(id)arg2 ;
@end

