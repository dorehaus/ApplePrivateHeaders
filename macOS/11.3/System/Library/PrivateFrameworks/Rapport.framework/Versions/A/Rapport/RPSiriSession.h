/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Versions/A/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>

@protocol OS_dispatch_queue, RPMessageable;
@class AVAudioFormat, NSObject, AVVoiceController, NSString;

@interface RPSiriSession : NSObject <AVVoiceControllerRecordDelegate> {

	/*^block*/id _activateCompletion;
	int _activateState;
	AVAudioFormat* _audioFormat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _invalidateCalled;
	char _invalidateDone;
	RPSiriSession* _selfRef;
	int _startRecordingState;
	int _stopRecordingState;
	AVVoiceController* _voiceController;
	NSString* _destinationID;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) NSString * destinationID;                 //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(char)arg2 error:(id)arg3 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg1 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)_activateCompletedWithError:(id)arg1 ;
-(void)_activate2;
-(char)voiceControllerSetupAndReturnError:(id*)arg1 ;
-(void)voiceControllerTearDown;
@end

