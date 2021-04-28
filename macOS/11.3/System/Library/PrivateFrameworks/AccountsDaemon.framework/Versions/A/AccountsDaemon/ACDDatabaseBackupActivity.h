/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, ACDDatabase;

@interface ACDDatabaseBackupActivity : NSObject {

	char _xpcActivityPending;
	NSObject*<OS_xpc_object> _activityExecutionCriteria;
	NSObject*<OS_dispatch_queue> _queue;
	ACDDatabase* _database;

}

@property (nonatomic,readonly) ACDDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)new;
-(id)init;
-(ACDDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(id)activityCriteria;
-(void)scheduleBackupIfNonexistent;
-(void)_registerActivityIfNeededSchedulingBackup:(char)arg1 ;
-(void)_registerActivitySchedulingBackup:(char)arg1 ;
-(void)scheduleBackup;
-(void)registerActivityIfNeeded;
@end

