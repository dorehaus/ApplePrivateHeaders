/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSController.h>
#import <libobjc.A.dylib/AMRunnerControllerDelegate.h>

@protocol AMWorkflowControllerDelegate;
@class AMWorkflowView, AMWorkflow, NSWindow, NSUndoManager, NSString;

@interface AMWorkflowController : NSController <AMRunnerControllerDelegate> {

	AMWorkflowView* workflowView;
	AMWorkflow* _workflow;
	id _runner;
	id _runnerInterface;
	id _eventMonitor;
	id<AMWorkflowControllerDelegate> _delegate;
	struct {
		unsigned shouldRunLocally : 1;
		unsigned isRunningLocally : 1;
		unsigned shouldDisplayProgressInMenuBar : 1;
		unsigned reserved : 29;
	}  _flags;
	AMWorkflowControllerDelegateRespondTo _delegateRespondTo;
	id _future;
	id _future2;
	id _future3;
	id _future4;

}

@property (assign) _AMWorkflowControllerDelegateRespondTo delegateRespondTo;                                   //@synthesize delegateRespondTo=_delegateRespondTo - In the implementation block
@property (assign) _AMWorkflowControllerFlags flags;                                                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,__weak,readonly) id<AMWorkflowControllerDelegatePrivate> privateDelegate; 
@property (retain) id<AMRunnerController> runnerController;                                                    //@synthesize runner=_runner - In the implementation block
@property (getter=isRunningLocally,nonatomic,readonly) char runninglocally; 
@property (assign,setter=setRunLocally:,getter=shouldRunLocally,nonatomic) char shouldRunLocally; 
@property (assign,nonatomic) char shouldDisplayProgressInMenuBar; 
@property (nonatomic,readonly) NSWindow * window; 
@property (nonatomic,readonly) NSUndoManager * _undoManager; 
@property (nonatomic,retain) AMWorkflow * workflow;                                                            //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) AMWorkflowView * workflowView; 
@property (assign,nonatomic,__weak) id<AMWorkflowControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char canRun; 
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (getter=isPaused,nonatomic,readonly) char paused; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pasteboardTypes;
-(_AMWorkflowControllerFlags)flags;
-(void)dealloc;
-(id)init;
-(id<AMWorkflowControllerDelegate>)delegate;
-(void)setDelegate:(id<AMWorkflowControllerDelegate>)arg1 ;
-(id)UUID;
-(NSWindow *)window;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isRunning;
-(char)isPaused;
-(void)reset:(id)arg1 ;
-(void)setFlags:(_AMWorkflowControllerFlags)arg1 ;
-(void)stop:(id)arg1 ;
-(NSUndoManager *)_undoManager;
-(id<AMWorkflowControllerDelegatePrivate>)privateDelegate;
-(void)run:(id)arg1 ;
-(AMWorkflow *)workflow;
-(void)setWorkflow:(AMWorkflow *)arg1 ;
-(void)step:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(char)canRun;
-(id)addVariable:(id)arg1 ;
-(void)actionWasModified:(id)arg1 ;
-(void)actionWasRenamed:(id)arg1 ;
-(void)actionDidChangeInputType:(id)arg1 ;
-(void)actionDidChangeOutputType:(id)arg1 ;
-(char)shouldDisplayProgressInMenuBar;
-(void)setShouldDisplayProgressInMenuBar:(char)arg1 ;
-(void)workflowWasModified;
-(AMWorkflowView *)workflowView;
-(void)workflowWillAddAction:(id)arg1 ;
-(void)workflowDidAddAction:(id)arg1 ;
-(void)workflowDidRemoveAction:(id)arg1 ;
-(void)workflowDidMoveAction:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)workflowDidAddVariable:(id)arg1 ;
-(void)actionDidChangeConnections:(id)arg1 ;
-(id)_addActionWithBundleIdentifier:(id)arg1 ;
-(void)removeVariable:(id)arg1 ;
-(id<AMRunnerController>)runnerController;
-(_AMWorkflowControllerDelegateRespondTo)delegateRespondTo;
-(char)shouldRunLocally;
-(void)setRunnerController:(id<AMRunnerController>)arg1 ;
-(void)updateCanRun;
-(void)_runWarningAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)_shouldRunAfterShowingWarning;
-(void)_runSteppingInitially:(char)arg1 ;
-(void)_reallyRemoveVariable:(id)arg1 ;
-(void)reallyDeleteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)workflowShouldAddVariablesWithPropertyLists:(id)arg1 ;
-(void)_insertActions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)workflowViewSelectionDidChange:(id)arg1 ;
-(void)runnerControllerDidStop:(id)arg1 ;
-(char)_shouldDisplayWarningForAction:(id)arg1 givenPreviousAction:(id)arg2 ;
-(void)_warningAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_insertActionsWithSettingsDictionary:(id)arg1 ;
-(void)_insertActions:(id)arg1 atIndex:(unsigned long long)arg2 displayWarnings:(char)arg3 refuseDeprecatedActions:(char)arg4 ;
-(void)_showDeprecatedSheetForAction:(id)arg1 ;
-(void)_displayWarningsForActions:(id)arg1 toInsertAtIndex:(unsigned long long)arg2 ;
-(void)runnerControllerWillRun:(id)arg1 ;
-(void)runnerController:(id)arg1 willRunAction:(id)arg2 ;
-(void)runnerController:(id)arg1 didRunAction:(id)arg2 ;
-(void)runnerController:(id)arg1 progressDidChange:(id)arg2 forAction:(id)arg3 ;
-(void)runnerControllerDidRun:(id)arg1 ;
-(void)runnerControllerDidFinish:(id)arg1 ;
-(void)runnerController:(id)arg1 didError:(id)arg2 ;
-(void)runnerControllerWillStop:(id)arg1 ;
-(void)runnerControllerWillPause:(id)arg1 ;
-(void)runnerControllerDidPause:(id)arg1 ;
-(void)runnerController:(id)arg1 didLogMessage:(id)arg2 ofType:(unsigned long long)arg3 fromAction:(id)arg4 ;
-(void)runnerController:(id)arg1 willRunConversion:(id)arg2 ;
-(void)runnerController:(id)arg1 didRunConversion:(id)arg2 ;
-(void)runnerController:(id)arg1 didResumeWithAction:(id)arg2 ;
-(void)setWorkflowView:(AMWorkflowView *)arg1 ;
-(void)setRunLocally:(char)arg1 ;
-(char)isRunningLocally;
-(void)inspect:(id)arg1 ;
-(char)workflowWouldAddVariable:(id)arg1 ;
-(void)workflowShouldAddActionsWithDefinitions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_insertAction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDelegateRespondTo:(_AMWorkflowControllerDelegateRespondTo)arg1 ;
-(void)addActionsWithDataFromPasteboard:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)addActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withParameters:(id)arg3 ;
-(id)itemsFromPasteboard:(id)arg1 withSpecifiedItemsActionWithBundleID:(id)arg2 ;
-(void)addSpecifiedItemsActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withItems:(id)arg3 ;
-(void)addAddressBookItemsActionAtIndex:(unsigned long long)arg1 withItemsFromPasteboard:(id)arg2 ;
-(void)addSpecifiedItemsActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withItemsFromPasteboard:(id)arg3 ;
-(void)addRunWorkflowActionAtIndex:(unsigned long long)arg1 withWorkflowPath:(id)arg2 ;
-(void)addSpecifiedURLsActionAtIndex:(unsigned long long)arg1 withItemsFromPasteboard:(id)arg2 ;
-(void)addFinderItemsActionAtIndex:(unsigned long long)arg1 withItemsFromPasteboard:(id)arg2 ;
@end

