/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ContactsPersistence-Structs.h>
#import <CoreData/NSManagedObject.h>

@class ABRecord, NSMutableDictionary, NSString, NSDate, NSNumber, NSData, NSSet;

@interface ABCDRecord : NSManagedObject {

	ABRecord* _publicRecord;
	NSMutableDictionary* _propertyValueCache;

}

@property (nonatomic,retain) NSString * primitiveUniqueId; 
@property (nonatomic,retain) NSDate * primitiveCreationDate; 
@property (nonatomic,retain) NSNumber * primitiveCreationDateYearless; 
@property (nonatomic,retain) NSNumber * primitiveCreationDateYear; 
@property (nonatomic,retain) NSDate * primitiveModificationDate; 
@property (nonatomic,retain) NSNumber * primitiveModificationDateYearless; 
@property (nonatomic,retain) NSNumber * primitiveModificationDateYear; 
@property (nonatomic,retain) NSString * externalPropertiesJSON; 
@property (nonatomic,retain) NSString * uniqueId; 
@property (nonatomic,__weak,readonly) NSString * displayName; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,retain) NSString * externalUUID; 
@property (nonatomic,retain) NSString * externalModificationTag; 
@property (nonatomic,retain) NSString * externalURI; 
@property (nonatomic,retain) NSString * externalCollectionPath; 
@property (nonatomic,retain) NSString * externalFilename; 
@property (nonatomic,retain) NSString * externalHash; 
@property (nonatomic,retain) NSData * externalRepresentation; 
@property (nonatomic,retain) NSString * externalImageURI; 
@property (assign,nonatomic) long long syncStatus; 
@property (nonatomic,retain) NSSet * customProperties; 
@property (nonatomic,retain) NSSet * unknownProperties; 
@property (nonatomic,retain) NSSet * remoteLocations; 
@property (nonatomic,readonly) char ignoresGuardianRestrictionsDuringValidation; 
+(id)propertyForKey:(id)arg1 ;
+(id)abEntityDescriptionInAddressBook:(id)arg1 ;
+(void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(CFDictionaryRef)arg4 valueWithEntityConverter:(CFDictionaryRef)arg5 ;
+(id)entityNameForPropertyKey:(id)arg1 ;
+(id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5 converterKeys:(id*)arg6 ;
+(long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 acquireLock:(char)arg4 save:(char)arg5 ;
+(id)copyPublicRecordForClass:(Class)arg1 withDatabaseImpl:(id)arg2 inAddressBook:(id)arg3 ;
+(long long)typeOfProperty:(id)arg1 forRecord:(id)arg2 ;
+(id)customPropertyValueKeyNameForPropertyType:(long long)arg1 isSerializedPropertyList:(char*)arg2 ;
+(id)propertyTypesForClass:(Class)arg1 withAddressBook:(id)arg2 acquireLock:(char)arg3 ;
+(id)copyPublicRecordsForClass:(Class)arg1 withDatabaseImpls:(id)arg2 inAddressBook:(id)arg3 ;
+(id)publicRecordsForClass:(Class)arg1 withDatabaseImpls:(id)arg2 inAddressBook:(id)arg3 ;
+(id)managedObjectContextForAddressBook:(id)arg1 ;
+(id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5 ;
+(id)metadataType;
+(id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 ;
+(id)abEntityDescriptionInManagedObjectContext:(id)arg1 ;
+(id)customPropertyDescriptionWithName:(id)arg1 addressBook:(id)arg2 persistentStore:(id)arg3 ;
+(long long)typeOfCustomProperty:(id)arg1 addressBook:(id)arg2 ;
+(id)customPropertyDescriptionsWithAddressBook:(id)arg1 persistentStore:(id)arg2 ;
+(char)abEntityKnowsKey:(id)arg1 inAddressBook:(id)arg2 ;
+(id)customPropertyDefinitionWithName:(id)arg1 addressBook:(id)arg2 persistentStore:(id)arg3 ;
+(long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 ;
+(void)initialize;
+(id)_table;
+(id)managedObjectModel;
+(id)os_log;
+(id)abEntityName;
+(id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3 affectedStores:(id)arg4 ;
+(id)prefetchRelationshipKeyPaths;
+(id)_newUniqueIdForTable:(id)arg1 ;
+(id)makeUniqueId;
+(char)_isPublicRecord;
+(void)extractYear:(long long*)arg1 yearlessDate:(double*)arg2 fromDate:(id)arg3 ;
+(id)managedObjectModelUrl;
+(id)bitwiseAndPredicateForKey:(id)arg1 andNumber:(long long)arg2 comparingToNumber:(long long)arg3 withComparisonType:(unsigned long long)arg4 ;
+(id)compoundPredicateForKey:(id)arg1 option:(id)arg2 andSubPredicate:(id)arg3 ;
+(char)abEntityKnowsKey:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(char)hasAddressBookContentForRecord:(id)arg1 ;
+(id)fetchObjectForClass:(Class)arg1 withUniqueId:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)insertNewObjectInManagedObjectContact:(id)arg1 ;
+(void)clearCachedPropertyValue:(id)arg1 ;
+(id)newNormalizedSortString:(id)arg1 ;
+(id)newIncrementedSearchString:(id)arg1 ;
+(id)managedObjectModelForName:(id)arg1 ;
+(char)validateContainedRecord:(id)arg1 forGuardianRestrictions:(id*)arg2 ;
+(void)validateForInsertContainedRecord:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)account;
-(id)addressBook;
-(id)accountRepository;
-(id)initWithUniqueId:(id)arg1 addressBook:(id)arg2 ;
-(void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2 ;
-(id)nts_SingleValueForProperty:(id)arg1 ;
-(id)metadataURL;
-(id)publicRecord;
-(void)setPublicRecord:(id)arg1 ;
-(void)abPublicRecordIsGone:(id)arg1 ;
-(char)nts_SetValue:(id)arg1 forProperty:(id)arg2 record:(id)arg3 ;
-(id)nts_ValueForProperty:(id)arg1 record:(id)arg2 addressBook:(id)arg3 ;
-(id)propertyValueWithKey:(id)arg1 uniqueId:(id)arg2 ;
-(id)sortedPropertyValuesWithKey:(id)arg1 ;
-(id)permanentObjectID;
-(id)customPropertyDescriptionWithName:(id)arg1 persistentStore:(id)arg2 ;
-(id)propertyValuesWithKey:(id)arg1 ;
-(id)fetchPropertyValuesWithKey:(id)arg1 uniqueId:(id)arg2 ;
-(id)propertyValueWithKey:(id)arg1 uniqueId:(id)arg2 preventFetching:(char)arg3 ;
-(id)allCustomPropertyValuesWithCustomPropertyDescription:(id)arg1 ;
-(id)copyMultiValueWithRecord:(id)arg1 withProperty:(id)arg2 ;
-(char)applyMultiValue:(id)arg1 withProperty:(id)arg2 toRecord:(id)arg3 ;
-(id)customPropertyDefinitionWithName:(id)arg1 persistentStore:(id)arg2 ;
-(id)allCustomPropertyValuesWithCustomProperty:(id)arg1 ;
-(id)accountBaseURL;
-(id)publicRecordCreatingRecordIfNecessary;
-(id)fetchCustomPropertyValuesWithCustomProperty:(id)arg1 addressBook:(id)arg2 ;
-(id)nts_ParentGroupsOfRecord:(id)arg1 ;
-(id)nts_AffectsSmartGroupsIsNew:(char)arg1 record:(id)arg2 ;
-(NSString *)displayName;
-(id)_table;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)awakeFromInsert;
-(id)initWithEntity:(id)arg1 uniqueId:(id)arg2 insertIntoManagedObjectContext:(id)arg3 ;
-(char)_isPublicRecord;
-(void)invalidateAllCachedPropertyValues;
-(void)clearCachedPropertyValue:(id)arg1 withKey:(id)arg2 ;
-(long long)creationDateYear;
-(double)creationDateYearless;
-(long long)modificationDateYear;
-(double)modificationDateYearless;
-(char)_valueHasChangedForKey:(id)arg1 ;
-(char)ignoresGuardianRestrictionsDuringValidation;
-(id)initWithUniqueId:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)bucketKey;
-(id)primitivePublicRecord;
-(void)setPrimitivePublicRecord:(id)arg1 ;
-(id)propertyValueCache;
-(void)didTurnIntoFault;
-(void)clearCachedPropertyValuesWithKey:(id)arg1 ;
-(void)invalidateCachedPropertyValuesWithKey:(id)arg1 ;
-(void)cachePropertyValue:(id)arg1 withKey:(id)arg2 uniqueId:(id)arg3 ;
-(void)setCreationDateYearless:(id)arg1 ;
-(void)setCreationDateYear:(id)arg1 ;
-(void)setModificationDateYearless:(id)arg1 ;
-(void)setModificationDateYear:(id)arg1 ;
-(void)touch:(id)arg1 ;
-(id)aggregateModificationDate;
-(void)setAggregateModificationDate:(id)arg1 ;
-(id)valueForKey:(id)arg1 withEntityName:(id)arg2 entityKey:(id)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 withEntityName:(id)arg3 entityKey:(id)arg4 ;
-(id)nts_UniqueId;
-(id)nts_ChangedProperties;
-(char)nts_HasChangedProperties;
-(char)isKindOfEntityNamed:(id)arg1 ;
-(id)nameWithFormatter:(id)arg1 rangeOfSortingSubstring:(NSRange*)arg2 ;
-(unsigned long long)nameOrderWithFormatter:(id)arg1 ;
@end

