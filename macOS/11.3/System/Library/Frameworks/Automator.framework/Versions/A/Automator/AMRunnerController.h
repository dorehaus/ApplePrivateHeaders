/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AMWorkflow;


@protocol AMRunnerController <NSObject,AMRunnerState,AMRunnerControl>
@property (getter=isLoading,readonly) char loading; 
@property (readonly) AMWorkflow * workflow; 
@property (assign,nonatomic) char shouldDisplayProgressInMenuBar; 
@property (assign,nonatomic,__weak) id<AMRunnerControllerDelegate> delegate; 
@required
-(id<AMRunnerControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(char)isLoading;
-(AMWorkflow *)workflow;
-(char)shouldDisplayProgressInMenuBar;
-(void)runWithInput:(id)arg1 steppingInitially:(char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setShouldDisplayProgressInMenuBar:(char)arg1;

@end

