/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABAssistantConversion : NSObject
+(id)newSAPersonFromABPerson:(id)arg1 conversionType:(int)arg2 ;
+(id)newSAPersonFromDeletedRecordID:(id)arg1 forAddressBook:(id)arg2 ;
+(id)_convertToSAValuesForMultiValueProperty:(id)arg1 fromABPerson:(id)arg2 onlyUniqueLabels:(char)arg3 noEmptyLabels:(char)arg4 withFavoritesFromAddressBook:(id)arg5 accountIdentifier:(id)arg6 ;
+(id)_convertToSAValuesForMultiValueProperty:(id)arg1 fromABPerson:(id)arg2 onlyUniqueLabels:(char)arg3 noEmptyLabels:(char)arg4 ;
+(id)phonemeDataKey;
+(void)_convertProperty:(id)arg1 fromABPerson:(id)arg2 toSAPerson:(id)arg3 ;
+(id)_convertToSAValuesForMultiValueProperty:(id)arg1 fromABPerson:(id)arg2 withFavoritesFromAddressBook:(id)arg3 accountIdentifier:(id)arg4 ;
+(id)_convertToSAValuesForMultiValueProperty:(id)arg1 fromABPerson:(id)arg2 ;
+(id)newSAPersonFromABPerson:(id)arg1 conversionType:(int)arg2 withAccountIdentifier:(id)arg3 withExternalIdentifier:(id)arg4 forAddressBook:(id)arg5 returnSAABPerson:(char)arg6 ;
+(id)newSAPeopleFromMergingABPeople:(id)arg1 withAccountIdentifier:(id)arg2 returnSAABPeople:(char)arg3 ;
+(id)newABAddressWithSALocation:(id)arg1 ;
+(char)_addABMultiValuesForProperty:(id)arg1 fromSAPerson:(id)arg2 toABPerson:(id)arg3 ;
+(char)_setABMultiValueForProperty:(id)arg1 fromSAPerson:(id)arg2 toABPerson:(id)arg3 ;
+(id)newSAPersonFromABPerson:(id)arg1 withAccountIdentifier:(id)arg2 forAddressBook:(id)arg3 ;
+(id)newSAPersonFromABPerson:(id)arg1 withAccountIdentifier:(id)arg2 withExternalIdentifier:(id)arg3 ;
+(id)newSAPeopleFromMergingABPeople:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(id)newSAPeopleFromMergingABPeople:(id)arg1 ;
+(id)newSAABPeopleFromMergingABPeople:(id)arg1 ;
+(id)newSAPeopleFromExternalABPeople:(id)arg1 ;
+(void)mergeSAPerson:(id)arg1 toSAPerson:(id)arg2 ;
+(id)SAPropertyForABProperty:(id)arg1 ;
+(char)setFieldsFromSAPerson:(id)arg1 toABPerson:(id)arg2 ;
+(char)addFieldsFromSAPerson:(id)arg1 toABPerson:(id)arg2 ;
+(void)markMeCardsInSAPeople:(id)arg1 fromAddressBook:(id)arg2 ;
+(id)newSAPersonFromABPerson:(id)arg1 ;
@end
