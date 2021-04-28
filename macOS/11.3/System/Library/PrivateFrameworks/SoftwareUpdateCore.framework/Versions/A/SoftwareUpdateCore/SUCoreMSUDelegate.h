/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUCoreMSUDelegate <NSObject>
@optional
-(void)msuBrainLoadProgress:(id)arg1;
-(void)msuBrainLoadStalled:(id)arg1;
-(void)msuBrainLoaded:(id)arg1;
-(void)msuBrainLoadFailed:(id)arg1;
-(void)msuSUDownloadPreflighted;
-(void)msuSUDownloadPreflightFailed:(id)arg1;
-(void)msuPersonalizePreflighted;
-(void)msuPersonalizePreflightFailed:(id)arg1;
-(void)msuFDRRecoveryPreflighted;
-(void)msuFDRRecoveryPreflightFailed:(id)arg1;
-(void)msuWakeupPreflighted;
-(void)msuWakeupPreflightFailed:(id)arg1;
-(void)msuPrerequisiteCheckPreflighted;
-(void)msuPrerequisiteCheckPreflightFailed:(id)arg1;
-(void)msuPrepareProgress:(id)arg1;
-(void)msuPrepared:(id)arg1;
-(void)msuPrepareFailed:(id)arg1;
-(void)msuSuspended;
-(void)msuSuspendFailed:(id)arg1;
-(void)msuResumed;
-(void)msuResumeFailed:(id)arg1;
-(void)msuApplied;
-(void)msuApplyFailed:(id)arg1;
-(void)msuRemoved;
-(void)msuRemoveFailed:(id)arg1;
-(void)msuAnomaly:(id)arg1;

@end

