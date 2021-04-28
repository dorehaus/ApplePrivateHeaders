/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@interface HMDDeviceSetupManager : HMFObject {

	id<HMFLocking> _lock;
	int _proxSetupNotificationToken;
	char _running;

}

@property (getter=isRunning,readonly) char running;              //@synthesize running=_running - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(char)isRunning;
-(void)stopAdvertising;
-(void)startAdvertising;
@end
