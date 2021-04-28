/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CBKeyboardPreferencesManager : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _preferences;

}
+(id)sharedInstance;
+(BOOL)setPreference:(id)arg1 forKey:(id)arg2 ;
+(id)copyPreferenceForKey:(id)arg1 ;
+(BOOL)setIntPreference:(int)arg1 forKey:(id)arg2 ;
+(BOOL)setFloatPreference:(float)arg1 forKey:(id)arg2 ;
+(BOOL)setBoolPreference:(BOOL)arg1 forKey:(id)arg2 ;
+(BOOL)getIntPreference:(int*)arg1 forKey:(id)arg2 ;
+(BOOL)getFloatPreference:(float*)arg1 forKey:(id)arg2 ;
+(BOOL)getBoolPreference:(BOOL*)arg1 forKey:(id)arg2 ;
+(id)copyPreferenceForKey:(id)arg1 keyboardID:(unsigned long long)arg2 ;
+(id)copyAllPreferences;
-(void)dealloc;
-(id)init;
-(BOOL)setPreference:(id)arg1 forKey:(id)arg2 ;
-(id)copyPreferenceForKey:(id)arg1 ;
-(id)copyAllPrefereneces;
@end
