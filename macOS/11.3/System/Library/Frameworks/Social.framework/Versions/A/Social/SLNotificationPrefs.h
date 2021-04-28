/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLNotificationPrefs : NSObject
+(id)sharedPreferences;
-(id)init;
-(id)defaultTwitterPrefs;
-(id)defaultSinaWeiboPrefs;
-(id)localizedPrefsForType:(id)arg1 withValue:(id)arg2 ;
-(id)defaultPrefsForBundleID:(id)arg1 ;
-(id)preferencesForClient:(id)arg1 ;
-(void)addCheckBoxFromPreferences:(id)arg1 toArray:(id)arg2 forKey:(id)arg3 ;
-(void)addRadioButtonsFromPreferences:(id)arg1 toArray:(id)arg2 forKey:(id)arg3 ;
-(id)notificationPreferencesForClient:(id)arg1 ;
-(id)notificationPreferenceForClient:(id)arg1 andKey:(id)arg2 ;
-(void)setNotificationPreferenceForClient:(id)arg1 withObject:(id)arg2 forKey:(id)arg3 ;
@end
