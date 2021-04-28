/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Versions/A/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>
#import <libobjc.A.dylib/PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate.h>

@class NSOperationQueue, PHAFaceCropProcessingJobProcessFaceCropsOperation, NSString;

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> {

	NSOperationQueue* _operationQueue;
	PHAFaceCropProcessingJobProcessFaceCropsOperation* _processingOperation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)completionScore;
-(char)startJob:(id*)arg1 ;
-(char)stopJob:(id*)arg1 ;
-(void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3 ;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3 ;
@end

