/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTPreferences : NSObject
+(id)_defaultSettings;
+(void)registerDefaults;
+(id)sharedUserDefaults;
+(char)_copyUserDefaultToSharedContainer:(id)arg1 synchronize:(char)arg2 ;
+(void)moveUserDefaultToSharedContainer:(id)arg1 ;
+(char)copySettingsToSharedContainer;
@end
