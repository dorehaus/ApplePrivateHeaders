/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/Versions/A/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLModelImpl.h>

@class NLModelConfiguration, NSDictionary, NSString;

@interface NLModelImplNX : NLModelImpl {

	void* _nlModel;
	void* _modelContainer;
	NLModelConfiguration* _configuration;
	NSDictionary* _labelMap;
	unsigned long long _numberOfTrainingInstances;
	NSString* _trainingLanguage;

}
-(void)dealloc;
-(unsigned long long)systemVersion;
-(id)configuration;
-(id)modelData;
-(unsigned long long)numberOfTrainingInstances;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8 ;
-(id)labelMap;
-(id)predictedLabelForString:(id)arg1 ;
-(id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)initWithModelTrainer:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)trainingInfo;
-(id)initWithModelContainer:(void*)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 ;
-(id)predictedLabelsDictionaryForString:(id)arg1 ;
-(id)predictedLabelHypothesesDictionaryForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
@end

