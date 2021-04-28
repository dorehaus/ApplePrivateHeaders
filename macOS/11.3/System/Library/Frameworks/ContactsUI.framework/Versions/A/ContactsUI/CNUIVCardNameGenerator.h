/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIVCardNameGenerator : NSObject
+(id)stringByReplacingUnsafePathCharactersInString:(id)arg1 ;
+(id)unconflictedNameWithName:(id)arg1 andName:(id)arg2 ;
+(id)unconflictedNameWithName:(id)arg1 andOthers:(unsigned long long)arg2 ;
+(id)nameWithStrings:(id)arg1 conflicts:(unsigned long long)arg2 ;
+(id)nameWithName:(id)arg1 conflicts:(unsigned long long)arg2 ;
+(id)nameWithName:(id)arg1 andName:(id)arg2 conflicts:(unsigned long long)arg3 ;
+(id)nameWithName:(id)arg1 andOthers:(unsigned long long)arg2 conflicts:(unsigned long long)arg3 ;
+(id)unconflictedNameWithName:(id)arg1 ;
+(id)conflictedNameWithName:(id)arg1 conflicts:(unsigned long long)arg2 ;
+(id)conflictedNameWithName:(id)arg1 andName:(id)arg2 conflicts:(unsigned long long)arg3 ;
+(id)conflictedNameWithName:(id)arg1 andOthers:(unsigned long long)arg2 conflicts:(unsigned long long)arg3 ;
+(id)pathWithNames:(id)arg1 inDirectory:(id)arg2 fileManager:(id)arg3 ;
+(id)nameWithStrings:(id)arg1 ;
+(id)pathWithNames:(id)arg1 inDirectory:(id)arg2 ;
+(id)nameForContact:(id)arg1 ;
+(id)nameForPerson:(id)arg1 andPerson:(id)arg2 ;
+(id)nameForPerson:(id)arg1 andOthers:(unsigned long long)arg2 ;
+(id)nameForPersonAsCompany:(id)arg1 ;
+(id)nameForPersonAsPerson:(id)arg1 ;
+(id)nameForContacts:(id)arg1 ;
@end

