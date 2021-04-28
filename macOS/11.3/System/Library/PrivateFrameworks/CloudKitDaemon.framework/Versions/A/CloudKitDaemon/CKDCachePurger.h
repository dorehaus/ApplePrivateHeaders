/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CKDCachePurger : NSObject {

	char _purged;
	NSArray* _oldCacheDirs;

}

@property (assign,nonatomic) char purged;                           //@synthesize purged=_purged - In the implementation block
@property (nonatomic,readonly) NSArray * oldCacheDirs;              //@synthesize oldCacheDirs=_oldCacheDirs - In the implementation block
+(id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4 ;
-(char)purged;
-(void)setPurged:(char)arg1 ;
-(NSArray *)oldCacheDirs;
-(id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4 ;
-(void)purgeOldCacheDirectories;
@end
