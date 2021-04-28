/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/Versions/A/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCUserDefaultsBase.h>

@protocol SCRCUserDefaultsDiskArbDelegate;
@class NSLock, NSString, SCRCTargetSelectorTimer, NSSet, NSMutableDictionary, NSDictionary, SCRCThreadKey, SCRCUserDefaultsRegistry, NSUserDefaults;

@interface SCRCUserDefaults : SCRCUserDefaultsBase {

	NSLock* _lock;
	long long _familyMember;
	NSString* _familyMemberString;
	char _useMainThreadForCallbacks;
	SCRCTargetSelectorTimer* _syncTimer;
	SCRCTargetSelectorTimer* _syncTimerLocal;
	SCRCTargetSelectorTimer* _syncTimerCommon;
	SCRCTargetSelectorTimer* _syncTimerCustom;
	NSString* _domain;
	NSString* _pdomain;
	char _disableValueForKey;
	id _commonProxy;
	id _localProxy;
	CFDictionaryRef _customProxies;
	NSSet* _profileSet;
	DASessionRef _daSession;
	DASessionRef _daApprovalSession;
	NSMutableDictionary* _portableDevices;
	NSDictionary* _iDiskPortablePreferences;
	NSDictionary* _currentPortablePreferences;
	NSDictionary* _detectedPortablePreferences;
	double _lastPortablePrefFoundTime;
	NSString* _currentPortableIdentifier;
	id<SCRCUserDefaultsDiskArbDelegate> _diskArbDelegate;
	char _remote;
	char _remoteHasChanges;
	char _localPrefsTouched;
	NSString* _preferencesFolder;
	SCRCThreadKey* _threadKey;
	SCRCUserDefaultsRegistry* _registry;
	unsigned char _cursorTrackingEnabledCommand;
	id _outputManager;
	NSUserDefaults* _internal;

}

