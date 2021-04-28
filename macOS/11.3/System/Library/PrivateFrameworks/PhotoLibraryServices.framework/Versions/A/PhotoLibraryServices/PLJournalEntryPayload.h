/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLJournalEntryPayload.h>
@class NSSet;


@protocol PLJournalEntryPayload <NSObject>
@property (nonatomic,readonly) id<PLJournalEntryPayloadID> payloadID; 
@property (nonatomic,readonly) unsigned payloadVersion; 
@property (nonatomic,readonly) NSSet * nilProperties; 
@required
+(unsigned)payloadVersion;
+(id)payloadClassID;
+(id)payloadWithData:(id)arg1 forPayloadID:(id)arg2 version:(unsigned)arg3 andNilProperties:(id)arg4 error:(id*)arg5;
-(unsigned)payloadVersion;
-(void)mergePayload:(id)arg1;
-(id<PLJournalEntryPayloadID>)payloadID;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg1;
-(id)descriptionForEntry:(id)arg1;
-(id)prettyDescriptionForEntry:(id)arg1 indent:(long long)arg2;
-(id)payloadDataWithError:(id*)arg1;
-(NSSet *)nilProperties;
-(char)decodePayloadData:(id)arg1 error:(id*)arg2;

@end

#import <libobjc.A.dylib/PLJournalEntryPayloadValidation.h>

@protocol PLJournalEntryPayloadID;
@class NSSet, NSMutableDictionary, NSMutableSet, NSString;

@interface PLJournalEntryPayload : NSObject <PLJournalEntryPayload, PLJournalEntryPayloadValidation> {

	NSMutableDictionary* _payloadAttributes;
	NSMutableSet* _nilProperties;
	id<PLJournalEntryPayloadID> _payloadID;
	unsigned _payloadVersion;

}

@property (nonatomic,readonly) id<PLJournalEntryPayloadID> payloadID; 
@property (nonatomic,readonly) unsigned payloadVersion; 
@property (nonatomic,readonly) NSSet * nilProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relationshipKeyPathsForPrefetching;
+(unsigned)payloadVersion;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)minimumSnapshotPayloadVersion;
+(void)loadModelPropertiesDescription:(id)arg1 parentPayloadProperty:(id)arg2 ;
+(id)fetchRelationshipPropertyValuesForRelationshipName:(id)arg1 fromManagedObject:(id)arg2 usingPayloadProperty:(id)arg3 ;
+(id)snapshotSortDescriptors;
+(void)validatePayloadPropertiesForManagedObjectModel:(id)arg1 ;
+(char)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
+(id)sortedObjectsToAddWithUUIDs:(id)arg1 uuidKey:(id)arg2 andExistingObjects:(id)arg3 fetchBlock:(/*^block*/id)arg4 ;
+(id)payloadWithData:(id)arg1 forPayloadID:(id)arg2 version:(unsigned)arg3 andNilProperties:(id)arg4 error:(id*)arg5 ;
+(id)additionalEntityNames;
+(char)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2 ;
+(id)_populateRelationshipKeyPathsForPrefetching:(id)arg1 currentKeyPath:(id)arg2 usingModelProperties:(id)arg3 ;
+(id)relationshipKeyPathsForPrefetchingWithModelProperties:(id)arg1 outUUIDPropertyName:(id*)arg2 ;
+(void)_validateModelProperties:(id)arg1 nonPersistedModelProperties:(id)arg2 forEntityDescription:(id)arg3 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned)payloadVersion;
-(void)mergePayload:(id)arg1 ;
-(void)applyPayloadToManagedObject:(id)arg1 payloadAttributesToUpdate:(id)arg2 ;
-(id<PLJournalEntryPayloadID>)payloadID;
-(id)initWithManagedObject:(id)arg1 changedKeys:(id)arg2 ;
-(char)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(char)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)setForUUIDEncodedData:(id)arg1 ;
-(id)encodedDataForUUIDs:(id)arg1 count:(unsigned long long)arg2 ;
-(id)orderedSetForUUIDEncodedData:(id)arg1 ;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg1 ;
-(id)UUIDStringForData:(id)arg1 ;
-(id)UUIDDataForString:(id)arg1 ;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4 ;
-(id)descriptionWithBuilder:(id)arg1 ;
-(id)descriptionForEntry:(id)arg1 ;
-(id)prettyDescriptionForEntry:(id)arg1 indent:(long long)arg2 ;
-(id)payloadDataWithError:(id*)arg1 ;
-(NSSet *)nilProperties;
-(char)comparePayloadToObjectDictionary:(id)arg1 usingModelProperties:(id)arg2 errorDescriptions:(id)arg3 ;
-(char)decodePayloadData:(id)arg1 error:(id*)arg2 ;
-(id)initWithPayloadID:(id)arg1 payloadVersion:(unsigned)arg2 nilProperties:(id)arg3 ;
-(id)initWithPayloadID:(id)arg1 payloadVersion:(unsigned)arg2 nilProperties:(id)arg3 managedObject:(id)arg4 changedKeys:(id)arg5 modelProperties:(id)arg6 ;
-(void)setPayloadAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)payloadAttributeForKey:(id)arg1 ;
-(id)_payloadAttributesListForSubRelationshipProperty:(id)arg1 withManagedObjects:(id)arg2 ;
-(void)_applyNilPropertiesWithModelProperties:(id)arg1 ;
-(void)_applyModelProperties:(id)arg1 toPayloadAttributes:(id)arg2 forManagedObject:(id)arg3 changedKeys:(id)arg4 ;
-(void)_updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forModelProperties:(id)arg3 ;
-(void)_updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forModelProperties:(id)arg3 ;
-(void)_applyPayloadToManagedObject:(id)arg1 forModelProperties:(id)arg2 payloadAttributesToUpdate:(id)arg3 ;
-(void)migrateDecodedAttributes:(id)arg1 ;
-(unsigned)latestVersionForKey:(id)arg1 inUpdatePayloads:(id)arg2 ;
-(id)descriptionForEntry:(id)arg1 withBuilder:(id)arg2 ;
-(void)addNilPropertiesToBuilder:(id)arg1 ;
-(void)addAttributesDescriptionToBuilder:(id)arg1 ;
-(char)_comparePayloadAttributes:(id)arg1 toObjectDictionary:(id)arg2 currentKeyPath:(id)arg3 usingModelProperties:(id)arg4 errorDescriptions:(id)arg5 ;
-(void)_resolveRelationshipsInObjectDictionary:(id)arg1 atKeyPath:(id)arg2 forPayloadProperty:(id)arg3 ;
@end

