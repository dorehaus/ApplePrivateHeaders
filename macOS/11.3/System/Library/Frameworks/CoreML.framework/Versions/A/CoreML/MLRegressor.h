/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLRegressor.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLRegressor : MLModel <MLRegressor>

@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)predictionFromFeatures:(id)arg1 regressor:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)regressorResultFromOutputFeatures:(id)arg1 error:(id*)arg2 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 error:(id*)arg3 ;
@end

