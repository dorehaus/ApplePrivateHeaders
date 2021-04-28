/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCCacheCoordinatorDelegate <NSObject>
@optional
-(unsigned long long)cacheCoordinatorPreemptiveFlushSize:(id)arg1;

@required
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;

@end

