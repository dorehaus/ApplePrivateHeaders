/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/ISDDataObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/MinglerSyncStateMutating.h>

@class NSString, ISDFileReference, NSArray, NSData;

@interface ISDClient : ISDDataObject <NSCoding, MinglerSyncStateMutating> {

	NSString* _clientId;
	ISDFileReference* _descriptionFile;
	NSString* _clientType;
	NSString* _displayName;
	int _idNumber;
	ISDFileReference* _imageFile;
	ISDFileReference* _syncAlertTool;
	NSArray* _syncAlertTypes;
	ISDFileReference* _formatterBundle;
	NSString* _formatterBundleClassName;
	NSArray* _syncStates;
	NSData* _filterData;
	char _synchronizesAllEntities;
	char _hasDynamicSyncAlertHandler;
	char _useLocalIdsForGUIDs;
	char _neverFormatsRelationships;
	char _syncsAfterClients;
	int _trackRecordModificationTimes;
	char _isAppProvider;
	ISDFileReference* _localizationBundleRef;

}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)initWithClientId:(id)arg1 ;
-(bycopy id)clientId;
-(bycopy id)localizationBundle;
-(id)clientType;
-(id)entityNames;
-(void)setClientType:(id)arg1 ;
-(id)syncStates;
-(void)setSyncStates:(id)arg1 ;
-(int)idNumber;
-(id)enabledEntityNames;
-(id)fastClientId;
-(void)_setIdNumber:(int)arg1 ;
-(id)entityNamesForMinglerToUpdate;
-(void)setSyncsAfterClients:(char)arg1 ;
-(void)setSyncAlertTypes:(id)arg1 ;
-(id)descriptionFile;
-(void)setSyncAlertTool:(id)arg1 ;
-(char)synchronizesAllEntities;
-(id)syncStateForEntityWithName:(id)arg1 createIfAppropriate:(char)arg2 ;
-(char)formatsRelationships;
-(void)setFormatsRelationships:(char)arg1 ;
-(void)setNeverFormatsRelationships:(char)arg1 ;
-(void)setFormatterBundleClassName:(id)arg1 ;
-(void)setSynchronizesAllEntities:(char)arg1 ;
-(id)imageFile;
-(id)syncAlertTool;
-(bycopy id)formatterBundle;
-(void)setDescriptionFile:(id)arg1 ;
-(char)isEqualClientDescription:(id)arg1 ;
-(char)hasDynamicSyncAlertHandler;
-(id)syncAlertTypes;
-(char)morphInToObject:(id)arg1 ;
-(id)syncStatesForEntityNames:(id)arg1 ;
-(char)isExplicitlyRegisteredToSyncEntityName:(id)arg1 andPropertyName:(id)arg2 ;
-(id)anchorChildren;
-(oneway void)setShouldRefilter:(bycopy id)arg1 forEntityNamed:(id)arg2 ;
-(oneway void)setLastSyncGeneration:(bycopy id)arg1 forEntityNamed:(id)arg2 ;
-(char)shouldTrackRecordModificationTimes;
-(char)useLocalIdsForGUIDs;
-(void)setHasDynamicSyncAlertHandler:(char)arg1 ;
-(char)syncsAfterClients;
-(void)setUseLocalIdsForGUIDs:(char)arg1 ;
-(void)setImageFile:(id)arg1 ;
-(int)trackRecordModificationTimes;
-(void)setTrackRecordModificationTimes:(int)arg1 ;
-(id)filterData;
-(void)setFilterData:(id)arg1 filteredEntityNames:(id)arg2 ;
-(char)neverFormatsRelationships;
-(void)setSyncStatesAfterSyncSession:(id)arg1 ;
-(bycopy id)formatterBundleClassName;
-(char)isAppProvider;
-(id)syncStatesByEntityName:(id)arg1 ;
-(id)syncStateForEntityName:(id)arg1 ;
-(oneway void)setSyncMode:(bycopy id)arg1 forEntityNamed:(id)arg2 ;
-(void)setFormatterBundle:(id)arg1 ;
-(void)setLocalizationBundleRef:(id)arg1 ;
-(void)setIsAppProvider:(char)arg1 ;
-(char)isExplicitlyRegisteredToSyncEntityName:(id)arg1 ;
@end

