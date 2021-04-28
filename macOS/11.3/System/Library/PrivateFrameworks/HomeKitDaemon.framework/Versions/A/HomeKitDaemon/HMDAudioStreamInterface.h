/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDStreamInterface.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/AVCAudioStreamDelegate.h>

@protocol HMDAudioStreamInterfaceDelegate;
@class AVCAudioStream, NSNumber, NSString;

@interface HMDAudioStreamInterface : HMDStreamInterface <HMFLogging, AVCAudioStreamDelegate> {

	char _streamStarted;
	AVCAudioStream* _audioStream;
	id<HMDAudioStreamInterfaceDelegate> _delegate;
	unsigned long long _audioStreamSetting;
	double _rtcpSendIntervalSec;
	/*^block*/id _stopStreamCompletionHandler;

}

@property (assign,getter=isMuted,nonatomic) char muted; 
@property (assign,getter=isRTCPEnabled,nonatomic) char rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) char rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) char rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec;                                       //@synthesize rtcpSendIntervalSec=_rtcpSendIntervalSec - In the implementation block
@property (copy) id stopStreamCompletionHandler;                                               //@synthesize stopStreamCompletionHandler=_stopStreamCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSNumber * syncSource; 
@property (nonatomic,retain) AVCAudioStream * audioStream;                                     //@synthesize audioStream=_audioStream - In the implementation block
@property (__weak,readonly) id<HMDAudioStreamInterfaceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char streamStarted;                                               //@synthesize streamStarted=_streamStarted - In the implementation block
@property (assign,nonatomic) unsigned long long audioStreamSetting;                            //@synthesize audioStreamSetting=_audioStreamSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDAudioStreamInterfaceDelegate>)delegate;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(void)setAudioStream:(AVCAudioStream *)arg1 ;
-(AVCAudioStream *)audioStream;
-(void)setRtcpEnabled:(char)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)setRtpTimeOutEnabled:(char)arg1 ;
-(char)isRTPTimeOutEnabled;
-(void)setRtcpTimeOutEnabled:(char)arg1 ;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(void)stream:(id)arg1 didStart:(char)arg2 error:(id)arg3 ;
-(void)streamDidStop:(id)arg1 ;
-(void)stream:(id)arg1 didPause:(char)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didResume:(char)arg2 error:(id)arg3 ;
-(void)streamDidRTPTimeOut:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg1 ;
-(void)streamDidServerDie:(id)arg1 ;
-(id)logIdentifier;
-(void)stopStream;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(unsigned long long)audioStreamSetting;
-(NSNumber *)syncSource;
-(char)isRTCPEnabled;
-(char)isRTCPTimeOutEnabled;
-(double)rtpTimeOutIntervalSec;
-(double)rtcpTimeOutIntervalSec;
-(double)rtcpSendIntervalSec;
-(void)startStream:(id)arg1 ;
-(char)_createLocalSocket;
-(char)_initializeStreamRemoteSender:(id)arg1 ;
-(char)_initializeStreamRemoteDestinationReceiver:(id)arg1 ;
-(char)_initializeStreamRemoteSocketReceiver:(id)arg1 ;
-(char)_initializeStreamRemoteLocal;
-(void)_startStream:(id)arg1 ;
-(void)_callStarted:(id)arg1 ;
-(void)_callStopped:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6 ;
-(void)updateAudioSetting:(unsigned long long)arg1 ;
-(void)updateAudioVolume:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_updateAudioSetting:(unsigned long long)arg1 ;
-(void)_pauseStream;
-(void)_resumeStream;
-(void)_stopStreamWithCompletion:(/*^block*/id)arg1 ;
-(void)setStopStreamCompletionHandler:(id)arg1 ;
-(char)streamStarted;
-(void)setStreamStarted:(char)arg1 ;
-(id)stopStreamCompletionHandler;
-(void)_callPaused:(id)arg1 ;
-(void)_callResumed:(id)arg1 ;
@end

