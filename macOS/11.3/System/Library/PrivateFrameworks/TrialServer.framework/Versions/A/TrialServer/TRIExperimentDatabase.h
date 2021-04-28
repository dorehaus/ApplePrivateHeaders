/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/Versions/A/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrialServer/TrialServer-Structs.h>
@class TRIDatabase;

@interface TRIExperimentDatabase : NSObject {

	TRIDatabase* _db;

}
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(id)experimentRecordWithExperimentDeployment:(id)arg1 ;
-(char)enumerateExperimentRecordsMatchingExperimentId:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)setStatus:(long long)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3 ;
-(char)setTreatmentId:(id)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3 ;
-(char)enumerateExperimentRecordsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)removeExperimentRecordWithExperimentDeployment:(id)arg1 ;
-(unsigned long long)addExperimentWithExperimentDeployment:(id)arg1 environment:(int)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 ;
-(char)namespacesAreAvailableForExperiment:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 namespaces:(id)arg4 ;
-(id)treatmentURLsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 ;
-(char)enumerateNamespaceRecordsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)setTreatmentURL:(id)arg1 forExperimentDeployment:(id)arg2 namespaceName:(id)arg3 ;
-(char)enumerateExperimentRecordsMatchingStatuses:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)_enumerateExperimentRecordsMatchingWhereClause:(id)arg1 bind:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(id)activeExperimentRecordWithTreatmentId:(id)arg1 ;
@end

