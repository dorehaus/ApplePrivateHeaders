/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>
#import <libobjc.A.dylib/SFSpeechRecognizerDelegate.h>

@class NSString;

@interface WebSpeechRecognizerTaskImpl : NSObject <SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate> {

	ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType> _identifier;
	BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> _delegateCallback;
	BOOL _doMultipleRecognitions;
	unsigned long long _maxAlternatives;
	RetainPtr<SFSpeechRecognizer>* _recognizer;
	RetainPtr<SFSpeechAudioBufferRecognitionRequest>* _request;
	WeakObjCPtr<SFSpeechRecognitionTask> _task;
	BOOL _hasSentSpeechStart;
	BOOL _hasSentSpeechEnd;
	BOOL _hasSentEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stop;
-(void)abort;
-(void)audioSamplesAvailable:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithIdentifier:(ObjectIdentifier<WebCore::SpeechRecognitionConnectionClientIdentifierType>)arg1 locale:(id)arg2 doMultipleRecognitions:(char)arg3 reportInterimResults:(char)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(/*^block*/id)arg6 ;
-(void)sendSpeechEndIfNeeded;
-(void)sendEndIfNeeded;
-(void)sendSpeechStartIfNeeded;
-(void)callbackWithTranscriptions:(id)arg1 isFinal:(char)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(char)arg2 ;
-(void)speechRecognizer:(id)arg1 availabilityDidChange:(char)arg2 ;
@end

