/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/Versions/A/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DESService <NSObject>
@required
-(void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(/*^block*/id)arg4;
-(void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchNativeRecordDataForRecordUUID:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchInstalledBundlesIdsWithCompletion:(/*^block*/id)arg1;
-(void)fetchRecordsForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runEvaluationForBundleId:(id)arg1 recipePath:(id)arg2 recordUUIDs:(id)arg3 attachments:(id)arg4 sandboxExtensions:(id)arg5 completion:(/*^block*/id)arg6;
-(void)runLiveEvaluationForBundleId:(id)arg1 baseURL:(id)arg2 localeIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)runLiveEvaluationForAllBundlesWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fetchTelemetryForBundleId:(id)arg1 completion:(/*^block*/id)arg2;
-(void)postRecipeResultForBundleId:(id)arg1 baseURL:(id)arg2 result:(id)arg3 recipeUUID:(id)arg4 completion:(/*^block*/id)arg5;
-(void)setValue:(id)arg1 forInfoKey:(id)arg2 bundleID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)wakeUpWithCompletion:(/*^block*/id)arg1;

@end

