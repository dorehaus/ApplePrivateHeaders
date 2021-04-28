/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class INVocabularyUpdater, _INVocabularyValidator, NSObject;

@interface _INVocabulary : NSObject {

	INVocabularyUpdater* _vocabularyUpdater;
	_INVocabularyValidator* _validator;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)enumerateVocabularyUsingBlock:(/*^block*/id)arg1 ;
+(id)sharedVocabulary;
+(id)supportedVocabularyStringTypes;
-(id)init;
-(id)_validator;
-(void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2 ;
-(void)setVocabulary:(id)arg1 ofType:(long long)arg2 ;
-(void)removeAllVocabularyStrings;
-(void)setValidatedVocabulary:(id)arg1 ofType:(long long)arg2 ;
-(void)validateVocabularyType:(long long)arg1 ;
-(void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
-(void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg1 ;
@end
