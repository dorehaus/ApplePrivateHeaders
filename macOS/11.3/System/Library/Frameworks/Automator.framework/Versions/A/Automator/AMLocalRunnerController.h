/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMWorkflowRunnerDelegate.h>
#import <libobjc.A.dylib/AMRunnerController.h>

@protocol AMRunnerControllerDelegate;
@class AMWorkflow, AMWorkflowRunner, NSProgress, NSError, NSString;

@interface AMLocalRunnerController : NSObject <AMWorkflowRunnerDelegate, AMRunnerController> {

	char _shouldDisplayProgressInMenuBar;
	AMWorkflow* _workflow;
	AMWorkflowRunner* _runner;
	id<AMRunnerControllerDelegate> _delegate;
	/*^block*/id _completionHandler;
	NSProgress* _progress;
	char _stopped;
	id _outputToCompleteWith;
	NSError* _errorToCompleteWith;

}

@property (retain) AMWorkflow * workflow;                                                 //@synthesize workflow=_workflow - In the implementation block
@property (retain) AMWorkflowRunner * runner;                                             //@synthesize runner=_runner - In the implementation block
@property (copy) id completionHandler;                                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) NSProgress * progress;                                                 //@synthesize progress=_progress - In the implementation block
@property (assign) char stopped;                                                          //@synthesize stopped=_stopped - In the implementation block
@property (retain) id outputToCompleteWith;                                               //@synthesize outputToCompleteWith=_outputToCompleteWith - In the implementation block
@property (retain) NSError * errorToCompleteWith;                                         //@synthesize errorToCompleteWith=_errorToCompleteWith - In the implementation block
@property (assign,nonatomic) char shouldDisplayProgressInMenuBar;                         //@synthesize shouldDisplayProgressInMenuBar=_shouldDisplayProgressInMenuBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isLoading,readonly) char loading; 
@property (assign,nonatomic,__weak) id<AMRunnerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIdle,readonly) char idle; 
@property (getter=isRunning,readonly) char running; 
@property (getter=isPaused,readonly) char paused; 
@property (getter=isStopping,readonly) char stopping; 
+(id)localRunnerControllerWithWorkflow:(id)arg1 error:(id*)arg2 ;
+(id)scriptMonitorURL;
-(id<AMRunnerControllerDelegate>)delegate;
-(void)setDelegate:(id<AMRunnerControllerDelegate>)arg1 ;
-(void)resume;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)stopped;
-(NSProgress *)progress;
-(char)isRunning;
-(char)isPaused;
-(void)step;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setProgress:(NSProgress *)arg1 ;
-(char)isLoading;
-(AMWorkflow *)workflow;
-(void)setWorkflow:(AMWorkflow *)arg1 ;
-(id)initWithWorkflow:(id)arg1 ;
-(void)setStopped:(char)arg1 ;
-(void)setRunner:(AMWorkflowRunner *)arg1 ;
-(AMWorkflowRunner *)runner;
-(void)stopWithError:(id)arg1 ;
-(char)isIdle;
-(char)isStopping;
-(char)shouldDisplayProgressInMenuBar;
-(void)runWithInput:(id)arg1 steppingInitially:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setShouldDisplayProgressInMenuBar:(char)arg1 ;
-(void)workflowRunnerWillRun:(id)arg1 ;
-(void)workflowRunnerDidPause:(id)arg1 ;
-(void)workflowRunner:(id)arg1 willRunConversion:(id)arg2 ;
-(void)workflowRunner:(id)arg1 didRunConversion:(id)arg2 ;
-(void)workflowRunnerDidRun:(id)arg1 ;
-(void)workflowRunner:(id)arg1 progressDidChange:(id)arg2 forAction:(id)arg3 ;
-(void)workflowRunnerWillPause:(id)arg1 ;
-(void)workflowRunner:(id)arg1 didResumeWithAction:(id)arg2 ;
-(void)workflowRunnerWillStop:(id)arg1 ;
-(void)workflowRunner:(id)arg1 didError:(id)arg2 ;
-(void)workflowRunnerDidStop:(id)arg1 ;
-(void)workflowRunnerDidFinish:(id)arg1 ;
-(void)workflowRunner:(id)arg1 willRunAction:(id)arg2 ;
-(void)workflowRunner:(id)arg1 didRunAction:(id)arg2 ;
-(void)workflowRunner:(id)arg1 didLogMessage:(id)arg2 ofType:(unsigned long long)arg3 fromAction:(id)arg4 ;
-(void)activateShowingProgressViaScriptMonitor;
-(void)deactivateShowingProgressViaScriptMonitor;
-(char)launchScriptMonitorReturningSuccess;
-(void)setOutputToCompleteWith:(id)arg1 ;
-(void)setErrorToCompleteWith:(NSError *)arg1 ;
-(id)outputToCompleteWith;
-(NSError *)errorToCompleteWith;
-(void)completeWithOutput:(id)arg1 error:(id)arg2 ;
@end

