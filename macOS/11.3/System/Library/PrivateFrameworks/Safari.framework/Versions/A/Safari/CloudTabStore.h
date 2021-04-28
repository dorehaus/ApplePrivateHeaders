/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSCloudTabStore.h>
#import <libobjc.A.dylib/WBSCloudTabStoreDelegate.h>

@class CloudTabKeyValueStore, NSTimer, NSDate, NSString;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {

	CloudTabKeyValueStore* _keyValueStore;
	NSTimer* _saveTabsTimer;
	double _lastSaveTabsTimerInterval;
	char _shouldFinishRefreshingCloudTabsSupportedAfterCloudTabKeyValueStoreDictionaryIsAvailable;
	char _shouldFinishRefreshingCloudTabsSupportedAfterCloudKitFetchCompletes;
	char _shouldUpdateBothKVSAndCloudKitAfterFinishingRefreshOfCloudTabsSupported;
	char _didAttemptToCloseAtLeastOneTab;
	char _suppressSavingTabs;
	char _cloudTabsSupported;
	NSDate* _dateOfLastCloudTabDevicesUpdate;

}

@property (assign,nonatomic) char cloudTabsSupported;               //@synthesize cloudTabsSupported=_cloudTabsSupported - In the implementation block
@property (assign,nonatomic) char suppressSavingTabs;               //@synthesize suppressSavingTabs=_suppressSavingTabs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCloudTabStore;
+(char)browserTabQualifiesForUserActivityContinuation:(id)arg1 ;
+(id)cloudTabForBrowserTab:(id)arg1 ;
+(char)browserTabQualifiesForCloudTabSyncing:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_keyValueStoreDictionaryRepresentation:(long long)arg1 ;
-(void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2 ;
-(id)_currentDeviceUUID;
-(void)_closeRequestedTabIfPossible:(id)arg1 ;
-(void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 ;
-(void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)arg1 error:(id)arg2 ;
-(void)synchronizeCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)syncedCloudTabDevices;
-(id)dateOfLastCloudTabDevicesUpdate;
-(char)closeTab:(id)arg1 onDevice:(id)arg2 ;
-(char)closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(char)closeAllTabsOnDevice:(id)arg1 ;
-(void)clearTabsForCurrentDevice;
-(void)saveTabsForCurrentDeviceSoon;
-(void)saveTabsForCurrentDeviceAndWaitForOperationsToComplete;
-(char)cloudTabsSupported;
-(void)_cloudKitDataWasUpdatedOnServer:(id)arg1 ;
-(void)_iCloudLoggedInStateMayHaveChanged:(id)arg1 ;
-(void)_refreshCloudTabsSupported;
-(char)_hasCloudTabsEntitlementForKVS;
-(void)_keyValueStoreDidChangeExternally:(long long)arg1 notification:(id)arg2 ;
-(void)_cancelPendingSaveTabsForCurrentDevice;
-(char)suppressSavingTabs;
-(void)_saveTabsForCurrentDeviceDelayTimerFired;
-(char)_saveTabsForCurrentDeviceForcingSaveEvenIfUnchanged:(char)arg1 blockUntilDone:(char)arg2 ;
-(double)_delayForSavingCurrentCloudTabDevice;
-(void)_saveTabsForCurrentDeviceAfterDelay:(double)arg1 ;
-(char)_shouldUseCloudKitForSavingCurrentDevice;
-(id)_allBrowserTabViewItemsInCloudTabOrder;
-(id)_dictionaryForCurrentDeviceWithBrowserTabs:(id)arg1 ;
-(char)_shouldSaveCurrentDeviceDictionary:(id)arg1 ;
-(void)_updateAfterKeyValueStoreChangePostingChangeNotification:(char)arg1 ;
-(void)_clearTabsForCurrentDeviceBlockingUntilDone:(char)arg1 ;
-(void)_handleQuotaViolation;
-(id)_currentDeviceName;
-(char)_atLeastOneOtherActiveDeviceIsRegistered;
-(void)setCloudTabsSupported:(char)arg1 ;
-(char)_currentDeviceIsRegistered;
-(void)_clearTabsForFirstDuplicateDevice;
-(void)_keyValueStoreDictionaryRepresentationDidChange:(id)arg1 ;
-(void)_finishRefreshingCloudTabsSupported;
-(void)_updateAfterCloudKitDataChangePostingChangeNotification:(char)arg1 ;
-(void)debugSaveTabsForCurrentDeviceUsingNewUUID;
-(void)debugClearTabsForAllDevices;
-(void)setSuppressSavingTabs:(char)arg1 ;
@end

