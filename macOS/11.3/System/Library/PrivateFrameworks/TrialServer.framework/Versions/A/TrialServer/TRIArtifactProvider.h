/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIArtifactProvider
@required
-(void)fetchExperimentWithLatestDeploymentForExperimentId:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchTreatmentWithId:(id)arg1 assetIndexes:(id)arg2 options:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)fetchExperimentNotificationsWithNamespaceNames:(id)arg1 rollbacksOnly:(char)arg2 lastFetchDateOverride:(id)arg3 options:(id)arg4 resultsHandler:(/*^block*/id)arg5;
-(void)fetchExperimentWithExperimentDeployment:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

