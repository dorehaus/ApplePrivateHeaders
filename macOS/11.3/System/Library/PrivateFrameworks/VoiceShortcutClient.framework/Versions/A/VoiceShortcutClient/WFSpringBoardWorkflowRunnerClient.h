/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/Versions/A/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFWorkflowRunnerClient.h>
#import <libobjc.A.dylib/WFWorkflowRunnerClientDelegate.h>

@class WFSpringBoardWebClipMetadata, NSString;

@interface WFSpringBoardWorkflowRunnerClient : WFWorkflowRunnerClient <WFWorkflowRunnerClientDelegate> {

	WFSpringBoardWebClipMetadata* _metadata;
	WFSpringBoardWorkflowRunnerClient* _retainedSelf;

}

@property (nonatomic,retain) WFSpringBoardWebClipMetadata * metadata;                       //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) WFSpringBoardWorkflowRunnerClient * retainedSelf;              //@synthesize retainedSelf=_retainedSelf - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(WFSpringBoardWebClipMetadata *)metadata;
-(void)setMetadata:(WFSpringBoardWebClipMetadata *)arg1 ;
-(WFSpringBoardWorkflowRunnerClient *)retainedSelf;
-(void)setRetainedSelf:(WFSpringBoardWorkflowRunnerClient *)arg1 ;
-(id)initWithWorkflowIdentifier:(id)arg1 ;
-(void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(char)arg3 ;
-(id)initWithWebClipMetadata:(id)arg1 ;
-(void)showSingleStepCompletionWithCompletion:(/*^block*/id)arg1 ;
@end

