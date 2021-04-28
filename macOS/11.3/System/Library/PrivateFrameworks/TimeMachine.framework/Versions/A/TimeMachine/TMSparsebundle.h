/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface TMSparsebundle : NSObject {

	NSURL* _sparsebundleURL;

}

@property (copy) NSURL * sparsebundleURL;                //@synthesize sparsebundleURL=_sparsebundleURL - In the implementation block
@property (readonly) NSString * hostUUID; 
@property (readonly) NSString * macAddress; 
+(id)_sparsebundleWithExtension:(id)arg1 matchingHostUUIDs:(id)arg2 orMACAddresses:(id)arg3 inDirectory:(id)arg4 ;
+(id)sparsebundleMatchingHostUUIDs:(id)arg1 orMACAddresses:(id)arg2 inDirectory:(id)arg3 ;
+(id)_fileSystemPersonalityForNewSparsebundles;
+(unsigned long long)sizeLimitForSparsebundleInDirectory:(id)arg1 ;
+(id)_tmpNameForCreation;
+(id)sparsebundleMatchingThisComputerInDirectory:(id)arg1 ;
+(id)purgeableSparsebundlesInDirectory:(id)arg1 ;
+(id)createSparsebundleOnVolume:(id)arg1 usingSystemKeychainAccount:(id)arg2 ;
-(char)delete:(id*)arg1 ;
-(NSString *)macAddress;
-(char)isImmutable;
-(NSString *)hostUUID;
-(id)initWithSparsebundleURL:(id)arg1 ;
-(char)_isPurgeable;
-(char)_isPartiallyCreated;
-(NSURL *)sparsebundleURL;
-(char)setHealthCheckState:(int)arg1 extendedSkipInterval:(char)arg2 ;
-(id)updateAndRenameForThisComputer;
-(id)_timeMachineInfoURL;
-(id)_tokenURL;
-(id)_timeMachineInfoBackupURL;
-(char)setImmutable:(char)arg1 ;
-(char)_writeAndFlushPropertyList:(id)arg1 toURL:(id)arg2 ;
-(id)readTimeMachineInfo;
-(char)writeTimeMachineInfo:(id)arg1 ;
-(id)_deviceNamesForSparsebundlePath:(id)arg1 ;
-(void)setSparsebundleURL:(NSURL *)arg1 ;
-(id)_resultsURL;
-(id)_backupHistoryURL;
-(id)_imagePathForDrive:(unsigned)arg1 ;
-(id)_bsdNameForMedia:(unsigned)arg1 ;
-(void)_iterate:(unsigned)arg1 options:(char)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)_unmountDeviceNames:(id)arg1 force:(char)arg2 ;
-(void)_ejectDeviceNames:(id)arg1 ;
-(id)_deviceNames;
-(id)_backupDiskDescription;
-(id)backupDiskDevicePath;
-(unsigned)_encryptionStateForDrive:(unsigned)arg1 ;
-(void)_detachOrphanSparsebundles;
-(char)_hideExtension;
-(char)writeBackupResultDictionary:(id)arg1 ;
-(char)writeBackupHistory:(id)arg1 ;
-(id)backupDiskMountPoint;
-(char)backupDiskIsWritable;
-(char)backupDiskIsMountable;
-(char)backupDiskIsHFS;
-(char)backupDiskIsAPFS;
-(unsigned)encryptionState;
-(int)attachWithMountSpec:(id)arg1 ;
-(void)eject;
-(char)unmountForce:(char)arg1 ;
-(int)healthCheckState;
-(char)setHealthCheckState:(int)arg1 ;
-(void)setHealthCheckStateToExtendedSkip;
-(char)healthCheckExtendedSkip;
-(id)healthCheckDate;
@end

