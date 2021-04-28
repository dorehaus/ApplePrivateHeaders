/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/Versions/A/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IXClientDelegateProtocol <NSObject>
@required
-(oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1 atURL:(id)arg2;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1 forAppAtURL:(id)arg2;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end

