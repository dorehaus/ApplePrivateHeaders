/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPDevices.framework/Versions/A/AMPDevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMPDevicesProtocol
@required
-(void)fetchSetupInfoForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)completeSetupForDevice:(id)arg1 didAcceptLicenseAgreement:(char)arg2 didAcceptWarrantyInfo:(char)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchSettingsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setSyncPrefs:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchAccessibilityPrefsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setAccessibilityPrefs:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchTotalsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)isSyncAllowedForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)isSyncInProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(id)startSyncForDevice:(id)arg1 withOptions:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(id)registerForSyncProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)stopSyncForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)skipSyncOperation:(unsigned)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)checkForSyncWhenConnectedForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchAutoFillPrefsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setAutoFillPrefs:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)autoFillMusicForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)canAcceptObjects:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)canAcceptFiles:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)copyObjects:(id)arg1 toDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)copyFiles:(id)arg1 toDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)deleteObjects:(id)arg1 fromDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)hasSyncErrorsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchSyncErrorsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchLastBackupDatesForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchBackupInfoForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchBackupsForDevice:(id)arg1 includingIncompatibleBackups:(char)arg2 includingAllCompatibleBackups:(char)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchAllBackupsWithReply:(/*^block*/id)arg1;
-(void)changeBackupPasswordForDevice:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchBackupPasswordFromKeychainForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchPasswordFromKeychainForBackup:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setKeychainBackupPassword:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)isBackupInProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(id)backupDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)cancelBackupForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)isRestoreFromBackupInProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(id)restoreDevice:(id)arg1 fromBackup:(id)arg2 withPassword:(id)arg3 setPasswordInKeychain:(char)arg4 withReply:(/*^block*/id)arg5;
-(id)registerForBackupProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(id)registerForRestoreProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)archiveBackup:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)deleteBackup:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchActivationStateForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchActivationInfoForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)completeActivationForDevice:(id)arg1 withInfo:(id)arg2 withData:(id)arg3 withHeaders:(id)arg4 withReply:(/*^block*/id)arg5;
-(void)fetchSoftwareInfoForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)checkForSoftwareUpdatesForDevice:(id)arg1 withOptions:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)startSoftwareUpdateForDevice:(id)arg1 withOptions:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)startSoftwareRestoreForDevice:(id)arg1 withOptions:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)isSoftwareUpdateOrRestoreInProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(id)registerForSoftwareUpdateRestoreProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(id)registerForSoftwareDownloadProgressForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchDeviceIdentifiersWithReply:(/*^block*/id)arg1;
-(void)fetchBatteryInfoForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setName:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)resetWarningsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)revealDeviceInFinder:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)ejectDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchFileSharingAppsForDevice:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchFileSharingItemsForApp:(id)arg1 forDevice:(id)arg2 withReply:(/*^block*/id)arg3;
-(id)copyItemAtURL:(id)arg1 toURL:(id)arg2 withReply:(/*^block*/id)arg3;
-(id)moveItemAtURL:(id)arg1 toURL:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)renameItemAtURL:(id)arg1 to:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)deleteItemAtURL:(id)arg1 withReply:(/*^block*/id)arg2;

@end
