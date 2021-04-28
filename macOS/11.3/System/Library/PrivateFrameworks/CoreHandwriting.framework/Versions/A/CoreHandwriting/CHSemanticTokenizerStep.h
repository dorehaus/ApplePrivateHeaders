/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer;

@interface CHSemanticTokenizerStep : CHPostprocessingStep {

	CHRecognizer* _recognizer;
	void* _languageModel;

}

@property (assign,nonatomic) CHRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) void* languageModel;                    //@synthesize languageModel=_languageModel - In the implementation block
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(CHRecognizer *)recognizer;
-(void*)languageModel;
-(id)process:(id)arg1 ;
-(void)setLanguageModel:(void*)arg1 ;
-(id)initWithRecognizer:(id)arg1 languageModel:(void*)arg2 ;
-(void)_updateTokenInappropriateFlag:(id)arg1 ;
@end
