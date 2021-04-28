/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/Versions/A/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NLModelConfiguration, NSDictionary, NLModelImpl, NSData, MLModel, NSObject;

@interface NLModel : NSObject {

	NLModelConfiguration* _configuration;
	NSDictionary* _infoDictionary;
	NLModelImpl* _modelImpl;
	NSData* _data;
	MLModel* _mlModel;
	void* _container;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
+(id)modelWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)modelWithData:(id)arg1 error:(id*)arg2 ;
+(id)modelWithMLModel:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)data;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)systemVersion;
-(NLModelConfiguration *)configuration;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)gazetteer;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(id)labelMap;
-(id)predictedLabelForString:(id)arg1 ;
-(id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 modelImpl:(id)arg2 ;
-(char)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)testResultsWithDataSet:(id)arg1 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 error:(id*)arg3 ;
-(id)testResultsWithDataProvider:(id)arg1 ;
-(id)predictedLabelArraysForTokenArrays:(id)arg1 ;
-(id)initWithData:(id)arg1 mlModel:(id)arg2 error:(id*)arg3 ;
-(id)initWithClassifierMLModel:(id)arg1 ;
-(id)labelArray;
-(id)embedding;
-(id)embeddingData;
-(id)sequenceTestResultsWithDataProvider:(id)arg1 ;
-(id)classifierTestResultsWithDataProvider:(id)arg1 ;
-(char)writeMLModelToURL:(id)arg1 atomically:(char)arg2 error:(id*)arg3 ;
-(id)mlModel;
@end

