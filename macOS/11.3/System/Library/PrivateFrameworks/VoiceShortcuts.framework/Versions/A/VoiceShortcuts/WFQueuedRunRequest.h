/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFWorkflowRunRequest, WFWorkflowRunningContext;

@interface WFQueuedRunRequest : NSObject {

	char _shouldNotifyObservers;
	WFWorkflowRunRequest* _runRequest;
	WFWorkflowRunningContext* _runningContext;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFWorkflowRunRequest * runRequest;                      //@synthesize runRequest=_runRequest - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * runningContext;              //@synthesize runningContext=_runningContext - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) char shouldNotifyObservers;                             //@synthesize shouldNotifyObservers=_shouldNotifyObservers - In the implementation block
-(id)completionHandler;
-(WFWorkflowRunRequest *)runRequest;
-(id)initWithRunRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(WFWorkflowRunningContext *)runningContext;
-(char)shouldNotifyObservers;
@end

