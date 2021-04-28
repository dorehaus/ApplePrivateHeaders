/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DiagnosticReportGeneratorDelegate.h>
#import <libobjc.A.dylib/DiagnosticLiaisonDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, DiagnosticCaseManagerStorageDelegate;
@class AnalyticsWorkspace, NSMutableArray, NSMutableSet, DiagnosticCaseStorageAnalytics, DiagnosticCaseSummaryAnalytics, DiagnosticStatisticsManager, DiagnosticsController, DiagnosticLiaison, NSObject, NSMutableDictionary, ABCConfigurationManager, NSString;

@interface DiagnosticCaseManager : NSObject <DiagnosticReportGeneratorDelegate, DiagnosticLiaisonDelegate> {

	AnalyticsWorkspace* _workspace;
	NSMutableArray* _pendingStatisticsUpdateCases;
	NSMutableSet* _reportOutlets;
	long long _saveCount;
	NSMutableArray* _requestedReportGenerators;
	DiagnosticCaseStorageAnalytics* _caseStorageAnalytics;
	DiagnosticCaseSummaryAnalytics* _caseSummaryAnalytics;
	DiagnosticStatisticsManager* _statsManager;
	DiagnosticsController* _diagnosticsController;
	DiagnosticLiaison* _liaison;
	NSObject*<OS_dispatch_source> periodicTimer;
	char _initializationComplete;
	NSMutableSet* sessionsWaitingToEnd;
	NSMutableDictionary* activeProbes;
	NSMutableDictionary* activeIDSMessages;
	NSMutableDictionary* _activeTransactions;
	char _shouldPurgeStorageAfterSave;
	unsigned _avgCasesPerDay;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _reportGenerators;
	NSMutableArray* _activeCases;
	NSMutableArray* _totalCases;
	id<DiagnosticCaseManagerStorageDelegate> _storageDelegate;

}

