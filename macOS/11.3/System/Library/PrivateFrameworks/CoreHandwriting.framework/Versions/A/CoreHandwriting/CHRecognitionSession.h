/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/CHRecognitionSessionTextInputTaskDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CHStrokeProvider, CHRecognitionSessionDataSource, OS_dispatch_queue;
@class CHRecognitionSessionResult, NSOrderedSet, CHTextInputQuery, CHRecognitionSessionVersion, NSArray, NSMutableDictionary, NSMutableArray, NSObject, CHStrokeClassificationModel, NSData, NSString;

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTextInputTaskDelegate, NSSecureCoding> {

	CHRecognitionSessionResult* _lastRecognitionResult;
	long long _status;
	id<CHStrokeProvider> _latestStrokeProvider;
	NSOrderedSet* _latestStrokeProviderVisibleStrokes;
	CHTextInputQuery* _activeTextInputQuery;
	char _strokeGroupingOnly;
	CHRecognitionSessionResult* _cachedFastGroupingRecognitionResult;
	CHRecognitionSessionResult* _partialRecognitionResult;
	int _autoCapitalizationMode;
	int _autoCorrectionMode;
	CHRecognitionSessionVersion* _sessionVersion;
	char __hasUnprocessedChanges;
	char __shouldForceFastGrouping;
	unsigned __taskQueueQoSClass;
	long long _mode;
	NSArray* _preferredLocales;
	id<CHRecognitionSessionDataSource> _dataSource;
	long long _recognitionEnvironment;
	long long _priority;
	NSArray* __textRecognitionLocales;
	NSMutableDictionary* __recognizersByLocaleID;
	NSArray* __latestTextInputTargets;
	NSMutableDictionary* __correctionRecognizersByLocalesKey;
	unsigned long long __changeCoalescingIndex;
	NSMutableArray* __changeObservers;
	NSMutableArray* __inputDrawingClients;
	NSObject*<OS_dispatch_queue> __tasksWorkQueue;
	NSObject*<OS_dispatch_queue> __sessionQueue;
	NSObject*<OS_dispatch_queue> __highResponsivenessQueue;
	NSMutableArray* __activeTasks;
	CHStrokeClassificationModel* _strokeClassificationModel;

}

