/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNCDMeContactFetcher : NSObject
+(id)defaultMeContactIdentifierInPersistenceContext:(id)arg1 ;
+(id)meContactIdentifierInDefaultStoreInPersistenceContext:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)firstMeContactIdentifierFoundInStoresInPersistenceContext:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)meContactIdentifierInManagedObjectContext:(id)arg1 store:(id)arg2 ;
+(id)meContactIdentifierFromInfos:(id)arg1 ;
+(id)_containersWithWritableFirstInPersistenceContext:(id)arg1 ;
+(id)_firstMeContactIdentifierInContainers:(id)arg1 persistenceContext:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)allMeContactIdentifiersInPersistenceContext:(id)arg1 ;
+(id)defaultMeContactIdentifierInPersistenceStack:(id)arg1 error:(id*)arg2 ;
+(id)allMeContactIdentifiersInPersistenceStack:(id)arg1 error:(id*)arg2 ;
@end

