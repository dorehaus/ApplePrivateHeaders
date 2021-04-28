/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSPersonalization.framework/Versions/A/OSPersonalization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSPersonalization/OSPOperation.h>

@interface OSPConfigureRequestOperation : OSPOperation {

	char _mountedPreboot;
	int _prebootLockDescriptor;

}

@property (assign) char mountedPreboot;                    //@synthesize mountedPreboot=_mountedPreboot - In the implementation block
@property (assign) int prebootLockDescriptor;              //@synthesize prebootLockDescriptor=_prebootLockDescriptor - In the implementation block
-(char)_preflightChecks;
-(char)_initializeDevice;
-(char)_initializeTargetVolume;
-(char)_mountPreboot;
-(char)_loadSecureBootBundle;
-(char)_prepareTemporaryDirectories;
-(int)prebootLockDescriptor;
-(char)mountedPreboot;
-(void)setMountedPreboot:(char)arg1 ;
-(void)setPrebootLockDescriptor:(int)arg1 ;
-(id)description;
-(void)main;
-(void)cleanUp;
@end

