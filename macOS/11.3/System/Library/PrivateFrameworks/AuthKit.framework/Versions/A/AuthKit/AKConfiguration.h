/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/Versions/A/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AKConfiguration : NSObject {

	NSMutableDictionary* _cachedSettings;
	int _notificationToken;
	NSObject*<OS_dispatch_queue> _settingsQueue;

}

@property (assign,nonatomic) long long shouldDisablePETs; 
@property (assign,nonatomic) long long shouldFakeAuthSuccess; 
@property (assign,nonatomic) long long shouldDisablePiggybacking; 
@property (assign,nonatomic) long long shouldSuppressHSA2Suggestions; 
@property (assign,nonatomic) long long shouldAddHSA2CreateHeader; 
@property (assign,nonatomic) long long shouldAllowPhoneNumberAccounts; 
@property (assign,nonatomic) long long shouldAllowExperimentalMode; 
@property (assign,nonatomic) long long shouldAllowDemoMode; 
@property (assign,nonatomic) long long shouldAllowTestApplication; 
@property (assign,nonatomic) long long shouldEnableTestAccountMode; 
@property (assign,nonatomic) long long shouldSuppressModalSheetsInMacBuddy; 
@property (assign,nonatomic) long long shouldAlwaysShowWelcome; 
@property (assign,nonatomic) long long shouldAutocycleAppsInTiburon; 
@property (assign,nonatomic) long long shouldAutocycleAppsInWebTakeover; 
@property (assign,nonatomic) unsigned long long lastKnownIDMSEnvironment; 
@property (assign,nonatomic) long long requestedCloudPartition; 
+(id)sharedConfiguration;
-(long long)shouldAllowTestApplication;
-(void)setConfigurationValue:(id)arg1 forKey:(id)arg2 ;
-(char)_validCloudPartition:(long long)arg1 ;
-(void)setShouldDisablePETs:(long long)arg1 ;
-(void)setShouldFakeAuthSuccess:(long long)arg1 ;
-(void)setShouldDisablePiggybacking:(long long)arg1 ;
-(long long)shouldSuppressHSA2Suggestions;
-(void)setShouldSuppressHSA2Suggestions:(long long)arg1 ;
-(long long)shouldAddHSA2CreateHeader;
-(void)setShouldAddHSA2CreateHeader:(long long)arg1 ;
-(long long)shouldAllowPhoneNumberAccounts;
-(void)setShouldAllowPhoneNumberAccounts:(long long)arg1 ;
-(void)setShouldAllowExperimentalMode:(long long)arg1 ;
-(void)setShouldAllowDemoMode:(long long)arg1 ;
-(void)setShouldAllowTestApplication:(long long)arg1 ;
-(void)setShouldEnableTestAccountMode:(long long)arg1 ;
-(void)setShouldSuppressModalSheetsInMacBuddy:(long long)arg1 ;
-(long long)shouldAutocycleAppsInTiburon;
-(void)setShouldAutocycleAppsInTiburon:(long long)arg1 ;
-(void)setShouldAlwaysShowWelcome:(long long)arg1 ;
-(void)setShouldAutocycleAppsInWebTakeover:(long long)arg1 ;
-(void)setRequestedCloudPartition:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)shouldSuppressModalSheetsInMacBuddy;
-(long long)shouldAllowExperimentalMode;
-(long long)shouldAlwaysShowWelcome;
-(id)configurationValueForKey:(id)arg1 ;
-(long long)shouldAutocycleAppsInWebTakeover;
-(long long)shouldDisablePiggybacking;
-(long long)requestedCloudPartition;
-(long long)shouldEnableTestAccountMode;
-(unsigned long long)lastKnownIDMSEnvironment;
-(long long)shouldFakeAuthSuccess;
-(long long)shouldDisablePETs;
-(void)setLastKnownIDMSEnvironment:(unsigned long long)arg1 ;
-(long long)shouldAllowDemoMode;
@end

