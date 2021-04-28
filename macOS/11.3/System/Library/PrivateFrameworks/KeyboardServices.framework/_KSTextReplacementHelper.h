/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _KSTextReplacementHelper : NSObject
+(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
+(void)fetchConfigurationPlistIfNeeded;
+(id)aggdPrefix;
+(id)sampleShortcut;
+(id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3 ;
+(void)logAggdValueForSyncIsPull:(char)arg1 success:(char)arg2 ;
+(long long)validateTextReplacement:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 forEntry:(id)arg2 ;
+(id)textReplaceEntryFromTIDictionaryValue:(id)arg1 ;
+(id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(char)arg2 ;
+(id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2 ;
+(void)extractAggdMetricsForTextReplacement:(id)arg1 ;
+(id)errorStringForCode:(long long)arg1 ;
+(void)logPhraseWordCount:(long long)arg1 ;
+(id)fetchConfigurationPlist;
+(id)appleLanguagesPreference;
@end

