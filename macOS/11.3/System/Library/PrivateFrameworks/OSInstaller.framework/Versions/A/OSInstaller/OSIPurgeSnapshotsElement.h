/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIPurgeSnapshotsElement : OSIInstallQueueElement
-(id)initWithOptions:(id)arg1 ;
-(id)operationName;
-(char)runReturningError:(id*)arg1 ;
-(double)estimatedTimeToComplete;
-(char)okayToSkip;
-(char)_purgeSnapshotsOnVolume:(id)arg1 preserveLastSnapshot:(char)arg2 deleteAllSnapshotTypes:(char)arg3 withError:(id*)arg4 ;
-(char)isSkippableSnapshot:(id)arg1 deleteAllSnapshotTypes:(char)arg2 ;
@end

