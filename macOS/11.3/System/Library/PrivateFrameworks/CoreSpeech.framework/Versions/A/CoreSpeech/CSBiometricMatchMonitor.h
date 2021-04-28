/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol CSBiometricMatchMonitorDelegate;
@interface CSBiometricMatchMonitor : CSEventMonitor {

	id<CSBiometricMatchMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSBiometricMatchMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id<CSBiometricMatchMonitorDelegate>)delegate;
-(void)setDelegate:(id<CSBiometricMatchMonitorDelegate>)arg1 ;
-(void)startObserving;
-(char)getLastBiometricMatchEvent:(char*)arg1 atTime:(unsigned long long*)arg2 ;
-(unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1 ;
@end

