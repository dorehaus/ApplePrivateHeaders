/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMWorkflowRunnerDelegate <NSObject>
@required
-(void)workflowRunnerWillRun:(id)arg1;
-(void)workflowRunnerDidPause:(id)arg1;
-(void)workflowRunner:(id)arg1 willRunConversion:(id)arg2;
-(void)workflowRunner:(id)arg1 didRunConversion:(id)arg2;
-(void)workflowRunnerDidRun:(id)arg1;
-(void)workflowRunner:(id)arg1 progressDidChange:(id)arg2 forAction:(id)arg3;
-(void)workflowRunnerWillPause:(id)arg1;
-(void)workflowRunner:(id)arg1 didResumeWithAction:(id)arg2;
-(void)workflowRunnerWillStop:(id)arg1;
-(void)workflowRunner:(id)arg1 didError:(id)arg2;
-(void)workflowRunnerDidStop:(id)arg1;
-(void)workflowRunnerDidFinish:(id)arg1;
-(void)workflowRunner:(id)arg1 willRunAction:(id)arg2;
-(void)workflowRunner:(id)arg1 didRunAction:(id)arg2;
-(void)workflowRunner:(id)arg1 didLogMessage:(id)arg2 ofType:(unsigned long long)arg3 fromAction:(id)arg4;

@end

