/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHPreferencesSource.h>

@class NSString, NSMutableDictionary;

@interface ACSHInMemoryPreferenceSource : ACSHPreferencesSource {

	NSString* __domain;
	NSMutableDictionary* __preferenceOverrides;

}

@property (nonatomic,retain) NSString * _domain;                                      //@synthesize _domain=__domain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _preferenceOverrides;              //@synthesize _preferenceOverrides=__preferenceOverrides - In the implementation block
-(void)dealloc;
-(NSString *)_domain;
-(void)setPreferenceValue:(id)arg1 forKey:(id)arg2 ;
-(id)copyPreferenceValueForKey:(id)arg1 ;
-(void)set_domain:(NSString *)arg1 ;
-(void)set_preferenceOverrides:(NSMutableDictionary *)arg1 ;
-(void)updateVirtualKeyboardPreferenceFromNotification:(id)arg1 ;
-(void)_updatePreferenceFromNotification:(id)arg1 settingsChangedNotificationName:(id)arg2 ;
-(NSMutableDictionary *)_preferenceOverrides;
-(id)initWithDomain:(id)arg1 preferenceOverrides:(id)arg2 preferenceDefaults:(id)arg3 ;
@end

