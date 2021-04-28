/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMMigrationEngineStep.h>
#import <libobjc.A.dylib/SMCopyEngineDelegate.h>

@class SMConfMigrator, NSArray, SMCopyEngine;

@interface SMMigrateSystemInfo : SMMigrationEngineStep <SMCopyEngineDelegate> {

	char _onlyUpdateSystemSettings;
	SMConfMigrator* _confMigrator;
	NSArray* _settingsCopiers;
	SMCopyEngine* _fileCopyEngine;

}

@property (retain) SMConfMigrator * confMigrator;              //@synthesize confMigrator=_confMigrator - In the implementation block
@property (retain) NSArray * settingsCopiers;                  //@synthesize settingsCopiers=_settingsCopiers - In the implementation block
@property (retain) SMCopyEngine * fileCopyEngine;              //@synthesize fileCopyEngine=_fileCopyEngine - In the implementation block
@property (assign) char onlyUpdateSystemSettings;              //@synthesize onlyUpdateSystemSettings=_onlyUpdateSystemSettings - In the implementation block
-(id)description;
-(id)prepare;
-(id)process;
-(id)postProcess;
-(id)initWithEngine:(id)arg1 ;
-(double)estimatedTimeToCompletePhase:(unsigned long long)arg1 ;
-(void)setFileCopyEngine:(SMCopyEngine *)arg1 ;
-(SMCopyEngine *)fileCopyEngine;
-(double)estimatedTimeRemainingForPhase:(unsigned long long)arg1 ;
-(void)copierFailed:(id)arg1 error:(id)arg2 ;
-(void)transferRateChanged:(double)arg1 ;
-(void)estimatedTimeRemainingChanged:(double)arg1 ;
-(id)preProcess;
-(id)copyPaths;
-(SMConfMigrator *)confMigrator;
-(void)setConfMigrator:(SMConfMigrator *)arg1 ;
-(char)onlyUpdateSystemSettings;
-(void)setSettingsCopiers:(NSArray *)arg1 ;
-(void)setupKerberos;
-(void)prepareForServerMigration;
-(void)runOpenDirectoryMigrationTool;
-(void)copyMachineSettings;
-(void)copyNetworkSettings;
-(void)repairDatavaultPermissions;
-(void)finishKerberosSetup;
-(char)copyTimeZone;
-(char)copySystemSettings;
-(char)copyRemoteManagementSettings;
-(char)copyVirtualMemorySettings;
-(char)copyIgnorePremissionsSettings;
-(void)migrateDirectoryServicesDatabase;
-(void)migrateGlobalPreferences;
-(char)migrateNetworkSettings;
-(char)isHostconfigServiceEnabledOnSourceSystem:(id)arg1 ;
-(NSArray *)settingsCopiers;
-(char)deferCopyPath:(id)arg1 sourceSystem:(id)arg2 targetSystme:(id)arg3 ;
-(void)setOnlyUpdateSystemSettings:(char)arg1 ;
@end

