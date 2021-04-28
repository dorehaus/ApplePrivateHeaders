/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface CKDAccountManateeObserver : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	long long _manateeAvailableForLoggedInAccount;
	NSError* _lastCDPError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusQueue;                                                                       //@synthesize statusQueue=_statusQueue - In the implementation block
@property (assign,setter=_lockedSetManateeAvailableForLoggedInAccount:,nonatomic) long long manateeAvailableForLoggedInAccount;              //@synthesize manateeAvailableForLoggedInAccount=_manateeAvailableForLoggedInAccount - In the implementation block
@property (nonatomic,copy) NSError * lastCDPError;                                                                                           //@synthesize lastCDPError=_lastCDPError - In the implementation block
+(id)sharedObserver;
-(void)dealloc;
-(id)init;
-(char)isManateeAvailable:(id*)arg1 ;
-(char)accountSupportsManatee:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)statusQueue;
-(void)setStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lockedSetManateeAvailableForLoggedInAccount:(long long)arg1 ;
-(void)setLastCDPError:(NSError *)arg1 ;
-(long long)_fetchManateeAvailability:(id*)arg1 ;
-(long long)manateeAvailableForLoggedInAccount;
-(NSError *)lastCDPError;
-(void)_lockedFetchAndUpdateManateeAvailability;
-(void)handleUpdateNotificationWithAvailability:(id)arg1 ;
@end

