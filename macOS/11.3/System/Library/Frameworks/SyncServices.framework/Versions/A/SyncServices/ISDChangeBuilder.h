/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, ISDEntity, NSMutableDictionary, NSMutableSet, NSMutableArray, ISDRecordStore;

@interface ISDChangeBuilder : NSObject {

	NSDictionary* _supportedPropertyNames;
	id _delegate;
	NSString* _recordId;
	NSString* _clientId;
	unsigned _fromGeneration;
	unsigned _toGeneration;
	char _produceDeletesForMissingNewValues;
	char _hasOldRecord;
	char _hasNewRecord;
	char _newRelationshipValuesAreTuples;
	char _takeMissingCodependentValuesFromOldValues;
	ISDEntity* _entity;
	NSMutableDictionary* _oldValues;
	NSDictionary* _oldUnformattedRelationships;
	NSMutableDictionary* _newValues;
	NSMutableSet* _deletedPropertyNames;
	NSMutableSet* _missingCodependentPropertyNames;
	NSMutableArray* _deltas;
	id _change;
	char _clientIsTrusted;
	char _isPushingTruth;
	ISDRecordStore* _clientRecordStore;
	NSMutableDictionary* _relationshipNewReferences;
	NSMutableArray* _defaultPropertyNames;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)entity;
-(void)setHasOldValue:(char)arg1 ;
-(id)recordId;
-(id)change;
-(void)_removeNullValuesAndDefaultPropertyNamesFromDictionary:(id)arg1 ;
-(int)actionFromDeltaDictionary:(id)arg1 inChange:(id)arg2 ;
-(char)isSpecialGlobalProperty:(id)arg1 propertyDescription:(id*)arg2 ;
-(id)unformattedTuplesForRelationshipName:(id)arg1 ;
-(char)isOldValue:(id)arg1 equalToNewValue:(id)arg2 propertyDescription:(id)arg3 ;
-(char)shouldCreateDeltaForProperty:(id)arg1 ;
-(char)shouldCreateDeltaBetweenOldValue:(id)arg1 newValue:(id)arg2 propertyDescription:(id)arg3 ;
-(void)validateValue:(id)arg1 forPropertyDescription:(id)arg2 ;
-(void)computeActualChangesNewValues:(id)arg1 oldValues:(id)arg2 forProperty:(id)arg3 ;
-(void)makeSureToPushCodependentPropertiesForPropertyName:(id)arg1 ;
-(void)buildDeltasForExistingProperties;
-(void)buildDeltasForNewProperties;
-(void)buildDeltasForMissingCodependentProperties;
-(void)buildDeltas;
-(id)initWithClientId:(id)arg1 recordId:(id)arg2 entity:(id)arg3 propertyNamesSynchronizedByClient:(id)arg4 lastModifiedGeneration:(unsigned)arg5 currentGeneration:(unsigned)arg6 clientIsTrusted:(char)arg7 clientState:(id)arg8 ;
-(id)relationshipNewReferences;
-(void)setIsPushingTruth:(char)arg1 ;
-(char)isPushingTruth;
-(id)_newUndeletedRecordIdsFromTuples:(id)arg1 ;
-(void)takeOldValuesFromRecord:(id)arg1 ;
-(void)takeNewValuesFromDictionary:(id)arg1 ;
-(void)takeNewValuesFromChange:(id)arg1 ;
-(void)takeNewValuesFromRecord:(id)arg1 ;
-(void)setProduceDeletesForMissingNewValues:(char)arg1 ;
-(void)setShouldTakeMissingCodependentValuesFromOldValues:(char)arg1 ;
-(char)_isTargetIdFiltered:(id)arg1 ;
-(char)_isDefaultValue:(id)arg1 ;
@end
