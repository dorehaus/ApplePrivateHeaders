/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol _HMAudioControlDelegate;
@class HMFUnfairLock, NSUUID, HMMediaSession, _HMContext, NSString;

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge> {

	HMFUnfairLock* _lock;
	char _muted;
	float _volume;
	NSUUID* _uniqueIdentifier;
	HMMediaSession* _mediaSession;
	id<_HMAudioControlDelegate> _delegate;
	_HMContext* _context;

}

@property (nonatomic,__weak,readonly) HMMediaSession * mediaSession;                          //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (__weak) id<_HMAudioControlDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) float volume;                                                              //@synthesize volume=_volume - In the implementation block
@property (getter=isMuted) char muted;                                                        //@synthesize muted=_muted - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_HMAudioControlDelegate>)delegate;
-(void)setDelegate:(id<_HMAudioControlDelegate>)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(float)volume;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_unconfigure;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(id)messageDestination;
-(void)_registerNotificationHandlers;
-(HMMediaSession *)mediaSession;
-(void)__configureWithContext:(id)arg1 ;
-(void)_handleAudioControlUpdated:(id)arg1 ;
-(id)initWithMediaSession:(id)arg1 ;
-(void)updateVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMuted:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
