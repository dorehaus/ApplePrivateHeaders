/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDStreamInterface.h>
#import <libobjc.A.dylib/AVCVideoStreamDelegate.h>
#import <libobjc.A.dylib/HMDVideoStreamReconfigureDelegate.h>

@protocol HMDVideoStreamInterfaceDelegate, OS_dispatch_queue, HMDVideoStreamLastDecodedFrameDelegate;
@class HMDVideoStreamReconfigure, AVCVideoStream, NSObject, HMFOSTransaction, NSNumber, NSString;

@interface HMDVideoStreamInterface : HMDStreamInterface <AVCVideoStreamDelegate, HMDVideoStreamReconfigureDelegate> {

	HMDVideoStreamReconfigure* _videoStreamReconfigure;
	AVCVideoStream* _videoStream;
	id<HMDVideoStreamInterfaceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _lastFrameDelegateQueue;
	id<HMDVideoStreamLastDecodedFrameDelegate> _lastFrameDelegate;
	HMFOSTransaction* _snapshotDataTrasaction;
	double _rtcpSendIntervalSec;

}

@property (assign,getter=isRTCPEnabled,nonatomic) char rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) char rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) char rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec;                                        //@synthesize rtcpSendIntervalSec=_rtcpSendIntervalSec - In the implementation block
@property (nonatomic,readonly) NSNumber * syncSource; 
@property (nonatomic,readonly) NSNumber * streamToken; 
@property (nonatomic,readonly) HMDVideoStreamReconfigure * videoStreamReconfigure;              //@synthesize videoStreamReconfigure=_videoStreamReconfigure - In the implementation block
@property (nonatomic,retain) AVCVideoStream * videoStream;                                      //@synthesize videoStream=_videoStream - In the implementation block
@property (__weak,readonly) id<HMDVideoStreamInterfaceDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lastFrameDelegateQueue;               //@synthesize lastFrameDelegateQueue=_lastFrameDelegateQueue - In the implementation block
@property (__weak) id<HMDVideoStreamLastDecodedFrameDelegate> lastFrameDelegate;                //@synthesize lastFrameDelegate=_lastFrameDelegate - In the implementation block
@property (nonatomic,retain) HMFOSTransaction * snapshotDataTrasaction;                         //@synthesize snapshotDataTrasaction=_snapshotDataTrasaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDVideoStreamInterfaceDelegate>)delegate;
-(void)setRtcpEnabled:(char)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)setRtpTimeOutEnabled:(char)arg1 ;
-(char)isRTPTimeOutEnabled;
-(void)setRtcpTimeOutEnabled:(char)arg1 ;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(NSNumber *)streamToken;
-(void)stream:(id)arg1 didStart:(char)arg2 error:(id)arg3 ;
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidRTPTimeOut:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg1 ;
-(void)streamDidServerDie:(id)arg1 ;
-(id)logIdentifier;
-(void)stopStream;
-(void)captureSnapshot;
-(NSNumber *)syncSource;
-(char)isRTCPEnabled;
-(char)isRTCPTimeOutEnabled;
-(double)rtpTimeOutIntervalSec;
-(double)rtcpTimeOutIntervalSec;
-(double)rtcpSendIntervalSec;
-(void)stream:(id)arg1 didUpdateVideoConfiguration:(char)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2 ;
-(void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)startStream:(id)arg1 ;
-(void)videoStreamReconfigureDidNetworkImprove:(id)arg1 ;
-(void)videoStreamReconfigureDidNetworkDeteriorate:(id)arg1 ;
-(void)updateReconfigurationMode:(char)arg1 ;
-(char)_createLocalSocket;
-(void)setSnapshotDataTrasaction:(HMFOSTransaction *)arg1 ;
-(AVCVideoStream *)videoStream;
-(char)_initializeStreamRemoteSender:(id)arg1 ;
-(char)_initializeStreamRemoteDestinationReceiver:(id)arg1 ;
-(char)_initializeStreamRemoteSocketReceiver:(id)arg1 ;
-(char)_initializeStreamRemoteLocal;
-(void)setVideoStream:(AVCVideoStream *)arg1 ;
-(void)_startStream:(id)arg1 ;
-(void)_callStarted:(id)arg1 ;
-(HMDVideoStreamReconfigure *)videoStreamReconfigure;
-(void)setLastFrameDelegate:(id<HMDVideoStreamLastDecodedFrameDelegate>)arg1 ;
-(void)setLastFrameDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<HMDVideoStreamLastDecodedFrameDelegate>)lastFrameDelegate;
-(HMFOSTransaction *)snapshotDataTrasaction;
-(void)_callDidUpdateConfiguration;
-(void)_callDidGetLastDecodedFrame:(id)arg1 ;
-(void)_callStopped:(id)arg1 ;
-(void)_callNetworkDeteriorated;
-(void)_callNetworkImproved;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6 ;
-(void)updateStreamConfiguration:(id)arg1 ;
-(void)setSnapshotDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)lastFrameDelegateQueue;
@end

