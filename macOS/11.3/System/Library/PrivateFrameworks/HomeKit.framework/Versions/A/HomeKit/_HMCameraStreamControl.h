/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraControl.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol _HMCameraStreamControlDelegate;
@class HMCameraStream, NSString;

@interface _HMCameraStreamControl : _HMCameraControl <HMFLogging> {

	unsigned long long _streamState;
	HMCameraStream* _cameraStream;
	id<_HMCameraStreamControlDelegate> _delegate;
	NSString* _streamSessionID;

}

@property (assign,nonatomic) unsigned long long streamState;                                  //@synthesize streamState=_streamState - In the implementation block
@property (nonatomic,copy) NSString * streamSessionID;                                        //@synthesize streamSessionID=_streamSessionID - In the implementation block
@property (assign,nonatomic,__weak) id<_HMCameraStreamControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMCameraStream * cameraStream;                                 //@synthesize cameraStream=_cameraStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<_HMCameraStreamControlDelegate>)delegate;
-(void)setDelegate:(id<_HMCameraStreamControlDelegate>)arg1 ;
-(unsigned long long)streamState;
-(void)setStreamState:(unsigned long long)arg1 ;
-(id)logIdentifier;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(HMCameraStream *)cameraStream;
-(void)startStreamWithPreferences:(id)arg1 ;
-(void)stopStream;
-(void)_registerNotificationHandlers;
-(void)setCameraStream:(HMCameraStream *)arg1 ;
-(void)setStreamSessionID:(NSString *)arg1 ;
-(void)_callVideoStoppedDelegate:(id)arg1 ;
-(void)_handleVideoStreamStopped:(id)arg1 ;
-(void)_resetState:(id)arg1 ;
-(NSString *)streamSessionID;
-(void)_startStreamWithPreferences:(id)arg1 ;
-(void)_handleNegotiateStreamResponse:(id)arg1 streamPreferences:(id)arg2 sessionID:(id)arg3 error:(id)arg4 ;
-(void)_handleVideoStreamStartResponse:(id)arg1 streamPreferences:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(void)_callVideoStartedDelegate;
-(void)_stopStream;
-(void)_handleVideoStopResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
@end

