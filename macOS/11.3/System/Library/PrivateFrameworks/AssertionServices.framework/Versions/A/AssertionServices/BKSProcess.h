/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/Versions/A/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSProcessDelegate;
#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessIdentity, RBSProcessHandle, BKSLaunchdJobSpecification, RBSAssertion, RBSProcessMonitor, BKSProcessExitContext, BKSProcessAssertion, BSProcessHandle;

@interface BKSProcess : NSObject {

	os_unfair_lock_s _lock;
	char _bootstrapped;
	RBSProcessIdentity* _identity;
	RBSProcessHandle* _processHandle;
	BKSLaunchdJobSpecification* _jobSpec;
	RBSAssertion* _assertion;
	RBSProcessMonitor* _monitor;
	BKSProcessExitContext* _lastExitContext;
	BKSProcessAssertion* _mediaAssertion;
	BKSProcessAssertion* _audioAssertion;
	BKSProcessAssertion* _accessoryAssertion;
	RBSAssertion* _visibilityAssertion;
	char _workspaceLocked;
	char _connectedToExternalAccessories;
	char _nowPlayingWithAudio;
	char _recordingAudio;
	id<BKSProcessDelegate> _delegate;
	long long _visibility;
	long long _taskState;
	long long _terminationReason;
	BSProcessHandle* _handle;

}

@property (assign,nonatomic) char workspaceLocked;                                   //@synthesize workspaceLocked=_workspaceLocked - In the implementation block
@property (assign,nonatomic) long long visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) char connectedToExternalAccessories;                    //@synthesize connectedToExternalAccessories=_connectedToExternalAccessories - In the implementation block
@property (assign,nonatomic) char nowPlayingWithAudio;                               //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,nonatomic) char recordingAudio;                                    //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,nonatomic) long long terminationReason;                            //@synthesize terminationReason=_terminationReason - In the implementation block
@property (assign,nonatomic,__weak) id<BKSProcessDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) long long taskState;                                  //@synthesize taskState=_taskState - In the implementation block
@property (nonatomic,readonly) double backgroundTimeRemaining; 
@property (nonatomic,readonly) BKSProcessExitContext * lastExitContext; 
+(id)busyExtensionInstances:(id)arg1 ;
+(id)currentProcess;
+(double)backgroundTimeRemaining;
-(void)bootstrapCurrentProcess;
-(id)initWithProcessIdentity:(id)arg1 ;
-(char)bootstrapWithProcessHandle:(id)arg1 error:(out id*)arg2 ;
-(char)_bootstrapWithError:(out id*)arg1 ;
-(void)_lock_configureMonitor;
-(void)_lock_updateVisibility;
-(id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(char)arg4 queue:(id)arg5 ;
-(char)bootstrapWithSpecification:(id)arg1 error:(out id*)arg2 ;
-(void)setWorkspaceLocked:(char)arg1 ;
-(void)setConnectedToExternalAccessories:(char)arg1 ;
-(char)workspaceLocked;
-(char)connectedToExternalAccessories;
-(id)description;
-(id)init;
-(BSProcessHandle *)handle;
-(void)invalidate;
-(id<BKSProcessDelegate>)delegate;
-(void)setDelegate:(id<BKSProcessDelegate>)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setVisibility:(long long)arg1 ;
-(long long)terminationReason;
-(long long)visibility;
-(long long)taskState;
-(BKSProcessExitContext *)lastExitContext;
-(void)setTerminationReason:(long long)arg1 ;
-(void)setRecordingAudio:(char)arg1 ;
-(void)setNowPlayingWithAudio:(char)arg1 ;
-(char)recordingAudio;
-(char)nowPlayingWithAudio;
-(double)backgroundTimeRemaining;
@end