@property (nonatomic,readonly) NSUserDefaults * internal;              //@synthesize internal=_internal - In the implementation block
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)sharedUserDefaults;
+(char)_checkAndUpdateVO3Prefs:(id)arg1 ;
+(char)_checkAndUpdateVO2Prefs:(id)arg1 ;
+(void)checkAndUpdateVOPrefs;
+(void)convertFile:(id)arg1 toFile:(id)arg2 conversionType:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)common;
-(NSUserDefaults *)internal;
-(void)removeAllValues;
-(id)local;
-(void)_synchronize;
-(void)postResetNotification;
-(id)registry;
-(void)_synchronize:(char)arg1 ;
-(void)commitTransaction;
-(void)removeAllProfiles;
-(void)resetAllPreferences;
-(long long)familyMember;
-(void)setFamilyMember:(long long)arg1 ;
-(void)beginTransaction:(id)arg1 ;
-(id)threadKey;
-(void)_removeAllValuesForProxy:(id)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 proxy:(id)arg3 ;
-(id)_valueForKey:(id)arg1 proxy:(id)arg2 exclusive:(char)arg3 ;
-(id)_dictionaryWithValuesForKeys:(id)arg1 proxy:(id)arg2 ;
-(id)_allKeysForProxy:(id)arg1 ;
-(id)exclusiveValueForKey:(id)arg1 ;
-(void)setPreferencesFolder:(id)arg1 ;
-(id)currentProfile;
-(void)_setCurrentProfile:(id)arg1 post:(char)arg2 force:(char)arg3 ;
-(void)_synchronizeLocal;
-(void)_synchronizeCommon;
-(void)_synchronizeCustom;
-(void)stopPortablePreferenceDetection;
-(void)cancelTransaction;
-(id)preferencesFolder;
-(id)_domainWithName:(id)arg1 profilable:(char)arg2 ;
-(void)_globalDefaultsChanged:(id)arg1 ;
-(void)_globalCurrentProfileChanged:(id)arg1 ;
-(void)_globalProfilesUpdated:(id)arg1 ;
-(void)_globalCurrentPortablePreferencesChanged:(id)arg1 ;
-(void)_globalDefaultsReset:(id)arg1 ;
-(void)_globalDefaultsLaunch:(id)arg1 ;
-(void)_threadedSynchronizeDomain:(id)arg1 portable:(id)arg2 ;
-(void)_synchronizeDomain:(id)arg1 portable:(id)arg2 ;
-(void)_synchronizeCommon:(char)arg1 ;
-(void)_synchronizeCustom:(char)arg1 ;
-(void)_beginTransaction:(id)arg1 proxy:(id)arg2 ;
-(id)domainWithName:(id)arg1 ;
-(void)_commitDictionary:(CFDictionaryRef)arg1 local:(char)arg2 ;
-(id)_currentProfileKey;
-(id)_copyValueForKey:(id)arg1 domain:(id)arg2 portable:(id)arg3 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3 portable:(id)arg4 ;
-(id)_copyKeyListFromDomain:(id)arg1 portable:(id)arg2 ;
-(char)_hasValidSetterForKey:(id)arg1 ;
-(id)_copyValuesForKeys:(id)arg1 domain:(id)arg2 portable:(id)arg3 ;
-(void)_threadedGlobalDefaultsChanged:(id)arg1 ;
-(void)resetPreferencesFolder;
-(id)localDomain;
-(void)setUseMainThreadForCallbacks:(char)arg1 ;
-(char)useMainThreadForCallbacks;
-(void)synchronizeWhileIWait;
-(void)beginLocalTransaction:(id)arg1 ;
-(void)beginCommonTransaction:(id)arg1 ;
-(void)beginTransaction:(id)arg1 withDomain:(id)arg2 ;
-(void)suppressTransactionKVO;
-(void)_postGlobalUpdateProfilesNotofication;
-(id)_createProfileAfterIndex:(unsigned long long)arg1 withName:(id)arg2 createType:(int)arg3 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 forProfile:(id)arg3 ;
-(id)_prunedDuplicateApplications:(id)arg1 forProfile:(id)arg2 inProfiles:(id)arg3 ;
-(void)_touchJournalTime:(id)arg1 forMasterKey:(id)arg2 profileKey:(id)arg3 ;
-(void)_touchJournalTime:(id)arg1 forKey:(id)arg2 ;
-(void)_deleteJournalTimeForMasterKey:(id)arg1 profileKey:(id)arg2 ;
-(void)_validateAndPrune;
-(id)_profileForKey:(id)arg1 ;
-(void)_threadedGlobalCurrentProfileChanged:(id)arg1 ;
-(void)_threadedGlobalProfilesUpdated:(id)arg1 ;
-(id)allProfiles;
-(long long)profileCount;
-(void)duplicateProfileAtIndex:(unsigned long long)arg1 ;
-(void)addProfileAfterIndex:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)_addProfile:(id)arg1 ;
-(void)resetProfile:(id)arg1 type:(long long)arg2 ;
-(void)removeProfile:(id)arg1 ;
-(void)setName:(id)arg1 forProfile:(id)arg2 ;
-(void)setMask:(id)arg1 forProfile:(id)arg2 ;
-(void)setSites:(id)arg1 forProfile:(id)arg2 ;
-(void)setApplications:(id)arg1 forProfile:(id)arg2 ;
-(char)moveProfileAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setCurrentProfile:(id)arg1 ;
-(void)setCurrentProfile:(id)arg1 force:(char)arg2 ;
-(id)lastProfile;
-(char)isDefaultProfileCurrentProfile;
-(void)_threadedSetCurrentPortablePreferences:(id)arg1 post:(char)arg2 ;
-(void)_addPortablePreferencesForDevice:(id)arg1 useImmediately:(char)arg2 ;
-(void)_synchPortablePreferences;
-(void)_threadedSetCurrentPortablePreferences:(id)arg1 ;
-(void)_threadedGlobalCurrentPortablePreferencesChanged:(id)arg1 ;
-(void)_diskAppearedCallback:(CFDictionaryRef)arg1 ;
-(void)_tryAddingPortablePreferencesFromDiskWithDescription:(CFDictionaryRef)arg1 ;
-(id)_volumeKey:(CFDictionaryRef)arg1 ;
-(char)_isVolumeIDisk:(id)arg1 volumeKind:(id)arg2 volumeName:(id)arg3 ;
-(char)_volumeIsPortableForDescription:(CFDictionaryRef)arg1 ;
-(void)_spoolAndAddPortablePreferencesForDevice:(id)arg1 ;
-(void)_removePortablePreferencesForDevice:(id)arg1 ;
-(void)_threadedPollForPortablePreferences;
-(void)_setDetectedPortablePreferences:(id)arg1 useImmediately:(char)arg2 ;
-(void)_setJournalTime:(id)arg1 forKey:(id)arg2 updatePortable:(id)arg3 ;
-(char)_isHomeValueNewerForKey:(id)arg1 time:(id*)arg2 ;
-(char)_isHomeValueNewerForMasterKey:(id)arg1 profileKey:(id)arg2 time:(id*)arg3 ;
-(id)_newestValueForMasterKey:(id)arg1 profileKey:(id)arg2 homeProfile:(id)arg3 portableProfile:(id)arg4 time:(id*)arg5 ;
-(void)_syncHome:(id)arg1 portable:(id)arg2 kvoTarget:(id)arg3 ;
-(void)_synchProfilesForPortablePreferences;
-(id)_getPortablePreferenceIdentifierForDevice:(id)arg1 ;
-(void)_addAlwaysUsePortalePreferenceIdentifier:(id)arg1 ;
-(id)_alwaysUsePortablePreferenceIdentifiers;
-(id)iDiskVolumePath;
-(char)isIDiskConnected;
-(id)mobileMeUsername;
-(char)isPortablePreferenceDetectionEnabled;
-(void)startPortablePreferenceDetectionWithDelegate:(id)arg1 ;
-(void)setPortablePreferencesSetting:(int)arg1 ;
-(int)portablePreferencesSetting;
-(id)allPortableDevices;
-(void)createPortablePreferencesOnDevice:(id)arg1 replace:(char)arg2 ;
-(char)portablePreferencesExistOnDevice:(id)arg1 remote:(char*)arg2 ;
-(void)setCurrentPortablePreferences:(id)arg1 ;
-(id)currentPortablePreferences;
-(id)detectedPortablePreferences;
-(void)ejectPortablePreferences;
-(void)_diskAppearedSpinUpAndCallback:(CFDictionaryRef)arg1 ;
-(void)_diskDescriptionChangedCallback:(CFDictionaryRef)arg1 keys:(CFArrayRef)arg2 ;
-(void)_diskUnmountCallbackFunction:(CFDictionaryRef)arg1 ;
-(void)_diskDisappearedCallback:(CFDictionaryRef)arg1 ;
-(void)pollForPortablePreferences;
-(void)setAlwaysUsePortablePreferences:(id)arg1 ;
-(char)shouldAlwaysUsePortablePreferences:(id)arg1 ;
-(void)resetAlwaysUsePortablePreferences;
-(void)_clearPreferencesForDomain:(id)arg1 ;
-(id)preferenceDomains;
-(void)resetNonCustomPreferences;
-(void)_importFromDictionary:(id)arg1 archiveType:(unsigned long long)arg2 mergeItems:(unsigned long long)arg3 ;
-(id)_generatePrimaryKey;
-(void)initializePronunciationsFromSharedUserDefaults;
-(unsigned long long)_getArchiveTypeFromDictionary:(id)arg1 ;
-(unsigned long long)archiveTypeOfFileAtPath:(id)arg1 ;
-(void)_mergeElementDictionary:(id)arg1 ;
-(void)_mergeWebspotDictionary:(id)arg1 ;
-(void)_replaceDictionary:(id)arg1 forProxy:(id)arg2 ;
-(id)customFilePrefixesForArchiveType:(unsigned long long)arg1 ;
-(id)_prunedKeys:(id)arg1 archiveType:(unsigned long long)arg2 ;
-(unsigned long long)_doesWebSpotExist:(id)arg1 inWebSpots:(id)arg2 ;
-(void)_insertWebSpot:(id)arg1 inWebSpots:(id)arg2 ;
-(unsigned long long)_indexOfLabel:(id)arg1 inLabels:(id)arg2 ;
-(void)_threadedGlobalDefaultsReset;
-(void)resetPreferencesForDomain:(id)arg1 ;
-(void)addPronunciation:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)mergeMaskForFileAtPath:(id)arg1 ;
-(char)importFromPath:(id)arg1 mergeItems:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)exportToPath:(id)arg1 archiveType:(unsigned long long)arg2 profileKeys:(id)arg3 ;
@end
