/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSInstaller/OSIInstallQueueElement.h>

@protocol OS_dispatch_semaphore;
@class NSArray, NSObject, NSError, NSTimer;

@interface OSIInstallElement : OSIInstallQueueElement {

	NSArray* _packages;
	NSObject*<OS_dispatch_semaphore> _waitUntilDone;
	char _done;
	NSError* _error;
	char _isOSInstall;
	double _totalEstimatedTime;
	double _totalSUTimeRemaining;
	double _suAmountDeducted;
	NSTimer* _initialSUProgressTimer;
	char _isSoftwareUpdate;
	char _shouldInstallIAL;

}

@property (assign) char isOSInstall;                   //@synthesize isOSInstall=_isOSInstall - In the implementation block
@property (assign) char isSoftwareUpdate;              //@synthesize isSoftwareUpdate=_isSoftwareUpdate - In the implementation block
@property (assign) char shouldInstallIAL;              //@synthesize shouldInstallIAL=_shouldInstallIAL - In the implementation block
-(id)operationName;
-(char)runReturningError:(id*)arg1 ;
-(id)localizedStatusString;
-(double)estimatedTimeToComplete;
-(void)installClientDidBegin:(id)arg1 ;
-(void)installClient:(id)arg1 didFailWithError:(id)arg2 ;
-(void)installClientDidFinish:(id)arg1 ;
-(void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5 ;
-(void)setExternalRootMountPoint:(id)arg1 ;
-(id)initWithOptions:(id)arg1 packageSpecifiers:(id)arg2 isOSInstall:(char)arg3 isSoftwareUpdate:(char)arg4 shouldInstallIAL:(char)arg5 ;
-(void)setIsOSInstall:(char)arg1 ;
-(char)_isValidCompatibilityUpdatePackage:(id)arg1 ;
-(void)updateSUProgress;
-(char)isOSInstall;
-(char)isSoftwareUpdate;
-(void)setIsSoftwareUpdate:(char)arg1 ;
-(char)shouldInstallIAL;
-(void)setShouldInstallIAL:(char)arg1 ;
@end
