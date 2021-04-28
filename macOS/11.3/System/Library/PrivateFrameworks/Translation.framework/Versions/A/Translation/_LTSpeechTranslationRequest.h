/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/_LTTranslationRequest.h>
#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>

@protocol OS_dispatch_queue, _LTTranslationService, _LTSpeechTranslationDelegate;
@class AVAudioConverter, NSMutableArray, NSObject, NSURL, NSArray, NSString;

@interface _LTSpeechTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {

	AVAudioConverter* _converter;
	NSMutableArray* _queuedBuffers;
	NSObject*<OS_dispatch_queue> _queue;
	id<_LTTranslationService> _service;
	/*^block*/id _done;
	char _autoEndpoint;
	id<_LTSpeechTranslationDelegate> _delegate;
	NSURL* __lidModelURL;
	NSArray* __offlineASRModelURLs;
	long long __asrConfidenceThreshold;
	long long __lidThreshold;

}

@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * _lidModelURL;                                          //@synthesize _lidModelURL=__lidModelURL - In the implementation block
@property (nonatomic,retain) NSArray * _offlineASRModelURLs;                                //@synthesize _offlineASRModelURLs=__offlineASRModelURLs - In the implementation block
@property (assign,nonatomic) long long _asrConfidenceThreshold;                             //@synthesize _asrConfidenceThreshold=__asrConfidenceThreshold - In the implementation block
@property (assign,nonatomic) long long _lidThreshold;                                       //@synthesize _lidThreshold=__lidThreshold - In the implementation block
@property (assign,nonatomic) char autoEndpoint;                                             //@synthesize autoEndpoint=_autoEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(id)requestContext;
-(void)endAudio;
-(void)speechRecognitionResult:(id)arg1 ;
-(void)translatorDidTranslate:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg1 ;
-(void)languageDetectionResult:(id)arg1 ;
-(void)languageDetectionCompleted;
-(void)hybridEndpointerFoundEndpoint;
-(void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2 ;
-(id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 ;
-(char)autoEndpoint;
-(void)setAutoEndpoint:(char)arg1 ;
-(long long)_lidThreshold;
-(long long)_asrConfidenceThreshold;
-(id)initWithLocalePair:(id)arg1 ;
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(id)loggingType;
-(void)_translationFailedWithError:(id)arg1 ;
-(NSArray *)_offlineASRModelURLs;
-(void)_appendAudioPCMBuffer:(id)arg1 ;
-(void)_appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 simulateRealtime:(char)arg2 ;
-(id)nativeAudioFormat;
-(void)_convertAndFeedPCMBuffer:(id)arg1 ;
-(void)_drainAndClearAudioConverter;
-(void)_simulateRealtimeBehavior:(id)arg1 ;
-(void)appendAudioPCMBuffer:(id)arg1 ;
-(void)append:(opaqueCMSampleBufferRef)arg1 simulateRealtime:(char)arg2 ;
-(NSURL *)_lidModelURL;
-(void)set_lidModelURL:(NSURL *)arg1 ;
-(void)set_offlineASRModelURLs:(NSArray *)arg1 ;
-(void)set_asrConfidenceThreshold:(long long)arg1 ;
-(void)set_lidThreshold:(long long)arg1 ;
@end

