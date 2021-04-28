/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OSIUtilities : NSObject
+(id)serialNumber;
+(char)isNetBooted;
+(id)parseFirmlinkManifestForVolume:(id)arg1 withError:(id*)arg2 ;
+(id)systemVersionForMountPoint:(id)arg1 ;
+(void)inducePanicWithMessage:(id)arg1 onInternalOnly:(char)arg2 ;
+(char)isCSFusion:(id)arg1 ;
+(int)promoteDiskToReadWrite:(id)arg1 ;
+(char)unsupportedInstallEnvironmentForGatheringDiagnosticsWithError:(id*)arg1 ;
+(id)mountDiskImageWithPath:(id)arg1 withError:(id*)arg2 ;
+(char)shouldAllowInsecureCollections;
+(id)mapPathToROSV:(id)arg1 ;
+(void)setUseROSVPaths:(char)arg1 ;
+(char)stopAutomationOnDisk:(id)arg1 reblessUUID:(id)arg2 ;
+(id)mapMountPointToROSVPath:(id)arg1 ;
+(void)forceNVRAMSync;
+(char)mountRequiredVolume:(id)arg1 purpose:(id)arg2 ;
+(id)getEFIVersion;
+(char)isVirtualMachine;
+(void)muteBootChimeForNextReboot;
+(void)enableDarkReboot;
+(void)rebootNow;
+(char)remountVolume:(id)arg1 preferredMountpoint:(id)arg2 disableFirmlinks:(char)arg3 andPurpose:(id)arg4 ;
+(char)insistentUnmount:(id)arg1 purpose:(id)arg2 ;
+(id)allDiskUUIDs:(id)arg1 ;
+(char)mountRequiredVolume:(id)arg1 atLocation:(id)arg2 disableFirmlinks:(char)arg3 andPurpose:(id)arg4 ;
+(char)isAPFSFusion:(id)arg1 ;
+(id)systemVersionForDisk:(id)arg1 ;
+(id)masterBOMSystemPath;
+(char)forceAttributesOfSrcPath:(id)arg1 toDstPath:(id)arg2 ;
+(void)takeRecoveryDiagnose;
@end

