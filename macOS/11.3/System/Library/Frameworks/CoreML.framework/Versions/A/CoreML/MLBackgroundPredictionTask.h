/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLBackgroundTask.h>

@class NSURL, MLModelConfiguration, MLPredictionOptions;

@interface MLBackgroundPredictionTask : MLBackgroundTask {

	NSURL* _modelURL;
	MLModelConfiguration* _modelConfiguration;
	MLPredictionOptions* _predictionOptions;

}

@property (nonatomic,copy) NSURL * modelURL;                                       //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,copy) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
@property (nonatomic,copy) MLPredictionOptions * predictionOptions;                //@synthesize predictionOptions=_predictionOptions - In the implementation block
+(char)supportsSecureCoding;
+(Class)taskRunnerClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(MLModelConfiguration *)modelConfiguration;
-(void)setModelConfiguration:(MLModelConfiguration *)arg1 ;
-(MLPredictionOptions *)predictionOptions;
-(void)setPredictionOptions:(MLPredictionOptions *)arg1 ;
@end
