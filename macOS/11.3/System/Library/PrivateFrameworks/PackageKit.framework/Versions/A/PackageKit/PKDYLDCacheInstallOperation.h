/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKInstallOperation.h>

@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation {

	PKInstallTask* _currentTask;
	char _inSandbox;

}
+(char)canBackgroundForCurrentSystemState;
+(long long)expectedInstallPhaseForRequest:(id)arg1 analyzer:(id)arg2 ;
-(id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 updateInSandbox:(char)arg4 ;
-(char)_shouldUpdateDYLDSharedCache;
-(id)_pathForTool:(id)arg1 ;
-(char)_updateDYLDSharedCacheInSandboxReturningError:(id*)arg1 ;
-(id)description;
-(int)installState;
-(void)cancel;
-(void)main;
@end

