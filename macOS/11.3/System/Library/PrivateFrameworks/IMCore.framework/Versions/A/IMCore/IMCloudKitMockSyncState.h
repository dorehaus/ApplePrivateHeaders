/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface IMCloudKitMockSyncState : NSObject {

	char _IMCloudKitSyncingEnabled;
	char _IMCloudKitIsSyncing;
	char _IMCloudKitSyncPaused;
	char _IMCloudKitIsEligibleForTruthZone;
	char _IMCloudKitIsInExitState;
	char _IMCloudKitIsRemovedFromBackup;
	char _IMCloudKitStartingPeriodicSync;
	char _IMCloudKitStartingInitialSync;
	char _IMCloudKitStartingDisableDevices;
	NSDate* _IMCloudKitSyncDate;
	long long _IMCloudKitStartingEnabledSettingChange;
	unsigned long long _IMCloudKitSyncControllerSyncState;
	long long _IMCloudKitSyncControllerSyncType;
	long long _IMCloudKitSyncControllerSyncRecordType;
	NSArray* _IMCloudKitSyncErrors;

}

@property (assign) char IMCloudKitSyncingEnabled;                                     //@synthesize IMCloudKitSyncingEnabled=_IMCloudKitSyncingEnabled - In the implementation block
@property (assign) char IMCloudKitIsSyncing;                                          //@synthesize IMCloudKitIsSyncing=_IMCloudKitIsSyncing - In the implementation block
@property (assign) char IMCloudKitSyncPaused;                                         //@synthesize IMCloudKitSyncPaused=_IMCloudKitSyncPaused - In the implementation block
@property (assign) char IMCloudKitIsEligibleForTruthZone;                             //@synthesize IMCloudKitIsEligibleForTruthZone=_IMCloudKitIsEligibleForTruthZone - In the implementation block
@property (assign) char IMCloudKitIsInExitState;                                      //@synthesize IMCloudKitIsInExitState=_IMCloudKitIsInExitState - In the implementation block
@property (assign) char IMCloudKitIsRemovedFromBackup;                                //@synthesize IMCloudKitIsRemovedFromBackup=_IMCloudKitIsRemovedFromBackup - In the implementation block
@property (retain) NSDate * IMCloudKitSyncDate;                                       //@synthesize IMCloudKitSyncDate=_IMCloudKitSyncDate - In the implementation block
@property (assign) char IMCloudKitStartingPeriodicSync;                               //@synthesize IMCloudKitStartingPeriodicSync=_IMCloudKitStartingPeriodicSync - In the implementation block
@property (assign) char IMCloudKitStartingInitialSync;                                //@synthesize IMCloudKitStartingInitialSync=_IMCloudKitStartingInitialSync - In the implementation block
@property (assign) long long IMCloudKitStartingEnabledSettingChange;                  //@synthesize IMCloudKitStartingEnabledSettingChange=_IMCloudKitStartingEnabledSettingChange - In the implementation block
@property (assign) char IMCloudKitStartingDisableDevices;                             //@synthesize IMCloudKitStartingDisableDevices=_IMCloudKitStartingDisableDevices - In the implementation block
@property (assign) unsigned long long IMCloudKitSyncControllerSyncState;              //@synthesize IMCloudKitSyncControllerSyncState=_IMCloudKitSyncControllerSyncState - In the implementation block
@property (assign) long long IMCloudKitSyncControllerSyncType;                        //@synthesize IMCloudKitSyncControllerSyncType=_IMCloudKitSyncControllerSyncType - In the implementation block
@property (assign) long long IMCloudKitSyncControllerSyncRecordType;                  //@synthesize IMCloudKitSyncControllerSyncRecordType=_IMCloudKitSyncControllerSyncRecordType - In the implementation block
@property (retain) NSArray * IMCloudKitSyncErrors;                                    //@synthesize IMCloudKitSyncErrors=_IMCloudKitSyncErrors - In the implementation block
-(id)convertToDictionary;
-(void)setIMCloudKitSyncingEnabled:(char)arg1 ;
-(void)setIMCloudKitIsEligibleForTruthZone:(char)arg1 ;
-(char)IMCloudKitSyncingEnabled;
-(char)IMCloudKitIsEligibleForTruthZone;
-(char)IMCloudKitIsSyncing;
-(void)setIMCloudKitIsSyncing:(char)arg1 ;
-(char)IMCloudKitStartingDisableDevices;
-(char)IMCloudKitStartingInitialSync;
-(char)IMCloudKitStartingPeriodicSync;
-(long long)IMCloudKitStartingEnabledSettingChange;
-(NSDate *)IMCloudKitSyncDate;
-(void)setIMCloudKitSyncDate:(NSDate *)arg1 ;
-(char)IMCloudKitIsInExitState;
-(void)setIMCloudKitIsInExitState:(char)arg1 ;
-(unsigned long long)IMCloudKitSyncControllerSyncState;
-(void)setIMCloudKitSyncControllerSyncState:(unsigned long long)arg1 ;
-(long long)IMCloudKitSyncControllerSyncType;
-(void)setIMCloudKitSyncControllerSyncType:(long long)arg1 ;
-(NSArray *)IMCloudKitSyncErrors;
-(void)setIMCloudKitSyncErrors:(NSArray *)arg1 ;
-(char)IMCloudKitIsRemovedFromBackup;
-(long long)IMCloudKitSyncControllerSyncRecordType;
-(char)IMCloudKitSyncPaused;
-(void)setIMCloudKitSyncPaused:(char)arg1 ;
-(void)setIMCloudKitIsRemovedFromBackup:(char)arg1 ;
-(void)setIMCloudKitStartingPeriodicSync:(char)arg1 ;
-(void)setIMCloudKitStartingInitialSync:(char)arg1 ;
-(void)setIMCloudKitStartingEnabledSettingChange:(long long)arg1 ;
-(void)setIMCloudKitStartingDisableDevices:(char)arg1 ;
-(void)setIMCloudKitSyncControllerSyncRecordType:(long long)arg1 ;
@end

