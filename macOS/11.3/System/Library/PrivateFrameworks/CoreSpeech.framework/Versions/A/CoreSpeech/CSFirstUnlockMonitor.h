/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSFirstUnlockMonitor : CSEventMonitor {

	int _notifyToken;
	char _firstUnlocked;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(char)isFirstUnlocked;
-(void)_firstUnlockNotified;
-(char)_checkFirstUnlocked;
-(void)_didReceiveFirstUnlock:(char)arg1 ;
-(void)_notifyObserver:(id)arg1 withUnlocked:(char)arg2 ;
-(void)_didReceiveFirstUnlockInQueue:(char)arg1 ;
@end

