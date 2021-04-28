/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EMFStringUtilities : NSObject
+(id)_stringWithUnichar:(unsigned)arg1 ;
+(char)_isNewlyAddedEmoji:(id)arg1 ;
+(id)_skinToneVariantsForString:(id)arg1 ;
+(id)_skinToneSpecifiersForString:(id)arg1 ;
+(char)_hasSkinToneVariantsForString:(id)arg1 ;
+(id)_preferenceIndexString:(id)arg1 ;
+(id)_baseStringForEmojiString:(id)arg1 ;
+(unsigned)_firstLongCharacterOfString:(id)arg1 ;
+(char)_genderEmojiBaseStringNeedVariantSelector:(id)arg1 ;
+(int)_skinToneForString:(id)arg1 ;
+(id)_skinToneChooserVariantsForString:(id)arg1 ;
+(int)_skinToneModifierFromSpecifierType:(id)arg1 ;
+(id)_multiPersonStringForString:(id)arg1 skinToneVariantSpecifier:(id)arg2 ;
+(char)_emojiString:(id)arg1 containsSubstring:(id)arg2 ;
+(long long)multiPersonTypeForString:(id)arg1 ;
+(id)_joiningStringForCoupleString:(id)arg1 ;
+(id)_tokenizedMultiPersonFromString:(id)arg1 ;
+(id)_coupleStringWithLeftPerson:(id)arg1 leftVariant:(id)arg2 joiningString:(id)arg3 rightPerson:(id)arg4 rightVariant:(id)arg5 ;
+(id)professionSkinToneEmojiBaseKey:(id)arg1 ;
+(id)_baseFirstCharacterString:(id)arg1 ;
+(id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)arg1 ;
+(id)_skinToneChooserArraysForCoupleType:(long long)arg1 joiner:(id)arg2 ;
+(id)_skinToneChooserVariantsForHandHoldingCoupleType:(long long)arg1 ;
+(id)_skinToneChooserVariantsForString:(id)arg1 usesSilhouetteSpecifiers:(char)arg2 ;
+(id)_skinToneVariantsForCouple:(long long)arg1 joiner:(id)arg2 ;
+(id)_skinToneVariantsForMultiPersonType:(long long)arg1 ;
+(id)_skinToneSuffixFromSpecifierType:(id)arg1 ;
+(id)_coupleSkinToneChooserVariantsForString:(id)arg1 ;
@end
