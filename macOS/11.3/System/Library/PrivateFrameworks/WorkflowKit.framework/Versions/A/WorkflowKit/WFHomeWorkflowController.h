/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerDelegate.h>

@class WFOutOfProcessWorkflowController, WFHomeWorkflow, NSString;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate> {

	WFOutOfProcessWorkflowController* _workflowController;
	WFHomeWorkflow* _workflow;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFOutOfProcessWorkflowController * workflowController;              //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WFHomeWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (getter=isRunning,nonatomic,readonly) char running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(char)isRunning;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFHomeWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(WFOutOfProcessWorkflowController *)workflowController;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(char)arg3 reference:(id)arg4 dialogAttribution:(id)arg5 ;
@end

