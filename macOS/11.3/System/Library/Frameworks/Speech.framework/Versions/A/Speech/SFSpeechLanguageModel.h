/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Speech.framework/Versions/A/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _EARAppLmData, NSString, _EARLmModel, NSMutableDictionary, NSLocale, NSArray, NSDictionary;

@interface SFSpeechLanguageModel : NSObject {

	_EARAppLmData* _appLmData;
	NSString* _recognizerConfigFilePath;
	_EARLmModel* _model;
	NSMutableDictionary* _oovDict;
	NSLocale* _locale;

}

@property (nonatomic,copy,readonly) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outOfVocabularyWords; 
@property (nonatomic,copy,readonly) NSDictionary * outOfVocabularyWordsAndFrequencies; 
+(void)initialize;
+(id)supportedLocales;
-(id)init;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(id)metrics;
-(id)deserializeModelData:(id)arg1 ;
-(long long)lmeThreshold;
-(void)addSentence:(id)arg1 ;
-(id)initWithAssetPath:(id)arg1 ;
-(NSDictionary *)outOfVocabularyWordsAndFrequencies;
-(NSArray *)outOfVocabularyWords;
-(char)addProns:(id)arg1 forWord:(id)arg2 ;
-(void)addSentences:(id)arg1 ;
-(id)addOovsFromSentence:(id)arg1 ;
-(char)trainFromPlainTextAndWriteToDirectory:(id)arg1 ;
-(void)generateNgramsSerializeDataAndWriteToFile:(id)arg1 ;
-(void)addPronsFromFile:(id)arg1 ;
@end

