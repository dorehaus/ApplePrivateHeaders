/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSMutableDictionary;

@interface CKDTapToRadarManager : NSObject {

	NSObject*<OS_dispatch_queue> _alertQueue;
	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _lastPromptDateByMessageHash;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> alertQueue;                        //@synthesize alertQueue=_alertQueue - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                                  //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastPromptDateByMessageHash;              //@synthesize lastPromptDateByMessageHash=_lastPromptDateByMessageHash - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)triggerTapToRadarWithRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)alertQueue;
-(NSMutableDictionary *)lastPromptDateByMessageHash;
-(id)_hashForMessage:(id)arg1 ;
-(void)_lockedTriggerTapToRadarWithRequest:(id)arg1 ;
-(id)_lastPromptDateForMessage:(id)arg1 ;
-(void)_notePromptAttemptForMessage:(id)arg1 ;
-(void)_launchTTRWithRequest:(id)arg1 ;
-(void)setAlertQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLastPromptDateByMessageHash:(NSMutableDictionary *)arg1 ;
@end

