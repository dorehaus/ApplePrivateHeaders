/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMRunnerControl.h>
#import <libobjc.A.dylib/NSProgressReporting.h>
#import <libobjc.A.dylib/AMActionRunnerProtocol.h>

@protocol AMWorkflowRunnerDelegate;
@class NSProgress, NSArray, NSString, AMFFeedController, AMWorkflow, NSObject, NSMutableArray, NSError, AMAction, NSMutableDictionary, NSOperationQueue, NSMapTable;

@interface AMWorkflowRunner : NSObject <AMRunnerControl, NSProgressReporting, AMActionRunnerProtocol> {

	char _isLooping;
	char _shouldPauseBeforeNextAction;
	unsigned long long _state;
	AMWorkflow* _workflow;
	NSObject*<AMWorkflowRunnerDelegate> _delegate;
	NSObject*<AMWorkflowRunnerDelegate> _owner;
	NSMutableArray* _runningActions;
	NSError* _currentError;
	id _currentData;
	AMAction* _lastRunAction;
	NSArray* _loopData;
	NSArray* _loopActions;
	NSMutableDictionary* _loopOutput;
	unsigned long long _loopIndex;
	unsigned long long _numberOfTimesToLoop;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _progressValueObservedList;
	NSMutableArray* _actionOperationObservedList;
	unsigned long long _runNumber;
	double _startTime;
	double _endTime;
	NSProgress* _workflowProgress;
	NSProgress* _actionProgress;
	NSMapTable* _childProgressesByAction;
	AMFFeedController* _feedController;
	NSString* _workflowID;
	NSString* _currentRunUUID;

}

