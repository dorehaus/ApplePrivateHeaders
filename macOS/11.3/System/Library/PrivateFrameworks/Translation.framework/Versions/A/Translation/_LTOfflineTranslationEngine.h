/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LTTranslationEngine.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class _LTSpeechTranslationAssetInfo, _LTMultilingualSpeechRecognizer, _LTOfflineSpeechSynthesizer, NSDictionary, EMTTranslator, NSObject, NSLocale, _LTLanguageDetectionResult, NSError, NSArray, NSURL, _LTTextToSpeechCache, _LTLocalePair, NSString;

@interface _LTOfflineTranslationEngine : NSObject <_LTTranslationEngine> {

	_LTSpeechTranslationAssetInfo* _assetInfo;
	_LTMultilingualSpeechRecognizer* _recognizer;
	_LTOfflineSpeechSynthesizer* _synthesizer;
	NSDictionary* _etiquetteSanitizers;
	EMTTranslator* _translator;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_group> _lidWaitGroup;
	NSLocale* _lidBestResult;
	_LTLanguageDetectionResult* _lidResult;
	char _didEndpointSpeech;
	NSError* _earError;
	NSArray* _asrModelURLs;
	NSURL* _mtModelURL;
	_LTTextToSpeechCache* _ttsCache;
	_LTLocalePair* _localePair;

}

@property (nonatomic,retain) _LTLocalePair * localePair;                   //@synthesize localePair=_localePair - In the implementation block
@property (nonatomic,retain) NSArray * asrModelURLs;                       //@synthesize asrModelURLs=_asrModelURLs - In the implementation block
@property (nonatomic,retain) NSURL * mtModelURL;                           //@synthesize mtModelURL=_mtModelURL - In the implementation block
@property (nonatomic,retain) _LTTextToSpeechCache * ttsCache;              //@synthesize ttsCache=_ttsCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endpoint;
-(void)endAudio;
-(void)cancelRecognition;
-(_LTLocalePair *)localePair;
-(void)setLocalePair:(_LTLocalePair *)arg1 ;
-(NSArray *)asrModelURLs;
-(void)setAsrModelURLs:(NSArray *)arg1 ;
-(NSURL *)mtModelURL;
-(void)setMtModelURL:(NSURL *)arg1 ;
-(void)addSpeechAudioData:(id)arg1 ;
-(_LTTextToSpeechCache *)ttsCache;
-(void)setLanguagesRecognized:(id)arg1 ;
-(void)setTtsCache:(_LTTextToSpeechCache *)arg1 ;
-(char)translatesPair:(id)arg1 ;
-(void)preheatAsynchronously:(char)arg1 withContext:(id)arg2 ;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)cancelSpeechTranslation;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3 ;
-(void)_loadRecognizers;
-(void)_loadTranslatorForTask:(id)arg1 ;
-(void)_loadEtiquetteSanitizers;
-(id)_handleTranslationResults:(id)arg1 withContext:(id)arg2 ;
-(void)_translateString:(id)arg1 withContext:(id)arg2 toLocale:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_paragraphResultFromSentences:(id)arg1 ;
-(void)_translateParagraph:(id)arg1 withContext:(id)arg2 toLocale:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_translate:(id)arg1 withContext:(id)arg2 toLocale:(id)arg3 paragraphResult:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_translate:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_getBestRecognitionResult:(id)arg1 context:(id)arg2 ;
-(void)_waitForLIDWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithLocalePair:(id)arg1 assetInfo:(id)arg2 ;
@end

