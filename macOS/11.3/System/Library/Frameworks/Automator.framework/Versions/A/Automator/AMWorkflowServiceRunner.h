/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMWorkflowControllerDelegatePrivate.h>

@class NSURL, NSPasteboard, AMWorkflowController, NSString;

@interface AMWorkflowServiceRunner : NSObject <AMWorkflowControllerDelegatePrivate> {

	NSURL* _workflowURL;
	NSPasteboard* _pasteboard;
	AMWorkflowController* _controller;
	/*^block*/id _completionBlock;

}

@property (retain) NSURL * workflowURL;                             //@synthesize workflowURL=_workflowURL - In the implementation block
@property (retain) NSPasteboard * pasteboard;                       //@synthesize pasteboard=_pasteboard - In the implementation block
@property (retain) AMWorkflowController * controller;               //@synthesize controller=_controller - In the implementation block
@property (copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSPasteboard *)pasteboard;
-(void)setPasteboard:(NSPasteboard *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(AMWorkflowController *)controller;
-(char)presentError:(id)arg1 ;
-(void)setController:(AMWorkflowController *)arg1 ;
-(void)workflowControllerDidRun:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 ;
-(void)workflowController:(id)arg1 didError:(id)arg2 ;
-(void)setWorkflowURL:(NSURL *)arg1 ;
-(id)processInput:(id)arg1 serviceMetaData:(id)arg2 error:(id*)arg3 ;
-(NSURL *)workflowURL;
-(char)getInputFromPasteBoard:(id*)arg1 serviceMetaData:(id)arg2 error:(id*)arg3 ;
-(void)completeWorkflowRunWithController:(id)arg1 workflowResult:(id)arg2 error:(id)arg3 ;
-(char)writeOutputToPasteBoard:(id)arg1 serviceMetaData:(id)arg2 error:(id*)arg3 ;
-(id)initWithWorkflowURL:(id)arg1 pasteboardName:(id)arg2 ;
-(void)runWorkflowWithCompletionBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 ;
@end

