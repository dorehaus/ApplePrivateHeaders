/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/Versions/A/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTVoiceProfileMigration : NSObject
+(unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1 ;
+(void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1 ;
+(char)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(char)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
@end