@property (assign,nonatomic) char strokeGroupingOnly; 
@property (assign,nonatomic) int autoCapitalizationMode; 
@property (assign,nonatomic) int autoCorrectionMode; 
@property (retain,readonly) CHRecognitionSessionVersion * sessionVersion; 
@property (retain,readonly) CHRecognitionSessionResult * lastRecognitionResult; 
@property (nonatomic,readonly) long long status; 
@property (retain,readonly) id<CHStrokeProvider> latestStrokeProvider; 
@property (assign,nonatomic) CHTextInputQuery * activeTextInputQuery; 
@property (assign,nonatomic) char shouldForceFastGrouping; 
@property (setter=_setTextRecognitionLocales:,nonatomic,copy) NSArray * _textRecognitionLocales;                      //@synthesize _textRecognitionLocales=__textRecognitionLocales - In the implementation block
@property (setter=_setLastRecognitionResult:,retain) CHRecognitionSessionResult * lastRecognitionResult; 
@property (assign,setter=_setStatus:,nonatomic) long long status; 
@property (setter=_setLatestStrokeProvider:,retain) id<CHStrokeProvider> latestStrokeProvider; 
@property (setter=_setSessionVersion:,retain) CHRecognitionSessionVersion * sessionVersion; 
@property (assign,setter=_setHasUnprocessedChanges:,nonatomic) char _hasUnprocessedChanges;                           //@synthesize _hasUnprocessedChanges=__hasUnprocessedChanges - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _recognizersByLocaleID;                                   //@synthesize _recognizersByLocaleID=__recognizersByLocaleID - In the implementation block
@property (setter=_setLatestTextInputTargets:,retain) NSArray * _latestTextInputTargets;                              //@synthesize _latestTextInputTargets=__latestTextInputTargets - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * _correctionRecognizersByLocalesKey;                       //@synthesize _correctionRecognizersByLocalesKey=__correctionRecognizersByLocalesKey - In the implementation block
@property (assign,nonatomic) unsigned long long _changeCoalescingIndex;                                               //@synthesize _changeCoalescingIndex=__changeCoalescingIndex - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _changeObservers;                                              //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _inputDrawingClients;                                          //@synthesize _inputDrawingClients=__inputDrawingClients - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _tasksWorkQueue;                                   //@synthesize _tasksWorkQueue=__tasksWorkQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _sessionQueue;                                     //@synthesize _sessionQueue=__sessionQueue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _highResponsivenessQueue;                          //@synthesize _highResponsivenessQueue=__highResponsivenessQueue - In the implementation block
@property (nonatomic,readonly) unsigned _taskQueueQoSClass;                                                           //@synthesize _taskQueueQoSClass=__taskQueueQoSClass - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * _activeTasks;                                                  //@synthesize _activeTasks=__activeTasks - In the implementation block
@property (nonatomic,retain,readonly) CHStrokeClassificationModel * strokeClassificationModel;                        //@synthesize strokeClassificationModel=_strokeClassificationModel - In the implementation block
@property (setter=_setShouldForceFastGrouping:) char _shouldForceFastGrouping;                                        //@synthesize _shouldForceFastGrouping=__shouldForceFastGrouping - In the implementation block
@property (nonatomic,readonly) long long mode;                                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSArray * preferredLocales;                                                                //@synthesize preferredLocales=_preferredLocales - In the implementation block
@property (nonatomic,copy) NSArray * locales; 
@property (assign,nonatomic) id<CHRecognitionSessionDataSource> dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long recognitionEnvironment;                                                        //@synthesize recognitionEnvironment=_recognitionEnvironment - In the implementation block
@property (assign,nonatomic) long long priority;                                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSData * sessionData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg1 sortedStrokeGroups:(id)arg2 clusteredStrokeGroups:(id)arg3 unusedStrokeIdentifiers:(id*)arg4 ;
+(id)effectiveLocalesFromLocales:(id)arg1 ;
+(id)createRecognizerForLocale:(id)arg1 sessionMode:(long long)arg2 remote:(char)arg3 priority:(long long)arg4 ;
+(id)_cacheKeyForLocales:(id)arg1 ;
+(char)isLocaleSupported:(id)arg1 ;
+(id)createRecognizerForLocales:(id)arg1 sessionMode:(long long)arg2 remote:(char)arg3 priority:(long long)arg4 ;
+(id)_strokeGroupsInProximityOfSubjectStrokeGroups:(id)arg1 clusteredStrokeGroups:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(long long)mode;
-(void)setPriority:(long long)arg1 ;
-(id<CHRecognitionSessionDataSource>)dataSource;
-(void)setDataSource:(id<CHRecognitionSessionDataSource>)arg1 ;
-(long long)priority;
-(id)initWithMode:(long long)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)_sessionQueue;
-(NSData *)sessionData;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(id<CHStrokeProvider>)latestStrokeProvider;
-(id)tokenStrokeIdentifiersForContextStrokes:(id)arg1 point:(CGPoint)arg2 tokenizationLevel:(long long)arg3 completion:(/*^block*/id)arg4 shouldCancel:(/*^block*/id)arg5 ;
-(int)autoCapitalizationMode;
-(int)autoCorrectionMode;
-(void)setAutoCapitalizationMode:(int)arg1 ;
-(void)setAutoCorrectionMode:(int)arg1 ;
-(NSArray *)preferredLocales;
-(long long)recognitionEnvironment;
-(CHTextInputQuery *)activeTextInputQuery;
-(id)textCorrectionRecognizerForLocales:(id)arg1 ;
-(void)setActiveTextInputQuery:(CHTextInputQuery *)arg1 ;
-(CHRecognitionSessionResult *)lastRecognitionResult;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)registerInputDrawingClient:(id)arg1 ;
-(void)unregisterInputDrawingClient:(id)arg1 ;
-(void)waitForPendingRecognitionTasks;
-(id)contextualTextResultsForContextStrokes:(id)arg1 completion:(/*^block*/id)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(CHRecognitionSessionVersion *)sessionVersion;
-(void)_setupExecutionQueuesForMode:(long long)arg1 ;
-(void)_setLatestStrokeProvider:(id)arg1 ;
-(void)_updateLatestStrokeProviderVisibleStrokes;
-(void)_invalidateCachedResults;
-(void)_setTextRecognitionLocales:(id)arg1 ;
-(void)_cleanupCachedRecognizers;
-(char)_isReadyToProcessChanges;
-(void)rebuildRecognitionResults;
-(void)setNeedsRecognitionUpdate;
-(void)setPreferredLocales:(NSArray *)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_setCachedFastGroupingRecognitionResult:(id)arg1 ;
-(void)_setPartialRecognitionResult:(id)arg1 ;
-(char)_hasPendingRecognitionTasks;
-(char)_hasUnprocessedChanges;
-(NSMutableArray *)_changeObservers;
-(NSMutableArray *)_activeTasks;
-(id)indexableContent;
-(void)_setLatestTextInputTargets:(id)arg1 ;
-(void)_setHasUnprocessedChanges:(char)arg1 ;
-(void)_scheduleProcessStrokeProviderChangesImmediately:(char)arg1 ;
-(void)_updateRecognitionSessionStatus;
-(void)_cancelOngoingRequests;
-(unsigned long long)_changeCoalescingIndex;
-(void)set_changeCoalescingIndex:(unsigned long long)arg1 ;
-(void)_setLastRecognitionResult:(id)arg1 ;
-(void)_processPendingStrokeChangesIfAvailable;
-(double)_preferredCoalescingInterval;
-(char)strokeGroupingOnly;
-(id)_newRecognitionSessionTaskWithStrokeGroupingRequirement:(long long)arg1 isHighResponsivenessTask:(char)arg2 strokeGroupingOnly:(char)arg3 subjectStrokeIdentifiers:(id)arg4 partialResultBlock:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)_tasksWorkQueue;
-(CHStrokeClassificationModel *)strokeClassificationModel;
-(void)setStrokeGroupingOnly:(char)arg1 ;
-(NSMutableArray *)_inputDrawingClients;
-(NSMutableDictionary *)_recognizersByLocaleID;
-(char)_shouldRunRecognitionLocally;
-(NSMutableDictionary *)_correctionRecognizersByLocalesKey;
-(id)initWithMode:(long long)arg1 withVersion:(id)arg2 ;
-(void)setRecognitionEnvironment:(long long)arg1 ;
-(void)_setSessionVersion:(id)arg1 ;
-(id)recognizerForLocale:(id)arg1 ;
-(id)initWithMode:(long long)arg1 recognitionSessionResult:(id)arg2 dataSource:(id)arg3 ;
-(char)_validateLastRecognitionResult:(id)arg1 visibleStrokeIdentifiers:(id)arg2 ;
-(id)_cachedFastGroupingResult;
-(id)_cachedClutterFilter;
-(void)cancelOngoingRequests;
-(void)_cancelAllHighResponsivenessTasks;
-(char)loadSessionData:(id)arg1 error:(id*)arg2 ;
-(NSArray *)_textRecognitionLocales;
-(NSArray *)_latestTextInputTargets;
-(NSObject*<OS_dispatch_queue>)_highResponsivenessQueue;
-(unsigned)_taskQueueQoSClass;
-(char)_shouldForceFastGrouping;
-(void)_setShouldForceFastGrouping:(char)arg1 ;
-(id)recognizableDrawingForStrokeGroupQueryItem:(id)arg1 ;
-(id)_strokeIdentifiersFromCachedResultUsingContextStrokes:(id)arg1 tokenizationLevel:(long long)arg2 ;
-(char)shouldForceFastGrouping;
-(id)_strokeGroupsContainingStrokeIdentifiers:(id)arg1 ;
-(id)_strokeIdentifiersInWordsContainingStrokeIdentifiers:(id)arg1 ;
-(id)_strokeIdentifiersInGroupsContainingStrokeIdentifiers:(id)arg1 ;
-(id)_strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg1 ;
-(CGSize)_drawingCanvasSizeForLatestStrokeProviderSnapshot;
-(id)_recognitionSessionResultOnDemandUsingContextStrokes:(id)arg1 shouldCancel:(/*^block*/id)arg2 ;
-(id)_contextualTextResultsFromCachedResultUsingContextStrokes:(id)arg1 shouldCancel:(/*^block*/id)arg2 ;
-(void)setShouldForceFastGrouping:(char)arg1 ;
-(id)lastRecognitionResultWaitingForPendingTasks;
@end
