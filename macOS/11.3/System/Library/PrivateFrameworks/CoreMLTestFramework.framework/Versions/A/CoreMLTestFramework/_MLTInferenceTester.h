/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMLTestFramework.framework/Versions/A/CoreMLTestFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MLTInputProvider;
@class NSError, MLModel, NSString, _MLTJSONReader, _MLTPerfTracer, _MLTLogger;

@interface _MLTInferenceTester : NSObject {

	char _tested;
	char _testDataFromFile;
	char _measurePredictionPerformance;
	char _measurePredictionCPUCycles;
	char _measurePredictionCPUMemory;
	char _measurePredictionGPUMemory;
	char _measurePredictionANEMemory;
	NSError* _testError;
	MLModel* _model;
	NSString* _modelPath;
	id<_MLTInputProvider> _testDataProvider;
	_MLTJSONReader* _testDataReader;
	long long _computeUnit;
	NSString* _errorString;
	_MLTPerfTracer* _perfTracer;
	_MLTLogger* _logger;

}

@property (assign) char tested;                                         //@synthesize tested=_tested - In the implementation block
@property (retain) MLModel * model;                                     //@synthesize model=_model - In the implementation block
@property (retain) NSString * modelPath;                                //@synthesize modelPath=_modelPath - In the implementation block
@property (retain) id<_MLTInputProvider> testDataProvider;              //@synthesize testDataProvider=_testDataProvider - In the implementation block
@property (retain) _MLTJSONReader * testDataReader;                     //@synthesize testDataReader=_testDataReader - In the implementation block
@property (assign) long long computeUnit;                               //@synthesize computeUnit=_computeUnit - In the implementation block
@property (retain) NSString * errorString;                              //@synthesize errorString=_errorString - In the implementation block
@property (assign) char testDataFromFile;                               //@synthesize testDataFromFile=_testDataFromFile - In the implementation block
@property (retain) _MLTPerfTracer * perfTracer;                         //@synthesize perfTracer=_perfTracer - In the implementation block
@property (retain) _MLTLogger * logger;                                 //@synthesize logger=_logger - In the implementation block
@property (assign) char measurePredictionPerformance;                   //@synthesize measurePredictionPerformance=_measurePredictionPerformance - In the implementation block
@property (assign) char measurePredictionCPUCycles;                     //@synthesize measurePredictionCPUCycles=_measurePredictionCPUCycles - In the implementation block
@property (assign) char measurePredictionCPUMemory;                     //@synthesize measurePredictionCPUMemory=_measurePredictionCPUMemory - In the implementation block
@property (assign) char measurePredictionGPUMemory;                     //@synthesize measurePredictionGPUMemory=_measurePredictionGPUMemory - In the implementation block
@property (assign) char measurePredictionANEMemory;                     //@synthesize measurePredictionANEMemory=_measurePredictionANEMemory - In the implementation block
@property (retain) NSError * testError;                                 //@synthesize testError=_testError - In the implementation block
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(NSString *)errorString;
-(_MLTLogger *)logger;
-(MLModel *)model;
-(void)setModel:(MLModel *)arg1 ;
-(NSString *)modelPath;
-(void)setModelPath:(NSString *)arg1 ;
-(void)setLogger:(_MLTLogger *)arg1 ;
-(void)setErrorString:(NSString *)arg1 ;
-(id<_MLTInputProvider>)testDataProvider;
-(char)measurePredictionPerformance;
-(char)measurePredictionCPUCycles;
-(char)measurePredictionCPUMemory;
-(char)measurePredictionGPUMemory;
-(char)measurePredictionANEMemory;
-(long long)computeUnit;
-(char)testDataFromFile;
-(_MLTJSONReader *)testDataReader;
-(id)nextDataSet:(id*)arg1 ;
-(id)getModelInputFromDataSet:(id)arg1 error:(id*)arg2 ;
-(_MLTPerfTracer *)perfTracer;
-(id)getExpectedOutputFromDataSet:(id)arg1 ;
-(id)getTestNameFromDataSet:(id)arg1 ;
-(void)setTestError:(NSError *)arg1 ;
-(char)tested;
-(char)testFinished;
-(char)testModel:(id)arg1 withDataSet:(id)arg2 error:(id*)arg3 ;
-(void)setTested:(char)arg1 ;
-(char)testModel:(id*)arg1 ;
-(id)meanPredictionTime:(id*)arg1 ;
-(id)meanValidationTime:(id*)arg1 ;
-(id)peakPredictionMemoryForComputeUnit:(long long)arg1 error:(id*)arg2 ;
-(id)peakModelLoadMemory:(id*)arg1 ;
-(id)meanCPUCyclesPerPrediction:(id*)arg1 ;
-(NSError *)testError;
-(void)setTestDataProvider:(id<_MLTInputProvider>)arg1 ;
-(void)setTestDataReader:(_MLTJSONReader *)arg1 ;
-(void)setComputeUnit:(long long)arg1 ;
-(void)setTestDataFromFile:(char)arg1 ;
-(void)setPerfTracer:(_MLTPerfTracer *)arg1 ;
-(void)setMeasurePredictionPerformance:(char)arg1 ;
-(void)setMeasurePredictionCPUCycles:(char)arg1 ;
-(void)setMeasurePredictionCPUMemory:(char)arg1 ;
-(void)setMeasurePredictionGPUMemory:(char)arg1 ;
-(void)setMeasurePredictionANEMemory:(char)arg1 ;
@end