@property (nonatomic,readonly) DiagnosticLiaison * liaison;                                                //@synthesize liaison=_liaison - In the implementation block
@property (nonatomic,readonly) DiagnosticsController * diagnosticsController; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) DiagnosticStatisticsManager * statsManager;                                 //@synthesize statsManager=_statsManager - In the implementation block
@property (nonatomic,readonly) ABCConfigurationManager * configManager; 
@property (nonatomic,readonly) NSMutableDictionary * reportGenerators;                                     //@synthesize reportGenerators=_reportGenerators - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * activeCases;                                          //@synthesize activeCases=_activeCases - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * totalCases;                                           //@synthesize totalCases=_totalCases - In the implementation block
@property (assign,nonatomic) unsigned avgCasesPerDay;                                                      //@synthesize avgCasesPerDay=_avgCasesPerDay - In the implementation block
@property (assign,nonatomic,__weak) id<DiagnosticCaseManagerStorageDelegate> storageDelegate;              //@synthesize storageDelegate=_storageDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isString:(id)arg1 inExceptionList:(id)arg2 ;
+(char)isException:(id)arg1 containedInString:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)shutdown;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)listCaseSummariesWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)listCaseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)resetAll;
-(void)setStorageDelegate:(id<DiagnosticCaseManagerStorageDelegate>)arg1 ;
-(id<DiagnosticCaseManagerStorageDelegate>)storageDelegate;
-(id)diagnosticCaseWithId:(id)arg1 ;
-(void)requestSnapshotWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3 ;
-(void)remoteTriggerDeliveryUpdateEvent:(id)arg1 ;
-(void)startSessionWithSignature:(id)arg1 flags:(unsigned long long)arg2 preferredTimeout:(double)arg3 events:(id)arg4 payload:(id)arg5 actions:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)endSessionWithIdentifier:(id)arg1 forced:(char)arg2 ;
-(void)cancelSessionWithIdentifier:(id)arg1 ;
-(DiagnosticStatisticsManager *)statsManager;
-(void)getHistoricalDiagnosicCaseDictionaryFromIdentifier:(id)arg1 withEvents:(char)arg2 count:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)resetDiagnosticCaseStorage;
-(void)payloadsForSignatures:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startPeriodicTimer;
-(void)stopPeriodicTimer;
-(void)updateAverageCasesPerDay;
-(id)initWithWorkspace:(id)arg1 liaison:(id)arg2 ;
-(void)forceCloseDiagnosticCaseStorage;
-(char)hasOpenCases;
-(unsigned)avgCasesPerDay;
-(void)configureWithWorkspace:(id)arg1 ;
-(ABCConfigurationManager *)configManager;
-(void)addCaseReportOutlet:(id)arg1 ;
-(void)setUpGeneralCaseReportGenerators;
-(void)_saveAllCases;
-(void)removeClosedCasesFromTotalCases;
-(unsigned)defaultDampeningFactorForSignature:(id)arg1 limit:(long long)arg2 ;
-(char)disableDampening;
-(long long)dailyCountLimitForDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 domainPredicates:(id)arg4 ;
-(unsigned)dampeningFactorForSignature:(id)arg1 caseTime:(id)arg2 limit:(long long)arg3 ;
-(char)allowDampeningExceptionFor:(id)arg1 ;
-(char)isAllowedTransientException:(id)arg1 ;
-(char)isAdmissible:(id)arg1 dampenedBy:(short*)arg2 ;
-(void)promoteTemporaryCase:(id)arg1 ;
-(char)statisticsRowForDiagnosticCase:(id)arg1 matchesWith:(id)arg2 ;
-(void)startCollectingNextReportForDiagnosticCase:(id)arg1 ;
-(id)lookUpDiagnosticCaseStorageForUUID:(id)arg1 ;
-(id)createTemporaryDiagnosticCaseStorageForUUID:(id)arg1 ;
-(void)postProcessActionsForClosedCase:(id)arg1 ;
-(void)_updateCaseStatisticsWithCase:(id)arg1 ;
-(void)removeCaseStorageWithID:(id)arg1 ;
-(void)removeTransientCasesWithSignature:(id)arg1 beforeTime:(double)arg2 ;
-(void)saveAllCases;
-(void)removeTransactionForCaseID:(id)arg1 ;
-(DiagnosticsController *)diagnosticsController;
-(id)diagnosticCaseDictionariesFromIdentifier:(id)arg1 withEvents:(char)arg2 count:(unsigned long long)arg3 ;
-(id)caseSummariesWithIdentifiers:(id)arg1 ;
-(id)caseSummariesOfType:(id)arg1 fromIdentifier:(id)arg2 count:(unsigned long long)arg3 ;
-(DiagnosticLiaison *)liaison;
-(void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)_processActionsForPacketCaptureProbe:(id)arg1 session:(id)arg2 ;
-(void)startPacketCaptureForSession:(id)arg1 duration:(id)arg2 ;
-(void)periodicSessionManagement;
-(NSMutableArray *)activeCases;
-(void)endSessions:(id)arg1 forced:(char)arg2 ;
-(void)endSessionIfProbesCompletedFor:(id)arg1 ;
-(void)endSessionWithIdentifier:(id)arg1 forced:(char)arg2 onlyIfReady:(char)arg3 ;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)_updateSignatureWithBuildVariantInfoAndFlags:(id)arg1 ;
-(id)createDiagnosticCaseWithSignature:(id)arg1 flags:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 ;
-(void)addTransactionForCaseID:(id)arg1 ;
-(void)_processReportActions:(id)arg1 session:(id)arg2 ;
-(void)_processRemoteIDSTriggers:(id)arg1 validFor:(double)arg2 signature:(id)arg3 sessionID:(id)arg4 reply:(/*^block*/id)arg5 ;
-(unsigned long long)_processProbeActions:(id)arg1 session:(id)arg2 ;
-(int)addToCaseWithId:(id)arg1 events:(id)arg2 payload:(id)arg3 ;
-(int)addSignatureContentToCaseWithId:(id)arg1 key:(id)arg2 content:(id)arg3 ;
-(void)cancelProbesForSession:(id)arg1 ;
-(char)finalizeDiagnosticCaseWithId:(id)arg1 closureType:(short)arg2 onlyIfReady:(char)arg3 ;
-(void)endSession:(id)arg1 forced:(char)arg2 onlyIfReady:(char)arg3 ;
-(int)cancelCaseWithId:(id)arg1 ;
-(void)removeAllCases;
-(void)setAvgCasesPerDay:(unsigned)arg1 ;
-(id)casesMatchingDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 process:(id)arg4 withinLast:(double)arg5 ;
-(void)_forceCloseDiagnosticCaseStorage;
-(void)reportGeneratorEnded:(id)arg1 reportInfo:(id)arg2 error:(id)arg3 ;
-(id)caseStorageAnalytics;
-(id)casesDiagnosedInTheLast:(double)arg1 from:(double)arg2 matchingDomain:(id)arg3 ;
-(id)caseStorageForCaseID:(id)arg1 ;
-(char)closeCase:(id)arg1 ;
-(unsigned long long)collectDiagnosticExtensionLogsWithParameters:(id)arg1 options:(id)arg2 diagCase:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)recordDiagnosticCaseSummaryForCase:(id)arg1 ;
-(char)requestReportGenerator:(id)arg1 options:(id)arg2 ;
-(char)sendReportsForCase:(id)arg1 ;
-(void)_processTriggerActions:(id)arg1 session:(id)arg2 ;
-(void)updateSignatureWithBundleIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)responseDictWithSuccess:(char)arg1 sessionId:(id)arg2 reasonCode:(long long)arg3 ;
-(void)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 triggerRemote:(char)arg5 queue:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)resetAllForCustomerBuilds;
-(NSMutableDictionary *)reportGenerators;
-(NSMutableArray *)totalCases;
@end

