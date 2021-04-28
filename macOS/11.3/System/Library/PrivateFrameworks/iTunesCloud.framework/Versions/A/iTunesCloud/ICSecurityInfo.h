/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface ICSecurityInfo : NSObject {

	char _hasLoadedDeviceClassCUnlocked;
	char _isDeviceClassCUnlocked;
	char _hasLoadedContentProtectionEnabled;
	char _isContentProtectionEnabled;
	int _firstUnlockNotificationToken;
	NSMutableArray* _pendingFirstUnlockBlocks;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (getter=isContentProtectionEnabled,nonatomic,readonly) char contentProtectionEnabled;              //@synthesize isContentProtectionEnabled=_isContentProtectionEnabled - In the implementation block
@property (getter=isDeviceUnlocked,nonatomic,readonly) char deviceUnlocked; 
@property (getter=isDeviceClassCUnlocked,nonatomic,readonly) char deviceClassCUnlocked;                      //@synthesize isDeviceClassCUnlocked=_isDeviceClassCUnlocked - In the implementation block
+(id)sharedSecurityInfo;
-(void)dealloc;
-(id)init;
-(char)isContentProtectionEnabled;
-(char)isDeviceClassCUnlocked;
-(char)isDeviceUnlocked;
-(void)performBlockAfterFirstUnlock:(/*^block*/id)arg1 ;
-(void)_getContentProtectionEnabled:(char*)arg1 isDeviceClassCUnlocked:(char*)arg2 ;
-(void)_loadContentProtectionEnabled:(char)arg1 isDeviceClassCUnlocked:(char)arg2 ;
-(void)_processFirstUnlockNotification;
@end