@property (retain) NSMutableArray * runningActions;                                         //@synthesize runningActions=_runningActions - In the implementation block
@property (retain) NSError * currentError;                                                  //@synthesize currentError=_currentError - In the implementation block
@property (nonatomic,retain) id currentData;                                                //@synthesize currentData=_currentData - In the implementation block
@property (__weak) AMAction * lastRunAction;                                                //@synthesize lastRunAction=_lastRunAction - In the implementation block
@property (retain) NSArray * loopData;                                                      //@synthesize loopData=_loopData - In the implementation block
@property (retain) NSArray * loopActions;                                                   //@synthesize loopActions=_loopActions - In the implementation block
@property (retain) NSMutableDictionary * loopOutput;                                        //@synthesize loopOutput=_loopOutput - In the implementation block
@property (assign) char isLooping;                                                          //@synthesize isLooping=_isLooping - In the implementation block
@property (assign) unsigned long long loopIndex;                                            //@synthesize loopIndex=_loopIndex - In the implementation block
@property (assign) unsigned long long numberOfTimesToLoop;                                  //@synthesize numberOfTimesToLoop=_numberOfTimesToLoop - In the implementation block
@property (assign) unsigned long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign) char shouldPauseBeforeNextAction;                                        //@synthesize shouldPauseBeforeNextAction=_shouldPauseBeforeNextAction - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSMutableArray * progressValueObservedList;                              //@synthesize progressValueObservedList=_progressValueObservedList - In the implementation block
@property (retain) NSMutableArray * actionOperationObservedList;                            //@synthesize actionOperationObservedList=_actionOperationObservedList - In the implementation block
@property (assign) unsigned long long runNumber;                                            //@synthesize runNumber=_runNumber - In the implementation block
@property (assign) double startTime;                                                        //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                                                          //@synthesize endTime=_endTime - In the implementation block
@property (retain) NSProgress * workflowProgress;                                           //@synthesize workflowProgress=_workflowProgress - In the implementation block
@property (retain) NSProgress * actionProgress;                                             //@synthesize actionProgress=_actionProgress - In the implementation block
@property (retain) NSMapTable * childProgressesByAction;                                    //@synthesize childProgressesByAction=_childProgressesByAction - In the implementation block
@property (nonatomic,retain) AMFFeedController * feedController;                            //@synthesize feedController=_feedController - In the implementation block
@property (nonatomic,copy) NSString * workflowID;                                           //@synthesize workflowID=_workflowID - In the implementation block
@property (nonatomic,copy) NSString * currentRunUUID;                                       //@synthesize currentRunUUID=_currentRunUUID - In the implementation block
@property (nonatomic,retain) AMWorkflow * workflow;                                         //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) NSObject*<AMWorkflowRunnerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<AMWorkflowRunnerDelegate> owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
@property (readonly) double totalRunTime; 
@property (getter=isIdle,readonly) char idle; 
@property (getter=isRunning,readonly) char running; 
@property (getter=isPaused,readonly) char paused; 
@property (getter=isStopping,readonly) char stopping; 
+(id)progressForWorkflow:(id)arg1 ;
+(id)_operationKeysToObserve;
-(void)run;
-(void)dealloc;
-(id)init;
-(NSObject*<AMWorkflowRunnerDelegate>)delegate;
-(void)setDelegate:(NSObject*<AMWorkflowRunnerDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setOwner:(NSObject*<AMWorkflowRunnerDelegate>)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)pause;
-(NSObject*<AMWorkflowRunnerDelegate>)owner;
-(void)finish;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSProgress *)progress;
-(char)isRunning;
-(char)isPaused;
-(void)step;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(NSError *)currentError;
-(AMWorkflow *)workflow;
-(void)setWorkflow:(AMWorkflow *)arg1 ;
-(void)cleanUp;
-(void)setIsLooping:(char)arg1 ;
-(char)isLooping;
-(void)stopWithError:(id)arg1 ;
-(char)isIdle;
-(void)runAction:(id)arg1 ;
-(char)isStopping;
-(void)setCurrentError:(NSError *)arg1 ;
-(void)setCurrentData:(id)arg1 ;
-(id)currentData;
-(void)reportErrors;
-(void)actionDidRun:(id)arg1 error:(id)arg2 ;
-(void)logMessage:(id)arg1 withLevel:(unsigned long long)arg2 fromAction:(id)arg3 ;
-(NSMutableArray *)runningActions;
-(NSString *)workflowID;
-(NSString *)currentRunUUID;
-(void)setProgressValueObservedList:(NSMutableArray *)arg1 ;
-(void)setFeedController:(AMFFeedController *)arg1 ;
-(void)setActionOperationObservedList:(NSMutableArray *)arg1 ;
-(void)_clearAllActionOperationObserving;
-(void)_clearAllProgressObserving;
-(NSProgress *)workflowProgress;
-(void)_workflowRunner_didResumeWithActionOnMainThread:(id)arg1 ;
-(AMAction *)lastRunAction;
-(void)setLastRunAction:(AMAction *)arg1 ;
-(void)runChildrenOfAction:(id)arg1 ;
-(id)preflightWorkflow;
-(unsigned long long)runNumber;
-(void)setRunNumber:(unsigned long long)arg1 ;
-(void)setWorkflowProgress:(NSProgress *)arg1 ;
-(void)setChildProgressesByAction:(NSMapTable *)arg1 ;
-(AMFFeedController *)feedController;
-(void)setRunningActions:(NSMutableArray *)arg1 ;
-(void)setLoopActions:(NSArray *)arg1 ;
-(void)setLoopData:(NSArray *)arg1 ;
-(void)setLoopOutput:(NSMutableDictionary *)arg1 ;
-(void)setLoopIndex:(unsigned long long)arg1 ;
-(void)setNumberOfTimesToLoop:(unsigned long long)arg1 ;
-(void)setWorkflowID:(NSString *)arg1 ;
-(void)setCurrentRunUUID:(NSString *)arg1 ;
-(id)temporaryItemsPath;
-(void)workflowStopped;
-(void)enqueueAction:(id)arg1 ;
-(void)runAction:(id)arg1 withInput:(id)arg2 loopParent:(id)arg3 ;
-(NSArray *)loopActions;
-(unsigned long long)loopIndex;
-(unsigned long long)numberOfTimesToLoop;
-(NSArray *)loopData;
-(void)saveLoopOutputAndReset;
-(void)workflowCompleted;
-(char)shouldPauseBeforeNextAction;
-(void)setShouldPauseBeforeNextAction:(char)arg1 ;
-(void)runNextActionAndConvertDataFromAction:(id)arg1 ;
-(void)_workflowRunner_willRunConversionOnMainThread:(id)arg1 ;
-(void)_workflowRunner_didRunConversionOnMainThread:(id)arg1 ;
-(id)loopActionsStartingWithAction:(id)arg1 ;
-(void)actionWillRun:(id)arg1 ;
-(void)completeWorkflowProgress;
-(NSMutableArray *)actionOperationObservedList;
-(void)_unobserveActionOperation:(id)arg1 ;
-(NSMutableArray *)progressValueObservedList;
-(void)_removeProgressObservingForActionIfNeeded:(id)arg1 ;
-(void)_observeActionOperation:(id)arg1 ;
-(void)startProgressForAction:(id)arg1 ;
-(void)completeProgressForAction:(id)arg1 ;
-(void)updateProgressForAction:(id)arg1 ;
-(void)_observeValueOnMainThreadWithDictionary:(id)arg1 ;
-(void)_workflowRunner_didRunActionOnMainThread:(id)arg1 ;
-(NSMutableDictionary *)loopOutput;
-(void)_workflowRunner_reportErrorOnMainThread:(id)arg1 ;
-(double)totalRunTime;
-(void)clearWorkflowProgress;
-(void)_addProgressObservingForActionIfNeeded:(id)arg1 ;
-(void)_workflowRunner_willRunActionOnMainThread:(id)arg1 ;
-(id)errorWithError:(id)arg1 fromAction:(id)arg2 ;
-(void)_workflowRunner_actionErrorOnMainThreadWithDictionary:(id)arg1 ;
-(void)_workflowRunner_logMessageOnMainThread:(id)arg1 ;
-(NSMapTable *)childProgressesByAction;
-(void)setActionProgress:(NSProgress *)arg1 ;
-(NSProgress *)actionProgress;
-(void)loopWorkflowFromAction:(id)arg1 withInput:(id)arg2 ;
@end

