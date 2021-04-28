/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/Versions/A/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMAVCore/IMAVCore-Structs.h>
@class NSDictionary, NSString, NSDate, NSArray, IMHandle, NSNumber;

@interface IMAVChatProxy : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,readonly) NSString * GUID; 
@property (nonatomic,readonly) unsigned sessionID; 
@property (nonatomic,readonly) NSString * conferenceID; 
@property (nonatomic,readonly) unsigned state; 
@property (nonatomic,readonly) NSDate * dateConnected; 
@property (nonatomic,readonly) NSDate * dateEnded; 
@property (nonatomic,readonly) NSArray * remoteParticipants; 
@property (nonatomic,readonly) IMHandle * initiatorIMHandle; 
@property (nonatomic,readonly) IMHandle * otherIMHandle; 
@property (nonatomic,readonly) unsigned endedReason; 
@property (nonatomic,readonly) int endedError; 
@property (nonatomic,readonly) char isCaller; 
@property (nonatomic,readonly) char isVideo; 
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) char isStateFinal; 
@property (assign,nonatomic) char isSendingAudio; 
@property (assign,nonatomic) char isSendingVideo; 
@property (nonatomic,readonly) char hasReceivedFirstFrame; 
@property (assign,setter=setMute:,nonatomic) char isMute; 
@property (nonatomic,readonly) NSNumber * dataUploaded; 
@property (nonatomic,readonly) NSNumber * dataDownloaded; 
@property (assign,nonatomic) double invitationTimeoutTime; 
@property (assign,nonatomic) double connectionTimeoutTime; 
@property (assign,getter=isRelayed,nonatomic) char relayed; 
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned)state;
-(char)isActive;
-(id)account;
-(unsigned)sessionID;
-(void)acceptInvitation;
-(void)cancelInvitation;
-(NSString *)GUID;
-(void)declineInvitation;
-(unsigned)endedReason;
-(char)isVideo;
-(NSDate *)dateConnected;
-(void)setIsSendingVideo:(char)arg1 ;
-(char)isSendingVideo;
-(char)isSendingAudio;
-(void)setIsSendingAudio:(char)arg1 ;
-(NSDate *)dateEnded;
-(char)_isProxy;
-(NSString *)conferenceID;
-(char)isCaller;
-(NSArray *)remoteParticipants;
-(char)hasReceivedFirstFrame;
-(IMHandle *)initiatorIMHandle;
-(IMHandle *)otherIMHandle;
-(char)isRelayed;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3 ;
-(void)endChatWithReason:(unsigned)arg1 ;
-(void)updateWithInfo:(id)arg1 ;
-(char)isMute;
-(char)isStateFinal;
-(void)setLocalAspectRatio:(CGSize)arg1 cameraOrientation:(unsigned)arg2 cameraType:(unsigned)arg3 ;
-(NSNumber *)dataUploaded;
-(NSNumber *)dataDownloaded;
-(void)setMute:(char)arg1 ;
-(int)endedError;
-(double)invitationTimeoutTime;
-(void)setInvitationTimeoutTime:(double)arg1 ;
-(double)connectionTimeoutTime;
-(void)setConnectionTimeoutTime:(double)arg1 ;
-(void)setRelayed:(char)arg1 ;
-(char)_isCallUpgradeTo:(id)arg1 ;
-(void)inviteAll;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 ;
-(void)endChat;
-(void)finalUpdate;
@end

