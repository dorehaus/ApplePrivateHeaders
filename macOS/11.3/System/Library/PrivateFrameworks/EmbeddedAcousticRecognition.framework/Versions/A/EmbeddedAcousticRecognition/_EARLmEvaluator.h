/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLmEvaluator : NSObject {

	shared_ptr<quasar::LmEvaluator>* _evaluator;
	char _roundingEnabled;

}

@property (assign,nonatomic) char roundingEnabled;              //@synthesize roundingEnabled=_roundingEnabled - In the implementation block
+(void)initialize;
-(char)roundingEnabled;
-(void)setRoundingEnabled:(char)arg1 ;
-(id)initWithConfiguration:(id)arg1 root:(id)arg2 recognizerConfiguration:(id)arg3 ;
-(char)runEvaluationWithData:(id)arg1 handle:(id)arg2 result:(id*)arg3 bestWeight:(float*)arg4 ;
-(id)initWithConfiguration:(id)arg1 recognizerConfiguration:(id)arg2 ;
-(char)runEvaluationWithData:(id)arg1 handle:(id)arg2 result:(id*)arg3 ;
-(char)runEvaluationWithData:(id)arg1 handle:(id)arg2 shouldStop:(/*^block*/id)arg3 result:(id*)arg4 bestWeight:(float*)arg5 ;
@end
