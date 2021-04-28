/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/WFActionParameterInputProvider.h>
#import <libobjc.A.dylib/WFSiriUserInterface.h>

@protocol WFLWorkflowControllerDelegate;
@class NSArray, WFWorkflowController, INInteraction, WFWorkflowRunEvent, WFWorkflow, NSProgress, NSString;

@interface WFLWorkflowController : NSObject <WFWorkflowControllerDelegate, WFActionParameterInputProvider, WFSiriUserInterface> {

	NSArray* _airPlayRouteIDs;
	id<WFLWorkflowControllerDelegate> _delegate;
	long long _executionContext;
	WFWorkflowController* _controller;
	INInteraction* _lastInteraction;
	WFWorkflowRunEvent* _runEvent;

}

@property (nonatomic,readonly) WFWorkflowController * controller;                            //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) INInteraction * lastInteraction;                                //@synthesize lastInteraction=_lastInteraction - In the implementation block
@property (nonatomic,retain) WFWorkflowRunEvent * runEvent;                                  //@synthesize runEvent=_runEvent - In the implementation block
@property (assign,nonatomic,__weak) id<WFLWorkflowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow; 
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (nonatomic,readonly) NSProgress * progress; 
@property (assign,nonatomic) long long executionContext;                                     //@synthesize executionContext=_executionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs;                               //@synthesize airPlayRouteIDs=_airPlayRouteIDs - In the implementation block
@property (nonatomic,readonly) NSString * userInterfaceType; 
-(id<WFLWorkflowControllerDelegate>)delegate;
-(void)setDelegate:(id<WFLWorkflowControllerDelegate>)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stop;
-(NSProgress *)progress;
-(char)isRunning;
-(WFWorkflowController *)controller;
-(WFWorkflow *)workflow;
-(long long)executionContext;
-(void)setExecutionContext:(long long)arg1 ;
-(id)initWithWorkflow:(id)arg1 ;
-(void)runWithInput:(id)arg1 ;
-(id)runSource;
-(NSString *)userInterfaceType;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(void)presentAlert:(id)arg1 ;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureIntent:(id)arg1 ;
-(char)isRunningInSiri;
-(NSArray *)airPlayRouteIDs;
-(void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)action:(id)arg1 canProvideInputForParameter:(id)arg2 ;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(char)arg3 ;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2 ;
-(void)launchAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showConfirmInteraction:(id)arg1 requireAuthentication:(char)arg2 requireConfirmation:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(INInteraction *)lastInteraction;
-(void)setLastInteraction:(INInteraction *)arg1 ;
-(WFWorkflowRunEvent *)runEvent;
-(void)setRunEvent:(WFWorkflowRunEvent *)arg1 ;
@end

