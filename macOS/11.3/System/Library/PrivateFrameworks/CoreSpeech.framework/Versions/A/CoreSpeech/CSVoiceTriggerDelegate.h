/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSVoiceTriggerDelegate <NSObject>
@optional
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1;
-(void)keywordDetectorDidDetectKeyword;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)voiceTriggerGotSuperVector:(id)arg1;
-(void)raiseToSpeakDetected:(id)arg1;
-(void)voiceTriggerDidRejected:(id)arg1;

@required
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;

@end

