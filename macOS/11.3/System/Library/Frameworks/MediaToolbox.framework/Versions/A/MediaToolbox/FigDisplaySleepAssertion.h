/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface FigDisplaySleepAssertion : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSString* _reason;
	unsigned _displaySleepPreventionIOPMAssertionID;
	long long _lastIdleTimerResetTime;

}
-(id)initWithReason:(id)arg1 queue:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(unsigned char)resetIdleTimer;
@end

