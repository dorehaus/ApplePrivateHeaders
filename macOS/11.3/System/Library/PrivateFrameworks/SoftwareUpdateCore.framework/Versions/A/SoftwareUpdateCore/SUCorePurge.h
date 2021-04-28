/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SUCorePurge : NSObject
+(void)_trackPurgeBegin:(id)arg1 ;
+(void)_trackPurgeEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
+(void)checkForExistingPrepareWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)checkForExistingAssetsWithPolicy:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)checkForAssetsOfType:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)removeAllUpdateContentWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllUpdateContentWithPolicy:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)removeAllAssetsOfType:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)removeAllAssetsOfTypes:(id)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_trackPurgeBegin:(id)arg1 withIdentifier:(id)arg2 ;
+(void)_trackPurgeEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
+(void)previousUpdateState:(char*)arg1 tetheredRestore:(char*)arg2 failedBackward:(char*)arg3 failedForward:(char*)arg4 ;
+(void)checkForExistingPrepare:(/*^block*/id)arg1 ;
+(void)checkForExistingAssetsWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)checkForAssetsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllUpdateContent:(/*^block*/id)arg1 ;
+(void)removeAllUpdateContentWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllAssetsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removeAllAssetsOfTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_trackPurgeEnd:(id)arg1 ;
+(void)_trackPurgeEnd:(id)arg1 withIdentifier:(id)arg2 ;
@end
