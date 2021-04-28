/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMFTimer, HMFUnfairLock, NSString;

@interface HMDWatchConnectivityLogEventManager : HMFObject <HMFTimerDelegate> {

	char _hasCompleteReport;
	unsigned long long _watchAddedNotificationCountForCurrentIncompleteReport;
	unsigned long long _watchRemovedNotificationCountForCurrentIncompleteReport;
	unsigned long long _watchAddedNotificationCountForLastCompleteReport;
	unsigned long long _watchRemovedNotificationCountForLastCompleteReport;
	HMFTimer* _watchConnectivityLogEventManagerTimer;
	HMFUnfairLock* _lock;

}

@property (assign,nonatomic) char hasCompleteReport;                                                                  //@synthesize hasCompleteReport=_hasCompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchAddedNotificationCountForCurrentIncompleteReport;                //@synthesize watchAddedNotificationCountForCurrentIncompleteReport=_watchAddedNotificationCountForCurrentIncompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchRemovedNotificationCountForCurrentIncompleteReport;              //@synthesize watchRemovedNotificationCountForCurrentIncompleteReport=_watchRemovedNotificationCountForCurrentIncompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchAddedNotificationCountForLastCompleteReport;                     //@synthesize watchAddedNotificationCountForLastCompleteReport=_watchAddedNotificationCountForLastCompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchRemovedNotificationCountForLastCompleteReport;                   //@synthesize watchRemovedNotificationCountForLastCompleteReport=_watchRemovedNotificationCountForLastCompleteReport - In the implementation block
@property (nonatomic,retain) HMFTimer * watchConnectivityLogEventManagerTimer;                                        //@synthesize watchConnectivityLogEventManagerTimer=_watchConnectivityLogEventManagerTimer - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                                                  //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(HMFUnfairLock *)lock;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)watchConnectivityLogEventManagerTimer;
-(void)completeCurrentReport;
-(void)incrementWatchAddedNotificationCount;
-(void)incrementWatchRemovedNotificationCount;
-(HMDWatchConnectivityLogEventManagerSnapshot)currentWatchConnectivitySnapshot;
-(char)hasCompleteReport;
-(void)setHasCompleteReport:(char)arg1 ;
-(unsigned long long)watchAddedNotificationCountForCurrentIncompleteReport;
-(void)setWatchAddedNotificationCountForCurrentIncompleteReport:(unsigned long long)arg1 ;
-(unsigned long long)watchRemovedNotificationCountForCurrentIncompleteReport;
-(void)setWatchRemovedNotificationCountForCurrentIncompleteReport:(unsigned long long)arg1 ;
-(unsigned long long)watchAddedNotificationCountForLastCompleteReport;
-(void)setWatchAddedNotificationCountForLastCompleteReport:(unsigned long long)arg1 ;
-(unsigned long long)watchRemovedNotificationCountForLastCompleteReport;
-(void)setWatchRemovedNotificationCountForLastCompleteReport:(unsigned long long)arg1 ;
-(void)setWatchConnectivityLogEventManagerTimer:(HMFTimer *)arg1 ;
@end

