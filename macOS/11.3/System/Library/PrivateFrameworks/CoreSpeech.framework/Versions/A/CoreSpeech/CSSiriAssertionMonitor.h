/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate> {

	unsigned char _assertionState;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(char)arg1 ;
-(void)enableAssertionReceived;
-(void)disableAssertionReceived;
@end

