/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIXPCInternalServiceProtocol
@required
-(void)taskRecordsWithCompletion:(/*^block*/id)arg1;
-(void)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4;
-(void)submitTask:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4;
-(void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(/*^block*/id)arg8;
-(void)deregisterNamespaceWithNamespaceName:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3;
-(void)startDownloadNamespaceWithName:(id)arg1 teamId:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)dynamicNamespaceRecordsWithCompletion:(/*^block*/id)arg1;

@end

