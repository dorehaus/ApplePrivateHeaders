/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSICleanupFailedInstallElement : OSIInstallQueueElement {

	double _timeSoFar;
	double _timeToComplete;

}

@property (assign) double timeSoFar;                   //@synthesize timeSoFar=_timeSoFar - In the implementation block
@property (assign) double timeToComplete;              //@synthesize timeToComplete=_timeToComplete - In the implementation block
+(char)shouldRunForTarget:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(id)operationName;
-(char)runReturningError:(id*)arg1 ;
-(double)estimatedTimeToComplete;
-(void)setTimeToComplete:(double)arg1 ;
-(void)_cleanUpOSInstallSandbox;
-(void)_cleanupPartialInstall;
-(void)setTimeSoFar:(double)arg1 ;
-(void)_pullFakeProgressTimer:(id)arg1 ;
-(void)_cleanupOSInstallSandboxForMountPoint:(id)arg1 ;
-(double)timeSoFar;
-(double)timeToComplete;
@end

