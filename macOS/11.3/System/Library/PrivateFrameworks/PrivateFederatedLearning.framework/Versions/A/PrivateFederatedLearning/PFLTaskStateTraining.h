/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/Versions/A/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL, PFLModelHandler, NSArray, NSDictionary, NSNumber;

@interface PFLTaskStateTraining : NSObject <PFLTaskState> {

	NSURL* _compiledModelURL;
	PFLModelHandler* _modelHandler;
	NSArray* _trainingIndicies;
	NSDictionary* _metrics;
	NSNumber* _numValidationSamples;

}

@property (nonatomic,readonly) NSURL * compiledModelURL;                     //@synthesize compiledModelURL=_compiledModelURL - In the implementation block
@property (nonatomic,readonly) PFLModelHandler * modelHandler;               //@synthesize modelHandler=_modelHandler - In the implementation block
@property (nonatomic,readonly) NSArray * trainingIndicies;                   //@synthesize trainingIndicies=_trainingIndicies - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics;                       //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSNumber * numValidationSamples;              //@synthesize numValidationSamples=_numValidationSamples - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)suspend;
-(unsigned long long)tag;
-(NSDictionary *)metrics;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)compiledModelURL;
-(NSArray *)trainingIndicies;
-(id)initWithCompiledModelURL:(id)arg1 modelHandler:(id)arg2 trainingDataIndicies:(id)arg3 metrics:(id)arg4 numValidationSamples:(id)arg5 ;
-(NSNumber *)numValidationSamples;
-(PFLModelHandler *)modelHandler;
@end

