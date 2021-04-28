/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSString, NSNumberFormatter, NSObject;

@interface PLLibraryMigrationMessageTracer : NSObject {

	NSString* _validationSignature;
	char _upgradeOccurred;
	char _is_auto_promote;
	char _is_default_location;
	char _is_default_name;
	char _is_system_library;
	char _result;
	char _libSizingStarted;
	NSString* _error;
	NSString* _client_id;
	NSString* _client_version;
	NSString* _from_lib_version;
	NSString* _to_lib_version;
	double _duration_start;
	double _duration_end;
	double _dur_pre_handoff;
	double _check_permissions_0_start;
	double _check_permissions_0_end;
	double _repair_permissions_1_start;
	double _repair_permissions_1_end;
	double _clone_upgrade_2_start;
	double _clone_upgrade_2_end;
	double _rebuild_3_start;
	double _rebuild_3_end;
	double _upgrade_4_start;
	double _upgrade_4_end;
	double _reclone_upgrade_5_start;
	double _reclone_upgrade_5_end;
	double _reupgrade_6_start;
	double _reupgrade_6_end;
	NSString* _signature;
	NSString* _volume;
	NSString* _fs_type;
	unsigned long long _lib_size;
	NSString* _plmu_version;
	NSNumberFormatter* _twoDigitBucketFormatter;
	NSNumberFormatter* _threeDigitBucketFormatter;
	NSObject*<OS_dispatch_semaphore> _libSizeSemaphore;

}

