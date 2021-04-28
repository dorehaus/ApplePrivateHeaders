/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TMVFSEventObserver, TMSession, NSString, NSMutableSet;

@interface TMBackupDataSource : NSObject {

	/*^block*/id _stateChangeBlock;
	NSObject*<OS_dispatch_queue> _queue;
	TMVFSEventObserver* _observer;
	TMSession* _session;
	NSString* _liveVolumeUUID;
	NSMutableSet* _foundDates;
	NSMutableSet* _deletedDates;

}

@property (copy,readonly) id stateChangeBlock;                      //@synthesize stateChangeBlock=_stateChangeBlock - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) TMVFSEventObserver * observer;                 //@synthesize observer=_observer - In the implementation block
@property (readonly) TMSession * session;                           //@synthesize session=_session - In the implementation block
@property (copy,readonly) NSString * liveVolumeUUID;                //@synthesize liveVolumeUUID=_liveVolumeUUID - In the implementation block
@property (readonly) NSMutableSet * foundDates;                     //@synthesize foundDates=_foundDates - In the implementation block
@property (readonly) NSMutableSet * deletedDates;                   //@synthesize deletedDates=_deletedDates - In the implementation block
+(id)_extractDateFromBackupMountPoint:(id)arg1 ;
+(id)_extractLiveVolumeUUIDFromBackupMountPoint:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stop;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(TMSession *)session;
-(TMVFSEventObserver *)observer;
-(NSString *)liveVolumeUUID;
-(void)_populateInitialStateOnQueue:(id)arg1 ;
-(void)_handleMountNotificationWithDisk:(id)arg1 ;
-(char)_shouldNotifyDelegateOfStateChange:(unsigned long long)arg1 forDate:(id)arg2 ;
-(void)_backup:(id)arg1 changedState:(unsigned long long)arg2 ;
-(void)_handleBackupDeletionNotification:(id)arg1 ;
-(void)_handleBackupAdditionNotification:(id)arg1 ;
-(NSMutableSet *)foundDates;
-(NSMutableSet *)deletedDates;
-(id)stateChangeBlock;
-(id)initWithBackupVolumeMountPoint:(id)arg1 error:(id*)arg2 stateChangeBlock:(/*^block*/id)arg3 ;
-(char)isObserving;
@end

