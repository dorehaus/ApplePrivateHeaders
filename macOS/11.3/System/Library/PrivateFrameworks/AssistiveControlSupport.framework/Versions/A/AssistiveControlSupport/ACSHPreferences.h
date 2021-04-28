/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACSHPreferencesSource;

@interface ACSHPreferences : NSObject {

	ACSHPreferencesSource* _preferencesSource;

}

@property (nonatomic,retain) ACSHPreferencesSource * preferencesSource;              //@synthesize preferencesSource=_preferencesSource - In the implementation block
+(id)preferenceDefaults;
+(id)userDefaultsPreferencesSource;
+(id)inMemoryPeferenceSourceForDomain:(id)arg1 withOverrides:(id)arg2 ;
-(id)initWithPreferencesSource:(id)arg1 ;
-(ACSHPreferencesSource *)preferencesSource;
-(void)setPreferencesSource:(ACSHPreferencesSource *)arg1 ;
@end
