/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BMPublicStreamsPruner : NSObject
+(void)pruneWithInstalledApplications:(id)arg1 activity:(id)arg2 ;
+(char)shouldDeleteEvent:(id)arg1 withUninstalledApplication:(id)arg2 ;
+(void)prunePublicStreamsWithPredicate:(/*^block*/id)arg1 ;
+(char)shouldDeleteEvent:(id)arg1 withInstalledApplications:(id)arg2 ;
+(void)prunePublicStream:(id)arg1 configuration:(id)arg2 deletionPredicate:(/*^block*/id)arg3 ;
+(void)pruneStreamDataStore:(id)arg1 deletionPredicate:(/*^block*/id)arg2 ;
+(void)pruneWithInstalledApplications:(id)arg1 ;
+(void)pruneWithUninstalledBundleIdentifier:(id)arg1 ;
@end

