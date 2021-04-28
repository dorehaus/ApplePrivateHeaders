/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXTaskTracking;
@class SAUIDelayedActionCommand;

@interface SVXServiceCommandDelayedAction : NSObject {

	SAUIDelayedActionCommand* _command;
	id<SVXTaskTracking> _taskTracker;

}

@property (nonatomic,copy,readonly) SAUIDelayedActionCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) id<SVXTaskTracking> taskTracker;                      //@synthesize taskTracker=_taskTracker - In the implementation block
-(SAUIDelayedActionCommand *)command;
-(id<SVXTaskTracking>)taskTracker;
-(id)initWithCommand:(id)arg1 taskTracker:(id)arg2 ;
@end

