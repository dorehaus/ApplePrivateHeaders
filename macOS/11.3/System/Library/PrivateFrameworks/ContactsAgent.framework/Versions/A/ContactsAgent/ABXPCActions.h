/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAgent.framework/Versions/A/ContactsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ABXPCActions : NSObject
+(id)_accountCollectionForPersistenceURL:(id)arg1 ;
+(id)_contactStoreForPersistenceURL:(id)arg1 ;
+(id)remoteInfosForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(char)_savePeopleFromRemoteObjectCache:(id)arg1 withContactStore:(id)arg2 error:(id*)arg3 ;
+(char)_saveGroupsFromRemoteObjectCache:(id)arg1 withContactStore:(id)arg2 basePersistenceURL:(id)arg3 error:(id*)arg4 ;
+(char)_saveMembersAndSubGroupsFromRemoteObjectCache:(id)arg1 withContactStore:(id)arg2 error:(id*)arg3 ;
+(char)_saveDeletedRemoteCustomProperties:(id)arg1 newRemoteCustomProperties:(id)arg2 contactStore:(id)arg3 error:(id*)arg4 ;
+(char)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
+(id)_containerIdentifierFromAccountIdentifier:(id)arg1 ;
+(void)_prepareSaveRequest:(id)arg1 withChangedRemoteGroups:(id)arg2 deletedRemoteGroups:(id)arg3 newRemoteGroups:(id)arg4 contactStore:(id)arg5 ;
+(void)_prepareSaveRequest:(id)arg1 withAddedMembers:(id)arg2 removedMembers:(id)arg3 addedSubGroups:(id)arg4 removedSubGroups:(id)arg5 contactStore:(id)arg6 ;
+(void)_prepareSaveRequest:(id)arg1 withChangedRemotePeople:(id)arg2 deletedRemotePeople:(id)arg3 newRemotePeople:(id)arg4 contactStore:(id)arg5 ;
+(id)coreDataPredicateForRemoteSearchElement:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(id)createInfoWithBasePersistenceURL:(id)arg1 ;
+(id)fetchGroupsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 error:(id*)arg5 ;
+(id)fetchPeopleWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 error:(id*)arg5 ;
+(id)fetchSmartGroupsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 inAccountsWithIdentifiers:(id)arg3 withBasePersistenceURL:(id)arg4 error:(id*)arg5 ;
+(id)fullNameForRemotePerson:(id)arg1 ;
+(id)membersOfRemoteGroup:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(id)persistentStoreURLForRemoteRecord:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(char)propertyNameRepresentsCustomProperty:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(id)remoteAccountCollectionForPersistenceURL:(id)arg1 ;
+(id)remoteCustomPropertiesWithBasePersistenceURL:(id)arg1 ;
+(id)remoteGroupsForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(id)remoteGroupsForRemotePerson:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(id)remoteGroupWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 error:(id*)arg3 ;
+(id)remoteInfoWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 error:(id*)arg3 ;
+(id)remoteParentGroupsForRemoteSubGroup:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(id)remotePeopleForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 createPartialObjects:(char)arg3 ;
+(id)remotePersonForMeWithBasePersistenceURL:(id)arg1 ;
+(id)remotePersonWithUniqueID:(id)arg1 withBasePersistenceURL:(id)arg2 error:(id*)arg3 ;
+(id)remoteSmartGroupsForAccountsWithIdentifiers:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(id)remoteSubGroupsForRemoteParentGroup:(id)arg1 withBasePersistenceURL:(id)arg2 ;
+(char)saveWithRemoteObjectCache:(id)arg1 basePersistenceURL:(id)arg2 error:(id*)arg3 ;
@end

