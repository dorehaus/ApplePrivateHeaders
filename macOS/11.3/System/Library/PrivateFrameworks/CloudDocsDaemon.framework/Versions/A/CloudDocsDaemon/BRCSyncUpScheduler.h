/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

@interface BRCSyncUpScheduler : BRCFSSchedulerBase
-(void)schedule;
-(id)initWithAccountSession:(id)arg1 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg1 ;
-(unsigned)recoverAndReportMissingJobs;
-(id)descriptionForItem:(id)arg1 context:(id)arg2 ;
-(char)isItemInSyncUpAndInFlight:(id)arg1 ;
-(void)createSyncUpJobForItem:(id)arg1 inZone:(id)arg2 ;
-(void)deleteSyncUpJobsForItem:(id)arg1 ;
-(char)isItemInSyncUpAndInFlight:(id)arg1 inZone:(id)arg2 ;
-(unsigned long long)finishSyncUpForItem:(id)arg1 inZone:(id)arg2 success:(char)arg3 ;
-(unsigned long long)inFlightDiffsForItem:(id)arg1 ;
-(void)prepareItemForSyncUp:(id)arg1 inFlightDiffs:(unsigned long long)arg2 inZone:(id)arg3 ;
-(char)isItemPendingSyncUp:(id)arg1 ;
-(unsigned long long)postponeSyncUpForItem:(id)arg1 inZone:(id)arg2 ;
-(void)setState:(int)arg1 forItem:(id)arg2 zone:(id)arg3 ;
-(unsigned long long)inFlightDiffsForItem:(id)arg1 zoneRowID:(id)arg2 ;
-(void)_scheduleSyncUpJob:(id)arg1 ;
-(void)_clearSyncUpErrorForItem:(id)arg1 ;
@end

