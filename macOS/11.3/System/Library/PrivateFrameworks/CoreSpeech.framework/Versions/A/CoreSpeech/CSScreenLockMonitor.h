/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSScreenLockMonitor : CSEventMonitor {

	char _isScreenLocked;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)isScreenLocked;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(char)_queryIsScreenLocked;
-(void)_notifyObserver:(id)arg1 isScreenLocked:(char)arg2 ;
-(void)screenLockStateChanged;
@end

