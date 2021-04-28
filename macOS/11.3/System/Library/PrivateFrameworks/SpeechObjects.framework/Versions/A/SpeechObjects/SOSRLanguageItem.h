/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechObjects/SOSpeechItem.h>

@interface SOSRLanguageItem : SOSpeechItem
+(id)visibleSRLanguageItemsTableUsingOffline:(char)arg1 ;
+(id)languageItemsFromLocaleIdentifiers:(id)arg1 usingOffline:(char)arg2 ;
+(unsigned long long)bestIndexFromLanguageItems:(id)arg1 forLocaleIdentifier:(id)arg2 ;
+(id)availableLocalRecognizerLanguageItems;
+(id)tagNameFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)visibiltyValueForLocaleIdentifier:(id)arg1 entryExists:(char*)arg2 usingOffline:(char)arg3 ;
+(void)setVisibilityValue:(unsigned long long)arg1 forLocaleIdentifier:(id)arg2 usingOffline:(char)arg3 ;
+(id)downloadableLocalSRLanguageItems;
+(void)setVisibleSRLanguageItemsTable:(id)arg1 usingOffline:(char)arg2 ;
+(id)engineIdentifierFromLocaleIdentifier:(id)arg1 ;
+(id)languageItemsFromLocaleIdentifiers:(id)arg1 ;
+(id)languageItemFromLanguageItems:(id)arg1 matchingLocaleIdentifier:(id)arg2 ;
+(id)preferredDictationLocaleIdentifierFromAvaiableLocaleIdentifiers:(id)arg1 defaultLocaleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg1 usingOffline:(char)arg2 ;
-(id)initWithDownloadableBundleIdentifier:(id)arg1 properties:(id)arg2 ;
@end