@property (retain) NSString * error;                                               //@synthesize error=_error - In the implementation block
@property (copy) NSString * client_id;                                             //@synthesize client_id=_client_id - In the implementation block
@property (copy) NSString * client_version;                                        //@synthesize client_version=_client_version - In the implementation block
@property (copy) NSString * from_lib_version;                                      //@synthesize from_lib_version=_from_lib_version - In the implementation block
@property (copy) NSString * to_lib_version;                                        //@synthesize to_lib_version=_to_lib_version - In the implementation block
@property (assign) double duration_start;                                          //@synthesize duration_start=_duration_start - In the implementation block
@property (assign) double duration_end;                                            //@synthesize duration_end=_duration_end - In the implementation block
@property (assign) double dur_pre_handoff;                                         //@synthesize dur_pre_handoff=_dur_pre_handoff - In the implementation block
@property (assign) double check_permissions_0_start;                               //@synthesize check_permissions_0_start=_check_permissions_0_start - In the implementation block
@property (assign) double check_permissions_0_end;                                 //@synthesize check_permissions_0_end=_check_permissions_0_end - In the implementation block
@property (assign) double repair_permissions_1_start;                              //@synthesize repair_permissions_1_start=_repair_permissions_1_start - In the implementation block
@property (assign) double repair_permissions_1_end;                                //@synthesize repair_permissions_1_end=_repair_permissions_1_end - In the implementation block
@property (assign) double clone_upgrade_2_start;                                   //@synthesize clone_upgrade_2_start=_clone_upgrade_2_start - In the implementation block
@property (assign) double clone_upgrade_2_end;                                     //@synthesize clone_upgrade_2_end=_clone_upgrade_2_end - In the implementation block
@property (assign) double rebuild_3_start;                                         //@synthesize rebuild_3_start=_rebuild_3_start - In the implementation block
@property (assign) double rebuild_3_end;                                           //@synthesize rebuild_3_end=_rebuild_3_end - In the implementation block
@property (assign) double upgrade_4_start;                                         //@synthesize upgrade_4_start=_upgrade_4_start - In the implementation block
@property (assign) double upgrade_4_end;                                           //@synthesize upgrade_4_end=_upgrade_4_end - In the implementation block
@property (assign) double reclone_upgrade_5_start;                                 //@synthesize reclone_upgrade_5_start=_reclone_upgrade_5_start - In the implementation block
@property (assign) double reclone_upgrade_5_end;                                   //@synthesize reclone_upgrade_5_end=_reclone_upgrade_5_end - In the implementation block
@property (assign) double reupgrade_6_start;                                       //@synthesize reupgrade_6_start=_reupgrade_6_start - In the implementation block
@property (assign) double reupgrade_6_end;                                         //@synthesize reupgrade_6_end=_reupgrade_6_end - In the implementation block
@property (copy) NSString * signature;                                             //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * volume;                                                //@synthesize volume=_volume - In the implementation block
@property (copy) NSString * fs_type;                                               //@synthesize fs_type=_fs_type - In the implementation block
@property (assign) char is_auto_promote;                                           //@synthesize is_auto_promote=_is_auto_promote - In the implementation block
@property (assign) char is_default_location;                                       //@synthesize is_default_location=_is_default_location - In the implementation block
@property (assign) char is_default_name;                                           //@synthesize is_default_name=_is_default_name - In the implementation block
@property (assign) char is_system_library;                                         //@synthesize is_system_library=_is_system_library - In the implementation block
@property (assign) unsigned long long lib_size;                                    //@synthesize lib_size=_lib_size - In the implementation block
@property (copy) NSString * plmu_version;                                          //@synthesize plmu_version=_plmu_version - In the implementation block
@property (assign) char result;                                                    //@synthesize result=_result - In the implementation block
@property (retain) NSNumberFormatter * twoDigitBucketFormatter;                    //@synthesize twoDigitBucketFormatter=_twoDigitBucketFormatter - In the implementation block
@property (retain) NSNumberFormatter * threeDigitBucketFormatter;                  //@synthesize threeDigitBucketFormatter=_threeDigitBucketFormatter - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> libSizeSemaphore;              //@synthesize libSizeSemaphore=_libSizeSemaphore - In the implementation block
@property (assign) char libSizingStarted;                                          //@synthesize libSizingStarted=_libSizingStarted - In the implementation block
@property (assign) char upgradeOccurred;                                           //@synthesize upgradeOccurred=_upgradeOccurred - In the implementation block
-(NSString *)error;
-(NSString *)volume;
-(char)result;
-(void)setResult:(char)arg1 ;
-(void)setError:(NSString *)arg1 ;
-(NSString *)signature;
-(NSString *)client_id;
-(void)setClient_id:(NSString *)arg1 ;
-(void)setVolume:(NSString *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(void)recordError:(id)arg1 ;
-(id)initWithClientID:(id)arg1 andVersion:(id)arg2 ;
-(void)recordPLMUVersion:(id)arg1 ;
-(void)calculateAndRecordLibrarySizeForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordDurPreHandoff:(id)arg1 ;
-(void)recordError:(id)arg1 backupContextKey:(id)arg2 ;
-(void)recordAutoPromoteState:(char)arg1 ;
-(void)recordFileSystemInfoForURL:(id)arg1 ;
-(void)recordSystemLibraryState:(char)arg1 ;
-(void)recordDefaultLocationState:(char)arg1 ;
-(void)recordDefaultNameState:(char)arg1 ;
-(void)addToSignature:(id)arg1 ;
-(void)setValidationSignature:(id)arg1 ;
-(void)startMigration;
-(void)endMigration;
-(void)endPreHandoff;
-(void)startCheckPermissions;
-(void)endCheckPermissions;
-(void)startRepairPermissions;
-(void)endRepairPermissions;
-(void)startCloneAndUpgrade;
-(void)endCloneAndUpgrade;
-(void)startRebuild;
-(void)endRebuild;
-(void)startRDUpgrade;
-(void)endRDUpgrade;
-(void)startRecloneAndUpgrade;
-(void)endRecloneAndUpgrade;
-(void)startSecondRDUpgrade;
-(void)endSecondRDUpgrade;
-(void)logToCoreAnalytics;
-(void)logToCoreAnalyticsReportingSuccess;
-(void)logToCoreAnalyticsReportingFailure;
-(long long)boolToLong:(char)arg1 ;
-(long long)safeLong:(double)arg1 ;
-(long long)bucketTimeValue:(long long)arg1 ;
-(long long)bucketSizeValue:(unsigned long long)arg1 ;
-(void)recordFromLibraryVersionForURL:(id)arg1 ;
-(void)recordFromLibraryVersion:(id)arg1 ;
-(void)recordToLibraryVersion:(id)arg1 ;
-(int)libraryVersionAtRoot:(id)arg1 requirePathIsRoot:(char)arg2 ;
-(char)checkSandboxForPath:(id)arg1 ;
-(int)unifiedLibraryVersionAtRoot:(id)arg1 requirePathIsRoot:(char)arg2 ;
-(char)upgradeOccurred;
-(void)setUpgradeOccurred:(char)arg1 ;
-(NSString *)client_version;
-(void)setClient_version:(NSString *)arg1 ;
-(NSString *)from_lib_version;
-(void)setFrom_lib_version:(NSString *)arg1 ;
-(NSString *)to_lib_version;
-(void)setTo_lib_version:(NSString *)arg1 ;
-(double)duration_start;
-(void)setDuration_start:(double)arg1 ;
-(double)duration_end;
-(void)setDuration_end:(double)arg1 ;
-(double)dur_pre_handoff;
-(void)setDur_pre_handoff:(double)arg1 ;
-(double)check_permissions_0_start;
-(void)setCheck_permissions_0_start:(double)arg1 ;
-(double)check_permissions_0_end;
-(void)setCheck_permissions_0_end:(double)arg1 ;
-(double)repair_permissions_1_start;
-(void)setRepair_permissions_1_start:(double)arg1 ;
-(double)repair_permissions_1_end;
-(void)setRepair_permissions_1_end:(double)arg1 ;
-(double)clone_upgrade_2_start;
-(void)setClone_upgrade_2_start:(double)arg1 ;
-(double)clone_upgrade_2_end;
-(void)setClone_upgrade_2_end:(double)arg1 ;
-(double)rebuild_3_start;
-(void)setRebuild_3_start:(double)arg1 ;
-(double)rebuild_3_end;
-(void)setRebuild_3_end:(double)arg1 ;
-(double)upgrade_4_start;
-(void)setUpgrade_4_start:(double)arg1 ;
-(double)upgrade_4_end;
-(void)setUpgrade_4_end:(double)arg1 ;
-(double)reclone_upgrade_5_start;
-(void)setReclone_upgrade_5_start:(double)arg1 ;
-(double)reclone_upgrade_5_end;
-(void)setReclone_upgrade_5_end:(double)arg1 ;
-(double)reupgrade_6_start;
-(void)setReupgrade_6_start:(double)arg1 ;
-(double)reupgrade_6_end;
-(void)setReupgrade_6_end:(double)arg1 ;
-(NSString *)fs_type;
-(void)setFs_type:(NSString *)arg1 ;
-(char)is_auto_promote;
-(void)setIs_auto_promote:(char)arg1 ;
-(char)is_default_location;
-(void)setIs_default_location:(char)arg1 ;
-(char)is_default_name;
-(void)setIs_default_name:(char)arg1 ;
-(char)is_system_library;
-(void)setIs_system_library:(char)arg1 ;
-(unsigned long long)lib_size;
-(void)setLib_size:(unsigned long long)arg1 ;
-(NSString *)plmu_version;
-(void)setPlmu_version:(NSString *)arg1 ;
-(NSNumberFormatter *)twoDigitBucketFormatter;
-(void)setTwoDigitBucketFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)threeDigitBucketFormatter;
-(void)setThreeDigitBucketFormatter:(NSNumberFormatter *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)libSizeSemaphore;
-(void)setLibSizeSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(char)libSizingStarted;
-(void)setLibSizingStarted:(char)arg1 ;
@end

